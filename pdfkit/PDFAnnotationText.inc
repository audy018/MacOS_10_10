{ Parsed from PDFKit.framework (MacOSX10.10) PDFAnnotationText.h }
{ Created on Sun Mar 8 1:47:48 2015 }


{$ifdef TYPES}
type
  PDFAnnotationTextPtr = ^PDFAnnotationText;
{$endif}

{$ifdef TYPES}
type
  PDFTextAnnotationIconType = NSInteger;
  PDFTextAnnotationIconTypePtr = ^PDFTextAnnotationIconType;

const
  kPDFTextAnnotationIconComment = 0;
  kPDFTextAnnotationIconKey = 1;
  kPDFTextAnnotationIconNote = 2;
  kPDFTextAnnotationIconHelp = 3;
  kPDFTextAnnotationIconNewParagraph = 4;
  kPDFTextAnnotationIconParagraph = 5;
  kPDFTextAnnotationIconInsert = 6;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationText = objcclass external (PDFAnnotation, NSCopyingProtocol, NSCodingProtocol)
  private
    _pdfPriv2: PDFAnnotationTextPrivateVars;
  public
    function iconType: PDFTextAnnotationIconType; message 'iconType';
    procedure setIconType (type__: PDFTextAnnotationIconType); message 'setIconType:';
  end;
{$endif}

