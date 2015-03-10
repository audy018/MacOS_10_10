{ Parsed from WebKit.framework (MacOSX10.10) WKBackForwardListItem.h }
{ Created on Sun Mar 8 1:48:18 2015 }


{$ifdef TYPES}
type
  WKBackForwardListItemPtr = ^WKBackForwardListItem;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKBackForwardListItem = objcclass external (NSObject)
  public
    function URL: NSURL; message 'URL';
    function title: NSString; message 'title';
    function initialURL: NSURL; message 'initialURL';
  end;
{$endif}

{$endif}
