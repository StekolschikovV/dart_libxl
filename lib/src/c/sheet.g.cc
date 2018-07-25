void _xlSheetCellType(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  int cResult = xlSheetCellType((SheetHandle) handle, row, col);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetIsFormula(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  int cResult = xlSheetIsFormula((SheetHandle) handle, row, col);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetCellFormat(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  FormatHandle cResult = xlSheetCellFormat((SheetHandle) handle, row, col);
  Dart_Handle result = Dart_NewInteger((int64_t) cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetCellFormat(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  int64_t format;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &format);
  xlSheetSetCellFormat((SheetHandle) handle, row, col, (FormatHandle) format);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetReadStr(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  FormatHandle* format;
  const char* cResult = xlSheetReadStr((SheetHandle) handle, row, col, format);
  Dart_Handle result = Dart_NewStringFromCString(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetWriteStr(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  const char* value;
  Dart_StringToCString(Dart_GetNativeArgument(args, 3), &value);
  int64_t format;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &format);
  int cResult = xlSheetWriteStr((SheetHandle) handle, row, col, value, (FormatHandle) format);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetReadNum(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  FormatHandle* format;
  double cResult = xlSheetReadNum((SheetHandle) handle, row, col, format);
  Dart_Handle result = Dart_NewDouble(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetWriteNum(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  double value;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 3), &value);
  int64_t format;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &format);
  int cResult = xlSheetWriteNum((SheetHandle) handle, row, col, value, (FormatHandle) format);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetReadBool(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  FormatHandle* format;
  int cResult = xlSheetReadBool((SheetHandle) handle, row, col, format);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetWriteBool(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  int64_t value;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &value);
  int64_t format;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &format);
  int cResult = xlSheetWriteBool((SheetHandle) handle, row, col, value, (FormatHandle) format);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetReadBlank(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  FormatHandle* format;
  int cResult = xlSheetReadBlank((SheetHandle) handle, row, col, format);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetWriteBlank(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  int64_t format;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &format);
  int cResult = xlSheetWriteBlank((SheetHandle) handle, row, col, (FormatHandle) format);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetReadFormula(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  FormatHandle* format;
  const char* cResult = xlSheetReadFormula((SheetHandle) handle, row, col, format);
  Dart_Handle result = Dart_NewStringFromCString(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetWriteFormula(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  const char* value;
  Dart_StringToCString(Dart_GetNativeArgument(args, 3), &value);
  int64_t format;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &format);
  int cResult = xlSheetWriteFormula((SheetHandle) handle, row, col, value, (FormatHandle) format);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetWriteFormulaNum(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  const char* expr;
  Dart_StringToCString(Dart_GetNativeArgument(args, 3), &expr);
  double value;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 4), &value);
  int64_t format;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 5), &format);
  int cResult = xlSheetWriteFormulaNum((SheetHandle) handle, row, col, expr, value, (FormatHandle) format);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetWriteFormulaStr(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  const char* expr;
  Dart_StringToCString(Dart_GetNativeArgument(args, 3), &expr);
  const char* value;
  Dart_StringToCString(Dart_GetNativeArgument(args, 4), &value);
  int64_t format;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 5), &format);
  int cResult = xlSheetWriteFormulaStr((SheetHandle) handle, row, col, expr, value, (FormatHandle) format);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetWriteFormulaBool(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  const char* expr;
  Dart_StringToCString(Dart_GetNativeArgument(args, 3), &expr);
  int64_t value;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &value);
  int64_t format;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 5), &format);
  int cResult = xlSheetWriteFormulaBool((SheetHandle) handle, row, col, expr, value, (FormatHandle) format);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetReadComment(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  const char* cResult = xlSheetReadComment((SheetHandle) handle, row, col);
  Dart_Handle result = Dart_NewStringFromCString(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetWriteComment(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
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
  xlSheetWriteComment((SheetHandle) handle, row, col, value, author, width, height);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetRemoveComment(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  xlSheetRemoveComment((SheetHandle) handle, row, col);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetIsDate(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  int cResult = xlSheetIsDate((SheetHandle) handle, row, col);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetReadError(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  int cResult = xlSheetReadError((SheetHandle) handle, row, col);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetWriteError(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  int64_t error;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &error);
  int64_t format;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &format);
  xlSheetWriteError((SheetHandle) handle, row, col, error, (FormatHandle) format);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetColWidth(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &col);
  double cResult = xlSheetColWidth((SheetHandle) handle, col);
  Dart_Handle result = Dart_NewDouble(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetRowHeight(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  double cResult = xlSheetRowHeight((SheetHandle) handle, row);
  Dart_Handle result = Dart_NewDouble(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetCol(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &colFirst);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &colLast);
  double width;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 3), &width);
  int64_t format;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &format);
  int64_t hidden;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 5), &hidden);
  int cResult = xlSheetSetCol((SheetHandle) handle, colFirst, colLast, width, (FormatHandle) format, hidden);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetRow(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  double height;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 2), &height);
  int64_t format;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &format);
  int64_t hidden;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &hidden);
  int cResult = xlSheetSetRow((SheetHandle) handle, row, height, (FormatHandle) format, hidden);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetRowHidden(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int cResult = xlSheetRowHidden((SheetHandle) handle, row);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetRowHidden(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t hidden;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &hidden);
  int cResult = xlSheetSetRowHidden((SheetHandle) handle, row, hidden);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetColHidden(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &col);
  int cResult = xlSheetColHidden((SheetHandle) handle, col);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetColHidden(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &col);
  int64_t hidden;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &hidden);
  int cResult = xlSheetSetColHidden((SheetHandle) handle, col, hidden);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetGetMerge(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  int* rowFirst;
  int* rowLast;
  int* colFirst;
  int* colLast;
  int cResult = xlSheetGetMerge((SheetHandle) handle, row, col, rowFirst, rowLast, colFirst, colLast);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetMerge(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t rowFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rowFirst);
  int64_t rowLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &rowLast);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &colFirst);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &colLast);
  int cResult = xlSheetSetMerge((SheetHandle) handle, rowFirst, rowLast, colFirst, colLast);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetDelMerge(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  int cResult = xlSheetDelMerge((SheetHandle) handle, row, col);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetMergeSize(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetMergeSize((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetMerge(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t index;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &index);
  int* rowFirst;
  int* rowLast;
  int* colFirst;
  int* colLast;
  int cResult = xlSheetMerge((SheetHandle) handle, index, rowFirst, rowLast, colFirst, colLast);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetDelMergeByIndex(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t index;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &index);
  int cResult = xlSheetDelMergeByIndex((SheetHandle) handle, index);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetPictureSize(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetPictureSize((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetPicture(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
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
  xlSheetSetPicture((SheetHandle) handle, row, col, pictureId, scale, offset_x, offset_y, pos);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetSetPicture2(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
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
  int64_t pos;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 8), &pos);
  xlSheetSetPicture2((SheetHandle) handle, row, col, pictureId, width, height, offset_x, offset_y, pos);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetGetHorPageBreak(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t index;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &index);
  int cResult = xlSheetGetHorPageBreak((SheetHandle) handle, index);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetGetHorPageBreakSize(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetGetHorPageBreakSize((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetGetVerPageBreak(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t index;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &index);
  int cResult = xlSheetGetVerPageBreak((SheetHandle) handle, index);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetGetVerPageBreakSize(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetGetVerPageBreakSize((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetHorPageBreak(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t pageBreak;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &pageBreak);
  int cResult = xlSheetSetHorPageBreak((SheetHandle) handle, row, pageBreak);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetVerPageBreak(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &col);
  int64_t pageBreak;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &pageBreak);
  int cResult = xlSheetSetVerPageBreak((SheetHandle) handle, col, pageBreak);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSplit(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  xlSheetSplit((SheetHandle) handle, row, col);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetSplitInfo(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int* row;
  int* col;
  int cResult = xlSheetSplitInfo((SheetHandle) handle, row, col);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetGroupRows(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t rowFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rowFirst);
  int64_t rowLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &rowLast);
  int64_t collapsed;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &collapsed);
  int cResult = xlSheetGroupRows((SheetHandle) handle, rowFirst, rowLast, collapsed);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetGroupCols(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &colFirst);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &colLast);
  int64_t collapsed;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &collapsed);
  int cResult = xlSheetGroupCols((SheetHandle) handle, colFirst, colLast, collapsed);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetGroupSummaryBelow(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetGroupSummaryBelow((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetGroupSummaryBelow(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t below;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &below);
  xlSheetSetGroupSummaryBelow((SheetHandle) handle, below);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetGroupSummaryRight(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetGroupSummaryRight((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetGroupSummaryRight(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t right;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &right);
  xlSheetSetGroupSummaryRight((SheetHandle) handle, right);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetClear(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t rowFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rowFirst);
  int64_t rowLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &rowLast);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &colFirst);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &colLast);
  xlSheetClear((SheetHandle) handle, rowFirst, rowLast, colFirst, colLast);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetInsertCol(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &colFirst);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &colLast);
  int cResult = xlSheetInsertCol((SheetHandle) handle, colFirst, colLast);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetInsertRow(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t rowFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rowFirst);
  int64_t rowLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &rowLast);
  int cResult = xlSheetInsertRow((SheetHandle) handle, rowFirst, rowLast);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetRemoveCol(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &colFirst);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &colLast);
  int cResult = xlSheetRemoveCol((SheetHandle) handle, colFirst, colLast);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetRemoveRow(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t rowFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rowFirst);
  int64_t rowLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &rowLast);
  int cResult = xlSheetRemoveRow((SheetHandle) handle, rowFirst, rowLast);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetCopyCell(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t rowSrc;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rowSrc);
  int64_t colSrc;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &colSrc);
  int64_t rowDst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &rowDst);
  int64_t colDst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &colDst);
  int cResult = xlSheetCopyCell((SheetHandle) handle, rowSrc, colSrc, rowDst, colDst);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetFirstRow(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetFirstRow((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetLastRow(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetLastRow((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetFirstCol(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetFirstCol((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetLastCol(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetLastCol((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetDisplayGridlines(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetDisplayGridlines((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetDisplayGridlines(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t show;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &show);
  xlSheetSetDisplayGridlines((SheetHandle) handle, show);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetPrintGridlines(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetPrintGridlines((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetPrintGridlines(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t print;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &print);
  xlSheetSetPrintGridlines((SheetHandle) handle, print);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetZoom(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetZoom((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetZoom(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t zoom;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &zoom);
  xlSheetSetZoom((SheetHandle) handle, zoom);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetPrintZoom(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetPrintZoom((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetPrintZoom(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t zoom;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &zoom);
  xlSheetSetPrintZoom((SheetHandle) handle, zoom);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetGetPrintFit(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int* wPages;
  int* hPages;
  int cResult = xlSheetGetPrintFit((SheetHandle) handle, wPages, hPages);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetPrintFit(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t wPages;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &wPages);
  int64_t hPages;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &hPages);
  xlSheetSetPrintFit((SheetHandle) handle, wPages, hPages);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetLandscape(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetLandscape((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetLandscape(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t landscape;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &landscape);
  xlSheetSetLandscape((SheetHandle) handle, landscape);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetPaper(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetPaper((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetPaper(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t paper;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &paper);
  xlSheetSetPaper((SheetHandle) handle, paper);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetHeader(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* cResult = xlSheetHeader((SheetHandle) handle);
  Dart_Handle result = Dart_NewStringFromCString(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetHeader(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* header;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &header);
  double margin;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 2), &margin);
  int cResult = xlSheetSetHeader((SheetHandle) handle, header, margin);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetHeaderMargin(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  double cResult = xlSheetHeaderMargin((SheetHandle) handle);
  Dart_Handle result = Dart_NewDouble(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetFooter(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* cResult = xlSheetFooter((SheetHandle) handle);
  Dart_Handle result = Dart_NewStringFromCString(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetFooter(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* footer;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &footer);
  double margin;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 2), &margin);
  int cResult = xlSheetSetFooter((SheetHandle) handle, footer, margin);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetFooterMargin(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  double cResult = xlSheetFooterMargin((SheetHandle) handle);
  Dart_Handle result = Dart_NewDouble(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetHCenter(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetHCenter((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetHCenter(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t hCenter;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &hCenter);
  xlSheetSetHCenter((SheetHandle) handle, hCenter);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetVCenter(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetVCenter((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetVCenter(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t vCenter;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &vCenter);
  xlSheetSetVCenter((SheetHandle) handle, vCenter);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetMarginLeft(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  double cResult = xlSheetMarginLeft((SheetHandle) handle);
  Dart_Handle result = Dart_NewDouble(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetMarginLeft(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  double margin;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 1), &margin);
  xlSheetSetMarginLeft((SheetHandle) handle, margin);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetMarginRight(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  double cResult = xlSheetMarginRight((SheetHandle) handle);
  Dart_Handle result = Dart_NewDouble(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetMarginRight(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  double margin;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 1), &margin);
  xlSheetSetMarginRight((SheetHandle) handle, margin);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetMarginTop(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  double cResult = xlSheetMarginTop((SheetHandle) handle);
  Dart_Handle result = Dart_NewDouble(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetMarginTop(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  double margin;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 1), &margin);
  xlSheetSetMarginTop((SheetHandle) handle, margin);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetMarginBottom(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  double cResult = xlSheetMarginBottom((SheetHandle) handle);
  Dart_Handle result = Dart_NewDouble(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetMarginBottom(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  double margin;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 1), &margin);
  xlSheetSetMarginBottom((SheetHandle) handle, margin);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetPrintRowCol(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetPrintRowCol((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetPrintRowCol(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t print;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &print);
  xlSheetSetPrintRowCol((SheetHandle) handle, print);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetPrintRepeatRows(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int* rowFirst;
  int* rowLast;
  int cResult = xlSheetPrintRepeatRows((SheetHandle) handle, rowFirst, rowLast);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetPrintRepeatRows(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t rowFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rowFirst);
  int64_t rowLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &rowLast);
  xlSheetSetPrintRepeatRows((SheetHandle) handle, rowFirst, rowLast);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetPrintRepeatCols(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int* colFirst;
  int* colLast;
  int cResult = xlSheetPrintRepeatCols((SheetHandle) handle, colFirst, colLast);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetPrintRepeatCols(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &colFirst);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &colLast);
  xlSheetSetPrintRepeatCols((SheetHandle) handle, colFirst, colLast);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetPrintArea(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int* rowFirst;
  int* rowLast;
  int* colFirst;
  int* colLast;
  int cResult = xlSheetPrintArea((SheetHandle) handle, rowFirst, rowLast, colFirst, colLast);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetPrintArea(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t rowFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rowFirst);
  int64_t rowLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &rowLast);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &colFirst);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &colLast);
  xlSheetSetPrintArea((SheetHandle) handle, rowFirst, rowLast, colFirst, colLast);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetClearPrintRepeats(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  xlSheetClearPrintRepeats((SheetHandle) handle);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetClearPrintArea(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  xlSheetClearPrintArea((SheetHandle) handle);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetGetNamedRange(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* name;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &name);
  int* rowFirst;
  int* rowLast;
  int* colFirst;
  int* colLast;
  int64_t scopeId;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 6), &scopeId);
  int* hidden;
  int cResult = xlSheetGetNamedRange((SheetHandle) handle, name, rowFirst, rowLast, colFirst, colLast, scopeId, hidden);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetNamedRange(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* name;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &name);
  int64_t rowFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &rowFirst);
  int64_t rowLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &rowLast);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &colFirst);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 5), &colLast);
  int64_t scopeId;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 6), &scopeId);
  int cResult = xlSheetSetNamedRange((SheetHandle) handle, name, rowFirst, rowLast, colFirst, colLast, scopeId);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetDelNamedRange(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* name;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &name);
  int64_t scopeId;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &scopeId);
  int cResult = xlSheetDelNamedRange((SheetHandle) handle, name, scopeId);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetNamedRangeSize(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetNamedRangeSize((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetNamedRange(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t index;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &index);
  int* rowFirst;
  int* rowLast;
  int* colFirst;
  int* colLast;
  int* scopeId;
  int* hidden;
  const char* cResult = xlSheetNamedRange((SheetHandle) handle, index, rowFirst, rowLast, colFirst, colLast, scopeId, hidden);
  Dart_Handle result = Dart_NewStringFromCString(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetTableSize(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetTableSize((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetTable(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t index;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &index);
  int* rowFirst;
  int* rowLast;
  int* colFirst;
  int* colLast;
  int* headerRowCount;
  int* totalsRowCount;
  const char* cResult = xlSheetTable((SheetHandle) handle, index, rowFirst, rowLast, colFirst, colLast, headerRowCount, totalsRowCount);
  Dart_Handle result = Dart_NewStringFromCString(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetHyperlinkSize(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetHyperlinkSize((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetHyperlink(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t index;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &index);
  int* rowFirst;
  int* rowLast;
  int* colFirst;
  int* colLast;
  const char* cResult = xlSheetHyperlink((SheetHandle) handle, index, rowFirst, rowLast, colFirst, colLast);
  Dart_Handle result = Dart_NewStringFromCString(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetDelHyperlink(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t index;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &index);
  int cResult = xlSheetDelHyperlink((SheetHandle) handle, index);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetAddHyperlink(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* hyperlink;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &hyperlink);
  int64_t rowFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &rowFirst);
  int64_t rowLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &rowLast);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &colFirst);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 5), &colLast);
  xlSheetAddHyperlink((SheetHandle) handle, hyperlink, rowFirst, rowLast, colFirst, colLast);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetApplyFilter(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  xlSheetApplyFilter((SheetHandle) handle);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetRemoveFilter(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  xlSheetRemoveFilter((SheetHandle) handle);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetName(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* cResult = xlSheetName((SheetHandle) handle);
  Dart_Handle result = Dart_NewStringFromCString(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetName(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* name;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &name);
  xlSheetSetName((SheetHandle) handle, name);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetProtect(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetProtect((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetProtect(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t protect;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &protect);
  xlSheetSetProtect((SheetHandle) handle, protect);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetSetProtectEx(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t protect;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &protect);
  const char* password;
  Dart_StringToCString(Dart_GetNativeArgument(args, 2), &password);
  int64_t enhancedProtection;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &enhancedProtection);
  xlSheetSetProtectEx((SheetHandle) handle, protect, password, enhancedProtection);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetHidden(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetHidden((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetHidden(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t hidden;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &hidden);
  int cResult = xlSheetSetHidden((SheetHandle) handle, hidden);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetGetTopLeftView(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int* row;
  int* col;
  xlSheetGetTopLeftView((SheetHandle) handle, row, col);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetSetTopLeftView(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  xlSheetSetTopLeftView((SheetHandle) handle, row, col);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetRightToLeft(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlSheetRightToLeft((SheetHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetRightToLeft(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t rightToLeft;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rightToLeft);
  xlSheetSetRightToLeft((SheetHandle) handle, rightToLeft);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetSetAutoFitArea(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t rowFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rowFirst);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &colFirst);
  int64_t rowLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &rowLast);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &colLast);
  xlSheetSetAutoFitArea((SheetHandle) handle, rowFirst, colFirst, rowLast, colLast);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetAddrToRowCol(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* addr;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &addr);
  int* row;
  int* col;
  int* rowRelative;
  int* colRelative;
  xlSheetAddrToRowCol((SheetHandle) handle, addr, row, col, rowRelative, colRelative);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetRowColToAddr(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t row;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &row);
  int64_t col;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &col);
  int64_t rowRelative;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &rowRelative);
  int64_t colRelative;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &colRelative);
  const char* cResult = xlSheetRowColToAddr((SheetHandle) handle, row, col, rowRelative, colRelative);
  Dart_Handle result = Dart_NewStringFromCString(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetSetTabColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t color;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &color);
  xlSheetSetTabColor((SheetHandle) handle, color);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetSetTabRgbColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t red;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &red);
  int64_t green;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &green);
  int64_t blue;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &blue);
  xlSheetSetTabRgbColor((SheetHandle) handle, red, green, blue);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetAddIgnoredError(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t rowFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rowFirst);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &colFirst);
  int64_t rowLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &rowLast);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &colLast);
  int64_t iError;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 5), &iError);
  int cResult = xlSheetAddIgnoredError((SheetHandle) handle, rowFirst, colFirst, rowLast, colLast, iError);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlSheetAddDataValidation(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t type;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &type);
  int64_t op;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &op);
  int64_t rowFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &rowFirst);
  int64_t rowLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &rowLast);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 5), &colFirst);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 6), &colLast);
  const char* value1;
  Dart_StringToCString(Dart_GetNativeArgument(args, 7), &value1);
  const char* value2;
  Dart_StringToCString(Dart_GetNativeArgument(args, 8), &value2);
  xlSheetAddDataValidation((SheetHandle) handle, type, op, rowFirst, rowLast, colFirst, colLast, value1, value2);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetAddDataValidationDouble(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t type;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &type);
  int64_t op;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 2), &op);
  int64_t rowFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 3), &rowFirst);
  int64_t rowLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 4), &rowLast);
  int64_t colFirst;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 5), &colFirst);
  int64_t colLast;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 6), &colLast);
  double value1;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 7), &value1);
  double value2;
  Dart_DoubleValue(Dart_GetNativeArgument(args, 8), &value2);
  xlSheetAddDataValidationDouble((SheetHandle) handle, type, op, rowFirst, rowLast, colFirst, colLast, value1, value2);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlSheetRemoveDataValidations(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  xlSheetRemoveDataValidations((SheetHandle) handle);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}



Dart_NativeFunction sheetResolver(const char* cname) {
  Dart_NativeFunction result = NULL;
  if (strcmp("_xlSheetCellType", cname) == 0) result = _xlSheetCellType;
  if (strcmp("_xlSheetIsFormula", cname) == 0) result = _xlSheetIsFormula;
  if (strcmp("_xlSheetCellFormat", cname) == 0) result = _xlSheetCellFormat;
  if (strcmp("_xlSheetSetCellFormat", cname) == 0) result = _xlSheetSetCellFormat;
  if (strcmp("_xlSheetWriteStr", cname) == 0) result = _xlSheetWriteStr;
  if (strcmp("_xlSheetWriteNum", cname) == 0) result = _xlSheetWriteNum;
  if (strcmp("_xlSheetWriteBool", cname) == 0) result = _xlSheetWriteBool;
  if (strcmp("_xlSheetWriteBlank", cname) == 0) result = _xlSheetWriteBlank;
  if (strcmp("_xlSheetWriteFormula", cname) == 0) result = _xlSheetWriteFormula;
  if (strcmp("_xlSheetWriteFormulaNum", cname) == 0) result = _xlSheetWriteFormulaNum;
  if (strcmp("_xlSheetWriteFormulaStr", cname) == 0) result = _xlSheetWriteFormulaStr;
  if (strcmp("_xlSheetWriteFormulaBool", cname) == 0) result = _xlSheetWriteFormulaBool;
  if (strcmp("_xlSheetReadComment", cname) == 0) result = _xlSheetReadComment;
  if (strcmp("_xlSheetWriteComment", cname) == 0) result = _xlSheetWriteComment;
  if (strcmp("_xlSheetRemoveComment", cname) == 0) result = _xlSheetRemoveComment;
  if (strcmp("_xlSheetIsDate", cname) == 0) result = _xlSheetIsDate;
  if (strcmp("_xlSheetReadError", cname) == 0) result = _xlSheetReadError;
  if (strcmp("_xlSheetWriteError", cname) == 0) result = _xlSheetWriteError;
  if (strcmp("_xlSheetColWidth", cname) == 0) result = _xlSheetColWidth;
  if (strcmp("_xlSheetRowHeight", cname) == 0) result = _xlSheetRowHeight;
  if (strcmp("_xlSheetSetCol", cname) == 0) result = _xlSheetSetCol;
  if (strcmp("_xlSheetSetRow", cname) == 0) result = _xlSheetSetRow;
  if (strcmp("_xlSheetRowHidden", cname) == 0) result = _xlSheetRowHidden;
  if (strcmp("_xlSheetSetRowHidden", cname) == 0) result = _xlSheetSetRowHidden;
  if (strcmp("_xlSheetColHidden", cname) == 0) result = _xlSheetColHidden;
  if (strcmp("_xlSheetSetColHidden", cname) == 0) result = _xlSheetSetColHidden;
  if (strcmp("_xlSheetSetMerge", cname) == 0) result = _xlSheetSetMerge;
  if (strcmp("_xlSheetDelMerge", cname) == 0) result = _xlSheetDelMerge;
  if (strcmp("_xlSheetMergeSize", cname) == 0) result = _xlSheetMergeSize;
  if (strcmp("_xlSheetDelMergeByIndex", cname) == 0) result = _xlSheetDelMergeByIndex;
  if (strcmp("_xlSheetPictureSize", cname) == 0) result = _xlSheetPictureSize;
  if (strcmp("_xlSheetSetPicture", cname) == 0) result = _xlSheetSetPicture;
  if (strcmp("_xlSheetSetPicture2", cname) == 0) result = _xlSheetSetPicture2;
  if (strcmp("_xlSheetGetHorPageBreak", cname) == 0) result = _xlSheetGetHorPageBreak;
  if (strcmp("_xlSheetGetHorPageBreakSize", cname) == 0) result = _xlSheetGetHorPageBreakSize;
  if (strcmp("_xlSheetGetVerPageBreak", cname) == 0) result = _xlSheetGetVerPageBreak;
  if (strcmp("_xlSheetGetVerPageBreakSize", cname) == 0) result = _xlSheetGetVerPageBreakSize;
  if (strcmp("_xlSheetSetHorPageBreak", cname) == 0) result = _xlSheetSetHorPageBreak;
  if (strcmp("_xlSheetSetVerPageBreak", cname) == 0) result = _xlSheetSetVerPageBreak;
  if (strcmp("_xlSheetSplit", cname) == 0) result = _xlSheetSplit;
  if (strcmp("_xlSheetGroupRows", cname) == 0) result = _xlSheetGroupRows;
  if (strcmp("_xlSheetGroupCols", cname) == 0) result = _xlSheetGroupCols;
  if (strcmp("_xlSheetGroupSummaryBelow", cname) == 0) result = _xlSheetGroupSummaryBelow;
  if (strcmp("_xlSheetSetGroupSummaryBelow", cname) == 0) result = _xlSheetSetGroupSummaryBelow;
  if (strcmp("_xlSheetGroupSummaryRight", cname) == 0) result = _xlSheetGroupSummaryRight;
  if (strcmp("_xlSheetSetGroupSummaryRight", cname) == 0) result = _xlSheetSetGroupSummaryRight;
  if (strcmp("_xlSheetClear", cname) == 0) result = _xlSheetClear;
  if (strcmp("_xlSheetInsertCol", cname) == 0) result = _xlSheetInsertCol;
  if (strcmp("_xlSheetInsertRow", cname) == 0) result = _xlSheetInsertRow;
  if (strcmp("_xlSheetRemoveCol", cname) == 0) result = _xlSheetRemoveCol;
  if (strcmp("_xlSheetRemoveRow", cname) == 0) result = _xlSheetRemoveRow;
  if (strcmp("_xlSheetCopyCell", cname) == 0) result = _xlSheetCopyCell;
  if (strcmp("_xlSheetFirstRow", cname) == 0) result = _xlSheetFirstRow;
  if (strcmp("_xlSheetLastRow", cname) == 0) result = _xlSheetLastRow;
  if (strcmp("_xlSheetFirstCol", cname) == 0) result = _xlSheetFirstCol;
  if (strcmp("_xlSheetLastCol", cname) == 0) result = _xlSheetLastCol;
  if (strcmp("_xlSheetDisplayGridlines", cname) == 0) result = _xlSheetDisplayGridlines;
  if (strcmp("_xlSheetSetDisplayGridlines", cname) == 0) result = _xlSheetSetDisplayGridlines;
  if (strcmp("_xlSheetPrintGridlines", cname) == 0) result = _xlSheetPrintGridlines;
  if (strcmp("_xlSheetSetPrintGridlines", cname) == 0) result = _xlSheetSetPrintGridlines;
  if (strcmp("_xlSheetZoom", cname) == 0) result = _xlSheetZoom;
  if (strcmp("_xlSheetSetZoom", cname) == 0) result = _xlSheetSetZoom;
  if (strcmp("_xlSheetPrintZoom", cname) == 0) result = _xlSheetPrintZoom;
  if (strcmp("_xlSheetSetPrintZoom", cname) == 0) result = _xlSheetSetPrintZoom;
  if (strcmp("_xlSheetSetPrintFit", cname) == 0) result = _xlSheetSetPrintFit;
  if (strcmp("_xlSheetLandscape", cname) == 0) result = _xlSheetLandscape;
  if (strcmp("_xlSheetSetLandscape", cname) == 0) result = _xlSheetSetLandscape;
  if (strcmp("_xlSheetPaper", cname) == 0) result = _xlSheetPaper;
  if (strcmp("_xlSheetSetPaper", cname) == 0) result = _xlSheetSetPaper;
  if (strcmp("_xlSheetHeader", cname) == 0) result = _xlSheetHeader;
  if (strcmp("_xlSheetSetHeader", cname) == 0) result = _xlSheetSetHeader;
  if (strcmp("_xlSheetHeaderMargin", cname) == 0) result = _xlSheetHeaderMargin;
  if (strcmp("_xlSheetFooter", cname) == 0) result = _xlSheetFooter;
  if (strcmp("_xlSheetSetFooter", cname) == 0) result = _xlSheetSetFooter;
  if (strcmp("_xlSheetFooterMargin", cname) == 0) result = _xlSheetFooterMargin;
  if (strcmp("_xlSheetHCenter", cname) == 0) result = _xlSheetHCenter;
  if (strcmp("_xlSheetSetHCenter", cname) == 0) result = _xlSheetSetHCenter;
  if (strcmp("_xlSheetVCenter", cname) == 0) result = _xlSheetVCenter;
  if (strcmp("_xlSheetSetVCenter", cname) == 0) result = _xlSheetSetVCenter;
  if (strcmp("_xlSheetMarginLeft", cname) == 0) result = _xlSheetMarginLeft;
  if (strcmp("_xlSheetSetMarginLeft", cname) == 0) result = _xlSheetSetMarginLeft;
  if (strcmp("_xlSheetMarginRight", cname) == 0) result = _xlSheetMarginRight;
  if (strcmp("_xlSheetSetMarginRight", cname) == 0) result = _xlSheetSetMarginRight;
  if (strcmp("_xlSheetMarginTop", cname) == 0) result = _xlSheetMarginTop;
  if (strcmp("_xlSheetSetMarginTop", cname) == 0) result = _xlSheetSetMarginTop;
  if (strcmp("_xlSheetMarginBottom", cname) == 0) result = _xlSheetMarginBottom;
  if (strcmp("_xlSheetSetMarginBottom", cname) == 0) result = _xlSheetSetMarginBottom;
  if (strcmp("_xlSheetPrintRowCol", cname) == 0) result = _xlSheetPrintRowCol;
  if (strcmp("_xlSheetSetPrintRowCol", cname) == 0) result = _xlSheetSetPrintRowCol;
  if (strcmp("_xlSheetSetPrintRepeatRows", cname) == 0) result = _xlSheetSetPrintRepeatRows;
  if (strcmp("_xlSheetSetPrintRepeatCols", cname) == 0) result = _xlSheetSetPrintRepeatCols;
  if (strcmp("_xlSheetSetPrintArea", cname) == 0) result = _xlSheetSetPrintArea;
  if (strcmp("_xlSheetClearPrintRepeats", cname) == 0) result = _xlSheetClearPrintRepeats;
  if (strcmp("_xlSheetClearPrintArea", cname) == 0) result = _xlSheetClearPrintArea;
  if (strcmp("_xlSheetSetNamedRange", cname) == 0) result = _xlSheetSetNamedRange;
  if (strcmp("_xlSheetDelNamedRange", cname) == 0) result = _xlSheetDelNamedRange;
  if (strcmp("_xlSheetNamedRangeSize", cname) == 0) result = _xlSheetNamedRangeSize;
  if (strcmp("_xlSheetTableSize", cname) == 0) result = _xlSheetTableSize;
  if (strcmp("_xlSheetHyperlinkSize", cname) == 0) result = _xlSheetHyperlinkSize;
  if (strcmp("_xlSheetDelHyperlink", cname) == 0) result = _xlSheetDelHyperlink;
  if (strcmp("_xlSheetAddHyperlink", cname) == 0) result = _xlSheetAddHyperlink;
  if (strcmp("_xlSheetApplyFilter", cname) == 0) result = _xlSheetApplyFilter;
  if (strcmp("_xlSheetRemoveFilter", cname) == 0) result = _xlSheetRemoveFilter;
  if (strcmp("_xlSheetName", cname) == 0) result = _xlSheetName;
  if (strcmp("_xlSheetSetName", cname) == 0) result = _xlSheetSetName;
  if (strcmp("_xlSheetProtect", cname) == 0) result = _xlSheetProtect;
  if (strcmp("_xlSheetSetProtect", cname) == 0) result = _xlSheetSetProtect;
  if (strcmp("_xlSheetSetProtectEx", cname) == 0) result = _xlSheetSetProtectEx;
  if (strcmp("_xlSheetHidden", cname) == 0) result = _xlSheetHidden;
  if (strcmp("_xlSheetSetHidden", cname) == 0) result = _xlSheetSetHidden;
  if (strcmp("_xlSheetSetTopLeftView", cname) == 0) result = _xlSheetSetTopLeftView;
  if (strcmp("_xlSheetRightToLeft", cname) == 0) result = _xlSheetRightToLeft;
  if (strcmp("_xlSheetSetRightToLeft", cname) == 0) result = _xlSheetSetRightToLeft;
  if (strcmp("_xlSheetSetAutoFitArea", cname) == 0) result = _xlSheetSetAutoFitArea;
  if (strcmp("_xlSheetRowColToAddr", cname) == 0) result = _xlSheetRowColToAddr;
  if (strcmp("_xlSheetSetTabColor", cname) == 0) result = _xlSheetSetTabColor;
  if (strcmp("_xlSheetSetTabRgbColor", cname) == 0) result = _xlSheetSetTabRgbColor;
  if (strcmp("_xlSheetAddIgnoredError", cname) == 0) result = _xlSheetAddIgnoredError;
  if (strcmp("_xlSheetAddDataValidation", cname) == 0) result = _xlSheetAddDataValidation;
  if (strcmp("_xlSheetAddDataValidationDouble", cname) == 0) result = _xlSheetAddDataValidationDouble;
  if (strcmp("_xlSheetRemoveDataValidations", cname) == 0) result = _xlSheetRemoveDataValidations;
  return result;
}
