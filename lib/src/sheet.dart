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
bool _xlSheetSetCol(int ptr, int colFirst, int colLast, double width, int hidden) native "_xlSheetSetCol";
bool _xlSheetSetRow(int ptr, int row, double height, int hidden) native "_xlSheetSetRow";
bool _xlSheetSetRowHidden(int ptr, int row, bool hidden) native "_xlSheetSetRowHidden";
bool _xlSheetSetColHidden(int ptr, int col, int hidden) native "_xlSheetSetRowHidden";
bool _xlSheetSetMerge(int ptr, int rowFirst, int rowLast, int colFirst, int colLast) native "_xlSheetSetMerge";
bool _xlSheetSetPicture(int ptr, int row, int col, int pictureId, double scale, int offset_x, int offset_y, int pos) native "_xlSheetSetPicture";
bool _xlSheetSetPicture2(int ptr, int row, int col, int pictureId, int width, int height, int offset_x, int offset_y) native "_xlSheetSetPicture2";
bool _xlSheetSetHorPageBreak(int ptr, int row, int pageBreak) native "_xlSheetSetHorPageBreak";

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

  writeComment(int row, int col, String value, String author, int width, int height) {
    bool res = _xlSheetWriteComment(ptr, row, col, value, author, width, height);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

  writeError(int row, int col, int code) {
    bool res = _xlSheetWriteError(ptr, row, col, code);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

  setCol(int colFirst, int colLast, double width, int hidden) {
    bool res = _xlSheetSetCol(ptr, colFirst, colLast, width, hidden);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

  setRow(int row, double height, int hidden) {
    bool res = _xlSheetSetRow(ptr, row, height, hidden);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

  setRowHidden(int row, bool hidden) {
    bool res = _xlSheetSetRowHidden(ptr, row, hidden);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

  setColHidden(int row, int hidden) {
    bool res = _xlSheetSetColHidden(ptr, row, hidden);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

  setMerge(int rowFirst, int rowLast, int colFirst, int colLast) {
    bool res = _xlSheetSetMerge(ptr, rowFirst, rowLast, colFirst, colLast);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

  setPicture(int row, int col, int pictureId, double scale, int offset_x, int offset_y, int pos) {
    bool res = _xlSheetSetPicture(ptr, row, col, pictureId, scale, offset_x, offset_y, pos);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

  setPicture2(int row, int col, int pictureId, int width, int height, int offset_x, int offset_y) {
    bool res = _xlSheetSetPicture2(ptr, row, col, pictureId, width, height, offset_x, offset_y);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

  setHorPageBreak(int row, int pageBreak) {
    bool res = _xlSheetSetHorPageBreak(ptr, row, pageBreak);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

}
