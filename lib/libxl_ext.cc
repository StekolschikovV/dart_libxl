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

// Native functions get their arguments in a Dart_NativeArguments structure
// and return their results with Dart_SetReturnValue.
void SayHello(Dart_NativeArguments arguments) {
//  Dart_EnterScope();

//Dart_Handle seed_object = HandleError(Dart_GetNativeArgument(arguments, 0));
  std::cout << "Hello, native world!!!" << std::endl;
    Book* book = xlCreateBook();
    std::cout << "I have greated book "<< book << std::endl;

//  std::cout << "---" << std::endl;
//      std::cout << arguments << std::endl;
//     std::cout << "---" << std::endl;
//
//  Dart_SetReturnValue(arguments, Dart_Null());
}
void XlCreateBook(Dart_NativeArguments args) {
  Dart_EnterScope();
  Book *book = xlCreateBook();
  // Return pointer to the object (memory address).
  Dart_Handle result = Dart_NewInteger((int64_t)book);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}
//void FuzzySearchSearch(Dart_NativeArguments args) {
//  Dart_EnterScope();
//  int64_t ptr;
//  const char* term;
//  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
//  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &term);
//  // Get the instance of FuzzySearch at this memory address.
//  FuzzySearch *fuzzy = reinterpret_cast<FuzzySearch*>ptr;
//  std::vector<char*> results = fuzzy->search(term);
//  [ 193 ]Writing Native Extensions for the Standalone Dart VM
//  Dart_Handle result = Dart_NewList(results.size());
//  for (int i = 0; i < results.size(); i++) {
//  Dart_ListSetAt(result, i,
//  Dart_NewStringFromCString(results.at(i)));
//  }
//  Dart_SetReturnValue(args, result);
//  Dart_ExitScope();
//}
void BookSave(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  const char* fileName;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &fileName);
  // Get the instance of FuzzySearch at this memory address.
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
  // Get the instance of FuzzySearch at this memory address.
  Book *book = reinterpret_cast<Book*>(ptr);
  book->release();
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}
Dart_NativeFunction ResolveName(Dart_Handle name, int argc, bool* auto_setup_scope) {

  // If we fail, we return NULL, and Dart throws an exception.
  if (!Dart_IsString(name)) return NULL;
  Dart_NativeFunction result = NULL;
  const char* cname;
  HandleError(Dart_StringToCString(name, &cname));

  if (strcmp("SayHello", cname) == 0) result = SayHello;
  if (strcmp("XlCreateBook", cname) == 0) result = XlCreateBook;
  if (strcmp("BookRelease", cname) == 0) result = BookRelease;
  if (strcmp("BookSave", cname) == 0) result = BookSave;
  return result;
}
