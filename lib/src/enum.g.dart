part of 'libxl_ext.dart';


class Color {
  final int value;
  const Color._(this.value);
  static const BLACK = const Color._(8);
  static const WHITE = const Color._(9);
  static const RED = const Color._(10);
  static const BRIGHTGREEN = const Color._(11);
  static const BLUE = const Color._(12);
  static const YELLOW = const Color._(13);
  static const PINK = const Color._(14);
  static const TURQUOISE = const Color._(15);
  static const DARKRED = const Color._(16);
  static const GREEN = const Color._(17);
  static const DARKBLUE = const Color._(18);
  static const DARKYELLOW = const Color._(19);
  static const VIOLET = const Color._(20);
  static const TEAL = const Color._(21);
  static const GRAY25 = const Color._(22);
  static const GRAY50 = const Color._(23);
  static const PERIWINKLE_CF = const Color._(24);
  static const PLUM_CF = const Color._(25);
  static const IVORY_CF = const Color._(26);
  static const LIGHTTURQUOISE_CF = const Color._(27);
  static const DARKPURPLE_CF = const Color._(28);
  static const CORAL_CF = const Color._(29);
  static const OCEANBLUE_CF = const Color._(30);
  static const ICEBLUE_CF = const Color._(31);
  static const DARKBLUE_CL = const Color._(32);
  static const PINK_CL = const Color._(33);
  static const YELLOW_CL = const Color._(34);
  static const TURQUOISE_CL = const Color._(35);
  static const VIOLET_CL = const Color._(36);
  static const DARKRED_CL = const Color._(37);
  static const TEAL_CL = const Color._(38);
  static const BLUE_CL = const Color._(39);
  static const SKYBLUE = const Color._(40);
  static const LIGHTTURQUOISE = const Color._(41);
  static const LIGHTGREEN = const Color._(42);
  static const LIGHTYELLOW = const Color._(43);
  static const PALEBLUE = const Color._(44);
  static const ROSE = const Color._(45);
  static const LAVENDER = const Color._(46);
  static const TAN = const Color._(47);
  static const LIGHTBLUE = const Color._(48);
  static const AQUA = const Color._(49);
  static const LIME = const Color._(50);
  static const GOLD = const Color._(51);
  static const LIGHTORANGE = const Color._(52);
  static const ORANGE = const Color._(53);
  static const BLUEGRAY = const Color._(54);
  static const GRAY40 = const Color._(55);
  static const DARKTEAL = const Color._(56);
  static const SEAGREEN = const Color._(57);
  static const DARKGREEN = const Color._(58);
  static const OLIVEGREEN = const Color._(59);
  static const BROWN = const Color._(60);
  static const PLUM = const Color._(61);
  static const INDIGO = const Color._(62);
  static const GRAY80 = const Color._(63);
  static const DEFAULT_FOREGROUND = const Color._(64);
  static const DEFAULT_BACKGROUND = const Color._(65);
  static const TOOLTIP = const Color._(81);
  static const NONE = const Color._(127);
  static const AUTO = const Color._(32767);
  static CUSTOM (int i) {
    return Color._(i);
  }
}

class CustomNumFormat {

}

class NumFormat {
  final int value;
  const NumFormat._(this.value);
  static const GENERAL = const NumFormat._(0);
  static const NUMBER = const NumFormat._(1);
  static const NUMBER_D2 = const NumFormat._(2);
  static const NUMBER_SEP = const NumFormat._(3);
  static const NUMBER_SEP_D2 = const NumFormat._(4);
  static const CURRENCY_NEGBRA = const NumFormat._(5);
  static const CURRENCY_NEGBRARED = const NumFormat._(6);
  static const CURRENCY_D2_NEGBRA = const NumFormat._(7);
  static const CURRENCY_D2_NEGBRARED = const NumFormat._(8);
  static const PERCENT = const NumFormat._(9);
  static const PERCENT_D2 = const NumFormat._(10);
  static const SCIENTIFIC_D2 = const NumFormat._(11);
  static const FRACTION_ONEDIG = const NumFormat._(12);
  static const FRACTION_TWODIG = const NumFormat._(13);
  static const DATE = const NumFormat._(14);
  static const CUSTOM_D_MON_YY = const NumFormat._(15);
  static const CUSTOM_D_MON = const NumFormat._(16);
  static const CUSTOM_MON_YY = const NumFormat._(17);
  static const CUSTOM_HMM_AM = const NumFormat._(18);
  static const CUSTOM_HMMSS_AM = const NumFormat._(19);
  static const CUSTOM_HMM = const NumFormat._(20);
  static const CUSTOM_HMMSS = const NumFormat._(21);
  static const CUSTOM_MDYYYY_HMM = const NumFormat._(22);
  static const NUMBER_SEP_NEGBRA = const NumFormat._(37);
  static const NUMBER_SEP_NEGBRARED = const NumFormat._(38);
  static const NUMBER_D2_SEP_NEGBRA = const NumFormat._(39);
  static const NUMBER_D2_SEP_NEGBRARED = const NumFormat._(40);
  static const ACCOUNT = const NumFormat._(41);
  static const ACCOUNTCUR = const NumFormat._(42);
  static const ACCOUNT_D2 = const NumFormat._(43);
  static const ACCOUNT_D2_CUR = const NumFormat._(44);
  static const CUSTOM_MMSS = const NumFormat._(45);
  static const CUSTOM_H0MMSS = const NumFormat._(46);
  static const CUSTOM_MMSS0 = const NumFormat._(47);
  static const CUSTOM_000P0E_PLUS0 = const NumFormat._(48);
  static const TEXT = const NumFormat._(49);
  static CUSTOM (int i) {
    return NumFormat._(i);
  }
}

class AlignH {
  final int value;
  const AlignH._(this.value);
  static const GENERAL = const AlignH._(0);
  static const LEFT = const AlignH._(1);
  static const CENTER = const AlignH._(2);
  static const RIGHT = const AlignH._(3);
  static const FILL = const AlignH._(4);
  static const JUSTIFY = const AlignH._(5);
  static const MERGE = const AlignH._(6);
  static const DISTRIBUTED = const AlignH._(7);
}

class AlignV {
  final int value;
  const AlignV._(this.value);
  static const TOP = const AlignV._(0);
  static const CENTER = const AlignV._(1);
  static const BOTTOM = const AlignV._(2);
  static const JUSTIFY = const AlignV._(3);
  static const DISTRIBUTED = const AlignV._(4);
}

class BorderStyle {
  final int value;
  const BorderStyle._(this.value);
  static const NONE = const BorderStyle._(0);
  static const THIN = const BorderStyle._(1);
  static const MEDIUM = const BorderStyle._(2);
  static const DASHED = const BorderStyle._(3);
  static const DOTTED = const BorderStyle._(4);
  static const THICK = const BorderStyle._(5);
  static const DOUBLE = const BorderStyle._(6);
  static const HAIR = const BorderStyle._(7);
  static const MEDIUMDASHED = const BorderStyle._(8);
  static const DASHDOT = const BorderStyle._(9);
  static const MEDIUMDASHDOT = const BorderStyle._(10);
  static const DASHDOTDOT = const BorderStyle._(11);
  static const MEDIUMDASHDOTDOT = const BorderStyle._(12);
  static const SLANTDASHDOT = const BorderStyle._(13);
}

class BorderDiagonal {
  final int value;
  const BorderDiagonal._(this.value);
  static const NONE = const BorderDiagonal._(0);
  static const DOWN = const BorderDiagonal._(1);
  static const UP = const BorderDiagonal._(2);
  static const BOTH = const BorderDiagonal._(3);
}

class FillPattern {
  final int value;
  const FillPattern._(this.value);
  static const NONE = const FillPattern._(0);
  static const SOLID = const FillPattern._(1);
  static const GRAY50 = const FillPattern._(2);
  static const GRAY75 = const FillPattern._(3);
  static const GRAY25 = const FillPattern._(4);
  static const HORSTRIPE = const FillPattern._(5);
  static const VERSTRIPE = const FillPattern._(6);
  static const REVDIAGSTRIPE = const FillPattern._(7);
  static const DIAGSTRIPE = const FillPattern._(8);
  static const DIAGCROSSHATCH = const FillPattern._(9);
  static const THICKDIAGCROSSHATCH = const FillPattern._(10);
  static const THINHORSTRIPE = const FillPattern._(11);
  static const THINVERSTRIPE = const FillPattern._(12);
  static const THINREVDIAGSTRIPE = const FillPattern._(13);
  static const THINDIAGSTRIPE = const FillPattern._(14);
  static const THINHORCROSSHATCH = const FillPattern._(15);
  static const THINDIAGCROSSHATCH = const FillPattern._(16);
  static const GRAY12P5 = const FillPattern._(17);
  static const GRAY6P25 = const FillPattern._(18);
}

class Script {
  final int value;
  const Script._(this.value);
  static const NORMAL = const Script._(0);
  static const SUPER = const Script._(1);
  static const SUB = const Script._(2);
}

class Underline {
  final int value;
  const Underline._(this.value);
  static const NONE = const Underline._(0);
  static const SINGLE = const Underline._(1);
  static const DOUBLE = const Underline._(2);
  static const SINGLEACC = const Underline._(33);
  static const DOUBLEACC = const Underline._(34);
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
  static const SHEET = const SheetType._(0);
  static const CHART = const SheetType._(1);
  static const UNKNOWN  = const SheetType._(2);
}

class CellType {
  final int value;
  const CellType._(this.value);
  static const EMPTY = const CellType._(0);
  static const NUMBER = const CellType._(1);
  static const STRING = const CellType._(2);
  static const BOOLEAN = const CellType._(3);
  static const BLANK = const CellType._(4);
  static const ERROR = const CellType._(5);
}

class ErrorType {
  final int value;
  const ErrorType._(this.value);
  static const NULL = const ErrorType._(0);
  static const DIV_0 = const ErrorType._(7);
  static const VALUE = const ErrorType._(15);
  static const REF = const ErrorType._(23);
  static const NAME = const ErrorType._(29);
  static const NUM = const ErrorType._(36);
  static const NA = const ErrorType._(42);
  static const NOERROR = const ErrorType._(255);
}

class PictureType {
  final int value;
  const PictureType._(this.value);
  static const PNG = const PictureType._(0);
  static const JPEG = const PictureType._(1);
  static const GIF = const PictureType._(2);
  static const WMF = const PictureType._(3);
  static const DIB = const PictureType._(4);
  static const EMF = const PictureType._(5);
  static const PICT = const PictureType._(6);
  static const TIFF = const PictureType._(7);
  static const ERROR = const PictureType._(255);
}

class SheetState {
  final int value;
  const SheetState._(this.value);
  static const VISIBLE = const SheetState._(0);
  static const HIDDEN = const SheetState._(1);
  static const VERYHIDDEN = const SheetState._(2);
}

class Scope {
  final int value;
  const Scope._(this.value);
  static const UNDEFINED = const Scope._(-2);
  static const WORKBOOK = const Scope._(-1);
}

class Position {
  final int value;
  const Position._(this.value);
  static const MOVE_AND_SIZE = const Position._(0);
  static const ONLY_MOVE = const Position._(1);
  static const ABSOLUTE = const Position._(2);
}

class Operator {
  final int value;
  const Operator._(this.value);
  static const EQUAL = const Operator._(0);
  static const GREATER_THAN = const Operator._(1);
  static const GREATER_THAN_OR_EQUAL = const Operator._(2);
  static const LESS_THAN = const Operator._(3);
  static const LESS_THAN_OR_EQUAL = const Operator._(4);
  static const NOT_EQUAL  = const Operator._(5);
}

class Filter {
  final int value;
  const Filter._(this.value);
  static const VALUE = const Filter._(0);
  static const TOP10 = const Filter._(1);
  static const CUSTOM = const Filter._(2);
  static const DYNAMIC = const Filter._(3);
  static const COLOR = const Filter._(4);
  static const ICON = const Filter._(5);
  static const EXT = const Filter._(6);
  static const NOT_SET  = const Filter._(7);
}

class IgnoredError {
  final int value;
  const IgnoredError._(this.value);
  static const NO_ERROR = const IgnoredError._(0);
  static const EVAL_ERROR = const IgnoredError._(1);
  static const EMPTY_CELLREF = const IgnoredError._(2);
  static const NUMBER_STORED_AS_TEXT = const IgnoredError._(4);
  static const INCONSIST_RANGE = const IgnoredError._(8);
  static const INCONSIST_FMLA = const IgnoredError._(16);
  static const TWODIG_TEXTYEAR = const IgnoredError._(32);
  static const UNLOCK_FMLA = const IgnoredError._(64);
  static const DATA_VALIDATION = const IgnoredError._(128);
}

class EnhancedProtection {
  final int value;
  const EnhancedProtection._(this.value);
  static const DEFAULT = const EnhancedProtection._(-1);
  static const ALL = const EnhancedProtection._(0);
  static const OBJECTS = const EnhancedProtection._(1);
  static const SCENARIOS = const EnhancedProtection._(2);
  static const FORMAT_CELLS = const EnhancedProtection._(4);
  static const FORMAT_COLUMNS = const EnhancedProtection._(8);
  static const FORMAT_ROWS = const EnhancedProtection._(16);
  static const INSERT_COLUMNS = const EnhancedProtection._(32);
  static const INSERT_ROWS = const EnhancedProtection._(64);
  static const INSERT_HYPERLINKS = const EnhancedProtection._(128);
  static const DELETE_COLUMNS = const EnhancedProtection._(256);
  static const DELETE_ROWS = const EnhancedProtection._(512);
  static const SEL_LOCKED_CELLS = const EnhancedProtection._(1024);
  static const SORT = const EnhancedProtection._(2048);
  static const AUTOFILTER = const EnhancedProtection._(4096);
  static const PIVOTTABLES = const EnhancedProtection._(8192);
  static const SEL_UNLOCKED_CELLS = const EnhancedProtection._(16384);
}

class DataValidationType {
  final int value;
  const DataValidationType._(this.value);
  static const NONE = const DataValidationType._(0);
  static const WHOLE = const DataValidationType._(1);
  static const DECIMAL = const DataValidationType._(2);
  static const LIST = const DataValidationType._(3);
  static const DATE = const DataValidationType._(4);
  static const TIME = const DataValidationType._(5);
  static const TEXTLENGTH = const DataValidationType._(6);
  static const CUSTOM  = const DataValidationType._(7);
}

class DataValidationOperator {
  final int value;
  const DataValidationOperator._(this.value);
  static const BETWEEN = const DataValidationOperator._(0);
  static const NOTBETWEEN = const DataValidationOperator._(1);
  static const EQUAL = const DataValidationOperator._(2);
  static const NOTEQUAL = const DataValidationOperator._(3);
  static const LESSTHAN = const DataValidationOperator._(4);
  static const LESSTHANOREQUAL = const DataValidationOperator._(5);
  static const GREATERTHAN = const DataValidationOperator._(6);
  static const GREATERTHANOREQUAL  = const DataValidationOperator._(7);
}

class DataValidationErrorStyle {
  final int value;
  const DataValidationErrorStyle._(this.value);
  static const STOP = const DataValidationErrorStyle._(0);
  static const WARNING = const DataValidationErrorStyle._(1);
  static const INFORMATION  = const DataValidationErrorStyle._(2);
}
