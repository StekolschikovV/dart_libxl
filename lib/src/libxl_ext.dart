import 'dart-ext:c/libxl_ext';

part 'book.g.dart';
part 'sheet.g.dart';
part 'format.g.dart';
part 'format.dart';
part 'font.g.dart';
part 'font.dart';
part 'book.dart';
part 'sheet.dart';
part 'enum.g.dart';

class XlException {
  String message;
  XlException(this.message);
  @override
  String toString() {
    return 'XlExceptioin{"$message"}';
  }
}


