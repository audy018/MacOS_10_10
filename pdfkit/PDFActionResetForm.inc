{ Parsed from PDFKit.framework (MacOSX10.10) PDFActionResetForm.h }
{ Created on Sun Mar 8 1:47:48 2015 }


{$ifdef TYPES}
type
  PDFActionResetFormPtr = ^PDFActionResetForm;
{$endif}

{$if (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)}
{$ifdef CLASSES}

type
  PDFActionResetForm = objcclass external (PDFAction, NSCopyingProtocol)
  private
    _pdfPriv2: PDFActionResetFormPrivateVars;
  public
    function init: id; message 'init';
    function fields: NSArray; message 'fields';
    procedure setFields (fields_: NSArray); message 'setFields:';
    function fieldsIncludedAreCleared: boolean; message 'fieldsIncludedAreCleared';
    procedure setFieldsIncludedAreCleared (include: boolean); message 'setFieldsIncludedAreCleared:';
  end;
{$endif}

{$endif}