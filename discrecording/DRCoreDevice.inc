{ Parsed from DiscRecording.framework DRCoreDevice.h }

{$ifndef _H_DRCoreDevice}

{$ifdef TYPES}
type
  DRDeviceRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function DRDeviceGetTypeID: CFTypeID; cdecl; external;
function DRCopyDeviceArray: CFArrayRef; cdecl; external;
function DRDeviceCopyDeviceForBSDName(name: CFStringRef): DRDeviceRef; cdecl; external;
function DRDeviceCopyDeviceForIORegistryEntryPath(path: CFStringRef): DRDeviceRef; cdecl; external;
function DRDeviceIsValid(device: DRDeviceRef): Boolean; cdecl; external;
function DRDeviceOpenTray(device: DRDeviceRef): OSStatus; cdecl; external;
function DRDeviceCloseTray(device: DRDeviceRef): OSStatus; cdecl; external;
function DRDeviceEjectMedia(device: DRDeviceRef): OSStatus; cdecl; external;
procedure DRDeviceAcquireMediaReservation(device: DRDeviceRef); cdecl; external;
procedure DRDeviceReleaseMediaReservation(device: DRDeviceRef); cdecl; external;
function DRDeviceAcquireExclusiveAccess(device: DRDeviceRef): OSStatus; cdecl; external;
procedure DRDeviceReleaseExclusiveAccess(device: DRDeviceRef); cdecl; external;
function DRDeviceCopyInfo(device: DRDeviceRef): CFDictionaryRef; cdecl; external;
function DRDeviceCopyStatus(device: DRDeviceRef): CFDictionaryRef; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kDRDeviceAppearedNotification: CFStringRef; cvar; external;
  kDRDeviceDisappearedNotification: CFStringRef; cvar; external;
  kDRDeviceStatusChangedNotification: CFStringRef; cvar; external;
  kDRDeviceSupportLevelKey: CFStringRef; cvar; external;
  kDRDeviceIORegistryEntryPathKey: CFStringRef; cvar; external;
  kDRDeviceVendorNameKey: CFStringRef; cvar; external;
  kDRDeviceProductNameKey: CFStringRef; cvar; external;
  kDRDeviceFirmwareRevisionKey: CFStringRef; cvar; external;
  kDRDevicePhysicalInterconnectKey: CFStringRef; cvar; external;
  kDRDevicePhysicalInterconnectLocationKey: CFStringRef; cvar; external;
  kDRDeviceWriteCapabilitiesKey: CFStringRef; cvar; external;
  kDRDeviceLoadingMechanismCanEjectKey: CFStringRef; cvar; external;
  kDRDeviceLoadingMechanismCanInjectKey: CFStringRef; cvar; external;
  kDRDeviceLoadingMechanismCanOpenKey: CFStringRef; cvar; external;
  kDRDeviceWriteBufferSizeKey: CFStringRef; cvar; external;
  kDRDeviceSupportLevelNone: CFStringRef; cvar; external;
  kDRDeviceSupportLevelUnsupported: CFStringRef; cvar; external;
  kDRDeviceSupportLevelVendorSupported: CFStringRef; cvar; external;
  kDRDeviceSupportLevelAppleSupported: CFStringRef; cvar; external;
  kDRDeviceSupportLevelAppleShipping: CFStringRef; cvar; external;
  kDRDevicePhysicalInterconnectATAPI: CFStringRef; cvar; external;
  kDRDevicePhysicalInterconnectFibreChannel: CFStringRef; cvar; external;
  kDRDevicePhysicalInterconnectFireWire: CFStringRef; cvar; external;
  kDRDevicePhysicalInterconnectUSB: CFStringRef; cvar; external;
  kDRDevicePhysicalInterconnectSCSI: CFStringRef; cvar; external;
  kDRDevicePhysicalInterconnectLocationInternal: CFStringRef; cvar; external;
  kDRDevicePhysicalInterconnectLocationExternal: CFStringRef; cvar; external;
  kDRDevicePhysicalInterconnectLocationUnknown: CFStringRef; cvar; external;
  kDRDeviceCanWriteKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteCDKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteCDRKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteCDRWKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteDVDKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteDVDRKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteDVDRDualLayerKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteDVDRWKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteDVDRWDualLayerKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteDVDRAMKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteDVDPlusRKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteDVDPlusRDoubleLayerKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteDVDPlusRWKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteDVDPlusRWDoubleLayerKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteBDKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteBDRKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteBDREKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteHDDVDKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteHDDVDRKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteHDDVDRDualLayerKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteHDDVDRAMKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteHDDVDRWKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteHDDVDRWDualLayerKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteCDTextKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteIndexPointsKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteISRCKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteCDTAOKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteCDSAOKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteCDRawKey: CFStringRef; cvar; external;
  kDRDeviceCanWriteDVDDAOKey: CFStringRef; cvar; external;
  kDRDeviceCanTestWriteCDKey: CFStringRef; cvar; external;
  kDRDeviceCanTestWriteDVDKey: CFStringRef; cvar; external;
  kDRDeviceCanUnderrunProtectCDKey: CFStringRef; cvar; external;
  kDRDeviceCanUnderrunProtectDVDKey: CFStringRef; cvar; external;
  kDRDeviceIsBusyKey: CFStringRef; cvar; external;
  kDRDeviceIsTrayOpenKey: CFStringRef; cvar; external;
  kDRDeviceMaximumWriteSpeedKey: CFStringRef; cvar; external;
  kDRDeviceCurrentWriteSpeedKey: CFStringRef; cvar; external;
  kDRDeviceMediaStateKey: CFStringRef; cvar; external;
  kDRDeviceMediaInfoKey: CFStringRef; cvar; external;
  kDRDeviceBurnSpeedsKey: CFStringRef; cvar; external;
  kDRDeviceTrackRefsKey: CFStringRef; cvar; external;
  kDRDeviceTrackInfoKey: CFStringRef; cvar; external;
  kDRDeviceMediaStateMediaPresent: CFStringRef; cvar; external;
  kDRDeviceMediaStateInTransition: CFStringRef; cvar; external;
  kDRDeviceMediaStateNone: CFStringRef; cvar; external;
  kDRDeviceMediaBSDNameKey: CFStringRef; cvar; external;
  kDRDeviceMediaIsBlankKey: CFStringRef; cvar; external;
  kDRDeviceMediaIsAppendableKey: CFStringRef; cvar; external;
  kDRDeviceMediaIsOverwritableKey: CFStringRef; cvar; external;
  kDRDeviceMediaIsErasableKey: CFStringRef; cvar; external;
  kDRDeviceMediaIsReservedKey: CFStringRef; cvar; external;
  kDRDeviceMediaBlocksOverwritableKey: CFStringRef; cvar; external;
  kDRDeviceMediaBlocksFreeKey: CFStringRef; cvar; external;
  kDRDeviceMediaBlocksUsedKey: CFStringRef; cvar; external;
  kDRDeviceMediaDoubleLayerL0DataZoneBlocksKey: CFStringRef; cvar; external;
  kDRDeviceMediaTrackCountKey: CFStringRef; cvar; external;
  kDRDeviceMediaSessionCountKey: CFStringRef; cvar; external;
  kDRDeviceMediaClassKey: CFStringRef; cvar; external;
  kDRDeviceMediaTypeKey: CFStringRef; cvar; external;
  kDRDeviceMediaClassCD: CFStringRef; cvar; external;
  kDRDeviceMediaClassDVD: CFStringRef; cvar; external;
  kDRDeviceMediaClassBD: CFStringRef; cvar; external;
  kDRDeviceMediaClassHDDVD: CFStringRef; cvar; external;
  kDRDeviceMediaClassUnknown: CFStringRef; cvar; external;
  kDRDeviceMediaTypeCDROM: CFStringRef; cvar; external;
  kDRDeviceMediaTypeCDR: CFStringRef; cvar; external;
  kDRDeviceMediaTypeCDRW: CFStringRef; cvar; external;
  kDRDeviceMediaTypeDVDROM: CFStringRef; cvar; external;
  kDRDeviceMediaTypeDVDRAM: CFStringRef; cvar; external;
  kDRDeviceMediaTypeDVDR: CFStringRef; cvar; external;
  kDRDeviceMediaTypeDVDRDualLayer: CFStringRef; cvar; external;
  kDRDeviceMediaTypeDVDRW: CFStringRef; cvar; external;
  kDRDeviceMediaTypeDVDRWDualLayer: CFStringRef; cvar; external;
  kDRDeviceMediaTypeDVDPlusR: CFStringRef; cvar; external;
  kDRDeviceMediaTypeDVDPlusRDoubleLayer: CFStringRef; cvar; external;
  kDRDeviceMediaTypeDVDPlusRW: CFStringRef; cvar; external;
  kDRDeviceMediaTypeDVDPlusRWDoubleLayer: CFStringRef; cvar; external;
  kDRDeviceMediaTypeBDR: CFStringRef; cvar; external;
  kDRDeviceMediaTypeBDRE: CFStringRef; cvar; external;
  kDRDeviceMediaTypeBDROM: CFStringRef; cvar; external;
  kDRDeviceMediaTypeHDDVDROM: CFStringRef; cvar; external;
  kDRDeviceMediaTypeHDDVDR: CFStringRef; cvar; external;
  kDRDeviceMediaTypeHDDVDRDualLayer: CFStringRef; cvar; external;
  kDRDeviceMediaTypeHDDVDRAM: CFStringRef; cvar; external;
  kDRDeviceMediaTypeHDDVDRW: CFStringRef; cvar; external;
  kDRDeviceMediaTypeHDDVDRWDualLayer: CFStringRef; cvar; external;
  kDRDeviceMediaTypeUnknown: CFStringRef; cvar; external;
  kDRDeviceBurnSpeedCD1x: single; cvar; external;
  kDRDeviceBurnSpeedDVD1x: single; cvar; external;
  kDRDeviceBurnSpeedBD1x: single; cvar; external;
  kDRDeviceBurnSpeedHDDVD1x: single; cvar; external;
  kDRDeviceBurnSpeedMax: single; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function DRDeviceKPSForXFactor(deviceOrMediaType: DRTypeRef; xfactor: single): single; cdecl; external;
function DRDeviceXFactorForKPS(deviceOrMediaType: DRTypeRef; kps: single): single; cdecl; external;
{$endif}

{$endif}
