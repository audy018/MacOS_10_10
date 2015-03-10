{ Parsed from DiscRecording.framework (MacOSX10.10) DRDevice.h }
{ Created on Sun Mar 8 1:47:42 2015 }


{$ifdef TYPES}
type
  DRDevicePtr = ^DRDevice;
{$endif}

{$ifdef CLASSES}

type
  DRDevice = objcclass external (NSObject)
  private
    _ref: pointer;
  public
    class function devices: NSArray; message 'devices';
    class function deviceForBSDName (bsdName: NSString): DRDevice; message 'deviceForBSDName:';
    class function deviceForIORegistryEntryPath (path: NSString): DRDevice; message 'deviceForIORegistryEntryPath:';
    function isValid: boolean; message 'isValid';
    function info: NSDictionary; message 'info';
    function status: NSDictionary; message 'status';
    function openTray: boolean; message 'openTray';
    function closeTray: boolean; message 'closeTray';
    function ejectMedia: boolean; message 'ejectMedia';
    function acquireExclusiveAccess: boolean; message 'acquireExclusiveAccess';
    procedure releaseExclusiveAccess; message 'releaseExclusiveAccess';
    procedure acquireMediaReservation; message 'acquireMediaReservation';
    procedure releaseMediaReservation; message 'releaseMediaReservation';
    function isEqualToDevice (otherDevice: DRDevice): boolean; message 'isEqualToDevice:';
  end;


type
  InfoConvenience = objccategory external (DRDevice)
    function writesCD: boolean; message 'writesCD';
    function writesDVD: boolean; message 'writesDVD';
    function displayName: NSString; message 'displayName';
    function ioRegistryEntryPath: NSString; message 'ioRegistryEntryPath';
  end;

type
  StatusConvenience = objccategory external (DRDevice)
    function mediaIsPresent: boolean; message 'mediaIsPresent';
    function mediaIsTransitioning: boolean; message 'mediaIsTransitioning';
    function mediaIsBusy: boolean; message 'mediaIsBusy';
    function mediaType: NSString; message 'mediaType';
    function mediaIsBlank: boolean; message 'mediaIsBlank';
    function mediaIsAppendable: boolean; message 'mediaIsAppendable';
    function mediaIsOverwritable: boolean; message 'mediaIsOverwritable';
    function mediaIsErasable: boolean; message 'mediaIsErasable';
    function mediaIsReserved: boolean; message 'mediaIsReserved';
    function mediaSpaceOverwritable: DRMSF; message 'mediaSpaceOverwritable';
    function mediaSpaceUsed: DRMSF; message 'mediaSpaceUsed';
    function mediaSpaceFree: DRMSF; message 'mediaSpaceFree';
    function trayIsOpen: boolean; message 'trayIsOpen';
    function bsdName: NSString; message 'bsdName';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DRDeviceBurnSpeedCD1x: single; cvar; external;
  DRDeviceBurnSpeedDVD1x: single; cvar; external;
  DRDeviceBurnSpeedBD1x: single; cvar; external;
  DRDeviceBurnSpeedHDDVD1x: single; cvar; external;
  DRDeviceBurnSpeedMax: single; cvar; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DRDeviceAppearedNotification: NSString; cvar; external;
  DRDeviceDisappearedNotification: NSString; cvar; external;
  DRDeviceStatusChangedNotification: NSString; cvar; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DRDeviceSupportLevelKey: NSString; cvar; external;
  DRDeviceIORegistryEntryPathKey: NSString; cvar; external;
  DRDeviceWriteCapabilitiesKey: NSString; cvar; external;
  DRDeviceVendorNameKey: NSString; cvar; external;
  DRDeviceProductNameKey: NSString; cvar; external;
  DRDeviceFirmwareRevisionKey: NSString; cvar; external;
  DRDevicePhysicalInterconnectKey: NSString; cvar; external;
  DRDevicePhysicalInterconnectLocationKey: NSString; cvar; external;
  DRDeviceLoadingMechanismCanEjectKey: NSString; cvar; external;
  DRDeviceLoadingMechanismCanInjectKey: NSString; cvar; external;
  DRDeviceLoadingMechanismCanOpenKey: NSString; cvar; external;
  DRDeviceWriteBufferSizeKey: NSString; cvar; external;
  DRDeviceSupportLevelNone: NSString; cvar; external;
  DRDeviceSupportLevelUnsupported: NSString; cvar; external;
  DRDeviceSupportLevelVendorSupported: NSString; cvar; external;
  DRDeviceSupportLevelAppleSupported: NSString; cvar; external;
  DRDeviceSupportLevelAppleShipping: NSString; cvar; external;
  DRDevicePhysicalInterconnectATAPI: NSString; cvar; external;
  DRDevicePhysicalInterconnectFibreChannel: NSString; cvar; external;
  DRDevicePhysicalInterconnectFireWire: NSString; cvar; external;
  DRDevicePhysicalInterconnectSCSI: NSString; cvar; external;
  DRDevicePhysicalInterconnectUSB: NSString; cvar; external;
  DRDevicePhysicalInterconnectLocationInternal: NSString; cvar; external;
  DRDevicePhysicalInterconnectLocationExternal: NSString; cvar; external;
  DRDevicePhysicalInterconnectLocationUnknown: NSString; cvar; external;
  DRDeviceCanWriteKey: NSString; cvar; external;
  DRDeviceCanWriteCDKey: NSString; cvar; external;
  DRDeviceCanWriteCDRKey: NSString; cvar; external;
  DRDeviceCanWriteCDRWKey: NSString; cvar; external;
  DRDeviceCanWriteDVDKey: NSString; cvar; external;
  DRDeviceCanWriteDVDRKey: NSString; cvar; external;
  DRDeviceCanWriteDVDRDualLayerKey: NSString; cvar; external;
  DRDeviceCanWriteDVDRWKey: NSString; cvar; external;
  DRDeviceCanWriteDVDRWDualLayerKey: NSString; cvar; external;
  DRDeviceCanWriteDVDRAMKey: NSString; cvar; external;
  DRDeviceCanWriteDVDPlusRKey: NSString; cvar; external;
  DRDeviceCanWriteDVDPlusRDoubleLayerKey: NSString; cvar; external;
  DRDeviceCanWriteDVDPlusRWKey: NSString; cvar; external;
  DRDeviceCanWriteDVDPlusRWDoubleLayerKey: NSString; cvar; external;
  DRDeviceCanWriteBDKey: NSString; cvar; external;
  DRDeviceCanWriteBDRKey: NSString; cvar; external;
  DRDeviceCanWriteBDREKey: NSString; cvar; external;
  DRDeviceCanWriteHDDVDKey: NSString; cvar; external;
  DRDeviceCanWriteHDDVDRKey: NSString; cvar; external;
  DRDeviceCanWriteHDDVDRDualLayerKey: NSString; cvar; external;
  DRDeviceCanWriteHDDVDRAMKey: NSString; cvar; external;
  DRDeviceCanWriteHDDVDRWKey: NSString; cvar; external;
  DRDeviceCanWriteHDDVDRWDualLayerKey: NSString; cvar; external;
  DRDeviceCanWriteCDTextKey: NSString; cvar; external;
  DRDeviceCanWriteIndexPointsKey: NSString; cvar; external;
  DRDeviceCanWriteISRCKey: NSString; cvar; external;
  DRDeviceCanWriteCDTAOKey: NSString; cvar; external;
  DRDeviceCanWriteCDSAOKey: NSString; cvar; external;
  DRDeviceCanWriteCDRawKey: NSString; cvar; external;
  DRDeviceCanWriteDVDDAOKey: NSString; cvar; external;
  DRDeviceCanTestWriteCDKey: NSString; cvar; external;
  DRDeviceCanTestWriteDVDKey: NSString; cvar; external;
  DRDeviceCanUnderrunProtectCDKey: NSString; cvar; external;
  DRDeviceCanUnderrunProtectDVDKey: NSString; cvar; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DRDeviceIsBusyKey: NSString; cvar; external;
  DRDeviceIsTrayOpenKey: NSString; cvar; external;
  DRDeviceMaximumWriteSpeedKey: NSString; cvar; external;
  DRDeviceCurrentWriteSpeedKey: NSString; cvar; external;
  DRDeviceMediaStateKey: NSString; cvar; external;
  DRDeviceMediaInfoKey: NSString; cvar; external;
  DRDeviceBurnSpeedsKey: NSString; cvar; external;
  DRDeviceTrackRefsKey: NSString; cvar; external;
  DRDeviceTrackInfoKey: NSString; cvar; external;
  DRDeviceMediaStateMediaPresent: NSString; cvar; external;
  DRDeviceMediaStateInTransition: NSString; cvar; external;
  DRDeviceMediaStateNone: NSString; cvar; external;
  DRDeviceMediaBSDNameKey: NSString; cvar; external;
  DRDeviceMediaIsBlankKey: NSString; cvar; external;
  DRDeviceMediaIsAppendableKey: NSString; cvar; external;
  DRDeviceMediaIsOverwritableKey: NSString; cvar; external;
  DRDeviceMediaIsErasableKey: NSString; cvar; external;
  DRDeviceMediaIsReservedKey: NSString; cvar; external;
  DRDeviceMediaOverwritableSpaceKey: NSString; cvar; external;
  DRDeviceMediaFreeSpaceKey: NSString; cvar; external;
  DRDeviceMediaUsedSpaceKey: NSString; cvar; external;
  DRDeviceMediaBlocksOverwritableKey: NSString; cvar; external;
  DRDeviceMediaBlocksFreeKey: NSString; cvar; external;
  DRDeviceMediaBlocksUsedKey: NSString; cvar; external;
  DRDeviceMediaDoubleLayerL0DataZoneBlocksKey: NSString; cvar; external;
  DRDeviceMediaTrackCountKey: NSString; cvar; external;
  DRDeviceMediaSessionCountKey: NSString; cvar; external;
  DRDeviceMediaClassKey: NSString; cvar; external;
  DRDeviceMediaTypeKey: NSString; cvar; external;
  DRDeviceMediaClassCD: NSString; cvar; external;
  DRDeviceMediaClassDVD: NSString; cvar; external;
  DRDeviceMediaClassBD: NSString; cvar; external;
  DRDeviceMediaClassHDDVD: NSString; cvar; external;
  DRDeviceMediaClassUnknown: NSString; cvar; external;
  DRDeviceMediaTypeCDROM: NSString; cvar; external;
  DRDeviceMediaTypeCDR: NSString; cvar; external;
  DRDeviceMediaTypeCDRW: NSString; cvar; external;
  DRDeviceMediaTypeDVDROM: NSString; cvar; external;
  DRDeviceMediaTypeDVDRAM: NSString; cvar; external;
  DRDeviceMediaTypeDVDR: NSString; cvar; external;
  DRDeviceMediaTypeDVDRDualLayer: NSString; cvar; external;
  DRDeviceMediaTypeDVDRW: NSString; cvar; external;
  DRDeviceMediaTypeDVDRWDualLayer: NSString; cvar; external;
  DRDeviceMediaTypeDVDPlusR: NSString; cvar; external;
  DRDeviceMediaTypeDVDPlusRDoubleLayer: NSString; cvar; external;
  DRDeviceMediaTypeDVDPlusRW: NSString; cvar; external;
  DRDeviceMediaTypeDVDPlusRWDoubleLayer: NSString; cvar; external;
  DRDeviceMediaTypeBDR: NSString; cvar; external;
  DRDeviceMediaTypeBDRE: NSString; cvar; external;
  DRDeviceMediaTypeBDROM: NSString; cvar; external;
  DRDeviceMediaTypeHDDVDROM: NSString; cvar; external;
  DRDeviceMediaTypeHDDVDR: NSString; cvar; external;
  DRDeviceMediaTypeHDDVDRDualLayer: NSString; cvar; external;
  DRDeviceMediaTypeHDDVDRAM: NSString; cvar; external;
  DRDeviceMediaTypeHDDVDRW: NSString; cvar; external;
  DRDeviceMediaTypeHDDVDRWDualLayer: NSString; cvar; external;
  DRDeviceMediaTypeUnknown: NSString; cvar; external;
{$endif}

