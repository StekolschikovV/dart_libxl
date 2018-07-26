part of 'libxl_ext.dart';

class XlSheet {
  final int ptr;
  final int format;
  final XlBook book;

  XlSheet(this.ptr, this.book);

  const XlSheet.empty()
      : ptr = 0,
        book = const XlBook.empty();

  @override
  String toString() {
    return 'XlSheet{ptr: $ptr}';
  }

  writeStr(int row, int col, String value, [XlFormat format = const XlFormat.empty()]) {
    var res = _xlSheetWriteStr(ptr, row, col, value, format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeNum(int row, int col, double value, [XlFormat format = const XlFormat.empty()]) {
    var res = _xlSheetWriteNum(ptr, row, col, value, format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeBool(int row, int col, int value, [XlFormat format = const XlFormat.empty()]) {
    var res = _xlSheetWriteBool(ptr, row, col, value, format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeBlank(int row, int col, [XlFormat format = const XlFormat.empty()]) {
    var res = _xlSheetWriteBlank(ptr, row, col, format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeFormula(int row, int col, String value, [XlFormat format = const XlFormat.empty()]) {
    var res = _xlSheetWriteFormula(ptr, row, col, value, format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeFormulaNum(int row, int col, String expr, num value, [XlFormat format = const XlFormat.empty()]) {
    var res = _xlSheetWriteFormulaNum(ptr, row, col, expr, value, format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeFormulaStr(int row, int col, String expr, String value, [XlFormat format = const XlFormat.empty()]) {
    var res = _xlSheetWriteFormulaStr(ptr, row, col, expr, value, format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeFormulaBool(int row, int col, String expr, int value, [XlFormat format = const XlFormat.empty()]) {
    var res = _xlSheetWriteFormulaBool(ptr, row, col, expr, value, format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeComment(int row, int col, String value, String author, int width, int height) {
    _xlSheetWriteComment(ptr, row, col, value, author, width, height);
  }

  writeError(int row, int col, int error, [XlFormat format = const XlFormat.empty()]) {
    _xlSheetWriteError(ptr, row, col, error, format.ptr);
  }

  setCol(int colFirst, int colLast, num width, int hidden, [XlFormat format = const XlFormat.empty()]) {
    var res = _xlSheetSetCol(ptr, colFirst, colLast, width, format.ptr, hidden);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  setRow(int row, num height, int hidden, [XlFormat format = const XlFormat.empty()]) {
    var res = _xlSheetSetRow(ptr, row,  height, format.ptr,  hidden);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  setRowHidden(int row, int hidden) {
    var res = _xlSheetSetRowHidden(ptr, row, hidden);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  setColHidden(int col, int hidden) {
    var res = _xlSheetSetColHidden(ptr, col, hidden);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  setMerge(int rowFirst, int rowLast, int colFirst, int colLast) {
    var res = _xlSheetSetMerge(ptr, rowFirst, rowLast, colFirst, colLast);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  setPicture(int row, int col, int pictureId, num scale, int offset_x, int offset_y, int pos) {
    _xlSheetSetPicture(ptr, row, col, pictureId, scale, offset_x, offset_y, pos);
  }

  setPicture2(int handle, int row, int col, int pictureId, int width, int height, int offset_x, int offset_y, int pos) {
    _xlSheetSetPicture2(ptr, row, col, pictureId, width, height, offset_x, offset_y, pos);
  }

  setHorPageBreak(int row, int pageBreak) {
    var res = _xlSheetSetHorPageBreak(ptr, row, pageBreak);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  setVerPageBreak(int col, int pageBreak) {
    var res = _xlSheetSetVerPageBreak(ptr, col, pageBreak);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  setGroupSummaryBelow(int below) {
    _xlSheetSetGroupSummaryBelow(ptr, below);
  }

  setGroupSummaryRight(int right) {
    _xlSheetSetGroupSummaryRight(ptr, right);
  }

  setDisplayGridlines(int show) {
    _xlSheetSetDisplayGridlines(ptr, show);
  }

  setPrintGridlines(int print) {
    _xlSheetSetPrintGridlines(ptr, print);
  }

  setZoom(int zoom) {
    _xlSheetSetPrintGridlines(ptr, zoom);
  }

  setPrintZoom(int zoom) {
  _xlSheetSetPrintZoom(ptr, zoom);
  }

  setPrintFit(int wPages, int hPages) {
    _xlSheetSetPrintFit(ptr, wPages, hPages);
  }

  setLandscape(int landscape) {
  _xlSheetSetLandscape(ptr, landscape);
  }

  setPaper(int paper) {
    _xlSheetSetPaper(ptr, paper);
  }

  setHeader(String header, num margin) {
    var res = _xlSheetSetHeader(ptr, header, margin);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  setFooter(String footer, num margin) {
    var res = _xlSheetSetFooter(ptr, footer, margin);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  setHCenter(int hCenter) {
    _xlSheetSetHCenter(ptr, hCenter);
  }

  setVCenter(int vCenter) {
    _xlSheetSetVCenter(ptr, vCenter);
  }

  setMarginLeft(num margin) {
    _xlSheetSetMarginLeft(ptr, margin);
  }

  setMarginRight(num margin) {
    _xlSheetSetMarginRight(ptr, margin);
  }

  setMarginTop(num margin) {
    _xlSheetSetMarginTop(ptr, margin);
  }

  setMarginBottom(num margin) {
    _xlSheetSetMarginBottom(ptr, margin);
  }

  setPrintRowCol(num print) {
    _xlSheetSetPrintRowCol(ptr, print);
  }

  setPrintRepeatRows(int rowFirst, int rowLast) {
    _xlSheetSetPrintRepeatRows(ptr, rowFirst, rowLast);
  }

  setPrintRepeatCols(int colFirst, int colLast) {
    _xlSheetSetPrintRepeatCols(ptr, colFirst, colLast);
  }

  setPrintArea(int rowFirst, int rowLast, int colFirst, int colLast) {
    _xlSheetSetPrintArea(ptr, rowFirst, rowLast, colFirst, colLast);
  }

  setNamedRange(String name, int rowFirst, int rowLast, int colFirst, int colLast, int scopeId) {
    var res = _xlSheetSetNamedRange(ptr, name, rowFirst, rowLast, colFirst, colLast, scopeId);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  setName(String name) {
    _xlSheetSetName(ptr, name);
  }

  setProtect(int protect) {
    _xlSheetSetProtect(ptr, protect);
  }

  setProtectEx(int protect, String password, int enhancedProtection) {
    _xlSheetSetProtectEx(ptr, protect, password, enhancedProtection);
  }

  setHidden(int hidden) {
    var res = _xlSheetSetHidden(ptr, hidden);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  setTopLeftView(int row, int col) {
    _xlSheetSetTopLeftView(ptr, row, col);
  }

  setRightToLeft(int rightToLeft) {
    _xlSheetSetRightToLeft(ptr, rightToLeft);
  }

  setAutoFitArea(int rowFirst, int colFirst, int rowLast, int colLast) {
    _xlSheetSetAutoFitArea(ptr, rowFirst, colFirst, rowLast, colLast);
  }

  setTabColor(int color) {
    _xlSheetSetTabColor(ptr, color);
  }

  setTabRgbColor(int red, int green, int blue) {
    _xlSheetSetTabRgbColor(ptr, red, green, blue);
  }

}
