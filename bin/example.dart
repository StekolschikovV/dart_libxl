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
  print('Sheet added');
  sheet.writeStr(3,0,'Hello');
  sheet.writeStr(3,1,'World');
  sheet.writeNum(1,0,1.1);
  sheet.writeNum(1,0,555.0);
  book.addSheet('CopySheet', sheet);
  book.addSheet('CopySheet222', sheet);

  var f = book.addFormat();
  var format = new XlFormat(f, book);
//  f->setBorder(100);
  print('+++++++++++++');
//  format.formatBorderBottom();
  format.formatSetBorderBottom(50);
  print('+++++++++++++');
  var fileName = 'test.xls';
  book.save(fileName);
  print('File $fileName was created successfully');
  book.release();
}
