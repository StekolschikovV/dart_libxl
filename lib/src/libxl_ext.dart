import 'dart-ext:c/libxl_ext';

part 'book.dart';
part 'sheet.dart';


class XlException {
  String message;
  XlException(this.message);
  @override
  String toString() {
    return 'XlExceptioin{"$message"}';
  }
}


