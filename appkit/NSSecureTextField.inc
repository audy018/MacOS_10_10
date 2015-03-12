{ Parsed from AppKit.framework NSSecureTextField.h }


{$ifdef TYPES}
type
  NSSecureTextFieldPtr = ^NSSecureTextField;
  NSSecureTextFieldCellPtr = ^NSSecureTextFieldCell;
{$endif}

{$ifdef CLASSES}

type
  NSSecureTextField = objcclass external (NSTextField)
  private
  end;

type
  NSSecureTextFieldCell = objcclass external (NSTextFieldCell)
  private
    _echosBullets: boolean;
    _csMode: boolean;
  public
    procedure setEchosBullets(newValue: boolean); message 'setEchosBullets:';
    function echosBullets: boolean; message 'echosBullets';
  end;
{$endif}

