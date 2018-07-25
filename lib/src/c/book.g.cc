void _xlCreateBook(Dart_NativeArguments args) {
  Dart_EnterScope();
  BookHandle cResult = xlCreateBook();
  Dart_Handle result = Dart_NewInteger((int64_t) cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlCreateXMLBook(Dart_NativeArguments args) {
  Dart_EnterScope();
  BookHandle cResult = xlCreateXMLBook();
  Dart_Handle result = Dart_NewInteger((int64_t) cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookLoad(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* filename;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &filename);
  int cResult = xlBookLoad((BookHandle) handle, filename);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookSave(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* filename;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &filename);
  int cResult = xlBookSave((BookHandle) handle, filename);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookLoadUsingTempFile(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* filename;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &filename);
  const char* tempFile;
  Dart_StringToCString(Dart_GetNativeArgument(args, 2), &tempFile);
  int cResult = xlBookLoadUsingTempFile((BookHandle) handle, filename, tempFile);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookSaveUsingTempFile(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* filename;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &filename);
  int64_t useTempFile;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &useTempFile);
  int cResult = xlBookSaveUsingTempFile((BookHandle) handle, filename, useTempFile);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookLoadPartially(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* filename;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &filename);
  int64_t sheetIndex;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &sheetIndex);
  int64_t firstRow;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &firstRow);
  int64_t lastRow;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &lastRow);
  int cResult = xlBookLoadPartially((BookHandle) handle, filename, sheetIndex, firstRow, lastRow);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookLoadPartiallyUsingTempFile(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* filename;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &filename);
  int64_t sheetIndex;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &sheetIndex);
  int64_t firstRow;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &firstRow);
  int64_t lastRow;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &lastRow);
  const char* tempFile;
  Dart_StringToCString(Dart_GetNativeArgument(args, 5), &tempFile);
  int cResult = xlBookLoadPartiallyUsingTempFile((BookHandle) handle, filename, sheetIndex, firstRow, lastRow, tempFile);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookLoadWithoutEmptyCells(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* filename;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &filename);
  int cResult = xlBookLoadWithoutEmptyCells((BookHandle) handle, filename);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookLoadRaw(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* data;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &data);
  unsigned size;
  int cResult = xlBookLoadRaw((BookHandle) handle, data, size);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookLoadRawPartially(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* data;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &data);
  unsigned size;
  int64_t sheetIndex;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &sheetIndex);
  int64_t firstRow;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &firstRow);
  int64_t lastRow;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 5), &lastRow);
  int cResult = xlBookLoadRawPartially((BookHandle) handle, data, size, sheetIndex, firstRow, lastRow);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookSaveRaw(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char** data;
  unsigned* size;
  int cResult = xlBookSaveRaw((BookHandle) handle, data, size);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookAddSheet(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* name;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &name);
  int64_t initSheet;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &initSheet);
  SheetHandle cResult = xlBookAddSheet((BookHandle) handle, name, (SheetHandle) initSheet);
  Dart_Handle result = Dart_NewInteger((int64_t) cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookInsertSheet(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t index;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &index);
  const char* name;
  Dart_StringToCString(Dart_GetNativeArgument(args, 2), &name);
  int64_t initSheet;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &initSheet);
  SheetHandle cResult = xlBookInsertSheet((BookHandle) handle, index, name, (SheetHandle) initSheet);
  Dart_Handle result = Dart_NewInteger((int64_t) cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookGetSheet(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t index;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &index);
  SheetHandle cResult = xlBookGetSheet((BookHandle) handle, index);
  Dart_Handle result = Dart_NewInteger((int64_t) cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookSheetType(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t index;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &index);
  int cResult = xlBookSheetType((BookHandle) handle, index);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookMoveSheet(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t srcIndex;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &srcIndex);
  int64_t dstIndex;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &dstIndex);
  int cResult = xlBookMoveSheet((BookHandle) handle, srcIndex, dstIndex);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookDelSheet(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t index;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &index);
  int cResult = xlBookDelSheet((BookHandle) handle, index);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookSheetCount(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlBookSheetCount((BookHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookAddFormat(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t initFormat;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &initFormat);
  FormatHandle cResult = xlBookAddFormat((BookHandle) handle, (FormatHandle) initFormat);
  Dart_Handle result = Dart_NewInteger((int64_t) cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookAddFont(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t initFont;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &initFont);
  FontHandle cResult = xlBookAddFont((BookHandle) handle, (FontHandle) initFont);
  Dart_Handle result = Dart_NewInteger((int64_t) cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookAddCustomNumFormat(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* customNumFormat;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &customNumFormat);
  int cResult = xlBookAddCustomNumFormat((BookHandle) handle, customNumFormat);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookCustomNumFormat(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t fmt;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &fmt);
  const char* cResult = xlBookCustomNumFormat((BookHandle) handle, fmt);
  Dart_Handle result = Dart_NewStringFromCString(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookFormat(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t index;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &index);
  FormatHandle cResult = xlBookFormat((BookHandle) handle, index);
  Dart_Handle result = Dart_NewInteger((int64_t) cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookFormatSize(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlBookFormatSize((BookHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookFont(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t index;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &index);
  FontHandle cResult = xlBookFont((BookHandle) handle, index);
  Dart_Handle result = Dart_NewInteger((int64_t) cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookFontSize(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlBookFontSize((BookHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookDatePack(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t year;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &year);
  int64_t month;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &month);
  int64_t day;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &day);
  int64_t hour;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &hour);
  int64_t min;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 5), &min);
  int64_t sec;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 6), &sec);
  int64_t msec;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 7), &msec);
  double cResult = xlBookDatePack((BookHandle) handle, year, month, day, hour, min, sec, msec);
  Dart_Handle result = Dart_NewDouble(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookDateUnpack(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  double value;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 1), &value);
  int* year;
  int* month;
  int* day;
  int* hour;
  int* min;
  int* sec;
  int* msec;
  int cResult = xlBookDateUnpack((BookHandle) handle, value, year, month, day, hour, min, sec, msec);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookColorPack(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t red;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &red);
  int64_t green;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &green);
  int64_t blue;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &blue);
  int cResult = xlBookColorPack((BookHandle) handle, red, green, blue);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookColorUnpack(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t color;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &color);
  int* red;
  int* green;
  int* blue;
  xlBookColorUnpack((BookHandle) handle, color, red, green, blue);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlBookActiveSheet(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlBookActiveSheet((BookHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookSetActiveSheet(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t index;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &index);
  xlBookSetActiveSheet((BookHandle) handle, index);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlBookPictureSize(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlBookPictureSize((BookHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookGetPicture(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t index;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &index);
  const char** data;
  unsigned* size;
  int cResult = xlBookGetPicture((BookHandle) handle, index, data, size);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookAddPicture(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* filename;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &filename);
  int cResult = xlBookAddPicture((BookHandle) handle, filename);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookAddPicture2(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* data;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &data);
  unsigned size;
  int cResult = xlBookAddPicture2((BookHandle) handle, data, size);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookAddPictureAsLink(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* filename;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &filename);
  int64_t insert;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &insert);
  int cResult = xlBookAddPictureAsLink((BookHandle) handle, filename, insert);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookDefaultFont(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int* fontSize;
  const char* cResult = xlBookDefaultFont((BookHandle) handle, fontSize);
  Dart_Handle result = Dart_NewStringFromCString(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookSetDefaultFont(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* fontName;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &fontName);
  int64_t fontSize;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &fontSize);
  xlBookSetDefaultFont((BookHandle) handle, fontName, fontSize);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlBookRefR1C1(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlBookRefR1C1((BookHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookSetRefR1C1(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t refR1C1;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &refR1C1);
  xlBookSetRefR1C1((BookHandle) handle, refR1C1);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlBookSetKey(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* name;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &name);
  const char* key;
  Dart_StringToCString(Dart_GetNativeArgument(args, 2), &key);
  xlBookSetKey((BookHandle) handle, name, key);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlBookRgbMode(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlBookRgbMode((BookHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookSetRgbMode(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t rgbMode;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rgbMode);
  xlBookSetRgbMode((BookHandle) handle, rgbMode);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlBookVersion(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlBookVersion((BookHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookBiffVersion(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlBookBiffVersion((BookHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookIsDate1904(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlBookIsDate1904((BookHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookSetDate1904(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t date1904;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &date1904);
  xlBookSetDate1904((BookHandle) handle, date1904);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlBookIsTemplate(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlBookIsTemplate((BookHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookSetTemplate(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t tmpl;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &tmpl);
  xlBookSetTemplate((BookHandle) handle, tmpl);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlBookSetLocale(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* locale;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &locale);
  int cResult = xlBookSetLocale((BookHandle) handle, locale);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookErrorMessage(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* cResult = xlBookErrorMessage((BookHandle) handle);
  Dart_Handle result = Dart_NewStringFromCString(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookRelease(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  xlBookRelease((BookHandle) handle);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}



Dart_NativeFunction bookResolver(const char* cname) {
  Dart_NativeFunction result = NULL;
  if (strcmp("_xlCreateBook", cname) == 0) result = _xlCreateBook;
  if (strcmp("_xlCreateXMLBook", cname) == 0) result = _xlCreateXMLBook;
  if (strcmp("_xlBookLoad", cname) == 0) result = _xlBookLoad;
  if (strcmp("_xlBookSave", cname) == 0) result = _xlBookSave;
  if (strcmp("_xlBookLoadUsingTempFile", cname) == 0) result = _xlBookLoadUsingTempFile;
  if (strcmp("_xlBookSaveUsingTempFile", cname) == 0) result = _xlBookSaveUsingTempFile;
  if (strcmp("_xlBookLoadPartially", cname) == 0) result = _xlBookLoadPartially;
  if (strcmp("_xlBookLoadPartiallyUsingTempFile", cname) == 0) result = _xlBookLoadPartiallyUsingTempFile;
  if (strcmp("_xlBookLoadWithoutEmptyCells", cname) == 0) result = _xlBookLoadWithoutEmptyCells;
  if (strcmp("_xlBookAddSheet", cname) == 0) result = _xlBookAddSheet;
  if (strcmp("_xlBookInsertSheet", cname) == 0) result = _xlBookInsertSheet;
  if (strcmp("_xlBookGetSheet", cname) == 0) result = _xlBookGetSheet;
  if (strcmp("_xlBookSheetType", cname) == 0) result = _xlBookSheetType;
  if (strcmp("_xlBookMoveSheet", cname) == 0) result = _xlBookMoveSheet;
  if (strcmp("_xlBookDelSheet", cname) == 0) result = _xlBookDelSheet;
  if (strcmp("_xlBookSheetCount", cname) == 0) result = _xlBookSheetCount;
  if (strcmp("_xlBookAddFormat", cname) == 0) result = _xlBookAddFormat;
  if (strcmp("_xlBookAddFont", cname) == 0) result = _xlBookAddFont;
  if (strcmp("_xlBookAddCustomNumFormat", cname) == 0) result = _xlBookAddCustomNumFormat;
  if (strcmp("_xlBookCustomNumFormat", cname) == 0) result = _xlBookCustomNumFormat;
  if (strcmp("_xlBookFormat", cname) == 0) result = _xlBookFormat;
  if (strcmp("_xlBookFormatSize", cname) == 0) result = _xlBookFormatSize;
  if (strcmp("_xlBookFont", cname) == 0) result = _xlBookFont;
  if (strcmp("_xlBookFontSize", cname) == 0) result = _xlBookFontSize;
  if (strcmp("_xlBookDatePack", cname) == 0) result = _xlBookDatePack;
  if (strcmp("_xlBookColorPack", cname) == 0) result = _xlBookColorPack;
  if (strcmp("_xlBookActiveSheet", cname) == 0) result = _xlBookActiveSheet;
  if (strcmp("_xlBookSetActiveSheet", cname) == 0) result = _xlBookSetActiveSheet;
  if (strcmp("_xlBookPictureSize", cname) == 0) result = _xlBookPictureSize;
  if (strcmp("_xlBookAddPicture", cname) == 0) result = _xlBookAddPicture;
  if (strcmp("_xlBookAddPictureAsLink", cname) == 0) result = _xlBookAddPictureAsLink;
  if (strcmp("_xlBookSetDefaultFont", cname) == 0) result = _xlBookSetDefaultFont;
  if (strcmp("_xlBookRefR1C1", cname) == 0) result = _xlBookRefR1C1;
  if (strcmp("_xlBookSetRefR1C1", cname) == 0) result = _xlBookSetRefR1C1;
  if (strcmp("_xlBookSetKey", cname) == 0) result = _xlBookSetKey;
  if (strcmp("_xlBookRgbMode", cname) == 0) result = _xlBookRgbMode;
  if (strcmp("_xlBookSetRgbMode", cname) == 0) result = _xlBookSetRgbMode;
  if (strcmp("_xlBookVersion", cname) == 0) result = _xlBookVersion;
  if (strcmp("_xlBookBiffVersion", cname) == 0) result = _xlBookBiffVersion;
  if (strcmp("_xlBookIsDate1904", cname) == 0) result = _xlBookIsDate1904;
  if (strcmp("_xlBookSetDate1904", cname) == 0) result = _xlBookSetDate1904;
  if (strcmp("_xlBookIsTemplate", cname) == 0) result = _xlBookIsTemplate;
  if (strcmp("_xlBookSetTemplate", cname) == 0) result = _xlBookSetTemplate;
  if (strcmp("_xlBookSetLocale", cname) == 0) result = _xlBookSetLocale;
  if (strcmp("_xlBookErrorMessage", cname) == 0) result = _xlBookErrorMessage;
  if (strcmp("_xlBookRelease", cname) == 0) result = _xlBookRelease;
  return result;
}
