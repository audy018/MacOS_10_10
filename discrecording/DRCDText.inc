{ Parsed from DiscRecording.framework DRCDText.h }


{$ifdef TYPES}
type
  DRCDTextBlockPtr = ^DRCDTextBlock;
{$endif}

{$ifdef TYPES}
const
  DRCDTextEncodingISOLatin1Modified = NSISOLatin1StringEncoding;
  DRCDTextEncodingASCII = NSASCIIStringEncoding;
const
  DRCDTextGenreCodeUnknown = $0001;
  DRCDTextGenreCodeAdultContemporary = $0002;
  DRCDTextGenreCodeAlternativeRock = $0003;
  DRCDTextGenreCodeChildrens = $0004;
  DRCDTextGenreCodeClassical = $0005;
  DRCDTextGenreCodeContemporaryChristian = $0006;
  DRCDTextGenreCodeCountry = $0007;
  DRCDTextGenreCodeDance = $0008;
  DRCDTextGenreCodeEasyListening = $0009;
  DRCDTextGenreCodeErotic = $000A;
  DRCDTextGenreCodeFolk = $000B;
  DRCDTextGenreCodeGospel = $000C;
  DRCDTextGenreCodeHipHop = $000D;
  DRCDTextGenreCodeJazz = $000E;
  DRCDTextGenreCodeLatin = $000F;
  DRCDTextGenreCodeMusical = $0010;
  DRCDTextGenreCodeNewAge = $0011;
  DRCDTextGenreCodeOpera = $0012;
  DRCDTextGenreCodeOperetta = $0013;
  DRCDTextGenreCodePop = $0014;
  DRCDTextGenreCodeRap = $0015;
  DRCDTextGenreCodeReggae = $0016;
  DRCDTextGenreCodeRock = $0017;
  DRCDTextGenreCodeRhythmAndBlues = $0018;
  DRCDTextGenreCodeSoundEffects = $0019;
  DRCDTextGenreCodeSoundtrack = $001A;
  DRCDTextGenreCodeSpokenWord = $001B;
  DRCDTextGenreCodeWorldMusic = $001C;
{$endif}

{$ifdef CLASSES}

type
  DRCDTextBlock = objcclass external (NSObject)
  private
    _ref: pointer;
  public
    class function arrayOfCDTextBlocksFromPacks (packs: NSData): NSArray; message 'arrayOfCDTextBlocksFromPacks:';
    class function cdTextBlockWithLanguage_encoding (lang: NSString; enc: NSStringEncoding): DRCDTextBlock; message 'cdTextBlockWithLanguage:encoding:';
    function initWithLanguage_encoding (lang: NSString; enc: NSStringEncoding): id; message 'initWithLanguage:encoding:';
    function properties: NSDictionary; message 'properties';
    procedure setProperties (properties_: NSDictionary); message 'setProperties:';
    function trackDictionaries: NSArray; message 'trackDictionaries';
    procedure setTrackDictionaries (tracks: NSArray); message 'setTrackDictionaries:';
    function objectForKey_ofTrack (key: NSString; trackIndex: NSUInteger): id; message 'objectForKey:ofTrack:';
    procedure setObject_forKey_ofTrack (value: id; key: NSString; trackIndex: NSUInteger); message 'setObject:forKey:ofTrack:';
    function flatten: NSUInteger; message 'flatten';
  end;


type
  DRCDTextBlock_PropertyConvenienceMethods = objccategory external name 'PropertyConvenienceMethods' (DRCDTextBlock)
    function language: NSString; message 'language';
    function encoding: NSStringEncoding; message 'encoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DRCDTextLanguageKey: NSString; cvar; external;
  DRCDTextCharacterCodeKey: NSString; cvar; external;
  DRCDTextNSStringEncodingKey: NSString; cvar; external;
  DRCDTextCopyrightAssertedForSpecialMessagesKey: NSString; cvar; external;
  DRCDTextCopyrightAssertedForNamesKey: NSString; cvar; external;
  DRCDTextCopyrightAssertedForTitlesKey: NSString; cvar; external;
  DRCDTextTitleKey: NSString; cvar; external;
  DRCDTextPerformerKey: NSString; cvar; external;
  DRCDTextSongwriterKey: NSString; cvar; external;
  DRCDTextComposerKey: NSString; cvar; external;
  DRCDTextArrangerKey: NSString; cvar; external;
  DRCDTextSpecialMessageKey: NSString; cvar; external;
  DRCDTextDiscIdentKey: NSString; cvar; external;
  DRCDTextGenreKey: NSString; cvar; external;
  DRCDTextGenreCodeKey: NSString; cvar; external;
  DRCDTextClosedKey: NSString; cvar; external;
  DRCDTextMCNISRCKey: NSString; cvar; external;
  DRCDTextTOCKey: NSString; cvar; external;
  DRCDTextTOC2Key: NSString; cvar; external;
  DRCDTextSizeKey: NSString; cvar; external;
{$endif}

