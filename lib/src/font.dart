part of 'libxl_ext.dart';


class XlFont {

  final int ptr;
  final XlBook book;
  XlFont(this.ptr, this.book);

  const XlFont.empty()
      : ptr = 0,
        book = const XlBook.empty();

  @override
  String toString() {
    return 'XlFont{ptr: $ptr}';
  }

  fontSize() {
    return _xlFontSize(ptr);
  }

  setSize(int size) {
    _xlFontSetSize(ptr, size);
  }

  fontItalic(int size) {
    return _xlFontItalic(ptr);
  }

  setItalic(int italic) {
    _xlFontSetItalic(ptr, italic);
  }

  fontStrikeOut(int size) {
    return _xlFontStrikeOut(ptr);
  }

  fontSetStrikeOut(int strikeOut) {
    _xlFontSetStrikeOut(ptr, strikeOut);
  }

  fontColor(int size) {
    return _xlFontColor(ptr);
  }

  setColor(Color color) {
    _xlFontSetColor(ptr, color.value);
  }

  fontBold(int size) {
    return _xlFontBold(ptr);
  }

  fontSetBold(int bold) {
    _xlFontSetBold(ptr, bold);
  }

  fontScript(int size) {
    return _xlFontScript(ptr);
  }

  fontSetScript(int script) {
    _xlFontSetScript(ptr, script);
  }

  fontUnderline() {
    return _xlFontUnderline(ptr);
  }

  fontSetUnderline(int underline) {
    _xlFontSetUnderline(ptr, underline);
  }

  fontName() {
    return _xlFontName(ptr);
  }

  fontSetName(String name) {
    _xlFontSetName(ptr, name);
  }

}
