part of 'libxl_ext.dart';

bool _xlSheetWriteStr(int ptr, int row, int col, String value) native "_xlSheetWriteStr";
bool _xlSheetWriteNum(int ptr, int row, int col, double value) native "_xlSheetWriteNum";
bool _xlSheetWriteBool(int ptr, int row, int col, bool value) native "_xlSheetWriteBool";
bool _xlSheetWriteBlank(int ptr, int row, int col) native "_xlSheetWriteBlank";
bool _xlSheetWriteFormula(int ptr, int row, int col, String value) native "_xlSheetWriteFormula";
bool _xlSheetWriteFormulaNum(int ptr, int row, int col, String value) native "_xlSheetWriteFormulaNum";
bool _xlSheetWriteFormulaStr(int ptr, int row, int col, String valueO, String valueT) native "_xlSheetWriteFormulaStr";
bool _xlSheetWriteFormulaBool(int ptr, int row, int col, String valueO, bool valueT) native "_xlSheetWriteFormulaBool";
bool _xlSheetWriteComment(int ptr, int row, int col, String value, String author, int width, int height) native "_xlSheetWriteComment";
bool _xlSheetWriteError(int ptr, int row, int col, int code) native "_xlSheetWriteError";

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

  writeBlank(int row, int col) {
    bool res = _xlSheetWriteBlank(ptr, row, col);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

  writeFormula(int row, int col, String value) {
    bool res = _xlSheetWriteFormula(ptr, row, col, value);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

  writeFormulaNum(int row, int col, String value) {
    bool res = _xlSheetWriteFormulaNum(ptr, row, col, value);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

  writeFormulaStr(int row, int col, String valueO, String valueT) {
    bool res = _xlSheetWriteFormulaStr(ptr, row, col, valueO, valueT);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

  writeFormulaBool(int row, int col, String valueO, bool valueT) {
    bool res = _xlSheetWriteFormulaBool(ptr, row, col, valueO, valueT);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

  writeWriteComment(int row, int col, String value, String author, int width, int height) {
    bool res = _xlSheetWriteComment(ptr, row, col, value, author, width, height);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

  writeWriteError(int row, int col, int code) {
    bool res = _xlSheetWriteError(ptr, row, col, code);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

}
