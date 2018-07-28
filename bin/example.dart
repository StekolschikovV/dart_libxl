import 'package:libxl/libxl.dart';
import 'dart:io';
main() {
  print('------------------------------------');
  print('Start example');
  var xlFile = new File('test.xls');
  if (xlFile.existsSync()) {
    xlFile.deleteSync();
  }
  var book = new XlBook();
//  var font = new XlFont();

  try {
    var notASheet = book.getSheet(0);
  } catch (error) {
//    print('$error. You should create the sheet first');
  }

  var sheet = book.addSheet('TestSheet');

//  var f = book.addFormat();
//  etBorder(100);

  print('Sheet added');
  sheet.writeStr(3, 1, 'World');

  sheet.writeNum(1, 0, 555.0);

  var format = book.addFormat();
  format.setBorderBottom(3);
  format.setAlignH(3);
  format.setRotation(1);
  sheet.writeStr(3, 1, 'World', format);

  var formatCopy = book.addFormat(initFormat: format);
  formatCopy.setAlignV(AlignV.CENTER);

//  1
//  Font* linkFont = book->addFont();
//  linkFont->setColor(COLOR_BLUE);
//  linkFont->setUnderline(UNDERLINE_SINGLE);
//  =================================
  var font = book.addFont();
  font.setColor(Color.RED);
  var fontFormat = book.addFormat();
  font.setSize(18);
  fontFormat.setFont(font);
  sheet.writeNum(5, 0, 555.0, fontFormat);
  sheet.setRow(5, 40, 0);
  book.addSheet('CopySheet', sheet);

  var fileName = 'test.xls';
  book.save(fileName);
  print('File $fileName was created successfully');
  book.release();
}
