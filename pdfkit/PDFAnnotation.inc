{ Parsed from PDFKit.framework (MacOSX10.10) PDFAnnotation.h }
{ Created on Sun Mar 8 1:47:48 2015 }


{ Types from PDFAnnotation }
{$ifdef TYPES}



{$endif}


{$ifdef TYPES}
type
  PDFAnnotationPtr = ^PDFAnnotation;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotation = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  private
    _pdfPriv: PDFAnnotationPrivateVars;
  public
    function initWithBounds (bounds: NSRect): id; message 'initWithBounds:';
    function page: PDFPage; message 'page';
    function type_: NSString; message 'type';
    function bounds: NSRect; message 'bounds';
    procedure setBounds (bounds_: NSRect); message 'setBounds:';
    {$if (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)}
    function modificationDate: NSDate; message 'modificationDate';
    procedure setModificationDate (date: NSDate); message 'setModificationDate:';
    function userName: NSString; message 'userName';
    procedure setUserName (name: NSString); message 'setUserName:';
    function popup: PDFAnnotationPopup; message 'popup';
    procedure setPopup (popup_: PDFAnnotationPopup); message 'setPopup:';
    {$endif}
    function shouldDisplay: boolean; message 'shouldDisplay';
    procedure setShouldDisplay (display: boolean); message 'setShouldDisplay:';
    function shouldPrint: boolean; message 'shouldPrint';
    procedure setShouldPrint (print: boolean); message 'setShouldPrint:';
    function border: PDFBorder; message 'border';
    procedure setBorder (border_: PDFBorder); message 'setBorder:';
    function color: NSColor; message 'color';
    procedure setColor (color_: NSColor); message 'setColor:';
    {$if (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)}
    function mouseUpAction: PDFAction; message 'mouseUpAction';
    procedure setMouseUpAction (action: PDFAction); message 'setMouseUpAction:';
    {$endif}
    function contents: NSString; message 'contents';
    procedure setContents (contents_: NSString); message 'setContents:';
    function toolTip: NSString; message 'toolTip';
    function hasAppearanceStream: boolean; message 'hasAppearanceStream';
    {$if (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)}
    procedure removeAllAppearanceStreams; message 'removeAllAppearanceStreams';
    {$endif}
    procedure drawWithBox (box: PDFDisplayBox); message 'drawWithBox:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

