import 'dart:io';

enum DartType {
  int,
  num,
  String,
  bool,
  Handle,
  Void,
}

class ParamDescriptor {
  String typeName;
  DartType dartType;
  String paramName;

  @override
  String toString() {
    return 'ParamDescriptor{typeName: $typeName, paramName: $paramName}';
  }
}

class FunctionDescriptor {
  String source;
  String returnType;
  String funcName;
  List<String> rawParams = <String>[];
  List<ParamDescriptor> params = <ParamDescriptor>[];

  @override
  String toString() {
    return 'FunctionDescriptor{returnType: $returnType, funcName: $funcName,  params: ${params.join("\n   ,")}';
  }
}

const cpp2DartTypes = {
  'BookHandle': DartType.Handle,
  'SheetHandle': DartType.Handle,
//  'FormatHandle': DartType.Handle,
  'const wchar_t*': DartType.String,
  'const char*': DartType.String,
  'int': DartType.int,
  'double': DartType.num,
  'void': DartType.Void,
};

List cppFuncNameList = [];

main() {
  String dirSrc = 'lib/src/c/include_c/';
  String dirBaseSrc = 'lib/src/c/';
  String fileName = 'SheetW.h';
  String moduleName = 'SheetW';
  generateFor(dirSrc + fileName, moduleName);
  add__Dart_NativeFunction(dirBaseSrc, dirSrc, dirSrc + fileName, moduleName);

  replaceWchar_t(dirBaseSrc, dirSrc, dirSrc + fileName, moduleName);
}
replaceWchar_t(String dirBaseSrc, String dirSrc, String fileName, String moduleName){
  new File(dirBaseSrc + moduleName + '.g.cc')
      .readAsString()
      .then((String contents) {
    contents = contents.replaceAll(new RegExp(r'const wchar_t'), 'const char');
    File('lib/src/c/$moduleName.g.cc').writeAsStringSync(contents.toString());
  });
}

add__Dart_NativeFunction(
    String dirBaseSrc, String dirSrc, String fileName, String moduleName) {
  new File(dirBaseSrc + moduleName + '.g.cc')
      .readAsString()
      .then((String contents) {
    contents = contents + '\n\n\n';
    contents = contents +
        'Dart_NativeFunction ResolveName(Dart_Handle name, int argc, bool* auto_setup_scope) {' +
        '\n';
    contents = contents + '  if (!Dart_IsString(name)) return NULL;' + '\n';
    contents = contents + '  Dart_NativeFunction result = NULL;' + '\n';
    contents = contents + '  const char* cname;' + '\n';
    contents = contents + '  HandleError(Dart_StringToCString(name, &cname));';

    for (var i = 0; cppFuncNameList.length > i; i++) {
      contents = contents +
          '  if (strcmp("_${cppFuncNameList[i]}", cname) == 0) result = _${cppFuncNameList[i]};\n';
    }

    contents = contents + '  return result;' + '\n\n';
    contents = contents + '}' + '\n\n';

    File('lib/src/c/$moduleName.g.cc').writeAsStringSync(contents.toString());
  });
}

var regexp = RegExp(r'.*XLAPI(.+)XLAPIENTRY\s+(\w+)\((.*)\);');
var replaceMap = {'CW(': '(', 'W(': '('};

generateFor(String fileName, String moduleName) {
  var output = StringBuffer();
  var fileContent = File(fileName).readAsLinesSync();
  for (var each in fileContent) {
    var line = each;
    replaceMap.forEach((key, value) {
      line = line.replaceFirst(key, value);
    });
    var match = regexp.firstMatch(line);
    var funcList = <FunctionDescriptor>[];
    if (match != null) {
      var params = <ParamDescriptor>[];
      for (var each in match.group(3).split(',')) {
        var paramItems = each.trim().split(' ');
        var newParam = ParamDescriptor();
        if (paramItems.length == 1) {
          newParam
            ..typeName = paramItems.first
            ..paramName = paramItems.first;
        } else {
          var paramName = paramItems.removeLast();
          newParam
            ..paramName = paramName
            ..typeName = paramItems.join(' ');
        }
        newParam.dartType = cpp2DartTypes[newParam.typeName];
        if (newParam.dartType != DartType.Void) {
          params.add(newParam);
        }
      }
      var desc = FunctionDescriptor()
        ..source = line
        ..returnType = match.group(1).trim()
        ..funcName = match.group(2).trim()
        ..params = params;
//      print(desc);
      cppFuncNameList.add(desc.funcName);
      funcList.add(desc);
      createCppFunc(output, desc);
    } else {
//     print('Skipping $line');
    }
  }
  File('lib/src/c/$moduleName.g.cc').writeAsStringSync(output.toString());
}

createCppFunc(StringBuffer output, FunctionDescriptor desc) {
  var resultType = cpp2DartTypes[desc.returnType];

  if (resultType == null) {
//    print('Unknown result type in ${desc.source}');
    return;
  }
  if (desc.params.where((pd) => pd.dartType == null).isNotEmpty) {
//    print('Unknown parameter type in ${desc.source}');
  }

  output.writeln('void _${desc.funcName}(Dart_NativeArguments args) {');
  output.writeln('  Dart_EnterScope();');
  generateParamSection(output, desc);
  var paramNames = desc.params
      .where((pd) => pd.typeName != 'void')
      .map((pd) =>
          (pd.dartType == DartType.Handle ? '(${pd.typeName}) ' : '') +
          pd.paramName)
      .join(', ');
  if (resultType == DartType.Void) {
    output.writeln('  ${desc.funcName}($paramNames);');
  } else {
    output.writeln(
        '  ${desc.returnType} cResult = ${desc.funcName}($paramNames);');
  }

  switch (resultType) {
    case DartType.Handle:
      output.writeln(
          '  Dart_Handle result = Dart_NewInteger((int64_t) cResult);');
      break;
    case DartType.Void:
//      output.writeln('  Dart_Handle result = Dart_NewInteger(Dart_Null());');
      break;
    case DartType.String:
      output.writeln(
          '  Dart_Handle result = Dart_NewStringFromCString(cResult);');
      break;
    case DartType.num:
      output.writeln('  Dart_Handle result = Dart_NewDouble(cResult);');
      break;
    case DartType.int:
      output.writeln('  Dart_Handle result = Dart_NewInteger(cResult);');
      break;
    case DartType.bool:
      output.writeln('  Dart_Handle result = Dart_NewBoolean(cResult);');
      break;
  }

  if (resultType == DartType.Void) {
    output.writeln('  Dart_SetReturnValue(args, Dart_Null());');
  } else {
    output.writeln('  Dart_SetReturnValue(args, result);');
  }

  output.writeln('  Dart_ExitScope();');
  output.writeln('}\n');
}

generateParamSection(StringBuffer output, FunctionDescriptor desc) {
  int index = 0;
  for (var each in desc.params) {
    var varType = each.typeName;
    if (each.dartType == DartType.Handle || each.dartType == DartType.int) {
      varType = 'int64_t';
    } else if (each.dartType == DartType.String) {
      varType = 'const char*';
    }
    output.writeln('  ${varType} ${each.paramName};');
    switch (each.dartType) {
      case DartType.Handle:
        output.writeln(
            '  Dart_IntegerToInt64(Dart_GetNativeArgument(args, $index), &${each.paramName});');
        break;
      case DartType.Void:
        break;
      case DartType.String:
        output.writeln(
            '  Dart_StringToCString(Dart_GetNativeArgument(args, $index), &${each.paramName});');
        break;
      case DartType.num:
        output.writeln(
            '  Dart_DoubleValue(Dart_GetNativeArgument(args, $index), &${each.paramName});');
        break;
      case DartType.int:
        output.writeln(
            '  Dart_IntegerToInt64(Dart_GetNativeArgument(args, $index), &${each.paramName});');
        break;
      case DartType.bool:
        output.writeln(
            '  Dart_BooleanValue(Dart_GetNativeArgument(args, $index), &${each.paramName});');
        break;
    }
    index++;
  }
}
