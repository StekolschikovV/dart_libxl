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
  'FormatHandle': DartType.Handle,
  'const wchar_t*': DartType.String,
  'const char*': DartType.String,
  'int': DartType.int,
  'double': DartType.num,
  'void': DartType.Void,
};

main() {
  generateFor('lib/src/c/include_c/BookW.h', 'book');
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
        params.add(newParam);
      }
      var desc = FunctionDescriptor()
        ..source = line
        ..returnType = match.group(1).trim()
        ..funcName = match.group(2).trim()
        ..params = params;
//      print(desc);
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
    print('Unknown result type in ${desc.source}');
    return;
  }
  if (desc.params.where((pd) => pd.dartType == null).isNotEmpty) {
    print('Unknown parameter type in ${desc.source}');
  }
  output.writeln('void _${desc.funcName}(Dart_NativeArguments args) {');
  output.writeln('  Dart_EnterScope();');
  generateParamSection(output, desc);
  var paramNames = desc.params
      .where((pd) => pd.typeName != 'void')
      .map((pd) => (pd.dartType == DartType.Handle ? '(${pd.typeName}) ' : '') + pd.paramName)
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
      output.writeln('  Dart_Handle result = Dart_NewInteger(Dart_Null());');
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

  if (resultType == DartType.Handle) {}
  output.writeln('  Dart_SetReturnValue(args, result);');
  output.writeln('  Dart_ExitScope();');
  output.writeln('}\n');
}

generateParamSection(StringBuffer output, FunctionDescriptor desc) {
  int index = 0;
  for (var each in desc.params) {
    output.writeln('  ${each.typeName} ${each.paramName};');
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
