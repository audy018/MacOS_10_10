{ Parsed from WebKit.framework (MacOSX10.10) DOMHTMLFrameElement.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMHTMLFrameElementPtr = ^DOMHTMLFrameElement;
{$endif}

{$ifdef CLASSES}

type
  DOMHTMLFrameElement = objcclass external (DOMHTMLElement)
  public
    procedure setFrameBorder(newValue: NSString); message 'setFrameBorder:';
    function frameBorder: NSString; message 'frameBorder';
    procedure setLongDesc(newValue: NSString); message 'setLongDesc:';
    function longDesc: NSString; message 'longDesc';
    procedure setMarginHeight(newValue: NSString); message 'setMarginHeight:';
    function marginHeight: NSString; message 'marginHeight';
    procedure setMarginWidth(newValue: NSString); message 'setMarginWidth:';
    function marginWidth: NSString; message 'marginWidth';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setNoResize(newValue: boolean); message 'setNoResize:';
    function noResize: boolean; message 'noResize';
    procedure setScrolling(newValue: NSString); message 'setScrolling:';
    function scrolling: NSString; message 'scrolling';
    procedure setSrc(newValue: NSString); message 'setSrc:';
    function src: NSString; message 'src';
    function contentDocument: DOMDocument; message 'contentDocument';
    function contentWindow: DOMAbstractView; message 'contentWindow';
    procedure setLocation(newValue: NSString); message 'setLocation:';
    function location: NSString; message 'location';
    function width: cint; message 'width';
    function height: cint; message 'height';
  end;
{$endif}

