void _xlCreateBook(Dart_NativeArguments args) {
  Dart_EnterScope();
  BookHandle book = xlCreateBook();
  Dart_Handle result = Dart_NewInteger((int64_t)book);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}
void _xlBookSave(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  const char* fileName;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &fileName);
//  Book *book = reinterpret_cast<Book*>(ptr);
//  bool res = book->save(fileName);
  int res = xlBookSave((BookHandle) ptr, fileName);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}
void _xlBookRelease(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  xlBookRelease((BookHandle) ptr);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}
void _xlBookAddSheet(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  const char* sheetName;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &sheetName);
  int64_t initSheet;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &initSheet);
  SheetHandle sheet = xlBookAddSheet((BookHandle) ptr, sheetName, (SheetHandle) initSheet);
  Dart_Handle result = Dart_NewInteger((int64_t)sheet);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}
void _xlBookGetSheet(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t index;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &index);
  SheetHandle sheet = xlBookGetSheet((BookHandle) ptr, index);
  Dart_Handle result = Dart_NewInteger((int64_t)sheet);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlBookErrorMessage(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  const char* errorMessage = xlBookErrorMessage((BookHandle) ptr);
  Dart_Handle result = Dart_NewStringFromCString(errorMessage);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}
