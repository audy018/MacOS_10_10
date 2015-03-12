{ Parsed from DiscRecording.framework DRFile.h }


{$ifdef TYPES}
type
  DRFilePtr = ^DRFile;
  DRFileDataProductionProtocolPtr = ^DRFileDataProductionProtocol;
{$endif}

{$ifdef CLASSES}

type
  DRFile = objcclass external (DRFSObject)
  private
  public
    class function fileWithPath (path: NSString): DRFile; message 'fileWithPath:';
    function initWithPath (path: NSString): id; message 'initWithPath:';
  end;


type
  VirtualFiles = objccategory external (DRFile)
    class function virtualFileWithName_data (name: NSString; data: NSData): DRFile; message 'virtualFileWithName:data:';
    class function virtualFileWithName_dataProducer (name: NSString; producer: id): DRFile; message 'virtualFileWithName:dataProducer:';
    function initWithName_data (name: NSString; data: NSData): id; message 'initWithName:data:';
    function initWithName_dataProducer (name: NSString; producer: id): id; message 'initWithName:dataProducer:';
  end;

type
  VirtualLinks = objccategory external (DRFile)
    class function hardLinkPointingTo_inFilesystem (original: DRFile; filesystem: NSString): DRFile; message 'hardLinkPointingTo:inFilesystem:';
    class function symLinkPointingTo_inFilesystem (original: DRFSObject; filesystem: NSString): DRFile; message 'symLinkPointingTo:inFilesystem:';
    class function finderAliasPointingTo_inFilesystem (original: DRFSObject; filesystem: NSString): DRFile; message 'finderAliasPointingTo:inFilesystem:';
    function initWithLinkType_pointingTo_inFilesystem (linkType: NSString; original: DRFSObject; filesystem: NSString): id; message 'initWithLinkType:pointingTo:inFilesystem:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DRLinkTypeHardLink: NSString; cvar; external;
  DRLinkTypeSymbolicLink: NSString; cvar; external;
  DRLinkTypeFinderAlias: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  DRFileFork = UInt32;
  DRFileForkPtr = ^DRFileFork;

const
  DRFileForkData = 0;
  DRFileForkResource = 1;
{$endif}

{$ifdef PROTOCOLS}

type
  DRFileDataProductionProtocol = objcprotocol external name 'DRFileDataProduction'
    function calculateSizeOfFile_fork_estimating (file_: DRFile; fork: DRFileFork; estimate: boolean): cuint64; message 'calculateSizeOfFile:fork:estimating:';
    function prepareFileForBurn (file_: DRFile): boolean; message 'prepareFileForBurn:';
    function produceFile_fork_intoBuffer_length_atAddress_blockSize (file_: DRFile; fork: DRFileFork; buffer: PChar; bufferLength: cuint32; address: cuint64; blockSize: cuint32): cuint32; message 'produceFile:fork:intoBuffer:length:atAddress:blockSize:';
    function prepareFileForVerification (file_: DRFile): boolean; message 'prepareFileForVerification:';
    procedure cleanupFileAfterBurn (file_: DRFile); message 'cleanupFileAfterBurn:';
  end;
{$endif}

