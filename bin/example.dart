import 'package:libxl/libxl_ext.dart';

main() {
  var book = new XlBook();
  var fileName = 'test.xls';
  var res = book.save(fileName);
  print('File $fileName was created successfully: $res');
  book.release();
}
