{ Parsed from CoreMediaIO.framework (MacOSX10.10) CMIOHardwareSystem.h }
{ Created on Sun Mar 8 1:47:37 2015 }

{$if  not (defined(__CMIOHardwareSystem_h__))}

{$ifdef TYPES}
type
  CMIOHardwarePropertyID = CMIOObjectPropertySelector;
  CMIOHardwarePropertyIDPtr = ^CMIOHardwarePropertyID;

const
  kCMIOSystemObjectClassID = 'asys';
  kCMIOObjectSystemObject = 1;
const
  kCMIOHardwarePropertyProcessIsMaster = 'mast';
  kCMIOHardwarePropertyIsInitingOrExiting = 'inot';
  kCMIOHardwarePropertyDevices = 'dev#';
  kCMIOHardwarePropertyDefaultInputDevice = 'dIn ';
  kCMIOHardwarePropertyDefaultOutputDevice = 'dOut';
  kCMIOHardwarePropertyDeviceForUID = 'duid';
  kCMIOHardwarePropertySleepingIsAllowed = 'slep';
  kCMIOHardwarePropertyUnloadingIsAllowed = 'unld';
  kCMIOHardwarePropertyPlugInForBundleID = 'pibi';
  kCMIOHardwarePropertyUserSessionIsActiveOrHeadless = 'user';
  kCMIOHardwarePropertySuspendedBySystem = 'sbys';
  kCMIOHardwarePropertyAllowScreenCaptureDevices = 'yes ';
{$endif}

{$endif}
