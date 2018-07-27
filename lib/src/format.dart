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

  setFont(int fontHandle) {
    var res = _xlFormatSetFont(ptr, fontHandle);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  numFormat() {
    return _xlFormatNumFormat(ptr);
  }

  setNumFormat(int numFormat) {
    _xlFormatSetNumFormat(ptr, numFormat);
  }

  alignH(int numFormat) {
    return _xlFormatAlignH(ptr);
  }

  setAlignH(int align) {
    _xlFormatSetAlignH(ptr, align);
  }

  alignV(int align) {
    return _xlFormatAlignV(ptr);
  }

  setAlignV(AlignH align) {
    _xlFormatSetAlignV(ptr, align.value);
  }

  wrap() {
    return _xlFormatWrap(ptr);
  }

  setWrap(int wrap) {
    _xlFormatSetWrap(ptr, wrap);
  }

  rotation() {
    return _xlFormatRotation(ptr);
  }

  setRotation(int rotation) {
    var res = _xlFormatSetRotation(ptr, rotation);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  indent() {
    return _xlFormatIndent(ptr);
  }

  setIndent(int indent) {
    _xlFormatSetIndent(ptr, indent);
  }

  shrinkToFit(int indent) {
    return _xlFormatShrinkToFit(ptr);
  }

  setShrinkToFit(int shrinkToFit) {
    _xlFormatSetShrinkToFit(ptr, shrinkToFit);
  }

  setBorder(int style) {
    _xlFormatSetBorder(ptr, style);
  }

  setBorderColor(int color) {
    _xlFormatSetBorderColor(ptr, color);
  }

  borderLeft() {
    return _xlFormatBorderLeft(ptr);
  }

  setBorderLeft(int style) {
    _xlFormatSetBorderLeft(ptr, style);
  }

  borderRight() {
    return _xlFormatBorderRight(ptr);
  }

  setBorderRight(int style) {
    _xlFormatSetBorderRight(ptr, style);
  }

  borderTop() {
    return _xlFormatBorderTop(ptr);
  }

  setBorderTop(int style) {
    _xlFormatSetBorderTop(ptr, style);
  }

  borderBottom() {
    return _xlFormatBorderBottom(ptr);
  }

  setBorderBottom(int style) {
    _xlFormatSetBorderBottom(ptr, style);
  }

  borderLeftColor() {
    return _xlFormatBorderLeftColor(ptr);
  }

  setBorderLeftColor(int color) {
    _xlFormatSetBorderLeftColor(ptr, color);
  }

  borderRightColor() {
    return _xlFormatBorderRightColor(ptr);
  }

  setBorderRightColor(int color) {
    _xlFormatSetBorderRightColor(ptr, color);
  }

  borderTopColor() {
    return _xlFormatBorderTopColor(ptr);
  }

  setBorderTopColor(int color) {
    _xlFormatSetBorderTopColor(ptr, color);
  }

  borderBottomColor() {
    return _xlFormatBorderBottomColor(ptr);
  }

  setBorderBottomColor(int color) {
    _xlFormatSetBorderBottomColor(ptr, color);
  }

  borderDiagonal() {
    return _xlFormatBorderDiagonal(ptr);
  }

  setBorderDiagonal(int border) {
    _xlFormatSetBorderDiagonal(ptr, border);
  }

  borderDiagonalStyle() {
    return _xlFormatBorderDiagonalStyle(ptr);
  }

  setBorderDiagonalStyle(int style) {
    _xlFormatSetBorderDiagonalStyle(ptr, style);
  }

  borderDiagonalColor() {
    return _xlFormatBorderDiagonalColor(ptr);
  }

  setBorderDiagonalColor(int style) {
    _xlFormatSetBorderDiagonalColor(ptr, style);
  }

  fillPattern() {
    return _xlFormatFillPattern(ptr);
  }

  setFillPattern(int pattern) {
    _xlFormatSetFillPattern(ptr, pattern);
  }

  patternForegroundColor() {
    return _xlFormatPatternForegroundColor(ptr);
  }

  setPatternForegroundColor(int color) {
    _xlFormatSetPatternForegroundColor(ptr, color);
  }

  patternBackgroundColor() {
    return _xlFormatPatternBackgroundColor(ptr);
  }

  setPatternBackgroundColor(int color) {
    _xlFormatSetPatternBackgroundColor(ptr, color);
  }

  locked() {
    return _xlFormatLocked(ptr);
  }

  setLocked(int locked) {
    _xlFormatSetLocked(ptr, locked);
  }

  hidden() {
    return _xlFormatHidden(ptr);
  }

  setHidden(int hidden) {
    _xlFormatSetHidden(ptr, hidden);
  }
}
