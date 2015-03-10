{ Parsed from WebKit.framework (MacOSX10.10) WKPreferences.h }
{ Created on Sun Mar 8 1:48:18 2015 }


{ Types from WKPreferences }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  WKPreferencesPtr = ^WKPreferences;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKPreferences = objcclass external (NSObject)
  public
    procedure setMinimumFontSize(newValue: CGFloat); message 'setMinimumFontSize:';
    function minimumFontSize: CGFloat; message 'minimumFontSize';
    procedure setJavaScriptEnabled(newValue: boolean); message 'setJavaScriptEnabled:';
    function javaScriptEnabled: boolean; message 'javaScriptEnabled';
    procedure setJavaScriptCanOpenWindowsAutomatically(newValue: boolean); message 'setJavaScriptCanOpenWindowsAutomatically:';
    function javaScriptCanOpenWindowsAutomatically: boolean; message 'javaScriptCanOpenWindowsAutomatically';
    {$if  not defined(TARGET_OS_IPHONE)}
    procedure setJavaEnabled(newValue: boolean); message 'setJavaEnabled:';
    function javaEnabled: boolean; message 'javaEnabled';
    procedure setPlugInsEnabled(newValue: boolean); message 'setPlugInsEnabled:';
    function plugInsEnabled: boolean; message 'plugInsEnabled';
    {$endif}
  end;
{$endif}

{$endif}
