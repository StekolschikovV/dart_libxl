part of 'libxl_ext.dart';

class XlSheet {
  final int ptr;
  final XlBook book;

  XlSheet(this.ptr, this.book);

  const XlSheet.empty()
      : ptr = 0,
        book = const XlBook.empty();

  @override
  String toString() {
    return 'XlSheet{ptr: $ptr}';
  }

  writeStr(int row, int col, String value) {
    var res = _xlSheetWriteStr(ptr, row, col, value, 0);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeNum(int row, int col, double value) {
    var res = _xlSheetWriteNum(ptr, row, col, value, 0);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }
}
