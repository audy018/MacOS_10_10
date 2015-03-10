{ Parsed from DiscRecording.framework (MacOSX10.10) DRContentTrack.h }
{ Created on Sun Mar 8 1:47:42 2015 }

{$ifndef _H_DRContentTrack}

{$ifdef TYPES}
type
  DRFilesystemTrackRef = DRTrackRef;
  DRFilesystemTrackRefPtr = ^DRFilesystemTrackRef;
{$endif}

{$ifdef FUNCTIONS}
function DRFilesystemTrackCreate(rootFolder: DRFolderRef): DRFilesystemTrackRef; cdecl; external;
function DRFilesystemTrackEstimateOverhead(numBlocks: UInt64; blockSize: UInt32; fsMask: DRFilesystemMask): UInt64; cdecl; external;
{$endif}

{$ifdef TYPES}
type
  DRAudioTrackRef = DRTrackRef;
  DRAudioTrackRefPtr = ^DRAudioTrackRef;
{$endif}

{$ifdef FUNCTIONS}
function DRAudioTrackCreate(audioFile: FSRefPtr): DRAudioTrackRef; cdecl; external;
function DRAudioTrackCreateWithURL(audioFileURL: CFURLRef): DRAudioTrackRef; cdecl; external;
{$endif}

{$endif}
