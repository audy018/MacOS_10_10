{ Parsed from DiscRecording.framework (MacOSX10.10) DRCoreErrors.h }
{ Created on Sun Mar 8 1:47:42 2015 }

{$ifndef _H_DRCoreErrors}

{$ifdef TYPES}
const
  kDRFirstErr = $80020000;
  kDRInternalErr = kDRFirstErr;
  kDRDeviceAccessErr = $80020020;
  kDRDeviceBusyErr = $80020021;
  kDRDeviceCommunicationErr = $80020022;
  kDRDeviceInvalidErr = $80020023;
  kDRDeviceNotReadyErr = $80020024;
  kDRDeviceNotSupportedErr = $80020025;
  kDRMediaBusyErr = $80020040;
  kDRMediaNotPresentErr = $80020041;
  kDRMediaNotWritableErr = $80020042;
  kDRMediaNotSupportedErr = $80020043;
  kDRMediaNotBlankErr = $80020044;
  kDRMediaNotErasableErr = $80020045;
  kDRMediaInvalidErr = $80020046;
  kDRBurnUnderrunErr = $80020060;
  kDRBurnNotAllowedErr = $80020061;
  kDRDataProductionErr = $80020062;
  kDRVerificationFailedErr = $80020063;
  kDRTooManyTracksForDVDErr = $80020064;
  kDRBadLayoutErr = $80020065;
  kDRUserCanceledErr = $80020066;
  kDRFunctionNotSupportedErr = $80020067;
  kDRSpeedTestAlreadyRunningErr = $80020068;
  kDRInvalidIndexPointsErr = $80020069;
  kDRDoubleLayerL0DataZoneBlocksParamErr = $8002006A;
  kDRDoubleLayerL0AlreadySpecifiedErr = $8002006B;
  kDRAudioFileNotSupportedErr = $8002006C;
  kDRBurnPowerCalibrationErr = $8002006D;
  kDRBurnMediaWriteFailureErr = $8002006E;
  kDRTrackReusedErr = $8002006F;
  kDRFileModifiedDuringBurnErr = $80020100;
  kDRFileLocationConflictErr = $80020101;
  kDRTooManyNameConflictsErr = $80020102;
  kDRFilesystemsNotSupportedErr = $80020103;
  kDRDeviceBurnStrategyNotAvailableErr = $80020200;
  kDRDeviceCantWriteCDTextErr = $80020201;
  kDRDeviceCantWriteIndexPointsErr = $80020202;
  kDRDeviceCantWriteISRCErr = $80020203;
  kDRDeviceCantWriteSCMSErr = $80020204;
  kDRDevicePreGapLengthNotValidErr = $80020205;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kDRErrorStatusKey: CFStringRef; cvar; external;
  kDRErrorStatusErrorKey: CFStringRef; cvar; external;
  kDRErrorStatusErrorStringKey: CFStringRef; cvar; external;
  kDRErrorStatusErrorInfoStringKey: CFStringRef; cvar; external;
  kDRErrorStatusSenseKey: CFStringRef; cvar; external;
  kDRErrorStatusSenseCodeStringKey: CFStringRef; cvar; external;
  kDRErrorStatusAdditionalSenseStringKey: CFStringRef; cvar; external;
{$endif}

{$endif}
