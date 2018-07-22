import 'dart-ext:libxl_ext';

int _xlCreateBook() native "XlCreateBook";
int _BookRelease(int ptr) native "BookRelease";
bool _BookSave(int ptr, String fileName) native "BookSave";
int _BookGetSheet(int ptr, int index) native "BookGetSheet";
int _BookAddSheet(int ptr, String sheetName) native "BookAddSheet";
bool _SheetWriteStr(int ptr, int row, int col, String value) native "SheetWriteStr";
String _BookErrorMessage(int ptr) native "BookErrorMessage";

class XlException {
  String message;
  XlException(this.message);
  @override
  String toString() {
    return 'XlExceptioin{"$message"}';
  }
}


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
    _BookRelease(ptr);
  }
  void save(String fileName) {
    bool res =  _BookSave(ptr, fileName);
    if (!res) {
      throw XlException(errorMessage());
    }
  }
  String errorMessage() {
    return _BookErrorMessage(ptr);
  }
  XlSheet getSheet(int index) {
    int sheetPointer =  _BookGetSheet(ptr, index);
    if (sheetPointer == 0) {
      throw XlException(errorMessage());
    }
    return XlSheet(sheetPointer,this);
  }
  XlSheet addSheet(String sheetName) {
    int sheetPointer =  _BookAddSheet(ptr, sheetName);
    if (sheetPointer == 0) {
      throw XlException(errorMessage());
    }
    return XlSheet(sheetPointer,this);
  }

}
class XlSheet {
  int ptr;
  XlBook book;
  XlSheet(this.ptr, this.book);

  @override
  String toString() {
    return 'XlSheet{ptr: $ptr}';
  }

  writeStr(int row, int col, String value) {
    bool res = _SheetWriteStr(ptr, row, col, value);
    if (!res) {
      throw XlException(book.errorMessage());
    }
  }

}
