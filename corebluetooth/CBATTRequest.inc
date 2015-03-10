{ Parsed from CoreBluetooth.framework (MacOSX10.10) CBATTRequest.h }
{ Created on Sun Mar 8 1:48:05 2015 }


{$ifdef TYPES}
type
  CBATTRequestPtr = ^CBATTRequest;
{$endif}

{$ifdef CLASSES}

type
  CBATTRequest = objcclass external (NSObject)
  private
    _central: CBCentral;
    _characteristic: CBCharacteristic;
    _offset: NSUInteger;
    _value: NSData;
    _transactionID: NSNumber;
    _ignoreResponse: boolean;
  public
    function central: CBCentral; message 'central';
    function characteristic: CBCharacteristic; message 'characteristic';
    function offset: NSUInteger; message 'offset';
    procedure setValue(newValue: NSData); message 'setValue:';
    function value: NSData; message 'value';
  end;
{$endif}

