import 'package:dart_libxl/libxl.dart';

main(List<String> arguments) {
  var book = XlBook();
//    for (int rgba in [4291585655, 4283484240]) {
//      int intRgb = rgba & 0xffffff;
//      print('Int rgb: $intRgb');
//      var rgb = Rgb.fromRgba(rgba);
//      print(rgb);
//      var xlRgb = book.colorPack(rgb.r, rgb.g, rgb.b);
//      print('Xl rgb: $xlRgb');
//
//    }
  var value = 0.54234123;
  var sheet = book.addSheet('Test');
  var format1 = book.addFormat();
  var numFormat1 = book.addCustomNumFormat('#,###.0000%');
  format1.setNumFormat(numFormat1);
  sheet.writeNum(2, 1, value , format: format1);

  var format2= book.addFormat();
  var numFormat2 = book.addCustomNumFormat('#,###.0%');
  format2.setNumFormat(numFormat2);
  sheet.writeNum(3, 1, value , format: format2);
  var fileName = 'format.xls';
  book.save(fileName);
  print('File $fileName was created successfully');
  book.release();
}
