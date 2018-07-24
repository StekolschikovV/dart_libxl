part of 'libxl_ext.dart';

int _xlCreateBook() native "_xlCreateBook";
int _xlBookRelease(int ptr) native "_xlBookRelease";
int _xlBookSave(int ptr, String fileName) native "_xlBookSave";
int _xlBookGetSheet(int ptr, int index) native "_xlBookGetSheet";
int _xlBookAddSheet(int ptr, String sheetName) native "_xlBookAddSheet";
String _xlBookErrorMessage(int ptr) native "_xlBookErrorMessage";

class XlBook {
  int ptr;
  XlBook() {
    ptr = _xlCreateBook();
  }

  @override
  String toString() {
    return 'XlBook{ptr: $ptr}';
  }
  void release() {
    _xlBookRelease(ptr);
  }
  void save(String fileName) {
    int res =  _xlBookSave(ptr, fileName);
    if (res == 0) {
      throw XlException(errorMessage());
    }
  }
  String errorMessage() {
    return _xlBookErrorMessage(ptr);
  }
  XlSheet getSheet(int index) {
    int sheetPointer =  _xlBookGetSheet(ptr, index);
    if (sheetPointer == 0) {
      throw XlException(errorMessage());
    }
    return XlSheet(sheetPointer,this);
  }
  XlSheet addSheet(String sheetName) {
    int sheetPointer =  _xlBookAddSheet(ptr, sheetName);
    if (sheetPointer == 0) {
      throw XlException(errorMessage());
    }
    return XlSheet(sheetPointer,this);
  }

}
