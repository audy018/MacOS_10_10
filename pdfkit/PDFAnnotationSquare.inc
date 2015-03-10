{ Parsed from PDFKit.framework (MacOSX10.10) PDFAnnotationSquare.h }
{ Created on Sun Mar 8 1:47:48 2015 }


{$ifdef TYPES}
type
  PDFAnnotationSquarePtr = ^PDFAnnotationSquare;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationSquare = objcclass external (PDFAnnotation, NSCopyingProtocol, NSCodingProtocol)
  private
    _pdfPriv2: PDFAnnotationSquarePrivateVars;
  public
    function interiorColor: NSColor; message 'interiorColor';
    procedure setInteriorColor (color_: NSColor); message 'setInteriorColor:';
  end;
{$endif}

