{ Parsed from PDFKit.framework (MacOSX10.10) PDFAnnotationPopup.h }
{ Created on Sun Mar 8 1:47:48 2015 }


{$ifdef TYPES}
type
  PDFAnnotationPopupPtr = ^PDFAnnotationPopup;
{$endif}

{$if (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)}
{$ifdef CLASSES}

type
  PDFAnnotationPopup = objcclass external (PDFAnnotation, NSCopyingProtocol, NSCodingProtocol)
  private
    _pdfPriv2: PDFAnnotationPopupPrivateVars;
  public
    function isOpen: boolean; message 'isOpen';
    procedure setIsOpen (isOpen_: boolean); message 'setIsOpen:';
  end;
{$endif}

{$endif}
