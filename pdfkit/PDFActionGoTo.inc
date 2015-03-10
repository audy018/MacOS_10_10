{ Parsed from PDFKit.framework (MacOSX10.10) PDFActionGoTo.h }
{ Created on Sun Mar 8 1:47:48 2015 }


{$ifdef TYPES}
type
  PDFActionGoToPtr = ^PDFActionGoTo;
{$endif}

{$if (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)}
{$ifdef CLASSES}

type
  PDFActionGoTo = objcclass external (PDFAction, NSCopyingProtocol)
  private
    _pdfPriv2: PDFActionGoToPrivateVars;
  public
    function initWithDestination (destination: PDFDestination): id; message 'initWithDestination:';
    function destination: PDFDestination; message 'destination';
    procedure setDestination (destination_: PDFDestination); message 'setDestination:';
  end;
{$endif}

{$endif}
