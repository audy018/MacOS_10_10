{ Parsed from PDFKit.framework (MacOSX10.10) PDFAnnotationInk.h }
{ Created on Sun Mar 8 1:47:48 2015 }


{$ifdef TYPES}
type
  PDFAnnotationInkPtr = ^PDFAnnotationInk;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationInk = objcclass external (PDFAnnotation, NSCopyingProtocol, NSCodingProtocol)
  private
    _pdfPriv2: PDFAnnotationInkPrivateVars;
  public
    function paths: NSArray; message 'paths';
    procedure addBezierPath (path: NSBezierPath); message 'addBezierPath:';
    procedure removeBezierPath (path: NSBezierPath); message 'removeBezierPath:';
  end;
{$endif}

