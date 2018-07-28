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

  italic(int size) {
    return _xlFontItalic(ptr);
  }

  setItalic(int italic) {
    _xlFontSetItalic(ptr, italic);
  }

  strikeOut(int size) {
    return _xlFontStrikeOut(ptr);
  }

  setStrikeOut(int strikeOut) {
    _xlFontSetStrikeOut(ptr, strikeOut);
  }

  color(int size) {
    return _xlFontColor(ptr);
  }

  setColor(Color color) {
    _xlFontSetColor(ptr, color.value);
  }

  bold(int size) {
    return _xlFontBold(ptr);
  }

  setBold(int bold) {
    _xlFontSetBold(ptr, bold);
  }

  script(int size) {
    return _xlFontScript(ptr);
  }

  setScript(int script) {
    _xlFontSetScript(ptr, script);
  }

  underline() {
    return _xlFontUnderline(ptr);
  }

  setUnderline(int underline) {
    _xlFontSetUnderline(ptr, underline);
  }

  name() {
    return _xlFontName(ptr);
  }

  setName(String name) {
    _xlFontSetName(ptr, name);
  }

}
