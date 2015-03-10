{ Parsed from CoreBluetooth.framework (MacOSX10.10) CBService.h }
{ Created on Sun Mar 8 1:48:05 2015 }


{$ifdef TYPES}
type
  CBServicePtr = ^CBService;
  CBMutableServicePtr = ^CBMutableService;
{$endif}

{$ifdef CLASSES}

type
  CBService = objcclass external (NSObject)
  private
    _peripheral: CBPeripheral;
    _UUID: CBUUID;
    _isPrimary: boolean;
    _includedServices: NSArray;
    _characteristics: NSArray;
    _startHandle: NSNumber;
    _endHandle: NSNumber;
  public
    function peripheral: CBPeripheral; message 'peripheral';
    function UUID: CBUUID; message 'UUID';
    function isPrimary: boolean; message 'isPrimary';
    function includedServices: NSArray; message 'includedServices';
    function characteristics: NSArray; message 'characteristics';
  end;

type
  CBMutableService = objcclass external (CBService)
  private
    _ID: NSNumber;
  public
    procedure setUUID(newValue: CBUUID); message 'setUUID:';
    function UUID: CBUUID; message 'UUID';
    procedure setIsPrimary(newValue: boolean); message 'setIsPrimary:';
    function isPrimary: boolean; message 'isPrimary';
    procedure setIncludedServices(newValue: NSArray); message 'setIncludedServices:';
    function includedServices: NSArray; message 'includedServices';
    procedure setCharacteristics(newValue: NSArray); message 'setCharacteristics:';
    function characteristics: NSArray; message 'characteristics';
    function initWithType_primary (UUID_: CBUUID; isPrimary_: boolean): id; message 'initWithType:primary:';
  end;
{$endif}

