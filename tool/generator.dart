import 'dart:io';

enum DartTypes {
  int,
  num,
  String,
  bool,
  Handle,
}
class ParamDescriptor {
  String typeName;

  @override
  String toString() {
    return 'ParamDescriptor{typeName: $typeName, paramName: $paramName}';
  }

  String paramName;
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
  'BookHandle': DartTypes.Handle,
  'SheetHandle': DartTypes.Handle,
};

main() {
  generateFor('lib/src/c/include_c/BookW.h', 'Book');
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
        if (paramItems.length == 1) {
          params.add(ParamDescriptor()
            ..typeName = paramItems.first
            ..paramName = paramItems.first);
        } else {
          var paramName = paramItems.removeLast();
          params.add(ParamDescriptor()
            ..paramName = paramName
            ..typeName = paramItems.join(' '));
        }
      }
      var desc = FunctionDescriptor()
        ..source = line
        ..returnType = match.group(1).trim()
        ..funcName = match.group(2).trim()
        ..params = params;
//      print(desc);
      funcList.add(desc);
      createCppFunc(output, desc);
      break;
    } else {
//     print('Skipping $line');
    }
  }
}

createCppFunc(StringBuffer output, FunctionDescriptor desc) {
  var resultType = cpp2DartTypes[desc.returnType];
  if (resultType == null) {
    print('Unknown result type in ${desc.source}');
    return;
  }
  output.writeln('void _${desc.funcName}(Dart_NativeArguments args) {');
  output.writeln('  Dart_EnterScope();');
  if (resultType == DartTypes.Handle) {
    output.writeln('  Dart_Handle result = Dart_NewInteger((int64_t) cResult);');
  }
  output.writeln('  Dart_SetReturnValue(args, result);');

  output.writeln('  Dart_ExitScope();');
  output.writeln('}');
  print(output);
}

