part of 'libxl_ext.dart';

class AlignH {
  final int value;
  const AlignH._(this.value);
  static const ALIGNV_TOP = const AlignH._(0);
  static const ALIGNV_CENTER = const AlignH._(1);
  static const ALIGNV_BOTTOM = const AlignH._(2);
  static const ALIGNV_JUSTIFY = const AlignH._(3);
  static const ALIGNV_DISTRIBUTED = const AlignH._(4);
}

class AlignV {
  final int value;
  const AlignV._(this.value);
  static const ALIGNV_TOP = const AlignH._(0);
  static const ALIGNV_CENTER = const AlignH._(1);
  static const ALIGNV_BOTTOM = const AlignH._(2);
  static const ALIGNV_JUSTIFY = const AlignH._(3);
  static const ALIGNV_DISTRIBUTED = const AlignH._(4);
}