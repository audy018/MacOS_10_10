{ Parsed from AppKit.framework (MacOSX10.10) NSUserInterfaceItemIdentification.h }
{ Created on Sun Mar 8 1:49:07 2015 }


{$ifdef TYPES}
type
  NSUserInterfaceItemIdentificationProtocolPtr = ^NSUserInterfaceItemIdentificationProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSUserInterfaceItemIdentificationProtocol = objcprotocol external name 'NSUserInterfaceItemIdentification'
  required
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier: NSString; message 'identifier';
  end;
{$endif}

