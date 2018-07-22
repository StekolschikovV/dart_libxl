#include <cstdlib>
#include "libxl.h"
#include <iostream>
#include <string.h>
#include <dart_api.h>
using namespace libxl;
// Forward declaration of ResolveName function.
Dart_NativeFunction ResolveName(Dart_Handle name, int argc, bool* auto_setup_scope);

// The name of the initialization function is the extension name followed
// by _Init.
DART_EXPORT Dart_Handle libxl_ext_Init(Dart_Handle parent_library) {
  if (Dart_IsError(parent_library)) return parent_library;

  Dart_Handle result_code =
      Dart_SetNativeResolver(parent_library, ResolveName, NULL);
  if (Dart_IsError(result_code)) return result_code;

  return Dart_Null();
}
//
Dart_Handle HandleError(Dart_Handle handle) {
 if (Dart_IsError(handle)) Dart_PropagateError(handle);
 return handle;
}

void XlCreateBook(Dart_NativeArguments args) {
  Dart_EnterScope();
  Book *book = xlCreateBook();
  Dart_Handle result = Dart_NewInteger((int64_t)book);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}
void BookSave(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  const char* fileName;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &fileName);
  Book *book = reinterpret_cast<Book*>(ptr);
  bool res = book->save(fileName);
  Dart_Handle result = Dart_NewBoolean(res);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}
void BookRelease(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  Book *book = reinterpret_cast<Book*>(ptr);
  book->release();
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}
void BookAddSheet(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  Book *book = reinterpret_cast<Book*>(ptr);
  const char* sheetName;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &sheetName);
  Sheet *sheet = book->addSheet(sheetName);
  Dart_Handle result = Dart_NewInteger((int64_t)sheet);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}
void BookGetSheet(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  Book *book = reinterpret_cast<Book*>(ptr);
  int64_t index;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &index);
  Sheet *sheet = book->getSheet(index);
  Dart_Handle result = Dart_NewInteger((int64_t)sheet);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}
void BookErrorMessage(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  Book *book = reinterpret_cast<Book*>(ptr);
  const char* errorMessage = book->errorMessage();
  Dart_Handle result = Dart_NewStringFromCString(errorMessage);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void SheetWriteStr(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  Sheet *sheet = reinterpret_cast<Sheet*>(ptr);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  const char* value;
  Dart_StringToCString(Dart_GetNativeArgument(args, 3), &value);
  //bool xlResult = sheet->writeStr(row, col, "Hello world");

  bool xlResult = sheet->writeStr(row, col, value);
  Dart_Handle result = Dart_NewBoolean(xlResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}
Dart_NativeFunction ResolveName(Dart_Handle name, int argc, bool* auto_setup_scope) {
  if (!Dart_IsString(name)) return NULL;
  Dart_NativeFunction result = NULL;
  const char* cname;
  HandleError(Dart_StringToCString(name, &cname));

  if (strcmp("XlCreateBook", cname) == 0) result = XlCreateBook;
  if (strcmp("BookRelease", cname) == 0) result = BookRelease;
  if (strcmp("BookSave", cname) == 0) result = BookSave;
  if (strcmp("BookGetSheet", cname) == 0) result = BookGetSheet;
  if (strcmp("BookAddSheet", cname) == 0) result = BookAddSheet;
  if (strcmp("BookErrorMessage", cname) == 0) result = BookErrorMessage;
  if (strcmp("SheetWriteStr", cname) == 0) result = SheetWriteStr;
  return result;
}
