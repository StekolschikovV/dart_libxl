part of 'libxl_ext.dart';


  int _xlFontSize(int handle) native "_xlFontSize";
  void _xlFontSetSize(int handle, int size) native "_xlFontSetSize";
  int _xlFontItalic(int handle) native "_xlFontItalic";
  void _xlFontSetItalic(int handle, int italic) native "_xlFontSetItalic";
  int _xlFontStrikeOut(int handle) native "_xlFontStrikeOut";
  void _xlFontSetStrikeOut(int handle, int strikeOut) native "_xlFontSetStrikeOut";
  int _xlFontColor(int handle) native "_xlFontColor";
  void _xlFontSetColor(int handle, int color) native "_xlFontSetColor";
  int _xlFontBold(int handle) native "_xlFontBold";
  void _xlFontSetBold(int handle, int bold) native "_xlFontSetBold";
  int _xlFontScript(int handle) native "_xlFontScript";
  void _xlFontSetScript(int handle, int script) native "_xlFontSetScript";
  int _xlFontUnderline(int handle) native "_xlFontUnderline";
  void _xlFontSetUnderline(int handle, int underline) native "_xlFontSetUnderline";
  String _xlFontName(int handle) native "_xlFontName";
  void _xlFontSetName(int handle, String name) native "_xlFontSetName";
