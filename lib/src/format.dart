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

  formatFont(){
    return _xlFormatFont(ptr);
  }

  formatSetFont(int fontHandle){
    var res = _xlFormatSetFont(ptr, fontHandle);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  formatNumFormat(){
    return _xlFormatNumFormat(ptr);
  }

  formatSetNumFormat(int numFormat){
    _xlFormatSetNumFormat(ptr, numFormat);
  }

  formatAlignH(int numFormat){
    return _xlFormatAlignH(ptr);
  }

  formatSetAlignH(int align){
    _xlFormatSetAlignH(ptr, align);
  }

  formatAlignV(int align){
    return _xlFormatAlignV(ptr);
  }

  formatSetAlignV(int align){
    _xlFormatSetAlignV(ptr, align);
  }

  formatWrap(){
    return _xlFormatWrap(ptr);
  }

  formatSetWrap(int wrap){
    _xlFormatSetWrap(ptr, wrap);
  }

  formatRotation(){
    return _xlFormatRotation(ptr);
  }

  formatSetRotation(int rotation){
    var res =_xlFormatSetRotation(ptr, rotation);
    if (res == 0) {
      throw XlException(book.errorMessage());
    }
  }

  formatIndent(){
    return _xlFormatIndent(ptr);
  }

  formatSetIndent(int indent){
    _xlFormatSetIndent(ptr, indent);
  }

  formatShrinkToFit(int indent){
    return _xlFormatShrinkToFit(ptr);
  }

  formatSetShrinkToFit(int shrinkToFit){
    _xlFormatSetShrinkToFit(ptr, shrinkToFit);
  }

  formatSetBorder(int style){
    _xlFormatSetBorder(ptr, style);
  }

  formatSetBorderColor(int color){
    _xlFormatSetBorderColor(ptr, color);
  }

  formatBorderLeft(){
    return _xlFormatBorderLeft(ptr);
  }

  formatSetBorderLeft(int style){
    _xlFormatSetBorderLeft(ptr, style);
  }

  formatBorderRight(){
    return _xlFormatBorderRight(ptr);
  }

  formatSetBorderRight(int style){
    _xlFormatSetBorderRight(ptr, style);
  }

  formatBorderTop(){
    return _xlFormatBorderTop(ptr);
  }

  formatSetBorderTop(int style){
    _xlFormatSetBorderTop(ptr, style);
  }

  formatBorderBottom(){
    return _xlFormatBorderBottom(ptr);
  }

  formatSetBorderBottom(int style){
    _xlFormatSetBorderBottom(ptr, style);
  }

  formatBorderLeftColor(){
    return _xlFormatBorderLeftColor(ptr);
  }

  formatSetBorderLeftColor(int color){
    _xlFormatSetBorderLeftColor(ptr, color);
  }

  formatBorderRightColor(){
    return _xlFormatBorderRightColor(ptr);
  }

  formatSetBorderRightColor(int color){
    _xlFormatSetBorderRightColor(ptr, color);
  }

  formatBorderTopColor(){
    return _xlFormatBorderTopColor(ptr);
  }

  formatSetBorderTopColor(int color){
    _xlFormatSetBorderTopColor(ptr, color);
  }

  formatBorderBottomColor(){
    return _xlFormatBorderBottomColor(ptr);
  }

  formatSetBorderBottomColor(int color){
    _xlFormatSetBorderBottomColor(ptr, color);
  }

  formatBorderDiagonal(){
    return _xlFormatBorderDiagonal(ptr);
  }

  formatSetBorderDiagonal(int border){
    _xlFormatSetBorderDiagonal(ptr, border);
  }

  formatBorderDiagonalStyle(){
    return _xlFormatBorderDiagonalStyle(ptr);
  }

  formatSetBorderDiagonalStyle(int style){
    _xlFormatSetBorderDiagonalStyle(ptr, style);
  }

  formatBorderDiagonalColor(){
    return _xlFormatBorderDiagonalColor(ptr);
  }

  formatSetBorderDiagonalColor(int style){
    _xlFormatSetBorderDiagonalColor(ptr, style);
  }

  formatFillPattern(){
    return _xlFormatFillPattern(ptr);
  }

  formatSetFillPattern(int pattern){
    _xlFormatSetFillPattern(ptr, pattern);
  }

  formatPatternForegroundColor(){
    return _xlFormatPatternForegroundColor(ptr);
  }

  formatSetPatternForegroundColor(int color){
    _xlFormatSetPatternForegroundColor(ptr, color);
  }

  formatPatternBackgroundColor(){
    return _xlFormatPatternBackgroundColor(ptr);
  }

  formatSetPatternBackgroundColor(int color){
    _xlFormatSetPatternBackgroundColor(ptr, color);
  }

  formatLocked(){
    return _xlFormatLocked(ptr);
  }

  formatSetLocked(int locked){
    _xlFormatSetLocked(ptr, locked);
  }

  formatHidden(){
    return _xlFormatHidden(ptr);
  }

  formatSetHidden(int hidden){
    _xlFormatSetHidden(ptr, hidden);
  }

}