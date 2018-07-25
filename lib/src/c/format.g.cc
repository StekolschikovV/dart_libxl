void _xlFormatFont(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  FontHandle cResult = xlFormatFont((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger((int64_t) cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetFont(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t fontHandle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &fontHandle);
  int cResult = xlFormatSetFont((FormatHandle) handle, (FontHandle) fontHandle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatNumFormat(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatNumFormat((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetNumFormat(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t numFormat;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &numFormat);
  xlFormatSetNumFormat((FormatHandle) handle, numFormat);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatAlignH(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatAlignH((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetAlignH(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t align;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &align);
  xlFormatSetAlignH((FormatHandle) handle, align);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatAlignV(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatAlignV((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetAlignV(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t align;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &align);
  xlFormatSetAlignV((FormatHandle) handle, align);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatWrap(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatWrap((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetWrap(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t wrap;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &wrap);
  xlFormatSetWrap((FormatHandle) handle, wrap);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatRotation(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatRotation((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetRotation(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t rotation;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &rotation);
  int cResult = xlFormatSetRotation((FormatHandle) handle, rotation);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatIndent(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatIndent((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetIndent(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t indent;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &indent);
  xlFormatSetIndent((FormatHandle) handle, indent);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatShrinkToFit(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatShrinkToFit((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetShrinkToFit(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t shrinkToFit;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &shrinkToFit);
  xlFormatSetShrinkToFit((FormatHandle) handle, shrinkToFit);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatSetBorder(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t style;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &style);
  xlFormatSetBorder((FormatHandle) handle, style);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatSetBorderColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t color;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &color);
  xlFormatSetBorderColor((FormatHandle) handle, color);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatBorderLeft(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatBorderLeft((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetBorderLeft(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t style;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &style);
  xlFormatSetBorderLeft((FormatHandle) handle, style);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatBorderRight(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatBorderRight((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetBorderRight(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t style;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &style);
  xlFormatSetBorderRight((FormatHandle) handle, style);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatBorderTop(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatBorderTop((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetBorderTop(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t style;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &style);
  xlFormatSetBorderTop((FormatHandle) handle, style);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatBorderBottom(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatBorderBottom((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetBorderBottom(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t style;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &style);
  xlFormatSetBorderBottom((FormatHandle) handle, style);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatBorderLeftColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatBorderLeftColor((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetBorderLeftColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t color;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &color);
  xlFormatSetBorderLeftColor((FormatHandle) handle, color);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatBorderRightColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatBorderRightColor((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetBorderRightColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t color;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &color);
  xlFormatSetBorderRightColor((FormatHandle) handle, color);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatBorderTopColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatBorderTopColor((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetBorderTopColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t color;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &color);
  xlFormatSetBorderTopColor((FormatHandle) handle, color);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatBorderBottomColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatBorderBottomColor((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetBorderBottomColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t color;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &color);
  xlFormatSetBorderBottomColor((FormatHandle) handle, color);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatBorderDiagonal(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatBorderDiagonal((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetBorderDiagonal(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t border;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &border);
  xlFormatSetBorderDiagonal((FormatHandle) handle, border);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatBorderDiagonalStyle(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatBorderDiagonalStyle((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetBorderDiagonalStyle(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t style;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &style);
  xlFormatSetBorderDiagonalStyle((FormatHandle) handle, style);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatBorderDiagonalColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatBorderDiagonalColor((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetBorderDiagonalColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t color;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &color);
  xlFormatSetBorderDiagonalColor((FormatHandle) handle, color);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatFillPattern(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatFillPattern((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetFillPattern(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t pattern;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &pattern);
  xlFormatSetFillPattern((FormatHandle) handle, pattern);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatPatternForegroundColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatPatternForegroundColor((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetPatternForegroundColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t color;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &color);
  xlFormatSetPatternForegroundColor((FormatHandle) handle, color);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatPatternBackgroundColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatPatternBackgroundColor((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetPatternBackgroundColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t color;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &color);
  xlFormatSetPatternBackgroundColor((FormatHandle) handle, color);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatLocked(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatLocked((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetLocked(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t locked;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &locked);
  xlFormatSetLocked((FormatHandle) handle, locked);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFormatHidden(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFormatHidden((FormatHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFormatSetHidden(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t hidden;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &hidden);
  xlFormatSetHidden((FormatHandle) handle, hidden);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}



Dart_NativeFunction formatResolver(const char* cname) {
  Dart_NativeFunction result = NULL;
  if (strcmp("_xlFormatFont", cname) == 0) result = _xlFormatFont;
  if (strcmp("_xlFormatSetFont", cname) == 0) result = _xlFormatSetFont;
  if (strcmp("_xlFormatNumFormat", cname) == 0) result = _xlFormatNumFormat;
  if (strcmp("_xlFormatSetNumFormat", cname) == 0) result = _xlFormatSetNumFormat;
  if (strcmp("_xlFormatAlignH", cname) == 0) result = _xlFormatAlignH;
  if (strcmp("_xlFormatSetAlignH", cname) == 0) result = _xlFormatSetAlignH;
  if (strcmp("_xlFormatAlignV", cname) == 0) result = _xlFormatAlignV;
  if (strcmp("_xlFormatSetAlignV", cname) == 0) result = _xlFormatSetAlignV;
  if (strcmp("_xlFormatWrap", cname) == 0) result = _xlFormatWrap;
  if (strcmp("_xlFormatSetWrap", cname) == 0) result = _xlFormatSetWrap;
  if (strcmp("_xlFormatRotation", cname) == 0) result = _xlFormatRotation;
  if (strcmp("_xlFormatSetRotation", cname) == 0) result = _xlFormatSetRotation;
  if (strcmp("_xlFormatIndent", cname) == 0) result = _xlFormatIndent;
  if (strcmp("_xlFormatSetIndent", cname) == 0) result = _xlFormatSetIndent;
  if (strcmp("_xlFormatShrinkToFit", cname) == 0) result = _xlFormatShrinkToFit;
  if (strcmp("_xlFormatSetShrinkToFit", cname) == 0) result = _xlFormatSetShrinkToFit;
  if (strcmp("_xlFormatSetBorder", cname) == 0) result = _xlFormatSetBorder;
  if (strcmp("_xlFormatSetBorderColor", cname) == 0) result = _xlFormatSetBorderColor;
  if (strcmp("_xlFormatBorderLeft", cname) == 0) result = _xlFormatBorderLeft;
  if (strcmp("_xlFormatSetBorderLeft", cname) == 0) result = _xlFormatSetBorderLeft;
  if (strcmp("_xlFormatBorderRight", cname) == 0) result = _xlFormatBorderRight;
  if (strcmp("_xlFormatSetBorderRight", cname) == 0) result = _xlFormatSetBorderRight;
  if (strcmp("_xlFormatBorderTop", cname) == 0) result = _xlFormatBorderTop;
  if (strcmp("_xlFormatSetBorderTop", cname) == 0) result = _xlFormatSetBorderTop;
  if (strcmp("_xlFormatBorderBottom", cname) == 0) result = _xlFormatBorderBottom;
  if (strcmp("_xlFormatSetBorderBottom", cname) == 0) result = _xlFormatSetBorderBottom;
  if (strcmp("_xlFormatBorderLeftColor", cname) == 0) result = _xlFormatBorderLeftColor;
  if (strcmp("_xlFormatSetBorderLeftColor", cname) == 0) result = _xlFormatSetBorderLeftColor;
  if (strcmp("_xlFormatBorderRightColor", cname) == 0) result = _xlFormatBorderRightColor;
  if (strcmp("_xlFormatSetBorderRightColor", cname) == 0) result = _xlFormatSetBorderRightColor;
  if (strcmp("_xlFormatBorderTopColor", cname) == 0) result = _xlFormatBorderTopColor;
  if (strcmp("_xlFormatSetBorderTopColor", cname) == 0) result = _xlFormatSetBorderTopColor;
  if (strcmp("_xlFormatBorderBottomColor", cname) == 0) result = _xlFormatBorderBottomColor;
  if (strcmp("_xlFormatSetBorderBottomColor", cname) == 0) result = _xlFormatSetBorderBottomColor;
  if (strcmp("_xlFormatBorderDiagonal", cname) == 0) result = _xlFormatBorderDiagonal;
  if (strcmp("_xlFormatSetBorderDiagonal", cname) == 0) result = _xlFormatSetBorderDiagonal;
  if (strcmp("_xlFormatBorderDiagonalStyle", cname) == 0) result = _xlFormatBorderDiagonalStyle;
  if (strcmp("_xlFormatSetBorderDiagonalStyle", cname) == 0) result = _xlFormatSetBorderDiagonalStyle;
  if (strcmp("_xlFormatBorderDiagonalColor", cname) == 0) result = _xlFormatBorderDiagonalColor;
  if (strcmp("_xlFormatSetBorderDiagonalColor", cname) == 0) result = _xlFormatSetBorderDiagonalColor;
  if (strcmp("_xlFormatFillPattern", cname) == 0) result = _xlFormatFillPattern;
  if (strcmp("_xlFormatSetFillPattern", cname) == 0) result = _xlFormatSetFillPattern;
  if (strcmp("_xlFormatPatternForegroundColor", cname) == 0) result = _xlFormatPatternForegroundColor;
  if (strcmp("_xlFormatSetPatternForegroundColor", cname) == 0) result = _xlFormatSetPatternForegroundColor;
  if (strcmp("_xlFormatPatternBackgroundColor", cname) == 0) result = _xlFormatPatternBackgroundColor;
  if (strcmp("_xlFormatSetPatternBackgroundColor", cname) == 0) result = _xlFormatSetPatternBackgroundColor;
  if (strcmp("_xlFormatLocked", cname) == 0) result = _xlFormatLocked;
  if (strcmp("_xlFormatSetLocked", cname) == 0) result = _xlFormatSetLocked;
  if (strcmp("_xlFormatHidden", cname) == 0) result = _xlFormatHidden;
  if (strcmp("_xlFormatSetHidden", cname) == 0) result = _xlFormatSetHidden;
  return result;
}
