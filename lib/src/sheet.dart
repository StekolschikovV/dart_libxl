part of 'libxl_ext.dart';

bool _xlSheetWriteStr(int ptr, int row, int col, String value) native "_xlSheetWriteStr";

class XlSheet {
  int ptr;
  XlBook book;
  XlSheet(this.ptr, this.book);

  @override
  String toString() {
    return 'XlSheet{ptr: $ptr}';
  }

  writeStr(int row, int col, String value) {
    bool res = _xlSheetWriteStr(ptr, row, col, value);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

}
