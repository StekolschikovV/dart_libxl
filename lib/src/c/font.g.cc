void _xlFontSize(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFontSize((FontHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFontSetSize(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t size;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &size);
  xlFontSetSize((FontHandle) handle, size);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFontItalic(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFontItalic((FontHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFontSetItalic(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t italic;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &italic);
  xlFontSetItalic((FontHandle) handle, italic);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFontStrikeOut(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFontStrikeOut((FontHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFontSetStrikeOut(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t strikeOut;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &strikeOut);
  xlFontSetStrikeOut((FontHandle) handle, strikeOut);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFontColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFontColor((FontHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFontSetColor(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t color;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &color);
  xlFontSetColor((FontHandle) handle, color);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFontBold(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFontBold((FontHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFontSetBold(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t bold;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &bold);
  xlFontSetBold((FontHandle) handle, bold);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFontScript(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFontScript((FontHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFontSetScript(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t script;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &script);
  xlFontSetScript((FontHandle) handle, script);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFontUnderline(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int cResult = xlFontUnderline((FontHandle) handle);
  Dart_Handle result = Dart_NewInteger(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFontSetUnderline(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  int64_t underline;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 1), &underline);
  xlFontSetUnderline((FontHandle) handle, underline);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}

void _xlFontName(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* cResult = xlFontName((FontHandle) handle);
  Dart_Handle result = Dart_NewStringFromCString(cResult);
  Dart_SetReturnValue(args, result);
  Dart_ExitScope();
}

void _xlFontSetName(Dart_NativeArguments args) {
  Dart_EnterScope();
  int64_t handle;
  Dart_IntegerToInt64(Dart_GetNativeArgument(args, 0), &handle);
  const char* name;
  Dart_StringToCString(Dart_GetNativeArgument(args, 1), &name);
  xlFontSetName((FontHandle) handle, name);
  Dart_SetReturnValue(args, Dart_Null());
  Dart_ExitScope();
}



Dart_NativeFunction fontResolver(const char* cname) {
  Dart_NativeFunction result = NULL;
  if (strcmp("_xlFontSize", cname) == 0) result = _xlFontSize;
  if (strcmp("_xlFontSetSize", cname) == 0) result = _xlFontSetSize;
  if (strcmp("_xlFontItalic", cname) == 0) result = _xlFontItalic;
  if (strcmp("_xlFontSetItalic", cname) == 0) result = _xlFontSetItalic;
  if (strcmp("_xlFontStrikeOut", cname) == 0) result = _xlFontStrikeOut;
  if (strcmp("_xlFontSetStrikeOut", cname) == 0) result = _xlFontSetStrikeOut;
  if (strcmp("_xlFontColor", cname) == 0) result = _xlFontColor;
  if (strcmp("_xlFontSetColor", cname) == 0) result = _xlFontSetColor;
  if (strcmp("_xlFontBold", cname) == 0) result = _xlFontBold;
  if (strcmp("_xlFontSetBold", cname) == 0) result = _xlFontSetBold;
  if (strcmp("_xlFontScript", cname) == 0) result = _xlFontScript;
  if (strcmp("_xlFontSetScript", cname) == 0) result = _xlFontSetScript;
  if (strcmp("_xlFontUnderline", cname) == 0) result = _xlFontUnderline;
  if (strcmp("_xlFontSetUnderline", cname) == 0) result = _xlFontSetUnderline;
  if (strcmp("_xlFontName", cname) == 0) result = _xlFontName;
  if (strcmp("_xlFontSetName", cname) == 0) result = _xlFontSetName;
  return result;
}
