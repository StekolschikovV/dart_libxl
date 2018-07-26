import 'package:libxl/libxl.dart';

main() {
  print('------------------------------------');
  print('Start example');
  var book = new XlBook();
  var font = new XlFont();

  try {
    var notASheet = book.getSheet(0);
  } catch(error) {
//    print('$error. You should create the sheet first');
  }


  var sheet = book.addSheet('TestSheet');

//  var f = book.addFormat();
//  etBorder(100);

  print('Sheet added');
  sheet.writeStr(3,1,'World');

  sheet.writeNum(1,0,555.0);


  var format = book.addFormat();
  format.formatSetBorderBottom(3);
  format.formatSetRotation(1);
  sheet.writeNum(1,0,1.1,format);
  sheet.writeStr(3,0,'Hello',format);


  book.addSheet('CopySheet', sheet);

  var fileName = 'test.xls';
  book.save(fileName);
  print('File $fileName was created successfully');
  book.release();
}
