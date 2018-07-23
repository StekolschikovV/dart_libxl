part of 'libxl_ext.dart';

bool _xlSheetWriteStr(int ptr, int row, int col, String value) native "_xlSheetWriteStr";
bool _xlSheetWriteNum(int ptr, int row, int col, double value) native "_xlSheetWriteNum";
bool _xlSheetWriteBool(int ptr, int row, int col, bool value) native "_xlSheetWriteBool";

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

  writeNum(int row, int col, double value) {
    bool res = _xlSheetWriteNum(ptr, row, col, value);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

  writeBool(int row, int col, bool value) {
    bool res = _xlSheetWriteBool(ptr, row, col, value);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

}
