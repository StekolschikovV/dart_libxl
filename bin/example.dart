import 'package:libxl/libxl.dart';
import 'dart:io';
main() {
  print('------------------------------------');
  print('Start example');
  //var xlFile = new File('test.xls');
  //if (xlFile.existsSync()) {
    //xlFile.deleteSync();
  //}
  var book = new XlBook();
//  var font = new XlFont();

  //try {
   // var notASheet = book.getSheet(0);
  //} catch (error) {
//    print('$error. You should create the sheet first');
  //}



  var boldFont = book.addFont();
  boldFont.setBold(1);

  var titleFont = book.addFont();
  titleFont.setName("Arial Black");
  titleFont.setSize(16);

  var titleFormat = book.addFormat();
  titleFormat.setFont(titleFont);

  var headerFormat = book.addFormat();
  headerFormat.setAlignH(AlignH.CENTER);
  headerFormat.setBorder(BorderStyle.THIN);
  headerFormat.setFont(boldFont);
  headerFormat.setFillPattern(FillPattern.SOLID);
  headerFormat.setPatternForegroundColor(Color.TAN);

  var descriptionFormat = book.addFormat();
  descriptionFormat.setBorderLeft(BorderStyle.THIN);

  var amountFormat = book.addFormat();
  amountFormat.setNumFormat(NumFormat.CURRENCY_NEGBRA);
  amountFormat.setBorderLeft(BorderStyle.THIN);
  amountFormat.setBorderRight(BorderStyle.THIN);

  var totalLabelFormat = book.addFormat();
  totalLabelFormat.setBorderTop(BorderStyle.THIN);
  totalLabelFormat.setAlignH(AlignH.RIGHT);
  totalLabelFormat.setFont(boldFont);

  var totalFormat = book.addFormat();
  totalFormat.setNumFormat(NumFormat.CURRENCY_NEGBRA);
  totalFormat.setBorder(BorderStyle.THIN);
  totalFormat.setFont(boldFont);
  totalFormat.setFillPattern(FillPattern.SOLID);
  totalFormat.setPatternForegroundColor(Color.YELLOW);

  var signatureFormat = book.addFormat();
  signatureFormat.setAlignH(AlignH.CENTER);
  signatureFormat.setBorderTop(BorderStyle.THIN);

  var sheet = book.addSheet('Invoice');

  sheet.writeStr(2, 1, "Invoice No. 3568", titleFormat);
  sheet.writeStr(4, 1, "Name: John Smith");
  sheet.writeStr(5, 1, "Address: San Ramon, CA 94583 USA");

  sheet.writeStr(7, 1, "Description", headerFormat);
  sheet.writeStr(7, 2, "Amount", headerFormat);

  sheet.writeStr(8, 1, "Ball-Point Pens", descriptionFormat);
  sheet.writeNum(8, 2, 85.0, amountFormat);
  sheet.writeStr(9, 1, "T-Shirts", descriptionFormat);
  sheet.writeNum(9, 2, 150.0, amountFormat);
  sheet.writeStr(10, 1, "Tea cups", descriptionFormat);
  sheet.writeNum(10, 2, 45.0, amountFormat);

  sheet.writeStr(11, 1, "Total:", totalLabelFormat);
  sheet.writeNum(11, 2, 280.0, totalFormat);

  sheet.writeStr(14, 2, "Signature", signatureFormat);

  sheet.setCol(1, 1, 40.0, 0);
 //sheet.setRow(1, 1, 0);
  //sheet.setCol(2, 2, 15, 0);




  
//  var f = book.addFormat();
//  etBorder(100);

  //print('Sheet added');
  //sheet.writeStr(3, 1, 'World');

  //sheet.writeNum(1, 0, 555.0);

  //var format = book.addFormat();
  //format.setBorderBottom(3);
  //format.setAlignH(3);
 // format.setRotation(1);
  //sheet.writeStr(3, 1, 'World', format);

  //var formatCopy = book.addFormat(initFormat: format);
  //formatCopy.setAlignV(AlignV.CENTER);

//  1
//  Font* linkFont = book->addFont();
//  linkFont->setColor(COLOR_BLUE);
//  linkFont->setUnderline(UNDERLINE_SINGLE);
//  =================================
  //var font = book.addFont();
  //font.setColor(Color.RED);
  //var fontFormat = book.addFormat();
  //font.setSize(18);
  //fontFormat.setFont(font);
  //sheet.writeNum(5, 0, 555.0, fontFormat);
  ////sheet.setRow(5, 40, 0);
  //book.addSheet('CopySheet', sheet);

  var fileName = 'sheet.setCol(1, 1, 40, 1).xls';
  book.save(fileName);
  print('File $fileName was created successfully');
  book.release();
}
