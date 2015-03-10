{ Parsed from WebKit.framework (MacOSX10.10) WebPreferences.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  WebPreferencesPtr = ^WebPreferences;
{$endif}

{$ifdef TYPES}
type
  WebCacheModel = NSUInteger;
  WebCacheModelPtr = ^WebCacheModel;

const
  WebCacheModelDocumentViewer = 0;
  WebCacheModelDocumentBrowser = 1;
  WebCacheModelPrimaryWebBrowser = 2;

type
  WebPreferencesPrivate = OpaqueType;
  WebPreferencesPrivatePtr = ^WebPreferencesPrivate;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  WebPreferencesChangedNotification: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  WebPreferences = objcclass external (NSObject, NSCodingProtocol)
  private
    _private: WebPreferencesPrivatePtr;
  public
    class function standardPreferences: WebPreferences; message 'standardPreferences';
    function initWithIdentifier (anIdentifier: NSString): instancetype; message 'initWithIdentifier:';
    function identifier: NSString; message 'identifier';
    procedure setStandardFontFamily(newValue: NSString); message 'setStandardFontFamily:';
    function standardFontFamily: NSString; message 'standardFontFamily';
    procedure setFixedFontFamily(newValue: NSString); message 'setFixedFontFamily:';
    function fixedFontFamily: NSString; message 'fixedFontFamily';
    procedure setSerifFontFamily(newValue: NSString); message 'setSerifFontFamily:';
    function serifFontFamily: NSString; message 'serifFontFamily';
    procedure setSansSerifFontFamily(newValue: NSString); message 'setSansSerifFontFamily:';
    function sansSerifFontFamily: NSString; message 'sansSerifFontFamily';
    procedure setCursiveFontFamily(newValue: NSString); message 'setCursiveFontFamily:';
    function cursiveFontFamily: NSString; message 'cursiveFontFamily';
    procedure setFantasyFontFamily(newValue: NSString); message 'setFantasyFontFamily:';
    function fantasyFontFamily: NSString; message 'fantasyFontFamily';
    procedure setDefaultFontSize(newValue: cint); message 'setDefaultFontSize:';
    function defaultFontSize: cint; message 'defaultFontSize';
    procedure setDefaultFixedFontSize(newValue: cint); message 'setDefaultFixedFontSize:';
    function defaultFixedFontSize: cint; message 'defaultFixedFontSize';
    procedure setMinimumFontSize(newValue: cint); message 'setMinimumFontSize:';
    function minimumFontSize: cint; message 'minimumFontSize';
    procedure setMinimumLogicalFontSize(newValue: cint); message 'setMinimumLogicalFontSize:';
    function minimumLogicalFontSize: cint; message 'minimumLogicalFontSize';
    procedure setDefaultTextEncodingName(newValue: NSString); message 'setDefaultTextEncodingName:';
    function defaultTextEncodingName: NSString; message 'defaultTextEncodingName';
    procedure setUserStyleSheetEnabled(newValue: boolean); message 'setUserStyleSheetEnabled:';
    function userStyleSheetEnabled: boolean; message 'userStyleSheetEnabled';
    procedure setUserStyleSheetLocation(newValue: NSURL); message 'setUserStyleSheetLocation:';
    function userStyleSheetLocation: NSURL; message 'userStyleSheetLocation';
    procedure setJavaEnabled(newValue: boolean); message 'setJavaEnabled:';
    function isJavaEnabled: boolean; message 'isJavaEnabled';
    procedure setJavaScriptEnabled(newValue: boolean); message 'setJavaScriptEnabled:';
    function isJavaScriptEnabled: boolean; message 'isJavaScriptEnabled';
    procedure setJavaScriptCanOpenWindowsAutomatically(newValue: boolean); message 'setJavaScriptCanOpenWindowsAutomatically:';
    function javaScriptCanOpenWindowsAutomatically: boolean; message 'javaScriptCanOpenWindowsAutomatically';
    procedure setPlugInsEnabled(newValue: boolean); message 'setPlugInsEnabled:';
    function arePlugInsEnabled: boolean; message 'arePlugInsEnabled';
    procedure setAllowsAnimatedImages(newValue: boolean); message 'setAllowsAnimatedImages:';
    function allowsAnimatedImages: boolean; message 'allowsAnimatedImages';
    procedure setAllowsAnimatedImageLooping(newValue: boolean); message 'setAllowsAnimatedImageLooping:';
    function allowsAnimatedImageLooping: boolean; message 'allowsAnimatedImageLooping';
    procedure setLoadsImagesAutomatically(newValue: boolean); message 'setLoadsImagesAutomatically:';
    function loadsImagesAutomatically: boolean; message 'loadsImagesAutomatically';
    procedure setAutosaves(newValue: boolean); message 'setAutosaves:';
    function autosaves: boolean; message 'autosaves';
    procedure setShouldPrintBackgrounds(newValue: boolean); message 'setShouldPrintBackgrounds:';
    function shouldPrintBackgrounds: boolean; message 'shouldPrintBackgrounds';
    procedure setPrivateBrowsingEnabled(newValue: boolean); message 'setPrivateBrowsingEnabled:';
    function privateBrowsingEnabled: boolean; message 'privateBrowsingEnabled';
    procedure setTabsToLinks(newValue: boolean); message 'setTabsToLinks:';
    function tabsToLinks: boolean; message 'tabsToLinks';
    procedure setUsesPageCache(newValue: boolean); message 'setUsesPageCache:';
    function usesPageCache: boolean; message 'usesPageCache';
    procedure setCacheModel(newValue: WebCacheModel); message 'setCacheModel:';
    function cacheModel: WebCacheModel; message 'cacheModel';
    procedure setSuppressesIncrementalRendering(newValue: boolean); message 'setSuppressesIncrementalRendering:';
    function suppressesIncrementalRendering: boolean; message 'suppressesIncrementalRendering';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

