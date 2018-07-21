import 'dart-ext:libxl_ext';

void sayHello() native "SayHello";
int _xlCreateBook() native "XlCreateBook";
int _BookRelease(int ptr) native "BookRelease";
bool _BookSave(int ptr, String fileName) native "BookSave";

class XlBook {
  int _pointer;
  XlBook() {
    _pointer = _xlCreateBook();
  }

  @override
  String toString() {
    return 'XlBook{_pointer: $_pointer}';
  }
  void release() {
    _BookRelease(_pointer);
  }
  bool save(String fileName) {
    return _BookSave(_pointer, fileName);
  }
}