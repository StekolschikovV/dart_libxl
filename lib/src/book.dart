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

  /// Saves current workbook into the file.
  void save(String fileName) {
    int res = _xlBookSave(ptr, fileName);
    if (res == 0) {
      throw XlException(errorMessage());
    }
  }

  String errorMessage() {
    return _xlBookErrorMessage(ptr);
  }

  /// Gets pointer to a sheet with specified index.
  XlSheet getSheet(int index) {
    int sheetPointer = _xlBookGetSheet(ptr, index);
    if (sheetPointer == null) {
      throw XlException(errorMessage());
    }
    return XlSheet(sheetPointer, this);
  }

  /// Adds a new sheet to this book, returns the sheet handle. Set initSheet to 0 if you wish to add a new empty sheet or use existing sheet's handle for copying. Note initSheet must be only from this book.
  XlSheet addSheet(String sheetName,
  {XlSheet initSheet = const XlSheet.empty()}) {
    int sheetPointer = _xlBookAddSheet(ptr, sheetName, initSheet.ptr);
    if (sheetPointer == 0) {
      throw XlException(errorMessage());
    }
    return XlSheet(sheetPointer, this);
  }

  /// Adds a new format to the workbook, initial parameters can be copied from other format.
  XlFormat addFormat({XlFormat initFormat = const XlFormat.empty()}) {
    var f = _xlBookAddFormat(ptr, initFormat.ptr);
    return new XlFormat(f, this);
  }

  /// Create a xml book instance for xlsx format. This function should be called first for receiving a book handler.
  int createXMLBook() {
    return _xlCreateXMLBook();
  }

  /// Loads an entire file into memory. Returns 0 if error occurs.
  void load(String filename) {
    var res = _xlBookLoad(ptr, filename);
    if (res == 0) {
      throw XlException(errorMessage());
    }
  }

  /// Loads an entrire file into memory using a temporary file for reducing memory consumption.
  void loadUsingTempFile(String filename, String tempFile) {
    var res = _xlBookLoadUsingTempFile(ptr, filename, tempFile);
    if (res == 0) {
      throw XlException(errorMessage());
    }
  }

  /// Saves current workbook into the file with using a temporary file for reducing memory consumption.
  void saveUsingTempFile(String filename, int useTempFile) {
    var res = _xlBookSaveUsingTempFile(ptr, filename, useTempFile);
    if (res == 0) {
      throw XlException(errorMessage());
    }
  }

  /// Loads a file only with specified sheet index and row range into memory.
  void loadPartially(
      String filename, int sheetIndex, int firstRow, int lastRow) {
    var res =
        _xlBookLoadPartially(ptr, filename, sheetIndex, firstRow, lastRow);
    if (res == 0) {
      throw XlException(errorMessage());
    }
  }

  /// Loads a file only with specified sheet index and row range into memory with using a temporary file for reducing memory consumption.
  void loadPartiallyUsingTempFile(String filename, int sheetIndex, int firstRow,
      int lastRow, String tempFile) {
    var res = _xlBookLoadPartiallyUsingTempFile(
        ptr, filename, sheetIndex, firstRow, lastRow, tempFile);
    if (res == 0) {
      throw XlException(errorMessage());
    }
  }

  /// ???
  void xlBookLoadWithoutEmptyCells(String filename) {
    var res = _xlBookLoadWithoutEmptyCells(ptr, filename);
    if (res == 0) {
      throw XlException(errorMessage());
    }
  }

  /// Inserts a new sheet to this book at position index, returns the sheet handle. Set initSheet to 0 if you wish to add a new empty sheet or use existing sheet's handle for copying. Note initSheet must be only from this book.
  void insertSheet(int index, String name, int initSheet) {
    var res = _xlBookInsertSheet(ptr, index, name, initSheet);
    if (res == 0) {
      throw XlException(errorMessage());
    }
  }

  /// Returns type of sheet with specified index.
  int type(int index) {
    return _xlBookSheetType(ptr, index);
  }

  /// Takes a sheet with srcIndex and insert it in front of a sheet with dstIndex.
  void moveSheet(int srcIndex, int dstIndex) {
    var res = _xlBookMoveSheet(ptr, srcIndex, dstIndex);
    if (res == 0) {
      throw XlException(errorMessage());
    }
  }

  /// Deletes a sheet with specified index.
  void delSheet(int index) {
    var res = _xlBookDelSheet(ptr, index);
    if (res == 0) {
      throw XlException(errorMessage());
    }
  }

  /// Returns a number of sheets in this book.
  int count() {
    return _xlBookSheetCount(ptr);
  }

  /// Adds a new font to the workbook, initial parameters can be copied from other font.
  XlFont addFont({XlFont initFont = const XlFont.empty()}) {
    var res = _xlBookAddFont(ptr, initFont.ptr  );
    if (res == 0) {
      throw XlException(errorMessage());
    }
    return new XlFont(res, this);
  }

  /// Adds a new custom number format to the workbook. The format string customNumFormat indicates how to format and render the numeric value of a cell. See custom format strings guidelines. Returns the custom format identifier.
   addCustomNumFormat(String customNumFormat) {
    var res = _xlBookAddCustomNumFormat(ptr, customNumFormat);
    if (res == 0) {
      throw XlException(errorMessage());
    }
    return res;
  }

  NumFormat getCustomNumFormat(String customNumFormat){
    return NumFormat.CUSTOM(addCustomNumFormat("### ### ###.###"));
  }

  /// Returns a custom format string for specified custom format identifier fmt.
  String customNumFormat(int fmt) {
    var res = _xlBookCustomNumFormat(ptr, fmt);
    if (res == null) {
      throw XlException(errorMessage());
    }
    return res;
  }

  /// Returns a format with defined index.
  int format(int index) {
    return _xlBookFormat(ptr, index);
  }

  /// Returns a number of formats in this book.
  int formatSize() {
    return _xlBookFormatSize(ptr);
  }

  /// Returns a font with defined index.
  int font(int index) {
    return _xlBookFont(ptr, index);
  }

  /// Returns a number of fonts in this book.
  int fontSize() {
    return _xlBookFontSize(ptr);
  }

  /// Packs date and time information into double type.
  num datePack(
      int year, int month, int day, int hour, int min, int sec, int msec) {
    return _xlBookDatePack(ptr, year, month, day, hour, min, sec, msec);
  }

  /// Packs red, green and blue components in color value.
  int colorPack(int red, int green, int blue) {
    return _xlBookColorPack(ptr, red, green, blue);
  }

  /// Returns an active sheet index in this workbook.
  int activeSheet() {
    return _xlBookActiveSheet(ptr);
  }

  /// Sets an active sheet index in this workbook.
  void setActiveSheet(int index) {
    _xlBookSetActiveSheet(ptr, index);
  }

  /// Returns a number of pictures in this workbook.
  int pictureSize() {
    return _xlBookPictureSize(ptr);
  }

  /// Adds a picture to the workbook. Returns a picture identifier. Supports BMP, DIB, PNG, JPG and WMF picture formats.
  int addPicture(String filename) {
    var res = _xlBookAddPicture(ptr, filename);
    if (res == -1) {
      throw XlException(errorMessage());
    }
    return res;
  }

  ///  Adds a picture to the workbook as link (only for xlsx files): insert = false - stores only a link to file; insert = true - stores a picture and a link to file. Returns a picture identifier. Supports BMP, DIB, PNG, JPG and WMF picture formats.
  int addPictureAsLink(String filename, int insert) {
    var res = _xlBookAddPictureAsLink(ptr, filename, insert);
    if (res == -1) {
      throw XlException(errorMessage());
    }
    return res;
  }

  /// Sets a default font name and size for this workbook.
  void setDefaultFont(String fontName, int fontSize) {
    _xlBookSetDefaultFont(ptr, fontName, fontSize);
  }

  /// Returns whether the R1C1 reference mode is active.
  int refR1C1() {
    return _xlBookRefR1C1(ptr);
  }

  /// ets the R1C1 reference mode: 1 - active, 0 - not active.
  void setRefR1C1(int refR1C1) {
    _xlBookSetRefR1C1(ptr, refR1C1);
  }

  /// Sets customer's license key.
  void setKey(String name, String key) {
    _xlBookSetKey(ptr, name, key);
  }

  /// Returns whether the RGB mode is active: 1 - RGB mode, 0 - Index mode.
  int rgbMode() {
    return _xlBookRgbMode(ptr);
  }

  /// Sets a RGB mode: 1 - RGB mode, 0 - Index mode (default).
  void setRgbMode(int rgbMode) {
    _xlBookSetRgbMode(ptr, rgbMode);
  }

  /// ???
  int version() {
    return _xlBookVersion(ptr);
  }

  /// Returns BIFF version of binary file. Used for xls format only.
  int biffVersion() {
    return _xlBookBiffVersion(ptr);
  }

  /// Returns whether the 1904 date system is active: 1 - 1904 date system, 0 - 1900 date system.
  int isDate1904() {
    return _xlBookIsDate1904(ptr);
  }

  /// Sets the date system mode: 1 - 1904 date system, 0 - 1900 date system (default). In the 1900 date base system, the lower limit is January 1, 1900, which has serial value 1. In the 1904 date base system, the lower limit is January 1, 1904, which has serial value 0.
  void setDate1904(int date1904) {
    _xlBookSetDate1904(ptr, date1904);
  }

  /// Returns whether the workbook is template: 1 - workbook is template, 0 - workbook is not template.
  int isTemplate() {
    return _xlBookIsTemplate(ptr);
  }

  /// Sets the template flag: 1 - workbook is template, 0 - workbook is not template (default). It allows to change type of file from a template file (xlt and xltx) to a regular file (xls and xlsx) and vice versa.
  void setTemplate(int tmpl) {
    _xlBookSetTemplate(ptr, tmpl);
  }

  /// Sets the locale for this library. The locale argument is the same as the locale argument in setlocale() function from C Run-Time Library. For example, value "en_US.UTF-8" allows to use non-ascii characters in Linux or Mac. It accepts the special value "UTF-8" for using UTF-8 character encoding in Windows and other operating systems. It has no effect for unicode projects with wide strings (with _UNICODE preprocessor variable). Returns 1 if a valid locale argument is given.
  int setLocale(String locale) {
    return _xlBookSetLocale(ptr, locale);
  }
}
