import 'package:libxl/libxl_ext.dart';

main() {
  var book = new XlBook();
  book.save('test.xls');
  book.release();
}
