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

void _xlSheetSetCol(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &colFirst);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &colLast);
  double width;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 3), &width);
  int64_t hidden;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &hidden);
  xlSheetSetCol((SheetHandle) ptr, colFirst, colLast, width, (FormatHandle) 0, hidden);
  Dart_Handle result = Dart_NewBoolean(1 != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetRow(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  double height;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 2), &height);
  int64_t hidden;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &hidden);
  xlSheetSetRow((SheetHandle) ptr, row, height, (FormatHandle) 0, hidden);
  Dart_Handle result = Dart_NewBoolean(1 != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetRowHidden(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  bool hidden;
  Dart_BooleanValue(Dart_GetNativeArgument(args, 2), &hidden);
  bool res = xlSheetSetRowHidden((SheetHandle) ptr, row, hidden);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetColHidden(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &col);
  int64_t hidden;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &hidden);
  int res = xlSheetSetColHidden((SheetHandle) ptr, col, hidden);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetMerge(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t rowFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rowFirst);
  int64_t rowLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &rowLast);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &colFirst);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &colLast);
  int res = xlSheetSetMerge((SheetHandle) ptr, rowFirst, rowLast, colFirst, colLast);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetPicture(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  int64_t pictureId;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &pictureId);
  double scale;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 4), &scale);
  int64_t offset_x;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 5), &offset_x);
  int64_t offset_y;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 6), &offset_y);
  int64_t pos;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 7), &pos);
  xlSheetSetPicture((SheetHandle) ptr, row, col, pictureId, scale, offset_x, offset_y, pos);
  Dart_Handle result = Dart_NewBoolean(1 != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetPicture2(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  int64_t pictureId;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &pictureId);
  int64_t width;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &width);
  int64_t height;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 5), &height);
  int64_t offset_x;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 6), &offset_x);
  int64_t offset_y;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 7), &offset_y);
  xlSheetSetPicture((SheetHandle) ptr, row, col, pictureId, width, height, offset_x, offset_y);
  Dart_Handle result = Dart_NewBoolean(1 != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetHorPageBreak(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t pageBreak;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &pageBreak);
  int res = xlSheetSetHorPageBreak((SheetHandle) ptr, row, pageBreak);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetVerPageBreak(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &col);
  int64_t pageBreak;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &pageBreak);
  int res = xlSheetSetVerPageBreak((SheetHandle) ptr, col, pageBreak);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSplit(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  xlSheetSplit((SheetHandle) ptr, row, col);
  Dart_Handle result = Dart_NewBoolean(1 != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetGroupRows(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t rowFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rowFirst);
  int64_t rowLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &rowLast);
  int64_t collapsed;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &collapsed);
  int res = xlSheetGroupRows((SheetHandle) ptr, rowFirst, rowLast, collapsed);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetGroupCols(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &colFirst);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &colLast);
  int64_t collapsed;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &collapsed);
  int res = xlSheetGroupCols((SheetHandle) ptr, colFirst, colLast, collapsed);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetGroupSummaryBelow(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t below;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &below);
  xlSheetSetGroupSummaryBelow((SheetHandle) ptr, below);
  Dart_Handle result = Dart_NewBoolean(1 != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetGroupSummaryRight(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t right;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &right);
  xlSheetSetGroupSummaryRight((SheetHandle) ptr, right);
  Dart_Handle result = Dart_NewBoolean(1 != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetClear(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t rowFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rowFirst);
  int64_t rowLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &rowLast);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &colFirst);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &colLast);
  xlSheetClear((SheetHandle) ptr, rowFirst, rowLast, colFirst, colLast);
  Dart_Handle result = Dart_NewBoolean(1 != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetInsertRow(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t rowFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rowFirst);
  int64_t rowLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &rowLast);
  int res = xlSheetInsertRow((SheetHandle) ptr, rowFirst, rowLast);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetInsertCol(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &colFirst);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &colLast);
  xlSheetInsertCol((SheetHandle) ptr, colFirst, colLast);
  Dart_Handle result = Dart_NewBoolean(1 != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetRemoveRow(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t rowFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rowFirst);
  int64_t rowLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &rowLast);
  int res = xlSheetRemoveRow((SheetHandle) ptr, rowFirst, rowLast);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetRemoveCol(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &colFirst);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &colLast);
  int res = xlSheetRemoveCol((SheetHandle) ptr, colFirst, colLast);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetCopyCell(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t rowSrc;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rowSrc);
  int64_t colSrc;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &colSrc);
  int64_t rowDst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &rowDst);
  int64_t colDst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &colDst);
  int res = xlSheetCopyCell((SheetHandle) ptr, rowSrc, colSrc, rowDst, colDst);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetDisplayGridlines(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t show;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &show);
  xlSheetSetDisplayGridlines((SheetHandle) ptr, show);
  Dart_Handle result = Dart_NewBoolean(1 != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}


void _xlSheetSetPrintGridlines(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t print;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &print);
  xlSheetSetPrintGridlines((SheetHandle) ptr, print);
  Dart_Handle result = Dart_NewBoolean(1 != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetZoom(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t zoom;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &zoom);
  xlSheetSetZoom((SheetHandle) ptr, zoom);
  Dart_Handle result = Dart_NewBoolean(1 != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetPrintZoom(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t zoom;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &zoom);
  xlSheetSetPrintZoom((SheetHandle) ptr, zoom);
  Dart_Handle result = Dart_NewBoolean(1 != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetPrintFit(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t wPages;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &wPages);
  int64_t hPages;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &hPages);
  xlSheetSetPrintFit((SheetHandle) ptr, wPages, hPages);
  Dart_Handle result = Dart_NewBoolean(1 != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetLandscape(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t landscape;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &landscape);
  xlSheetSetLandscape((SheetHandle) ptr, landscape);
  Dart_Handle result = Dart_NewBoolean(1 != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetPaper(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t paper;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &paper);
  xlSheetSetPaper((SheetHandle) ptr, paper);
  Dart_Handle result = Dart_NewBoolean(1 != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetHeader(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  const char*  header;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &header);
  double margin;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 2), &margin);
  int res = xlSheetSetHeader((SheetHandle) ptr, header, margin);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetFooter(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  const char*  footer;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &footer);
  double margin;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 2), &margin);
  int res = xlSheetSetFooter((SheetHandle) ptr, footer, margin);
  Dart_Handle result = Dart_NewBoolean(res != 0);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetHCenter(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t ptr;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &ptr);
  int64_t  hCenter;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &hCenter);
  xlSheetSetHCenter((SheetHandle) ptr, hCenter);
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
  if (strcmp("_xlSheetSetCol", cname) == 0) result = _xlSheetSetCol;
  if (strcmp("_xlSheetSetRow", cname) == 0) result = _xlSheetSetRow;
  if (strcmp("_xlSheetSetRowHidden", cname) == 0) result = _xlSheetSetRowHidden;
  if (strcmp("_xlSheetSetColHidden", cname) == 0) result = _xlSheetSetColHidden;
  if (strcmp("_xlSheetSetMerge", cname) == 0) result = _xlSheetSetMerge;
  if (strcmp("_xlSheetSetPicture", cname) == 0) result = _xlSheetSetPicture;
  if (strcmp("_xlSheetSetPicture2", cname) == 0) result = _xlSheetSetPicture2;
  if (strcmp("_xlSheetSetHorPageBreak", cname) == 0) result = _xlSheetSetHorPageBreak;
  if (strcmp("_xlSheetSetVerPageBreak", cname) == 0) result = _xlSheetSetVerPageBreak;
  if (strcmp("_xlSheetSplit", cname) == 0) result = _xlSheetSplit;
  if (strcmp("_xlSheetGroupRows", cname) == 0) result = _xlSheetGroupRows;
  if (strcmp("_xlSheetGroupCols", cname) == 0) result = _xlSheetGroupCols;
  if (strcmp("_xlSheetSetGroupSummaryBelow", cname) == 0) result = _xlSheetSetGroupSummaryBelow;
  if (strcmp("_xlSheetSetGroupSummaryRight", cname) == 0) result = _xlSheetSetGroupSummaryRight;
  if (strcmp("_xlSheetClear", cname) == 0) result = _xlSheetClear;
  if (strcmp("_xlSheetInsertRow", cname) == 0) result = _xlSheetInsertRow;
  if (strcmp("_xlSheetInsertCol", cname) == 0) result = _xlSheetInsertCol;
  if (strcmp("_xlSheetRemoveRow", cname) == 0) result = _xlSheetRemoveRow;
  if (strcmp("_xlSheetRemoveCol", cname) == 0) result = _xlSheetRemoveCol;
  if (strcmp("_xlSheetCopyCell", cname) == 0) result = _xlSheetCopyCell;
  if (strcmp("_xlSheetSetDisplayGridlines", cname) == 0) result = _xlSheetSetDisplayGridlines;
  if (strcmp("_xlSheetSetPrintGridlines", cname) == 0) result = _xlSheetSetPrintGridlines;
  if (strcmp("_xlSheetSetZoom", cname) == 0) result = _xlSheetSetZoom;
  if (strcmp("_xlSheetSetPrintZoom", cname) == 0) result = _xlSheetSetPrintZoom;
  if (strcmp("_xlSheetSetPrintFit", cname) == 0) result = _xlSheetSetPrintFit;
  if (strcmp("_xlSheetSetLandscape", cname) == 0) result = _xlSheetSetLandscape;
  if (strcmp("_xlSheetSetPaper", cname) == 0) result = _xlSheetSetPaper;
  if (strcmp("_xlSheetSetHeader", cname) == 0) result = _xlSheetSetHeader;
  if (strcmp("_xlSheetSetFooter", cname) == 0) result = _xlSheetSetFooter;
  if (strcmp("_xlSheetSetHCenter", cname) == 0) result = _xlSheetSetHCenter;

  return result;
}
