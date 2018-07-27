import 'dart:io';
import 'package:args/args.dart';

import './src/stringWorker.dart';

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
  DartType dartReturnType;
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
  'FontHandle': DartType.Handle,
  'const wchar_t*': DartType.String,
  'const char*': DartType.String,
  'int': DartType.int,
  'double': DartType.num,
  'void': DartType.Void,
};


main(List<String> arguments) {

  var parser = new ArgParser();
  parser.addOption('mode');
  var results = parser.parse(arguments);

  var stringWorker = new StringWorker();
  //print(stringWorker.readFrom('lib/src/c/include_c/BookW.h'));
  var strList = stringWorker.readFrom('lib/src/c/include_c/enum.h');
  stringWorker.getEnums(strList);

  //stringWorker.say();

  switch (results['mode']) {
    case 'ALL':
      break;
    default:
      generateFor('lib/src/c/include_c/BookW.h', 'book');
      generateFor('lib/src/c/include_c/FormatW.h', 'format');
      generateFor('lib/src/c/include_c/FontW.h', 'font');
      generateFor('lib/src/c/include_c/SheetW.h', 'sheet');
  }

}


generateResolver(
    StringBuffer output, String moduleName, List<FunctionDescriptor> funcList) {
  output.writeln(
      '\n\nDart_NativeFunction ${moduleName}Resolver(const char* cname) {');
  '\n';
  output.writeln('  Dart_NativeFunction result = NULL;');

  for (var each in funcList) {
    output.writeln(
        '  if (strcmp("_${each.funcName}", cname) == 0) result = _${each.funcName};');
  }

  output.writeln('  return result;');
  output.writeln('}');
}

var regexp = RegExp(r'.*XLAPI(.+)XLAPIENTRY\s+(\w+)\((.*)\);');
var replaceMap = {'CW(': '(', 'W(': '('};

generateFor(String fileName, String moduleName) {
  var output = StringBuffer();
  var fileContent = File(fileName).readAsLinesSync();
  var funcList = <FunctionDescriptor>[];
  for (var each in fileContent) {
    var line = each;
    replaceMap.forEach((key, value) {
      line = line.replaceFirst(key, value);
    });
    var match = regexp.firstMatch(line);
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
      desc.dartReturnType = cpp2DartTypes[desc.returnType];
      if (desc.dartReturnType != null &&
          desc.params.where((pd) => pd.dartType == null).isEmpty) {
        funcList.add(desc);
      }
      createCppFunc(output, desc);
    } else {
//     print('Skipping $line');
    }
  }
  generateResolver(output, moduleName, funcList);
  File('lib/src/c/$moduleName.g.cc').writeAsStringSync(output.toString());
  generateDartPart(moduleName, funcList);
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
      .map((pd) =>
          (pd.dartType == DartType.Handle ? '(${pd.typeName}) ' : '') +
          pd.paramName)
      .join(', ');
  if (resultType == DartType.Void) {
    output.writeln('  ${desc.funcName}($paramNames);');
  } else {
    var returnType = desc.returnType;
    if (desc.dartReturnType == DartType.String) {
      returnType = "const char*";
    }
    output.writeln('  $returnType cResult = ${desc.funcName}($paramNames);');
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

generateDartPart(String moduleName, List<FunctionDescriptor> funcList) {
  String dartType2String(DartType dartType) {
    switch (dartType) {
      case DartType.String:
        return 'String';
      case DartType.int:
        return 'int';
      case DartType.Handle:
        return 'int';
      case DartType.num:
        return 'num';
      case DartType.bool:
        return 'bool';
      case DartType.Void:
        return 'void';
    }
  }

  var output = new StringBuffer();
  output.writeln("part of 'libxl_ext.dart';\n\n");
  for (var each in funcList) {
    var params = each.params.map((pd) => '${dartType2String(pd.dartType)} ${pd.paramName}').join(', ');
    output.writeln(
        '  ${dartType2String(each.dartReturnType)} _${each.funcName}($params) native "_${each.funcName}";');
  }

  print("----------------------");
  File('lib/src/$moduleName.g.dart').writeAsStringSync(output.toString());
}
