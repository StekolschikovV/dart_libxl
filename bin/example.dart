import 'package:libxl/libxl.dart';

main() {
  print('------------------------------------');
  print('Start example');
  var book = new XlBook();
  try {
    var notASheet = book.getSheet(0);
  } catch(error) {
    print('$error. You should create the sheet first');
  }
  var sheet = book.addSheet('TestSheet');
  print('Sheet added');
//  sheet.writeStr(3,0,'Hello');
//  sheet.writeStr(3,1,'World');
//  sheet.writeNum(1,0,1.1);
//  sheet.writeNum(1,0,555);
  sheet.writeFormulaNum(1,0,'1+1');
//  print('$sheet');
  var fileName = 'test.xls';
  book.save(fileName);
  print('File $fileName was created successfully');
  book.release();
}
