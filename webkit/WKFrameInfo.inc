{ Parsed from WebKit.framework (MacOSX10.10) WKFrameInfo.h }
{ Created on Sun Mar 8 1:48:18 2015 }


{$ifdef TYPES}
type
  WKFrameInfoPtr = ^WKFrameInfo;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKFrameInfo = objcclass external (NSObject, NSCopyingProtocol)
  public
    function isMainFrame: boolean; message 'isMainFrame';
    function request: NSURLRequest; message 'request';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

{$endif}
