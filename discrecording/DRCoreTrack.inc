{ Parsed from DiscRecording.framework (MacOSX10.10) DRCoreTrack.h }
{ Created on Sun Mar 8 1:47:42 2015 }

{$ifndef _H_DRCoreTrack}

{$ifdef TYPES}
type
  DRTrackRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function DRTrackGetTypeID: CFTypeID; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  DRTrackMessage = UInt32;
  DRTrackMessagePtr = ^DRTrackMessage;
  DRTrackCallbackProc = function (track: DRTrackRef; message_: DRTrackMessage; ioParam: pointer): OSStatus; cdecl;
{$endif}

{$ifdef FUNCTIONS}
function DRTrackCreate(properties: CFDictionaryRef; callback: DRTrackCallbackProc): DRTrackRef; cdecl; external;
procedure DRTrackSetProperties(track: DRTrackRef; properties: CFDictionaryRef); cdecl; external;
function DRTrackGetProperties(track: DRTrackRef): CFDictionaryRef; cdecl; external;
function DRTrackSpeedTest(track: DRTrackRef; howManyMilliseconds: UInt32; howManyBytes: UInt32): single; cdecl; external;
function DRTrackEstimateLength(track: DRTrackRef): UInt64; cdecl; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kDRTrackLengthKey: CFStringRef; cvar; external;
  kDRBlockSizeKey: CFStringRef; cvar; external;
  kDRBlockTypeKey: CFStringRef; cvar; external;
  kDRDataFormKey: CFStringRef; cvar; external;
  kDRSessionFormatKey: CFStringRef; cvar; external;
  kDRTrackModeKey: CFStringRef; cvar; external;
  kDRVerificationTypeKey: CFStringRef; cvar; external;
  kDRDVDCopyrightInfoKey: CFStringRef; cvar; external;
  kDRDVDTimestampKey: CFStringRef; cvar; external;
  kDRBufferZone1DataKey: CFStringRef; cvar; external;
  kDRMaxBurnSpeedKey: CFStringRef; cvar; external;
  kDRPreGapLengthKey: CFStringRef; cvar; external;
  kDRPreGapIsRequiredKey: CFStringRef; cvar; external;
  kDRTrackISRCKey: CFStringRef; cvar; external;
  kDRIndexPointsKey: CFStringRef; cvar; external;
  kDRAudioPreEmphasisKey: CFStringRef; cvar; external;
  kDRAudioFourChannelKey: CFStringRef; cvar; external;
  kDRSerialCopyManagementStateKey: CFStringRef; cvar; external;
  kDRVerificationTypeNone: CFStringRef; cvar; external;
  kDRVerificationTypeProduceAgain: CFStringRef; cvar; external;
  kDRVerificationTypeReceiveData: CFStringRef; cvar; external;
  kDRVerificationTypeChecksum: CFStringRef; cvar; external;
  kDRSCMSCopyrightFree: CFStringRef; cvar; external;
  kDRSCMSCopyrightProtectedOriginal: CFStringRef; cvar; external;
  kDRSCMSCopyrightProtectedCopy: CFStringRef; cvar; external;
  kDRNextWritableAddressKey: CFStringRef; cvar; external;
  kDRTrackStartAddressKey: CFStringRef; cvar; external;
  kDRFreeBlocksKey: CFStringRef; cvar; external;
  kDRTrackNumberKey: CFStringRef; cvar; external;
  kDRSessionNumberKey: CFStringRef; cvar; external;
  kDRTrackTypeKey: CFStringRef; cvar; external;
  kDRTrackIsEmptyKey: CFStringRef; cvar; external;
  kDRTrackPacketTypeKey: CFStringRef; cvar; external;
  kDRTrackPacketSizeKey: CFStringRef; cvar; external;
  kDRTrackTypeInvisible: CFStringRef; cvar; external;
  kDRTrackTypeIncomplete: CFStringRef; cvar; external;
  kDRTrackTypeReserved: CFStringRef; cvar; external;
  kDRTrackTypeClosed: CFStringRef; cvar; external;
  kDRTrackPacketTypeFixed: CFStringRef; cvar; external;
  kDRTrackPacketTypeVariable: CFStringRef; cvar; external;
  kDRBurnKey: CFStringRef; cvar; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kDRSubchannelDataFormKey: CFStringRef; cvar; external;
  kDRSubchannelDataFormNone: CFStringRef; cvar; external;
  kDRSubchannelDataFormPack: CFStringRef; cvar; external;
  kDRSubchannelDataFormRaw: CFStringRef; cvar; external;
{$endif}

{$ifdef TYPES}
const
  kDRBlockSizeAudio = 2352;
  kDRBlockSizeMode1Data = 2048;
  kDRBlockSizeMode2Data = 2332;
  kDRBlockSizeMode2Form1Data = 2048;
  kDRBlockSizeMode2Form2Data = 2324;
  kDRBlockSizeDVDData = 2048;
const
  kDRBlockTypeAudio = 0;
  kDRBlockTypeMode1Data = 8;
  kDRBlockTypeMode2Data = 13;
  kDRBlockTypeMode2Form1Data = 10;
  kDRBlockTypeMode2Form2Data = 12;
  kDRBlockTypeDVDData = 8;
const
  kDRDataFormAudio = 0;
  kDRDataFormMode1Data = 16;
  kDRDataFormMode2Data = 32;
  kDRDataFormMode2Form1Data = 32;
  kDRDataFormMode2Form2Data = 32;
  kDRDataFormDVDData = 16;
const
  kDRTrackModeAudio = 0;
  kDRTrackMode1Data = 4;
  kDRTrackMode2Data = 4;
  kDRTrackMode2Form1Data = 4;
  kDRTrackMode2Form2Data = 4;
  kDRTrackModeDVDData = 5;
const
  kDRSessionFormatAudio = 0;
  kDRSessionFormatMode1Data = 0;
  kDRSessionFormatCDI = $10;
  kDRSessionFormatCDXA = $20;
  kDRSessionFormatDVDData = 0;
const
  kDRFlagSubchannelDataRequested = 1 shl 1;
  kDRFlagNoMoreData = 1 shl 0;
const
  kDRTrackMessagePreBurn = 'pre ';
  kDRTrackMessageProduceData = 'prod';
  kDRTrackMessageVerificationStarting = 'vstr';
  kDRTrackMessageVerifyData = 'vrfy';
  kDRTrackMessageVerificationDone = 'vdon';
  kDRTrackMessagePostBurn = 'post';
  kDRTrackMessageEstimateLength = 'esti';
  kDRTrackMessageProducePreGap = 'prpr';
  kDRTrackMessageVerifyPreGap = 'vrpr';

type
  DRTrackProductionInfo = record
    buffer: pointer;
    reqCount: UInt32;
    actCount: UInt32;
    flags: UInt32;
    blockSize: UInt32;
    requestedAddress: UInt64;
  end;
type
  DRTrackProductionInfoPtr = ^DRTrackProductionInfo;
{$endif}

{$endif}
