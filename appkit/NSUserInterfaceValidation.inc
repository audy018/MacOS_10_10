{ Parsed from AppKit.framework (MacOSX10.10) NSUserInterfaceValidation.h }
{ Created on Sun Mar 8 1:49:07 2015 }


{$ifdef TYPES}
type
  NSValidatedUserInterfaceItemProtocolPtr = ^NSValidatedUserInterfaceItemProtocol;
  NSUserInterfaceValidationsProtocolPtr = ^NSUserInterfaceValidationsProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSValidatedUserInterfaceItemProtocol = objcprotocol external name 'NSValidatedUserInterfaceItem'
    function action: SEL; message 'action';
    function tag: NSInteger; message 'tag';
  end;

type
  NSUserInterfaceValidationsProtocol = objcprotocol external name 'NSUserInterfaceValidations'
    function validateUserInterfaceItem (anItem: NSValidatedUserInterfaceItemProtocol): boolean; message 'validateUserInterfaceItem:';
  end;
{$endif}

