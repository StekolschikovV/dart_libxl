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

  writeStr(int row, int col, String value, [var format = 0]) {
    var res = _xlSheetWriteStr(ptr, row, col, value, format == 0 ? 0 : format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeNum(int row, int col, double value, [var format = 0]) {
    var res = _xlSheetWriteNum(ptr, row, col, value, format == 0 ? 0 : format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeBool(int row, int col, int value, [var format = 0]) {
    var res = _xlSheetWriteBool(ptr, row, col, value, format == 0 ? 0 : format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeBlank(int row, int col, [var format = 0]) {
    var res = _xlSheetWriteBlank(ptr, row, col, format == 0 ? 0 : format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeFormula(int row, int col, String value, [var format = 0]) {
    var res = _xlSheetWriteFormula(ptr, row, col, value, format == 0 ? 0 : format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeFormulaNum(int row, int col, String expr, num value, [var format = 0]) {
    var res = _xlSheetWriteFormulaNum(ptr, row, col, expr, value, format == 0 ? 0 : format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeFormulaStr(int row, int col, String expr, String value, [var format = 0]) {
    var res = _xlSheetWriteFormulaStr(ptr, row, col, expr, value, format == 0 ? 0 : format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeFormulaBool(int row, int col, String expr, int value, [var format = 0]) {
    var res = _xlSheetWriteFormulaBool(ptr, row, col, expr, value, format == 0 ? 0 : format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeComment(int row, int col, String value, String author, int width, int height) {
    _xlSheetWriteComment(ptr, row, col, value, author, width, height);
  }

  writeError(int row, int col, int error, [var format = 0]) {
    _xlSheetWriteError(ptr, row, col, error, format == 0 ? 0 : format.ptr);
  }

}
