{ Parsed from WebKit.framework (MacOSX10.10) WKProcessPool.h }
{ Created on Sun Mar 8 1:48:18 2015 }


{$ifdef TYPES}
type
  WKProcessPoolPtr = ^WKProcessPool;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKProcessPool = objcclass external (NSObject)
  end;
{$endif}

{$endif}
