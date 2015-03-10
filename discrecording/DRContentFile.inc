{ Parsed from DiscRecording.framework (MacOSX10.10) DRContentFile.h }
{ Created on Sun Mar 8 1:47:42 2015 }

{$ifndef _H_DRContentFile}

{$ifdef FUNCTIONS}
function DRFileGetTypeID: CFTypeID; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  DRLinkType = UInt32;
  DRLinkTypePtr = ^DRLinkType;

const
  kDRLinkTypeHardLink = 1;
  kDRLinkTypeSymbolicLink = 2;
  kDRLinkTypeFinderAlias = 3;

type
  DRFileMessage = UInt32;
  DRFileMessagePtr = ^DRFileMessage;

const
  kDRFileMessageForkSize = 'fsiz';
  kDRFileMessagePreBurn = 'pre ';
  kDRFileMessageProduceData = 'prod';
  kDRFileMessageVerificationStarting = 'vrfy';
  kDRFileMessagePostBurn = 'post';
  kDRFileMessageRelease = 'bye ';

type
  DRFileForkIndex = UInt32;
  DRFileForkIndexPtr = ^DRFileForkIndex;

const
  kDRFileForkData = 0;
  kDRFileForkResource = 1;

type
  DRFileForkSizeQuery = UInt32;
  DRFileForkSizeQueryPtr = ^DRFileForkSizeQuery;

const
  kDRFileForkSizeActual = 0;
  kDRFileForkSizeEstimate = 1;

type
  DRFileForkSizeInfo = record
    fork: DRFileForkIndex;
    query: DRFileForkSizeQuery;
    size: UInt64;
  end;
type
  DRFileForkSizeInfoPtr = ^DRFileForkSizeInfo;
type
  DRFileProductionInfo = record
    requestedAddress: UInt64;
    buffer: pointer;
    reqCount: UInt32;
    actCount: UInt32;
    blockSize: UInt32;
    fork: DRFileForkIndex;
  end;
type
  DRFileProductionInfoPtr = ^DRFileProductionInfo;

type
  DRFileProc = function (refCon: pointer; file_: DRFileRef; message_: DRFileMessage; ioParam: pointer): OSStatus; cdecl;
{$endif}

{$ifdef FUNCTIONS}
function DRFileCreateReal(fsRef: FSRefPtr): DRFileRef; cdecl; external;
function DRFileCreateRealWithURL(urlRef: CFURLRef): DRFileRef; cdecl; external;
function DRFileCreateVirtualWithData(baseName: CFStringRef; fileData: pointer; fileDataLength: UInt32): DRFileRef; cdecl; external;
function DRFileCreateVirtualWithCallback(baseName: CFStringRef; fileProc: DRFileProc; fileProcRefCon: pointer): DRFileRef; cdecl; external;
function DRFileCreateVirtualLink(original: DRFSObjectRef; linkType: DRLinkType; fsKey: CFStringRef): DRFileRef; cdecl; external;
{$endif}

{$endif}
