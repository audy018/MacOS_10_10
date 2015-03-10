{ Parsed from PDFKit.framework (MacOSX10.10) PDFAnnotationLink.h }
{ Created on Sun Mar 8 1:47:48 2015 }


{$ifdef TYPES}
type
  PDFAnnotationLinkPtr = ^PDFAnnotationLink;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationLink = objcclass external (PDFAnnotation, NSCopyingProtocol)
  private
    _pdfPriv2: PDFAnnotationLinkPrivateVars;
  public
    function destination: PDFDestination; message 'destination';
    procedure setDestination (destination_: PDFDestination); message 'setDestination:';
    function URL: NSURL; message 'URL';
    procedure setURL (url_: NSURL); message 'setURL:';
    procedure setHighlighted (flag: boolean); message 'setHighlighted:';
  end;
{$endif}

