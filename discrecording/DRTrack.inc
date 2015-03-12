{ Parsed from DiscRecording.framework DRTrack.h }


{$ifdef TYPES}
type
  DRTrackPtr = ^DRTrack;
  DRTrackDataProductionProtocolPtr = ^DRTrackDataProductionProtocol;
{$endif}

{$ifdef CLASSES}

type
  DRTrack = objcclass external (NSObject)
  private
    _ref: pointer;
  public
    function initWithProducer (producer: id): id; message 'initWithProducer:';
    function properties: NSDictionary; message 'properties';
    procedure setProperties (properties_: NSDictionary); message 'setProperties:';
    function testProductionSpeedForInterval (interval: NSTimeInterval): single; message 'testProductionSpeedForInterval:';
    function testProductionSpeedForLength (length: cuint32): single; message 'testProductionSpeedForLength:';
    function estimateLength: cuint64; message 'estimateLength';
  end;


type
  PropertyConvenience = objccategory external (DRTrack)
    function length: DRMSF; message 'length';
    function preGap: DRMSF; message 'preGap';
    procedure setPreGap (preGap_: DRMSF); message 'setPreGap:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  DRTrackDataProductionProtocol = objcprotocol external name 'DRTrackDataProduction'
    function estimateLengthOfTrack (track: DRTrack): cuint64; message 'estimateLengthOfTrack:';
    function prepareTrack_forBurn_toMedia (track: DRTrack; burn: DRBurn; mediaInfo: NSDictionary): boolean; message 'prepareTrack:forBurn:toMedia:';
    procedure cleanupTrackAfterBurn (track: DRTrack); message 'cleanupTrackAfterBurn:';
    function producePreGapForTrack_intoBuffer_length_atAddress_blockSize_ioFlags (track: DRTrack; buffer: PChar; bufferLength: cuint32; address: cuint64; blockSize: cuint32; flags: pcuint32): cuint32; message 'producePreGapForTrack:intoBuffer:length:atAddress:blockSize:ioFlags:';
    function produceDataForTrack_intoBuffer_length_atAddress_blockSize_ioFlags (track: DRTrack; buffer: PChar; bufferLength: cuint32; address: cuint64; blockSize: cuint32; flags: pcuint32): cuint32; message 'produceDataForTrack:intoBuffer:length:atAddress:blockSize:ioFlags:';
    function prepareTrackForVerification (track: DRTrack): boolean; message 'prepareTrackForVerification:';
    function verifyPreGapForTrack_inBuffer_length_atAddress_blockSize_ioFlags (track: DRTrack; buffer: PChar; bufferLength: cuint32; address: cuint64; blockSize: cuint32; flags: pcuint32): boolean; message 'verifyPreGapForTrack:inBuffer:length:atAddress:blockSize:ioFlags:';
    function verifyDataForTrack_inBuffer_length_atAddress_blockSize_ioFlags (track: DRTrack; buffer: PChar; bufferLength: cuint32; address: cuint64; blockSize: cuint32; flags: pcuint32): boolean; message 'verifyDataForTrack:inBuffer:length:atAddress:blockSize:ioFlags:';
    function cleanupTrackAfterVerification (track: DRTrack): boolean; message 'cleanupTrackAfterVerification:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DRTrackLengthKey: NSString; cvar; external;
  DRBlockSizeKey: NSString; cvar; external;
  DRBlockTypeKey: NSString; cvar; external;
  DRDataFormKey: NSString; cvar; external;
  DRSessionFormatKey: NSString; cvar; external;
  DRTrackModeKey: NSString; cvar; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DRVerificationTypeKey: NSString; cvar; external;
  DRMaxBurnSpeedKey: NSString; cvar; external;
  DRPreGapLengthKey: NSString; cvar; external;
  DRPreGapIsRequiredKey: NSString; cvar; external;
  DRDVDTimestampKey: NSString; cvar; external;
  DRDVDCopyrightInfoKey: NSString; cvar; external;
  DRTrackISRCKey: NSString; cvar; external;
  DRIndexPointsKey: NSString; cvar; external;
  DRAudioPreEmphasisKey: NSString; cvar; external;
  DRAudioFourChannelKey: NSString; cvar; external;
  DRSerialCopyManagementStateKey: NSString; cvar; external;
  DRVerificationTypeProduceAgain: NSString; cvar; external;
  DRVerificationTypeReceiveData: NSString; cvar; external;
  DRVerificationTypeChecksum: NSString; cvar; external;
  DRVerificationTypeNone: NSString; cvar; external;
  DRSCMSCopyrightFree: NSString; cvar; external;
  DRSCMSCopyrightProtectedOriginal: NSString; cvar; external;
  DRSCMSCopyrightProtectedCopy: NSString; cvar; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DRNextWritableAddressKey: NSString; cvar; external;
  DRTrackStartAddressKey: NSString; cvar; external;
  DRFreeBlocksKey: NSString; cvar; external;
  DRTrackNumberKey: NSString; cvar; external;
  DRSessionNumberKey: NSString; cvar; external;
  DRTrackTypeKey: NSString; cvar; external;
  DRTrackIsEmptyKey: NSString; cvar; external;
  DRTrackPacketTypeKey: NSString; cvar; external;
  DRTrackPacketSizeKey: NSString; cvar; external;
  DRTrackTypeInvisible: NSString; cvar; external;
  DRTrackTypeIncomplete: NSString; cvar; external;
  DRTrackTypeReserved: NSString; cvar; external;
  DRTrackTypeClosed: NSString; cvar; external;
  DRTrackPacketTypeFixed: NSString; cvar; external;
  DRTrackPacketTypeVariable: NSString; cvar; external;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DRISOLevel: NSString; cvar; external;
  DRVolumeSet: NSString; cvar; external;
  DRPublisher: NSString; cvar; external;
  DRDataPreparer: NSString; cvar; external;
  DRApplicationIdentifier: NSString; cvar; external;
  DRSystemIdentifier: NSString; cvar; external;
  DRCopyrightFile: NSString; cvar; external;
  DRAbstractFile: NSString; cvar; external;
  DRBibliographicFile: NSString; cvar; external;
  DRBlockSize: NSString; cvar; external;
  DRDefaultDate: NSString; cvar; external;
  DRVolumeCreationDate: NSString; cvar; external;
  DRVolumeModificationDate: NSString; cvar; external;
  DRVolumeCheckedDate: NSString; cvar; external;
  DRVolumeExpirationDate: NSString; cvar; external;
  DRVolumeEffectiveDate: NSString; cvar; external;
  DRISOMacExtensions: NSString; cvar; external;
  DRISORockRidgeExtensions: NSString; cvar; external;
  DRSuppressMacSpecificFiles: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
const
  DRFlagSubchannelDataRequested = 1 shl 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DRSubchannelDataFormKey: NSString; cvar; external;
  DRSubchannelDataFormNone: NSString; cvar; external;
  DRSubchannelDataFormPack: NSString; cvar; external;
  DRSubchannelDataFormRaw: NSString; cvar; external;
{$endif}

