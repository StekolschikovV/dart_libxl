#include <cstdlib>
#include "libxl.h"
#include <iostream>
#include <string.h>
#include <dart_api.h>
#include "book.g.cc"
#include "format.g.cc"
#include "font.g.cc"
#include "sheet.g.cc"

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

Dart_NativeFunction ResolveName(Dart_Handle name, int argc, bool* auto_setup_scope) {
  if (!Dart_IsString(name)) return NULL;
  const char* cname;
  HandleError(Dart_StringToCString(name, &cname));
  Dart_NativeFunction result = sheetResolver(cname);
  if (result != NULL) {
    return result;
  }
  result = bookResolver(cname);
  if (result != NULL) {
    return result;
  }
  result = formatResolver(cname);
  if (result != NULL) {
    return result;
  }
  result = fontResolver(cname);
  if (result != NULL) {
    return result;
  }
}
