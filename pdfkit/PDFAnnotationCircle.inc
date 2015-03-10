{ Parsed from PDFKit.framework (MacOSX10.10) PDFAnnotationCircle.h }
{ Created on Sun Mar 8 1:47:48 2015 }


{$ifdef TYPES}
type
  PDFAnnotationCirclePtr = ^PDFAnnotationCircle;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationCircle = objcclass external (PDFAnnotation, NSCopyingProtocol)
  private
    _pdfPriv2: PDFAnnotationCirclePrivateVars;
  public
    function interiorColor: NSColor; message 'interiorColor';
    procedure setInteriorColor (color_: NSColor); message 'setInteriorColor:';
  end;
{$endif}

