{ Parsed from PDFKit.framework (MacOSX10.10) PDFAnnotationFreeText.h }
{ Created on Sun Mar 8 1:47:48 2015 }


{ Types from PDFAnnotationFreeText }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  PDFAnnotationFreeTextPtr = ^PDFAnnotationFreeText;
{$endif}

{$ifdef CLASSES}

type
  PDFAnnotationFreeText = objcclass external (PDFAnnotation, NSCopyingProtocol, NSCodingProtocol)
  private
    _pdfPriv2: PDFAnnotationFreeTextPrivateVars;
  public
    function font: NSFont; message 'font';
    procedure setFont (font_: NSFont); message 'setFont:';
    {$if (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)}
    function fontColor: NSColor; message 'fontColor';
    procedure setFontColor (color_: NSColor); message 'setFontColor:';
    {$endif}
    function alignment: NSTextAlignment; message 'alignment';
    procedure setAlignment (alignment_: NSTextAlignment); message 'setAlignment:';
  end;
{$endif}

