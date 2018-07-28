import 'dart:io';

class StringWorker{

  List readFrom(String path){
    return File(path).readAsLinesSync();
  }

  writeTo(){

  }

  replace(){

  }

  getEnums(List enums){
    List headers = _getEnumGetHeaders(enums);
    List els = _getEnumGetEl(enums);

    var output = new StringBuffer();
    output.writeln("part of 'libxl_ext.dart';\n\n");

    for(int i = 0; i < headers.length; i++){
      output.writeln("class ${headers[i]} {");
      output.writeln("  final int value;");
      output.writeln("  const ${headers[i]}._(this.value);");

      var ii = 0;
      for(int j = 0; j < els[i].length; j++){

        var title = els[i][j];
        var titleRes = title;
        var val;
        //var val2;

        if(title.contains(' = ')){
          titleRes = titleRes.split(' = ')[0];
          //print(int.parse(title.split(' = ')[1]));

          //print(title.split(' = ')[1]);
           val = int.tryParse(title.split(' = ')[1]) ?? null;

           //val2 = null;
          //print(val);
         //if(val != null){
            ii = val;
         // } else {
          //  val2 = title.split(' = ')[1];
         // }

        }
        var enumName = headers[i];
        var elemName = titleRes;
        if (enumName != 'Paper') {
          int skipPrefixes = 1;
          if (enumName.toString().startsWith('DataValidation')) {
            skipPrefixes = 2;
          }
          elemName = titleRes.toString().split('_').sublist(skipPrefixes).join('_');
        }
        output.writeln("  static const ${elemName} = const ${headers[i]}._(${val != null ? val : ii});");
        ii++;
      }
      output.writeln("}\n");
    }

    File('lib/src/enum.g.dart').writeAsStringSync(output.toString());

  }

  List _getEnumGetHeaders(List enums){
    List headers = [];
    for(var i = 0; enums.length > i; i++){
      if(enums[i].contains('enum')){
        headers.add(enums[i].split(" ")[1]);
        var el = enums[i].split("{")[1];
        el = el.split("}")[0];
      }
    }
    return headers;
  }

  _getEnumGetEl(List enums) {
    List els = [];
    for(var i = 0; enums.length > i; i++){
      if(enums[i].contains('enum')){
        var el = enums[i].split("{")[1];
        el = el.split("}")[0];
        el = el.split(", ");
        els.add(el);
      }
    }
    return els;
  }

}