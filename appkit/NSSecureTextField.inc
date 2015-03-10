{ Parsed from AppKit.framework (MacOSX10.10) NSSecureTextField.h }
{ Created on Sun Mar 8 1:49:08 2015 }


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

