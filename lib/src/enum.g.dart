part of 'libxl_ext.dart';


class Color {
  final int value;
  const Color._(this.value);
  static const COLOR_BLACK = const Color._(8);
  static const COLOR_WHITE = const Color._(9);
  static const COLOR_RED = const Color._(10);
  static const COLOR_BRIGHTGREEN = const Color._(11);
  static const COLOR_BLUE = const Color._(12);
  static const COLOR_YELLOW = const Color._(13);
  static const COLOR_PINK = const Color._(14);
  static const COLOR_TURQUOISE = const Color._(15);
  static const COLOR_DARKRED = const Color._(16);
  static const COLOR_GREEN = const Color._(17);
  static const COLOR_DARKBLUE = const Color._(18);
  static const COLOR_DARKYELLOW = const Color._(19);
  static const COLOR_VIOLET = const Color._(20);
  static const COLOR_TEAL = const Color._(21);
  static const COLOR_GRAY25 = const Color._(22);
  static const COLOR_GRAY50 = const Color._(23);
  static const COLOR_PERIWINKLE_CF = const Color._(24);
  static const COLOR_PLUM_CF = const Color._(25);
  static const COLOR_IVORY_CF = const Color._(26);
  static const COLOR_LIGHTTURQUOISE_CF = const Color._(27);
  static const COLOR_DARKPURPLE_CF = const Color._(28);
  static const COLOR_CORAL_CF = const Color._(29);
  static const COLOR_OCEANBLUE_CF = const Color._(30);
  static const COLOR_ICEBLUE_CF = const Color._(31);
  static const COLOR_DARKBLUE_CL = const Color._(32);
  static const COLOR_PINK_CL = const Color._(33);
  static const COLOR_YELLOW_CL = const Color._(34);
  static const COLOR_TURQUOISE_CL = const Color._(35);
  static const COLOR_VIOLET_CL = const Color._(36);
  static const COLOR_DARKRED_CL = const Color._(37);
  static const COLOR_TEAL_CL = const Color._(38);
  static const COLOR_BLUE_CL = const Color._(39);
  static const COLOR_SKYBLUE = const Color._(40);
  static const COLOR_LIGHTTURQUOISE = const Color._(41);
  static const COLOR_LIGHTGREEN = const Color._(42);
  static const COLOR_LIGHTYELLOW = const Color._(43);
  static const COLOR_PALEBLUE = const Color._(44);
  static const COLOR_ROSE = const Color._(45);
  static const COLOR_LAVENDER = const Color._(46);
  static const COLOR_TAN = const Color._(47);
  static const COLOR_LIGHTBLUE = const Color._(48);
  static const COLOR_AQUA = const Color._(49);
  static const COLOR_LIME = const Color._(50);
  static const COLOR_GOLD = const Color._(51);
  static const COLOR_LIGHTORANGE = const Color._(52);
  static const COLOR_ORANGE = const Color._(53);
  static const COLOR_BLUEGRAY = const Color._(54);
  static const COLOR_GRAY40 = const Color._(55);
  static const COLOR_DARKTEAL = const Color._(56);
  static const COLOR_SEAGREEN = const Color._(57);
  static const COLOR_DARKGREEN = const Color._(58);
  static const COLOR_OLIVEGREEN = const Color._(59);
  static const COLOR_BROWN = const Color._(60);
  static const COLOR_PLUM = const Color._(61);
  static const COLOR_INDIGO = const Color._(62);
  static const COLOR_GRAY80 = const Color._(63);
  static const COLOR_DEFAULT_FOREGROUND = const Color._(64);
  static const COLOR_DEFAULT_BACKGROUND = const Color._(65);
  static const COLOR_TOOLTIP = const Color._(81);
  static const COLOR_NONE = const Color._(127);
  static const COLOR_AUTO = const Color._(32767);
}

class NumFormat {
  final int value;
  const NumFormat._(this.value);
  static const NUMFORMAT_GENERAL = const NumFormat._(0);
  static const NUMFORMAT_NUMBER = const NumFormat._(1);
  static const NUMFORMAT_NUMBER_D2 = const NumFormat._(2);
  static const NUMFORMAT_NUMBER_SEP = const NumFormat._(3);
  static const NUMFORMAT_NUMBER_SEP_D2 = const NumFormat._(4);
  static const NUMFORMAT_CURRENCY_NEGBRA = const NumFormat._(5);
  static const NUMFORMAT_CURRENCY_NEGBRARED = const NumFormat._(6);
  static const NUMFORMAT_CURRENCY_D2_NEGBRA = const NumFormat._(7);
  static const NUMFORMAT_CURRENCY_D2_NEGBRARED = const NumFormat._(8);
  static const NUMFORMAT_PERCENT = const NumFormat._(9);
  static const NUMFORMAT_PERCENT_D2 = const NumFormat._(10);
  static const NUMFORMAT_SCIENTIFIC_D2 = const NumFormat._(11);
  static const NUMFORMAT_FRACTION_ONEDIG = const NumFormat._(12);
  static const NUMFORMAT_FRACTION_TWODIG = const NumFormat._(13);
  static const NUMFORMAT_DATE = const NumFormat._(14);
  static const NUMFORMAT_CUSTOM_D_MON_YY = const NumFormat._(15);
  static const NUMFORMAT_CUSTOM_D_MON = const NumFormat._(16);
  static const NUMFORMAT_CUSTOM_MON_YY = const NumFormat._(17);
  static const NUMFORMAT_CUSTOM_HMM_AM = const NumFormat._(18);
  static const NUMFORMAT_CUSTOM_HMMSS_AM = const NumFormat._(19);
  static const NUMFORMAT_CUSTOM_HMM = const NumFormat._(20);
  static const NUMFORMAT_CUSTOM_HMMSS = const NumFormat._(21);
  static const NUMFORMAT_CUSTOM_MDYYYY_HMM = const NumFormat._(22);
  static const NUMFORMAT_NUMBER_SEP_NEGBRA = const NumFormat._(37);
  static const NUMFORMAT_NUMBER_SEP_NEGBRARED = const NumFormat._(38);
  static const NUMFORMAT_NUMBER_D2_SEP_NEGBRA = const NumFormat._(39);
  static const NUMFORMAT_NUMBER_D2_SEP_NEGBRARED = const NumFormat._(40);
  static const NUMFORMAT_ACCOUNT = const NumFormat._(41);
  static const NUMFORMAT_ACCOUNTCUR = const NumFormat._(42);
  static const NUMFORMAT_ACCOUNT_D2 = const NumFormat._(43);
  static const NUMFORMAT_ACCOUNT_D2_CUR = const NumFormat._(44);
  static const NUMFORMAT_CUSTOM_MMSS = const NumFormat._(45);
  static const NUMFORMAT_CUSTOM_H0MMSS = const NumFormat._(46);
  static const NUMFORMAT_CUSTOM_MMSS0 = const NumFormat._(47);
  static const NUMFORMAT_CUSTOM_000P0E_PLUS0 = const NumFormat._(48);
  static const NUMFORMAT_TEXT = const NumFormat._(49);
}

class AlignH {
  final int value;
  const AlignH._(this.value);
  static const ALIGNH_GENERAL = const AlignH._(0);
  static const ALIGNH_LEFT = const AlignH._(1);
  static const ALIGNH_CENTER = const AlignH._(2);
  static const ALIGNH_RIGHT = const AlignH._(3);
  static const ALIGNH_FILL = const AlignH._(4);
  static const ALIGNH_JUSTIFY = const AlignH._(5);
  static const ALIGNH_MERGE = const AlignH._(6);
  static const ALIGNH_DISTRIBUTED = const AlignH._(7);
}

class AlignV {
  final int value;
  const AlignV._(this.value);
  static const ALIGNV_TOP = const AlignV._(0);
  static const ALIGNV_CENTER = const AlignV._(1);
  static const ALIGNV_BOTTOM = const AlignV._(2);
  static const ALIGNV_JUSTIFY = const AlignV._(3);
  static const ALIGNV_DISTRIBUTED = const AlignV._(4);
}

class BorderStyle {
  final int value;
  const BorderStyle._(this.value);
  static const BORDERSTYLE_NONE = const BorderStyle._(0);
  static const BORDERSTYLE_THIN = const BorderStyle._(1);
  static const BORDERSTYLE_MEDIUM = const BorderStyle._(2);
  static const BORDERSTYLE_DASHED = const BorderStyle._(3);
  static const BORDERSTYLE_DOTTED = const BorderStyle._(4);
  static const BORDERSTYLE_THICK = const BorderStyle._(5);
  static const BORDERSTYLE_DOUBLE = const BorderStyle._(6);
  static const BORDERSTYLE_HAIR = const BorderStyle._(7);
  static const BORDERSTYLE_MEDIUMDASHED = const BorderStyle._(8);
  static const BORDERSTYLE_DASHDOT = const BorderStyle._(9);
  static const BORDERSTYLE_MEDIUMDASHDOT = const BorderStyle._(10);
  static const BORDERSTYLE_DASHDOTDOT = const BorderStyle._(11);
  static const BORDERSTYLE_MEDIUMDASHDOTDOT = const BorderStyle._(12);
  static const BORDERSTYLE_SLANTDASHDOT = const BorderStyle._(13);
}

class BorderDiagonal {
  final int value;
  const BorderDiagonal._(this.value);
  static const BORDERDIAGONAL_NONE = const BorderDiagonal._(0);
  static const BORDERDIAGONAL_DOWN = const BorderDiagonal._(1);
  static const BORDERDIAGONAL_UP = const BorderDiagonal._(2);
  static const BORDERDIAGONAL_BOTH = const BorderDiagonal._(3);
}

class FillPattern {
  final int value;
  const FillPattern._(this.value);
  static const FILLPATTERN_NONE = const FillPattern._(0);
  static const FILLPATTERN_SOLID = const FillPattern._(1);
  static const FILLPATTERN_GRAY50 = const FillPattern._(2);
  static const FILLPATTERN_GRAY75 = const FillPattern._(3);
  static const FILLPATTERN_GRAY25 = const FillPattern._(4);
  static const FILLPATTERN_HORSTRIPE = const FillPattern._(5);
  static const FILLPATTERN_VERSTRIPE = const FillPattern._(6);
  static const FILLPATTERN_REVDIAGSTRIPE = const FillPattern._(7);
  static const FILLPATTERN_DIAGSTRIPE = const FillPattern._(8);
  static const FILLPATTERN_DIAGCROSSHATCH = const FillPattern._(9);
  static const FILLPATTERN_THICKDIAGCROSSHATCH = const FillPattern._(10);
  static const FILLPATTERN_THINHORSTRIPE = const FillPattern._(11);
  static const FILLPATTERN_THINVERSTRIPE = const FillPattern._(12);
  static const FILLPATTERN_THINREVDIAGSTRIPE = const FillPattern._(13);
  static const FILLPATTERN_THINDIAGSTRIPE = const FillPattern._(14);
  static const FILLPATTERN_THINHORCROSSHATCH = const FillPattern._(15);
  static const FILLPATTERN_THINDIAGCROSSHATCH = const FillPattern._(16);
  static const FILLPATTERN_GRAY12P5 = const FillPattern._(17);
  static const FILLPATTERN_GRAY6P25 = const FillPattern._(18);
}

class Script {
  final int value;
  const Script._(this.value);
  static const SCRIPT_NORMAL = const Script._(0);
  static const SCRIPT_SUPER = const Script._(1);
  static const SCRIPT_SUB = const Script._(2);
}

class Underline {
  final int value;
  const Underline._(this.value);
  static const UNDERLINE_NONE = const Underline._(0);
  static const UNDERLINE_SINGLE = const Underline._(1);
  static const UNDERLINE_DOUBLE = const Underline._(2);
  static const UNDERLINE_SINGLEACC = const Underline._(33);
  static const UNDERLINE_DOUBLEACC = const Underline._(34);
}

class Paper {
  final int value;
  const Paper._(this.value);
  static const PAPER_DEFAULT = const Paper._(0);
  static const PAPER_LETTER = const Paper._(1);
  static const PAPER_LETTERSMALL = const Paper._(2);
  static const PAPER_TABLOID = const Paper._(3);
  static const PAPER_LEDGER = const Paper._(4);
  static const PAPER_LEGAL = const Paper._(5);
  static const PAPER_STATEMENT = const Paper._(6);
  static const PAPER_EXECUTIVE = const Paper._(7);
  static const PAPER_A3 = const Paper._(8);
  static const PAPER_A4 = const Paper._(9);
  static const PAPER_A4SMALL = const Paper._(10);
  static const PAPER_A5 = const Paper._(11);
  static const PAPER_B4 = const Paper._(12);
  static const PAPER_B5 = const Paper._(13);
  static const PAPER_FOLIO = const Paper._(14);
  static const PAPER_QUATRO = const Paper._(15);
  static const PAPER_10x14 = const Paper._(16);
  static const PAPER_10x17 = const Paper._(17);
  static const PAPER_NOTE = const Paper._(18);
  static const PAPER_ENVELOPE_9 = const Paper._(19);
  static const PAPER_ENVELOPE_10 = const Paper._(20);
  static const PAPER_ENVELOPE_11 = const Paper._(21);
  static const PAPER_ENVELOPE_12 = const Paper._(22);
  static const PAPER_ENVELOPE_14 = const Paper._(23);
  static const PAPER_C_SIZE = const Paper._(24);
  static const PAPER_D_SIZE = const Paper._(25);
  static const PAPER_E_SIZE = const Paper._(26);
  static const PAPER_ENVELOPE_DL = const Paper._(27);
  static const PAPER_ENVELOPE_C5 = const Paper._(28);
  static const PAPER_ENVELOPE_C3 = const Paper._(29);
  static const PAPER_ENVELOPE_C4 = const Paper._(30);
  static const PAPER_ENVELOPE_C6 = const Paper._(31);
  static const PAPER_ENVELOPE_C65 = const Paper._(32);
  static const PAPER_ENVELOPE_B4 = const Paper._(33);
  static const PAPER_ENVELOPE_B5 = const Paper._(34);
  static const PAPER_ENVELOPE_B6 = const Paper._(35);
  static const PAPER_ENVELOPE = const Paper._(36);
  static const PAPER_ENVELOPE_MONARCH = const Paper._(37);
  static const PAPER_US_ENVELOPE = const Paper._(38);
  static const PAPER_FANFOLD = const Paper._(39);
  static const PAPER_GERMAN_STD_FANFOLD = const Paper._(40);
  static const PAPER_GERMAN_LEGAL_FANFOLD = const Paper._(41);
  static const PAPER_B4_ISO = const Paper._(42);
  static const PAPER_JAPANESE_POSTCARD = const Paper._(43);
  static const PAPER_9x11 = const Paper._(44);
  static const PAPER_10x11 = const Paper._(45);
  static const PAPER_15x11 = const Paper._(46);
  static const PAPER_ENVELOPE_INVITE = const Paper._(47);
  static const PAPER_US_LETTER_EXTRA = const Paper._(50);
  static const PAPER_US_LEGAL_EXTRA = const Paper._(51);
  static const PAPER_US_TABLOID_EXTRA = const Paper._(52);
  static const PAPER_A4_EXTRA = const Paper._(53);
  static const PAPER_LETTER_TRANSVERSE = const Paper._(54);
  static const PAPER_A4_TRANSVERSE = const Paper._(55);
  static const PAPER_LETTER_EXTRA_TRANSVERSE = const Paper._(56);
  static const PAPER_SUPERA = const Paper._(57);
  static const PAPER_SUPERB = const Paper._(58);
  static const PAPER_US_LETTER_PLUS = const Paper._(59);
  static const PAPER_A4_PLUS = const Paper._(60);
  static const PAPER_A5_TRANSVERSE = const Paper._(61);
  static const PAPER_B5_TRANSVERSE = const Paper._(62);
  static const PAPER_A3_EXTRA = const Paper._(63);
  static const PAPER_A5_EXTRA = const Paper._(64);
  static const PAPER_B5_EXTRA = const Paper._(65);
  static const PAPER_A2 = const Paper._(66);
  static const PAPER_A3_TRANSVERSE = const Paper._(67);
  static const PAPER_A3_EXTRA_TRANSVERSE = const Paper._(68);
  static const PAPER_JAPANESE_DOUBLE_POSTCARD = const Paper._(69);
  static const PAPER_A6 = const Paper._(70);
  static const PAPER_JAPANESE_ENVELOPE_KAKU2 = const Paper._(71);
  static const PAPER_JAPANESE_ENVELOPE_KAKU3 = const Paper._(72);
  static const PAPER_JAPANESE_ENVELOPE_CHOU3 = const Paper._(73);
  static const PAPER_JAPANESE_ENVELOPE_CHOU4 = const Paper._(74);
  static const PAPER_LETTER_ROTATED = const Paper._(75);
  static const PAPER_A3_ROTATED = const Paper._(76);
  static const PAPER_A4_ROTATED = const Paper._(77);
  static const PAPER_A5_ROTATED = const Paper._(78);
  static const PAPER_B4_ROTATED = const Paper._(79);
  static const PAPER_B5_ROTATED = const Paper._(80);
  static const PAPER_JAPANESE_POSTCARD_ROTATED = const Paper._(81);
  static const PAPER_DOUBLE_JAPANESE_POSTCARD_ROTATED = const Paper._(82);
  static const PAPER_A6_ROTATED = const Paper._(83);
  static const PAPER_JAPANESE_ENVELOPE_KAKU2_ROTATED = const Paper._(84);
  static const PAPER_JAPANESE_ENVELOPE_KAKU3_ROTATED = const Paper._(85);
  static const PAPER_JAPANESE_ENVELOPE_CHOU3_ROTATED = const Paper._(86);
  static const PAPER_JAPANESE_ENVELOPE_CHOU4_ROTATED = const Paper._(87);
  static const PAPER_B6 = const Paper._(88);
  static const PAPER_B6_ROTATED = const Paper._(89);
  static const PAPER_12x11 = const Paper._(90);
  static const PAPER_JAPANESE_ENVELOPE_YOU4 = const Paper._(91);
  static const PAPER_JAPANESE_ENVELOPE_YOU4_ROTATED = const Paper._(92);
  static const PAPER_PRC16K = const Paper._(93);
  static const PAPER_PRC32K = const Paper._(94);
  static const PAPER_PRC32K_BIG = const Paper._(95);
  static const PAPER_PRC_ENVELOPE1 = const Paper._(96);
  static const PAPER_PRC_ENVELOPE2 = const Paper._(97);
  static const PAPER_PRC_ENVELOPE3 = const Paper._(98);
  static const PAPER_PRC_ENVELOPE4 = const Paper._(99);
  static const PAPER_PRC_ENVELOPE5 = const Paper._(100);
  static const PAPER_PRC_ENVELOPE6 = const Paper._(101);
  static const PAPER_PRC_ENVELOPE7 = const Paper._(102);
  static const PAPER_PRC_ENVELOPE8 = const Paper._(103);
  static const PAPER_PRC_ENVELOPE9 = const Paper._(104);
  static const PAPER_PRC_ENVELOPE10 = const Paper._(105);
  static const PAPER_PRC16K_ROTATED = const Paper._(106);
  static const PAPER_PRC32K_ROTATED = const Paper._(107);
  static const PAPER_PRC32KBIG_ROTATED = const Paper._(108);
  static const PAPER_PRC_ENVELOPE1_ROTATED = const Paper._(109);
  static const PAPER_PRC_ENVELOPE2_ROTATED = const Paper._(110);
  static const PAPER_PRC_ENVELOPE3_ROTATED = const Paper._(111);
  static const PAPER_PRC_ENVELOPE4_ROTATED = const Paper._(112);
  static const PAPER_PRC_ENVELOPE5_ROTATED = const Paper._(113);
  static const PAPER_PRC_ENVELOPE6_ROTATED = const Paper._(114);
  static const PAPER_PRC_ENVELOPE7_ROTATED = const Paper._(115);
  static const PAPER_PRC_ENVELOPE8_ROTATED = const Paper._(116);
  static const PAPER_PRC_ENVELOPE9_ROTATED = const Paper._(117);
  static const PAPER_PRC_ENVELOPE10_ROTATED = const Paper._(118);
}

class SheetType {
  final int value;
  const SheetType._(this.value);
  static const  SHEETTYPE_SHEET = const SheetType._(0);
  static const SHEETTYPE_CHART = const SheetType._(1);
  static const SHEETTYPE_UNKNOWN  = const SheetType._(2);
}

class CellType {
  final int value;
  const CellType._(this.value);
  static const CELLTYPE_EMPTY = const CellType._(0);
  static const CELLTYPE_NUMBER = const CellType._(1);
  static const CELLTYPE_STRING = const CellType._(2);
  static const CELLTYPE_BOOLEAN = const CellType._(3);
  static const CELLTYPE_BLANK = const CellType._(4);
  static const CELLTYPE_ERROR = const CellType._(5);
}

class ErrorType {
  final int value;
  const ErrorType._(this.value);
  static const ERRORTYPE_NULL = const ErrorType._(0);
  static const ERRORTYPE_DIV_0 = const ErrorType._(7);
  static const ERRORTYPE_VALUE = const ErrorType._(15);
  static const ERRORTYPE_REF = const ErrorType._(23);
  static const ERRORTYPE_NAME = const ErrorType._(29);
  static const ERRORTYPE_NUM = const ErrorType._(36);
  static const ERRORTYPE_NA = const ErrorType._(42);
  static const ERRORTYPE_NOERROR = const ErrorType._(255);
}

class PictureType {
  final int value;
  const PictureType._(this.value);
  static const PICTURETYPE_PNG = const PictureType._(0);
  static const PICTURETYPE_JPEG = const PictureType._(1);
  static const PICTURETYPE_GIF = const PictureType._(2);
  static const PICTURETYPE_WMF = const PictureType._(3);
  static const PICTURETYPE_DIB = const PictureType._(4);
  static const PICTURETYPE_EMF = const PictureType._(5);
  static const PICTURETYPE_PICT = const PictureType._(6);
  static const PICTURETYPE_TIFF = const PictureType._(7);
  static const PICTURETYPE_ERROR = const PictureType._(255);
}

class SheetState {
  final int value;
  const SheetState._(this.value);
  static const SHEETSTATE_VISIBLE = const SheetState._(0);
  static const SHEETSTATE_HIDDEN = const SheetState._(1);
  static const SHEETSTATE_VERYHIDDEN = const SheetState._(2);
}

class Scope {
  final int value;
  const Scope._(this.value);
  static const SCOPE_UNDEFINED = const Scope._(-2);
  static const SCOPE_WORKBOOK = const Scope._(-1);
}

class Position {
  final int value;
  const Position._(this.value);
  static const POSITION_MOVE_AND_SIZE = const Position._(0);
  static const POSITION_ONLY_MOVE = const Position._(1);
  static const POSITION_ABSOLUTE = const Position._(2);
}

class Operator {
  final int value;
  const Operator._(this.value);
  static const  OPERATOR_EQUAL = const Operator._(0);
  static const OPERATOR_GREATER_THAN = const Operator._(1);
  static const OPERATOR_GREATER_THAN_OR_EQUAL = const Operator._(2);
  static const OPERATOR_LESS_THAN = const Operator._(3);
  static const OPERATOR_LESS_THAN_OR_EQUAL = const Operator._(4);
  static const OPERATOR_NOT_EQUAL  = const Operator._(5);
}

class Filter {
  final int value;
  const Filter._(this.value);
  static const  FILTER_VALUE = const Filter._(0);
  static const FILTER_TOP10 = const Filter._(1);
  static const FILTER_CUSTOM = const Filter._(2);
  static const FILTER_DYNAMIC = const Filter._(3);
  static const FILTER_COLOR = const Filter._(4);
  static const FILTER_ICON = const Filter._(5);
  static const FILTER_EXT = const Filter._(6);
  static const FILTER_NOT_SET  = const Filter._(7);
}

class IgnoredError {
  final int value;
  const IgnoredError._(this.value);
  static const  IERR_NO_ERROR = const IgnoredError._(0);
  static const IERR_EVAL_ERROR = const IgnoredError._(1);
  static const IERR_EMPTY_CELLREF = const IgnoredError._(2);
  static const IERR_NUMBER_STORED_AS_TEXT = const IgnoredError._(4);
  static const IERR_INCONSIST_RANGE = const IgnoredError._(8);
  static const IERR_INCONSIST_FMLA = const IgnoredError._(16);
  static const IERR_TWODIG_TEXTYEAR = const IgnoredError._(32);
  static const IERR_UNLOCK_FMLA = const IgnoredError._(64);
  static const IERR_DATA_VALIDATION = const IgnoredError._(128);
}

class EnhancedProtection {
  final int value;
  const EnhancedProtection._(this.value);
  static const  PROT_DEFAULT = const EnhancedProtection._(-1);
  static const PROT_ALL = const EnhancedProtection._(0);
  static const PROT_OBJECTS = const EnhancedProtection._(1);
  static const PROT_SCENARIOS = const EnhancedProtection._(2);
  static const PROT_FORMAT_CELLS = const EnhancedProtection._(4);
  static const PROT_FORMAT_COLUMNS = const EnhancedProtection._(8);
  static const PROT_FORMAT_ROWS = const EnhancedProtection._(16);
  static const PROT_INSERT_COLUMNS = const EnhancedProtection._(32);
  static const PROT_INSERT_ROWS = const EnhancedProtection._(64);
  static const PROT_INSERT_HYPERLINKS = const EnhancedProtection._(128);
  static const PROT_DELETE_COLUMNS = const EnhancedProtection._(256);
  static const PROT_DELETE_ROWS = const EnhancedProtection._(512);
  static const PROT_SEL_LOCKED_CELLS = const EnhancedProtection._(1024);
  static const PROT_SORT = const EnhancedProtection._(2048);
  static const PROT_AUTOFILTER = const EnhancedProtection._(4096);
  static const PROT_PIVOTTABLES = const EnhancedProtection._(8192);
  static const PROT_SEL_UNLOCKED_CELLS = const EnhancedProtection._(16384);
}

class DataValidationType {
  final int value;
  const DataValidationType._(this.value);
  static const  VALIDATION_TYPE_NONE = const DataValidationType._(0);
  static const VALIDATION_TYPE_WHOLE = const DataValidationType._(1);
  static const VALIDATION_TYPE_DECIMAL = const DataValidationType._(2);
  static const VALIDATION_TYPE_LIST = const DataValidationType._(3);
  static const VALIDATION_TYPE_DATE = const DataValidationType._(4);
  static const VALIDATION_TYPE_TIME = const DataValidationType._(5);
  static const VALIDATION_TYPE_TEXTLENGTH = const DataValidationType._(6);
  static const VALIDATION_TYPE_CUSTOM  = const DataValidationType._(7);
}

class DataValidationOperator {
  final int value;
  const DataValidationOperator._(this.value);
  static const  VALIDATION_OP_BETWEEN = const DataValidationOperator._(0);
  static const VALIDATION_OP_NOTBETWEEN = const DataValidationOperator._(1);
  static const VALIDATION_OP_EQUAL = const DataValidationOperator._(2);
  static const VALIDATION_OP_NOTEQUAL = const DataValidationOperator._(3);
  static const VALIDATION_OP_LESSTHAN = const DataValidationOperator._(4);
  static const VALIDATION_OP_LESSTHANOREQUAL = const DataValidationOperator._(5);
  static const VALIDATION_OP_GREATERTHAN = const DataValidationOperator._(6);
  static const VALIDATION_OP_GREATERTHANOREQUAL  = const DataValidationOperator._(7);
}

class DataValidationErrorStyle {
  final int value;
  const DataValidationErrorStyle._(this.value);
  static const  VALIDATION_ERRSTYLE_STOP = const DataValidationErrorStyle._(0);
  static const VALIDATION_ERRSTYLE_WARNING = const DataValidationErrorStyle._(1);
  static const VALIDATION_ERRSTYLE_INFORMATION  = const DataValidationErrorStyle._(2);
}

