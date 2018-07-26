part of 'libxl_ext.dart';


class XlFont {

  final int ptr;

  @override
  String toString() {
    return 'XlFont{ptr: $ptr}';
  }

  fontSize() {
    var res = _xlFontSize(ptr);
    if (res == 0) {
      throw XlException('_xlFontSize');
    }
  }

  setSize(int size) {
    _xlFontSetSize(ptr, size);
  }

  fontItalic(int size) {
    var res = _xlFontItalic(ptr);
    if (res == 0) {
      throw XlException('_xlFontItalic');
    }
  }

  setItalic(int italic) {
    _xlFontSetItalic(ptr, italic);
  }

  fontStrikeOut(int size) {
    var res = _xlFontStrikeOut(ptr);
    if (res == 0) {
      throw XlException('_xlFontStrikeOut');
    }
  }

  fontSetStrikeOut(int strikeOut) {
    _xlFontSetStrikeOut(ptr, strikeOut);
  }

  fontColor(int size) {
    return _xlFontColor(ptr);
  }

  fontSetColor(int color) {
    _xlFontSetColor(ptr, color);
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
