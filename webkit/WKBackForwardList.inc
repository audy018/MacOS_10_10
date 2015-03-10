{ Parsed from WebKit.framework (MacOSX10.10) WKBackForwardList.h }
{ Created on Sun Mar 8 1:48:18 2015 }


{$ifdef TYPES}
type
  WKBackForwardListPtr = ^WKBackForwardList;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef CLASSES}

type
  WKBackForwardList = objcclass external (NSObject)
  public
    function currentItem: WKBackForwardListItem; message 'currentItem';
    function backItem: WKBackForwardListItem; message 'backItem';
    function forwardItem: WKBackForwardListItem; message 'forwardItem';
    function itemAtIndex (index: NSInteger): WKBackForwardListItem; message 'itemAtIndex:';
    function backList: NSArray; message 'backList';
    function forwardList: NSArray; message 'forwardList';
  end;
{$endif}

{$endif}
