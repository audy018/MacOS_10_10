{ Parsed from DiscRecording.framework (MacOSX10.10) DRCoreCDText.h }
{ Created on Sun Mar 8 1:47:42 2015 }

{$ifndef _H_DRCoreCDText}

{$ifdef TYPES}
const
  kDRCDTextEncodingISOLatin1Modified = kCFStringEncodingISOLatin1;
  kDRCDTextEncodingASCII = kCFStringEncodingASCII;
const
  kDRCDTextGenreCodeUnknown = $0001;
  kDRCDTextGenreCodeAdultContemporary = $0002;
  kDRCDTextGenreCodeAlternativeRock = $0003;
  kDRCDTextGenreCodeChildrens = $0004;
  kDRCDTextGenreCodeClassical = $0005;
  kDRCDTextGenreCodeContemporaryChristian = $0006;
  kDRCDTextGenreCodeCountry = $0007;
  kDRCDTextGenreCodeDance = $0008;
  kDRCDTextGenreCodeEasyListening = $0009;
  kDRCDTextGenreCodeErotic = $000A;
  kDRCDTextGenreCodeFolk = $000B;
  kDRCDTextGenreCodeGospel = $000C;
  kDRCDTextGenreCodeHipHop = $000D;
  kDRCDTextGenreCodeJazz = $000E;
  kDRCDTextGenreCodeLatin = $000F;
  kDRCDTextGenreCodeMusical = $0010;
  kDRCDTextGenreCodeNewAge = $0011;
  kDRCDTextGenreCodeOpera = $0012;
  kDRCDTextGenreCodeOperetta = $0013;
  kDRCDTextGenreCodePop = $0014;
  kDRCDTextGenreCodeRap = $0015;
  kDRCDTextGenreCodeReggae = $0016;
  kDRCDTextGenreCodeRock = $0017;
  kDRCDTextGenreCodeRhythmAndBlues = $0018;
  kDRCDTextGenreCodeSoundEffects = $0019;
  kDRCDTextGenreCodeSoundtrack = $001A;
  kDRCDTextGenreCodeSpokenWord = $001B;
  kDRCDTextGenreCodeWorldMusic = $001C;
{$endif}

{$ifdef FUNCTIONS}
function DRCDTextBlockCreateArrayFromPackList(packs: CFDataRef): CFArrayRef; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  DRCDTextBlockRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function DRCDTextBlockGetTypeID: CFTypeID; cdecl; external;
function DRCDTextBlockCreate(language: CFStringRef; encoding: CFStringEncoding): DRCDTextBlockRef; cdecl; external;
function DRCDTextBlockGetProperties(block: DRCDTextBlockRef): CFDictionaryRef; cdecl; external;
procedure DRCDTextBlockSetProperties(block: DRCDTextBlockRef; properties: CFDictionaryRef); cdecl; external;
function DRCDTextBlockGetTrackDictionaries(block: DRCDTextBlockRef): CFArrayRef; cdecl; external;
procedure DRCDTextBlockSetTrackDictionaries(block: DRCDTextBlockRef; array_: CFArrayRef); cdecl; external;
function DRCDTextBlockGetValue(block: DRCDTextBlockRef; trackIndex: CFIndex; key: CFStringRef): CFTypeRef; cdecl; external;
procedure DRCDTextBlockSetValue(block: DRCDTextBlockRef; trackIndex: CFIndex; key: CFStringRef; value: CFTypeRef); cdecl; external;
function DRCDTextBlockFlatten(block: DRCDTextBlockRef): UInt32; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kDRCDTextLanguageKey: CFStringRef; cvar; external;
  kDRCDTextCharacterCodeKey: CFStringRef; cvar; external;
  kDRCDTextCFStringEncodingKey: CFStringRef; cvar; external;
  kDRCDTextCopyrightAssertedForSpecialMessagesKey: CFStringRef; cvar; external;
  kDRCDTextCopyrightAssertedForNamesKey: CFStringRef; cvar; external;
  kDRCDTextCopyrightAssertedForTitlesKey: CFStringRef; cvar; external;
  kDRCDTextTitleKey: CFStringRef; cvar; external;
  kDRCDTextPerformerKey: CFStringRef; cvar; external;
  kDRCDTextSongwriterKey: CFStringRef; cvar; external;
  kDRCDTextComposerKey: CFStringRef; cvar; external;
  kDRCDTextArrangerKey: CFStringRef; cvar; external;
  kDRCDTextSpecialMessageKey: CFStringRef; cvar; external;
  kDRCDTextDiscIdentKey: CFStringRef; cvar; external;
  kDRCDTextGenreKey: CFStringRef; cvar; external;
  kDRCDTextGenreCodeKey: CFStringRef; cvar; external;
  kDRCDTextClosedKey: CFStringRef; cvar; external;
  kDRCDTextMCNISRCKey: CFStringRef; cvar; external;
  kDRCDTextTOCKey: CFStringRef; cvar; external;
  kDRCDTextTOC2Key: CFStringRef; cvar; external;
  kDRCDTextSizeKey: CFStringRef; cvar; external;
{$endif}

{$endif}
