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

  writeStr(int row, int col, String value,
      {XlFormat format = const XlFormat.empty()}) {
    var res = _xlSheetWriteStr(ptr, row, col, value, format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeNum(int row, int col, double value,
      {XlFormat format = const XlFormat.empty()}) {
    var res = _xlSheetWriteNum(ptr, row, col, value, format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeBool(int row, int col, int value,
      {XlFormat format = const XlFormat.empty()}) {
    var res = _xlSheetWriteBool(ptr, row, col, value, format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeBlank(int row, int col, {XlFormat format = const XlFormat.empty()}) {
    var res = _xlSheetWriteBlank(ptr, row, col, format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeFormula(int row, int col, String value,
      {XlFormat format = const XlFormat.empty()}) {
    var res = _xlSheetWriteFormula(ptr, row, col, value, format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeFormulaNum(int row, int col, String expr, num value,
      {XlFormat format = const XlFormat.empty()}) {
    var res = _xlSheetWriteFormulaNum(ptr, row, col, expr, value, format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeFormulaStr(int row, int col, String expr, String value,
      {XlFormat format = const XlFormat.empty()}) {
    var res = _xlSheetWriteFormulaStr(ptr, row, col, expr, value, format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeFormulaBool(int row, int col, String expr, int value,
      {XlFormat format = const XlFormat.empty()}) {
    var res = _xlSheetWriteFormulaBool(ptr, row, col, expr, value, format.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  writeComment(
      int row, int col, String value, String author, int width, int height) {
    _xlSheetWriteComment(ptr, row, col, value, author, width, height);
  }

  writeError(int row, int col, int error,
      {XlFormat format = const XlFormat.empty()}) {
    _xlSheetWriteError(ptr, row, col, error, format.ptr);
  }

  setCol(int colFirst, int colLast, num width,
      {XlFormat format = const XlFormat.empty(), bool hidden = false}) {
    var res = _xlSheetSetCol(
        ptr, colFirst, colLast, width.toDouble(), format.ptr, hidden ? 1 : 0);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  setRow(int row, num height,
      {XlFormat format = const XlFormat.empty(), bool hidden = false}) {
    var res = _xlSheetSetRow(ptr, row, height.toDouble(), format.ptr, hidden ? 1 : 0);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  setRowHidden(int row, {bool hidden = true}) {
    var res = _xlSheetSetRowHidden(ptr, row, hidden ? 1 : 0);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  setColHidden(int col, {bool hidden = true}) {
    var res = _xlSheetSetColHidden(ptr, col, hidden ? 1 : 0);
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

  setPicture(int row, int col, int pictureId, num scale, int offset_x,
      int offset_y, int pos) {
    _xlSheetSetPicture(
        ptr, row, col, pictureId, scale, offset_x, offset_y, pos);
  }

  setPicture2(int row, int col, int pictureId, int width, int height,
      int offset_x, int offset_y, int pos) {
    _xlSheetSetPicture2(
        ptr, row, col, pictureId, width, height, offset_x, offset_y, pos);
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

  setNamedRange(String name, int rowFirst, int rowLast, int colFirst,
      int colLast, int scopeId) {
    var res = _xlSheetSetNamedRange(
        ptr, name, rowFirst, rowLast, colFirst, colLast, scopeId);
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

  setHidden({bool hidden = true}) {
    var res = _xlSheetSetHidden(ptr, hidden ? 1 : 0);
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

  int cellType(int row, int col) {
    return _xlSheetCellType(ptr, row, col);
  }

  int isFormula(int row, int col) {
    return _xlSheetIsFormula(ptr, row, col);
  }

  int cellFormat(int row, int col) {
    return _xlSheetCellFormat(ptr, row, col);
  }

  void setCellFormat(int row, int col, int format) {
    _xlSheetSetCellFormat(ptr, row, col, format);
  }

  String readComment(int row, int col) {
    return _xlSheetReadComment(ptr, row, col);
  }

  void removeComment(int row, int col) {
    _xlSheetRemoveComment(ptr, row, col);
  }

  int isDate(int row, int col) {
    return _xlSheetIsDate(ptr, row, col);
  }

  int readError(int row, int col) {
    return _xlSheetReadError(ptr, row, col);
  }

  num colWidth(int col) {
    return _xlSheetColWidth(ptr, col);
  }

  num rowWidth(int row) {
    return _xlSheetRowHeight(ptr, row);
  }

  int rowHidden(int row) {
    return _xlSheetRowHidden(ptr, row);
  }

  int colHidden(int col) {
    return _xlSheetColHidden(ptr, col);
  }

  void delMerge(int row, int col) {
    var res = _xlSheetDelMerge(ptr, row, col);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  int mergeSize() {
    return _xlSheetMergeSize(ptr);
  }

  int delMergeByIndex(int index) {
    return _xlSheetDelMergeByIndex(ptr, index);
  }

  int pictureSize() {
    return _xlSheetPictureSize(ptr);
  }

  int getHorPageBreak(int index) {
    return _xlSheetGetHorPageBreak(ptr, index);
  }

  int getHorPageBreakSize() {
    return _xlSheetGetHorPageBreakSize(ptr);
  }

  int getVerPageBreak(int index) {
    return _xlSheetGetVerPageBreak(ptr, index);
  }

  int getVerPageBreakSize() {
    return _xlSheetGetVerPageBreakSize(ptr);
  }

  void split(int row, int col) {
    _xlSheetSplit(ptr, row, col);
  }

  void groupRows(int rowFirst, int rowLast, int collapsed) {
    var res = _xlSheetGroupRows(ptr, rowFirst, rowLast, collapsed);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  void groupCols(int colFirst, int colLast, int collapsed) {
    var res = _xlSheetGroupCols(ptr, colLast, colLast, collapsed);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  int groupSummaryBelow() {
    return _xlSheetGroupSummaryBelow(ptr);
  }

  int groupSummaryRight() {
    return _xlSheetGroupSummaryRight(ptr);
  }

  void clear(int rowFirst, int rowLast, int colFirst, int colLast) {
    _xlSheetClear(ptr, rowFirst, rowLast, colFirst, colLast);
  }

  void insertCol(int colFirst, int colLast) {
    var res = _xlSheetInsertCol(ptr, colFirst, colLast);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  void insertRow(int rowFirst, int rowLast) {
    var res = _xlSheetInsertRow(ptr, rowFirst, rowLast);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  void removeCol(int colFirst, int colLast) {
    var res = _xlSheetRemoveCol(ptr, colFirst, colLast);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  void removeRow(int rowFirst, int rowLast) {
    var res = _xlSheetRemoveRow(ptr, rowFirst, rowLast);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  void copyCel(int rowSrc, int colSrc, int rowDst, int colDst) {
    var res = _xlSheetCopyCell(ptr, rowSrc, colSrc, rowDst, colDst);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  int firstRow() {
    return _xlSheetFirstRow(ptr);
  }

  int lastRow() {
    return _xlSheetLastRow(ptr);
  }

  int firstCol() {
    return _xlSheetFirstCol(ptr);
  }

  int lastCol() {
    return _xlSheetLastCol(ptr);
  }

  int displayGridlines() {
    return _xlSheetDisplayGridlines(ptr);
  }

  int printGridlines() {
    return _xlSheetPrintGridlines(ptr);
  }

  int zoom() {
    return _xlSheetZoom(ptr);
  }

  void setZoom(int zoom) {
    _xlSheetSetZoom(ptr, zoom);
  }

  int printZoom() {
    return _xlSheetPrintZoom(ptr);
  }

  int printLandscape() {
    return _xlSheetLandscape(ptr);
  }

  int paper() {
    return _xlSheetPaper(ptr);
  }

  String header() {
    return _xlSheetHeader(ptr);
  }

  num headerMargin() {
    return _xlSheetHeaderMargin(ptr);
  }

  String footer() {
    return _xlSheetFooter(ptr);
  }

  num footerMargin() {
    return _xlSheetFooterMargin(ptr);
  }

  int hCenter() {
    return _xlSheetHCenter(ptr);
  }

  int vCenter() {
    return _xlSheetVCenter(ptr);
  }

  num marginLeft() {
    return _xlSheetMarginLeft(ptr);
  }

  num marginRight() {
    return _xlSheetMarginRight(ptr);
  }

  num marginTop() {
    return _xlSheetMarginTop(ptr);
  }

  num marginBottom() {
    return _xlSheetMarginBottom(ptr);
  }

  int printRowCol() {
    return _xlSheetPrintRowCol(ptr);
  }

  void clearPrintRepeats() {
    _xlSheetClearPrintRepeats(ptr);
  }

  void clearPrintArea() {
    _xlSheetClearPrintArea(ptr);
  }

  void delNamedRange(String name, int scopeId) {
    var res = _xlSheetDelNamedRange(ptr, name, scopeId);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  int namedRangeSize() {
    return _xlSheetNamedRangeSize(ptr);
  }

  int tableSize() {
    return _xlSheetTableSize(ptr);
  }

  int hyperlinkSize() {
    return _xlSheetHyperlinkSize(ptr);
  }

  int delHyperlink(int index) {
    return _xlSheetDelHyperlink(ptr, index);
  }

  void addHyperlink(
      String hyperlink, int rowFirst, int rowLast, int colFirst, int colLast) {
    _xlSheetAddHyperlink(ptr, hyperlink, rowFirst, rowLast, colFirst, colLast);
  }

  void applyFilter() {
    _xlSheetApplyFilter(ptr);
  }

  void removeFilter() {
    _xlSheetRemoveFilter(ptr);
  }

  String name() {
    return _xlSheetName(ptr);
  }

  int protect() {
    return _xlSheetProtect(ptr);
  }

  int hidden() {
    return _xlSheetHidden(ptr);
  }

  int rightToLeft() {
    return _xlSheetRightToLeft(ptr);
  }

  String rowColToAddr(int row, int col, int rowRelative, int colRelative) {
    return _xlSheetRowColToAddr(ptr, row, col, rowRelative, colRelative);
  }

  void addIgnoredError(
      int rowFirst, int colFirst, int rowLast, int colLast, int iError) {
    var res = _xlSheetAddIgnoredError(
        ptr, rowFirst, colFirst, rowLast, colLast, iError);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  void addDataValidation(int type, int op, int rowFirst, int rowLast,
      int colFirst, int colLast, String value1, String value2) {
    _xlSheetAddDataValidation(
        ptr, type, op, rowFirst, rowLast, colFirst, colLast, value1, value2);
  }

  void addDataValidationDouble(int type, int op, int rowFirst, int rowLast,
      int colFirst, int colLast, num value1, num value2) {
    _xlSheetAddDataValidationDouble(
        ptr, type, op, rowFirst, rowLast, colFirst, colLast, value1, value2);
  }

  void removeDataValidations() {
    _xlSheetRemoveDataValidations(ptr);
  }
}
