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

  /// Returns the size of the font in points.
  size() {
    return _xlFontSize(ptr);
  }

  /// Sets the size of the font in points.
  setSize(int size) {
    _xlFontSetSize(ptr, size);
  }

  /// Returns whether the font is italic.
  italic() {
    return _xlFontItalic(ptr);
  }

  /// Turns on/off the italic font.
  setItalic({bool italic = true}) {
    _xlFontSetItalic(ptr, italic ? 1 : 0);
  }

  /// Returns whether the font is strikeout: 1 - strikeout, 0 - not strikeout.
  strikeOut() {
    return _xlFontStrikeOut(ptr);
  }

  /// Turns on/off the strikeout font: 1 - strikeout, 0 - not strikeout.
  setStrikeOut({bool strikeOut = true}) {
    _xlFontSetStrikeOut(ptr, strikeOut ? 1 : 0);
  }

  /// Returns the color of the font.
  color() {
    return _xlFontColor(ptr);
  }

  /// Sets the color of the font.
  setColor(Color color) {
    _xlFontSetColor(ptr, color.value);
  }

  /// Returns whether the font is bold: 1 - bold, 0 - not bold.
  bold() {
    return _xlFontBold(ptr);
  }

  /// Turns on/off the bold font: 1 - bold, 0 - not bold.
  setBold({bool bold = true}) {
    _xlFontSetBold(ptr, bold ? 1 : 0);
  }

  /// Returns the script style of the font.
  script() {
    return _xlFontScript(ptr);
  }

  /// Sets the script style of the font.
  setScript(int script) {
    _xlFontSetScript(ptr, script);
  }

  /// Returns the underline style of the font.
  underline() {
    return _xlFontUnderline(ptr);
  }

  /// Sets the underline style of the font.
  setUnderline(int underline) {
    _xlFontSetUnderline(ptr, underline);
  }

  /// Returns the name of the font.
  name() {
    return _xlFontName(ptr);
  }

  /// Sets the name of the font. Default name is "Arial".
  setName({String name = 'Arial'}) {
    _xlFontSetName(ptr, name);
  }
}
