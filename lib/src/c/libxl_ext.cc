#include <cstdlib>
#include "libxl.h"
#include <iostream>
#include <string.h>
#include <dart_api.h>
#include "book.g.cc"

//      std::cout << "!!!!\n";
//      std::cout << value << "\n";
//      std::cout << "!!!!\n";

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
Dart_NativeFunction resolver(const char* cname) {
  Dart_NativeFunction result = NULL;
  if (strcmp("_xlCreateBook", cname) == 0) result = _xlCreateBook;
  if (strcmp("_xlBookRelease", cname) == 0) result = _xlBookRelease;
  if (strcmp("_xlBookSave", cname) == 0) result = _xlBookSave;
  if (strcmp("_xlBookGetSheet", cname) == 0) result = _xlBookGetSheet;
  if (strcmp("_xlBookAddSheet", cname) == 0) result = _xlBookAddSheet;
  if (strcmp("_xlBookErrorMessage", cname) == 0) result = _xlBookErrorMessage;
  if (strcmp("_xlSheetWriteStr", cname) == 0) result = _xlSheetWriteStr;
  if (strcmp("_xlSheetWriteNum", cname) == 0) result = _xlSheetWriteNum;
  return result;
}
Dart_NativeFunction ResolveName(Dart_Handle name, int argc, bool* auto_setup_scope) {
  if (!Dart_IsString(name)) return NULL;
  const char* cname;
  HandleError(Dart_StringToCString(name, &cname));
  return resolver(cname);
}
