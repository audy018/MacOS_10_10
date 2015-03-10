{ Parsed from WebKit.framework (MacOSX10.10) WKNavigationResponse.h }
{ Created on Sun Mar 8 1:48:18 2015 }


{$ifdef TYPES}
type
  WKNavigationResponsePtr = ^WKNavigationResponse;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKNavigationResponse = objcclass external (NSObject)
  public
    function isForMainFrame: boolean; message 'isForMainFrame';
    function response: NSURLResponse; message 'response';
    function canShowMIMEType: boolean; message 'canShowMIMEType';
  end;
{$endif}

{$endif}
