part of 'libxl_ext.dart';

class XlBook {
  final int ptr;

  XlBook() : ptr = _xlCreateBook();

  const XlBook.empty() : ptr = 0;

  @override
  String toString() {
    return 'XlBook{ptr: $ptr}';
  }

  void release() {
    _xlBookRelease(ptr);
  }

  void save(String fileName) {
    int res = _xlBookSave(ptr, fileName);
    if (res == 0) {
      throw XlException(errorMessage());
    }
  }

  String errorMessage() {
    return _xlBookErrorMessage(ptr);
  }

  XlSheet getSheet(int index) {
    int sheetPointer = _xlBookGetSheet(ptr, index);
    if (sheetPointer == 0) {
      throw XlException(errorMessage());
    }
    return XlSheet(sheetPointer, this);
  }

  XlSheet addSheet(String sheetName,
      [XlSheet initSheet = const XlSheet.empty()]) {
    int sheetPointer = _xlBookAddSheet(ptr, sheetName, initSheet.ptr);
    if (sheetPointer == 0) {
      throw XlException(errorMessage());
    }
    return XlSheet(sheetPointer, this);
  }

  XlFormat addFormat({XlFormat initFormat = const XlFormat.empty()}){
    var f = _xlBookAddFormat(ptr, initFormat.ptr);
    var format = new XlFormat(f, this);
    return format;
  }
}
