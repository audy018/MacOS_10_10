{ Parsed from WebKit.framework (MacOSX10.10) WKNavigation.h }
{ Created on Sun Mar 8 1:48:18 2015 }


{$ifdef TYPES}
type
  WKNavigationPtr = ^WKNavigation;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKNavigation = objcclass external (NSObject)
  end;
{$endif}

{$endif}
