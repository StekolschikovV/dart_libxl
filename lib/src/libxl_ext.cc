#include <cstdlib>
#include "libxl.h"
#include <iostream>
#include <string.h>
#include <dart_api.h>



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

void _xlSheetWriteStr(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  const char* value;
  Dart_StringToCString(Dart_GetNativeArgument(args, 3), &value);
  int res = xlSheetWriteStr((SheetHandle) ptr, row, col, value, (FormatHandle) 0);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetWriteNum(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  double value;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 3), &value);
  int res = xlSheetWriteNum((SheetHandle) ptr, row, col, value, (FormatHandle) 0);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetWriteBool(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  bool value;
  Dart_BooleanValue(Dart_GetNativeArgument(args, 3), &value);
  int res = xlSheetWriteBool((SheetHandle) ptr, row, col, value, (FormatHandle) 0);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetWriteBlank(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  int res = xlSheetWriteBlank((SheetHandle) ptr, row, col, (FormatHandle) 0);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetWriteFormula(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  const char* value;
  Dart_StringToCString(Dart_GetNativeArgument(args, 3), &value);
  int res = xlSheetWriteFormula((SheetHandle) ptr, row, col, value, (FormatHandle) 0);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetWriteFormulaNum(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  const char* valueC;
  Dart_StringToCString(Dart_GetNativeArgument(args, 3), &valueC);
  double valueD;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 3), &valueD);
  int res = xlSheetWriteFormulaNum((SheetHandle) ptr, row, col, valueC,valueD, (FormatHandle) 0);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetWriteFormulaStr(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  const char* valueO;
  Dart_StringToCString(Dart_GetNativeArgument(args, 3), &valueO);
  const char* valueT;
  Dart_StringToCString(Dart_GetNativeArgument(args, 3), &valueT);
  int res = xlSheetWriteFormulaStr((SheetHandle) ptr, row, col, valueO, valueT, (FormatHandle) 0);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetWriteFormulaBool(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  const char* valueExpr;
  Dart_StringToCString(Dart_GetNativeArgument(args, 3), &valueExpr);
  bool valueD;
  Dart_BooleanValue(Dart_GetNativeArgument(args, 3), &valueD);
  int res = xlSheetWriteFormulaBool((SheetHandle) ptr, row, col, valueExpr, valueD, (FormatHandle) 0);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetWriteComment(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  const char* value;
  Dart_StringToCString(Dart_GetNativeArgument(args, 3), &value);
  const char* author;
  Dart_StringToCString(Dart_GetNativeArgument(args, 4), &author);
  int64_t width;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 5), &width);
  int64_t height;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 6), &height);
  xlSheetWriteComment((SheetHandle) ptr, row, col, value, author, width, height);
  Dart_Handle result = Dart_NewBoolean(1 != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}


void _xlSheetWriteError(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  int64_t code;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &code);
  xlSheetWriteError((SheetHandle) ptr, row, col, code, (FormatHandle) 0);
  Dart_Handle result = Dart_NewBoolean(1 != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

Dart_NativeFunction ResolveName(Dart_Handle name, int argc, bool* auto_setup_scope) {
  if (!Dart_IsString(name)) return NULL;
  Dart_NativeFunction result = NULL;
  const char* cname;
  HandleError(Dart_StringToCString(name, &cname));

  if (strcmp("_xlCreateBook", cname) == 0) result = _xlCreateBook;
  if (strcmp("_xlBookRelease", cname) == 0) result = _xlBookRelease;
  if (strcmp("_xlBookSave", cname) == 0) result = _xlBookSave;
  if (strcmp("_xlBookGetSheet", cname) == 0) result = _xlBookGetSheet;
  if (strcmp("_xlBookAddSheet", cname) == 0) result = _xlBookAddSheet;
  if (strcmp("_xlBookErrorMessage", cname) == 0) result = _xlBookErrorMessage;

  if (strcmp("_xlSheetWriteStr", cname) == 0) result = _xlSheetWriteStr;
  if (strcmp("_xlSheetWriteNum", cname) == 0) result = _xlSheetWriteNum;
  if (strcmp("_xlSheetWriteBool", cname) == 0) result = _xlSheetWriteBool;
  if (strcmp("_xlSheetWriteBlank", cname) == 0) result = _xlSheetWriteBlank;
  if (strcmp("_xlSheetWriteFormula", cname) == 0) result = _xlSheetWriteFormula;
  if (strcmp("_xlSheetWriteFormulaNum", cname) == 0) result = _xlSheetWriteFormulaNum;
  if (strcmp("_xlSheetWriteFormulaStr", cname) == 0) result = _xlSheetWriteFormulaStr;
  if (strcmp("_xlSheetWriteFormulaBool", cname) == 0) result = _xlSheetWriteFormulaBool;
  if (strcmp("_xlSheetWriteComment", cname) == 0) result = _xlSheetWriteComment;
  if (strcmp("_xlSheetWriteError", cname) == 0) result = _xlSheetWriteError;

  return result;
}
