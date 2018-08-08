libxl
=====

The package wraps the libxl library methods. Provides a convenient API for creating xls files of any complexity. Most of the libxl methods are implemented.

Examples:

```dart
  print('------------------------------------');
  print('Start example');
  var book = new XlBook();
  
  var boldFont = book.addFont();
  boldFont.setBold(bold: true);

  var titleFont = book.addFont();
  titleFont.setName(name: "Arial Black");
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

  sheet.writeStr(3, 1, "Invoice No. 3568", format: titleFormat);
  sheet.writeStr(4, 1, "Name: John Smith");
  sheet.writeStr(5, 1, "Address: San Ramon, CA 94583 USA");

  sheet.writeStr(7, 1, "Description", format: headerFormat);
  sheet.writeStr(7, 2, "Amount", format: headerFormat);

  sheet.writeStr(8, 1, "Ball-Point Pens", format: descriptionFormat);
  sheet.writeNum(8, 2, 85.0, format: amountFormat);
  sheet.writeStr(9, 1, "T-Shirts", format: descriptionFormat);
  sheet.writeNum(9, 2, 150.0, format: amountFormat);
  sheet.writeStr(10, 1, "Tea cups", format: descriptionFormat);
  sheet.writeNum(10, 2, 45.0, format: amountFormat);

  sheet.writeStr(11, 1, "Total:", format: totalLabelFormat);
  sheet.writeNum(11, 2, 280.0, format: totalFormat);

  sheet.writeStr(14, 2, "Signature", format: signatureFormat);

  sheet.setCol(1, 1, 40);
  sheet.setRow(3, 100);
  sheet.setCol(2, 2, 15);

  var fileName = 't.xls';
  book.save(fileName);
  print('File $fileName was created successfully');
  book.release();
```

Output:

test.xls