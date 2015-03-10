{ Parsed from DiscRecording.framework (MacOSX10.10) DRErase.h }
{ Created on Sun Mar 8 1:47:42 2015 }


{$ifdef TYPES}
type
  DRErasePtr = ^DRErase;
{$endif}

{$ifdef CLASSES}

type
  DRErase = objcclass external (NSObject)
  private
    _ref: pointer;
  public
    class function eraseForDevice (device: DRDevice): DRErase; message 'eraseForDevice:';
    function initWithDevice (device: DRDevice): id; message 'initWithDevice:';
    procedure start; message 'start';
    function status: NSDictionary; message 'status';
    function properties: NSDictionary; message 'properties';
    procedure setProperties (properties_: NSDictionary); message 'setProperties:';
    function device: DRDevice; message 'device';
  end;


type
  PropertyConvenienceMethods = objccategory external (DRErase)
    function eraseType: NSString; message 'eraseType';
    procedure setEraseType (type_: NSString); message 'setEraseType:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DREraseTypeKey: NSString; cvar; external;
  DREraseTypeQuick: NSString; cvar; external;
  DREraseTypeComplete: NSString; cvar; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DREraseStatusChangedNotification: NSString; cvar; external;
{$endif}

