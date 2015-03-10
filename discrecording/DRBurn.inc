{ Parsed from DiscRecording.framework (MacOSX10.10) DRBurn.h }
{ Created on Sun Mar 8 1:47:42 2015 }


{$ifdef TYPES}
type
  DRBurnPtr = ^DRBurn;
{$endif}

{$ifdef CLASSES}

type
  DRBurn = objcclass external (NSObject)
  private
    _ref: pointer;
  public
    class function burnForDevice (device: DRDevice): DRBurn; message 'burnForDevice:';
    function initWithDevice (device: DRDevice): id; message 'initWithDevice:';
    procedure writeLayout (layout: id); message 'writeLayout:';
    function status: NSDictionary; message 'status';
    procedure abort; message 'abort';
    function properties: NSDictionary; message 'properties';
    procedure setProperties (properties_: NSDictionary); message 'setProperties:';
    function device: DRDevice; message 'device';
  end;


type
  DRBurn_PropertyConvenienceMethods = objccategory external name 'PropertyConvenienceMethods' (DRBurn)
    function requestedBurnSpeed: single; message 'requestedBurnSpeed';
    procedure setRequestedBurnSpeed (speed: single); message 'setRequestedBurnSpeed:';
    function appendable: boolean; message 'appendable';
    procedure setAppendable (appendable_: boolean); message 'setAppendable:';
    function verifyDisc: boolean; message 'verifyDisc';
    procedure setVerifyDisc (verify: boolean); message 'setVerifyDisc:';
    function completionAction: NSString; message 'completionAction';
    procedure setCompletionAction (action: NSString); message 'setCompletionAction:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DRBurnRequestedSpeedKey: NSString; cvar; external;
  DRBurnAppendableKey: NSString; cvar; external;
  DRBurnOverwriteDiscKey: NSString; cvar; external;
  DRBurnVerifyDiscKey: NSString; cvar; external;
  DRBurnCompletionActionKey: NSString; cvar; external;
  DRBurnUnderrunProtectionKey: NSString; cvar; external;
  DRBurnTestingKey: NSString; cvar; external;
  DRSynchronousBehaviorKey: NSString; cvar; external;
  DRBurnFailureActionKey: NSString; cvar; external;
  DRMediaCatalogNumberKey: NSString; cvar; external;
  DRBurnDoubleLayerL0DataZoneBlocksKey: NSString; cvar; external;
  DRBurnStrategyKey: NSString; cvar; external;
  DRBurnStrategyIsRequiredKey: NSString; cvar; external;
  DRCDTextKey: NSString; cvar; external;
  DRBurnCompletionActionEject: NSString; cvar; external;
  DRBurnCompletionActionMount: NSString; cvar; external;
  DRBurnFailureActionEject: NSString; cvar; external;
  DRBurnFailureActionNone: NSString; cvar; external;
  DRBurnStrategyCDTAO: NSString; cvar; external;
  DRBurnStrategyCDSAO: NSString; cvar; external;
  DRBurnStrategyDVDDAO: NSString; cvar; external;
  DRBurnStrategyBDDAO: NSString; cvar; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DRBurnStatusChangedNotification: NSString; cvar; external;
{$endif}

