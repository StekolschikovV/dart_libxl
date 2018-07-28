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

  font() {
    return _xlFormatFont(ptr);
  }

  void setFont(int fontHandle) {
    var res = _xlFormatSetFont(ptr, fontHandle);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  numFormat() {
    return _xlFormatNumFormat(ptr);
  }

  void setNumFormat(int numFormat) {
    _xlFormatSetNumFormat(ptr, numFormat);
  }

  alignH(int numFormat) {
    return _xlFormatAlignH(ptr);
  }

  void setAlignH(int align) {
    _xlFormatSetAlignH(ptr, align);
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

  void setBorder(int style) {
    _xlFormatSetBorder(ptr, style);
  }

  void setBorderColor(int color) {
    _xlFormatSetBorderColor(ptr, color);
  }

  borderLeft() {
    return _xlFormatBorderLeft(ptr);
  }

  void setBorderLeft(int style) {
    _xlFormatSetBorderLeft(ptr, style);
  }

  borderRight() {
    return _xlFormatBorderRight(ptr);
  }

  void setBorderRight(int style) {
    _xlFormatSetBorderRight(ptr, style);
  }

  borderTop() {
    return _xlFormatBorderTop(ptr);
  }

  void setBorderTop(int style) {
    _xlFormatSetBorderTop(ptr, style);
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

  void setFillPattern(int pattern) {
    _xlFormatSetFillPattern(ptr, pattern);
  }

  patternForegroundColor() {
    return _xlFormatPatternForegroundColor(ptr);
  }

  void setPatternForegroundColor(int color) {
    _xlFormatSetPatternForegroundColor(ptr, color);
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
