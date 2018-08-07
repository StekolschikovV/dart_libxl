part of 'libxl_ext.dart';

class XlFormat {
  final int ptr;
  final XlBook book;

  XlFormat(this.ptr, this.book);

  const XlFormat.empty()
      : ptr = 0,
        book = const XlBook.empty();

  @override
  String toString() {
    return 'XlFormat{ptr: $ptr}';
  }

  /// Returns the handle of the current font.
  font() {
    var res = _xlFormatFont(ptr);
    if (res == null) {
      throw XlException(book.errorMessage());
    }
    return res;
  }

  /// Sets the font for the format.
  void setFont(XlFont font) {
    var res = _xlFormatSetFont(ptr, font.ptr);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  numFormat() {
    return _xlFormatNumFormat(ptr);
  }

  void setNumFormat(NumFormat numFormat) {
    _xlFormatSetNumFormat(ptr, numFormat.value);
  }

  alignH(int numFormat) {
    return _xlFormatAlignH(ptr);
  }

  void setAlignH(AlignH align) {
    _xlFormatSetAlignH(ptr, align.value);
  }

  alignV(int align) {
    return _xlFormatAlignV(ptr);
  }

  void setAlignV(AlignV align) {
    _xlFormatSetAlignV(ptr, align.value);
  }

  wrap() {
    return _xlFormatWrap(ptr);
  }

  void setWrap(int wrap) {
    _xlFormatSetWrap(ptr, wrap);
  }

  rotation() {
    return _xlFormatRotation(ptr);
  }

  void setRotation(int rotation) {
    _xlFormatSetRotation(ptr, rotation);
  }

  indent() {
    return _xlFormatIndent(ptr);
  }

  void setIndent(int indent) {
    _xlFormatSetIndent(ptr, indent);
  }

  shrinkToFit(int indent) {
    return _xlFormatShrinkToFit(ptr);
  }

  void setShrinkToFit(int shrinkToFit) {
    _xlFormatSetShrinkToFit(ptr, shrinkToFit);
  }

  void setBorder(BorderStyle style) {
    _xlFormatSetBorder(ptr, style.value);
  }

  void setBorderColor(Color color) {
    _xlFormatSetBorderColor(ptr, color.value);
  }

  borderLeft() {
    return _xlFormatBorderLeft(ptr);
  }

  void setBorderLeft(BorderStyle style) {
    _xlFormatSetBorderLeft(ptr, style.value);
  }

  borderRight() {
    return _xlFormatBorderRight(ptr);
  }

  void setBorderRight(BorderStyle style) {
    _xlFormatSetBorderRight(ptr, style.value);
  }

  borderTop() {
    return _xlFormatBorderTop(ptr);
  }

  void setBorderTop(BorderStyle style) {
    _xlFormatSetBorderTop(ptr, style.value);
  }

  borderBottom() {
    return _xlFormatBorderBottom(ptr);
  }

  void setBorderBottom(int style) {
    _xlFormatSetBorderBottom(ptr, style);
  }

  borderLeftColor() {
    return _xlFormatBorderLeftColor(ptr);
  }

  void setBorderLeftColor(int color) {
    _xlFormatSetBorderLeftColor(ptr, color);
  }

  borderRightColor() {
    return _xlFormatBorderRightColor(ptr);
  }

  void setBorderRightColor(int color) {
    _xlFormatSetBorderRightColor(ptr, color);
  }

  borderTopColor() {
    return _xlFormatBorderTopColor(ptr);
  }

  void setBorderTopColor(int color) {
    _xlFormatSetBorderTopColor(ptr, color);
  }

  borderBottomColor() {
    return _xlFormatBorderBottomColor(ptr);
  }

  void setBorderBottomColor(int color) {
    _xlFormatSetBorderBottomColor(ptr, color);
  }

  borderDiagonal() {
    return _xlFormatBorderDiagonal(ptr);
  }

  void setBorderDiagonal(int border) {
    _xlFormatSetBorderDiagonal(ptr, border);
  }

  borderDiagonalStyle() {
    return _xlFormatBorderDiagonalStyle(ptr);
  }

  void setBorderDiagonalStyle(int style) {
    _xlFormatSetBorderDiagonalStyle(ptr, style);
  }

  borderDiagonalColor() {
    return _xlFormatBorderDiagonalColor(ptr);
  }

  void setBorderDiagonalColor(int style) {
    _xlFormatSetBorderDiagonalColor(ptr, style);
  }

  fillPattern() {
    return _xlFormatFillPattern(ptr);
  }

  void setFillPattern(FillPattern pattern) {
    _xlFormatSetFillPattern(ptr, pattern.value);
  }

  patternForegroundColor() {
    return _xlFormatPatternForegroundColor(ptr);
  }

  void setPatternForegroundColor(Color color) {
    _xlFormatSetPatternForegroundColor(ptr, color.value);
  }

  patternBackgroundColor() {
    return _xlFormatPatternBackgroundColor(ptr);
  }

  void setPatternBackgroundColor(int color) {
    _xlFormatSetPatternBackgroundColor(ptr, color);
  }

  locked() {
    return _xlFormatLocked(ptr);
  }

  void setLocked(int locked) {
    _xlFormatSetLocked(ptr, locked);
  }

  hidden() {
    return _xlFormatHidden(ptr);
  }

  void setHidden(int hidden) {
    _xlFormatSetHidden(ptr, hidden);
  }
}
