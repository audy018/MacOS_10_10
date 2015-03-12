{ Parsed from WebKit.framework WebFrameView.h }


{$ifdef TYPES}
type
  WebFrameViewPtr = ^WebFrameView;
{$endif}

{$ifdef CLASSES}

type
  WebFrameView = objcclass external (NSView)
  private
    _private: WebFrameViewPrivate;
  public
    function webFrame: WebFrame; message 'webFrame';
    function documentView: WebDocumentViewProtocol; message 'documentView';
    procedure setAllowsScrolling(newValue: boolean); message 'setAllowsScrolling:';
    function allowsScrolling: boolean; message 'allowsScrolling';
    function canPrintHeadersAndFooters: boolean; message 'canPrintHeadersAndFooters';
    function printOperationWithPrintInfo (printInfo: NSPrintInfo): NSPrintOperation; message 'printOperationWithPrintInfo:';
    function documentViewShouldHandlePrint: boolean; message 'documentViewShouldHandlePrint';
    procedure printDocumentView; message 'printDocumentView';
  end;
{$endif}

