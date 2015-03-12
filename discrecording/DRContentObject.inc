{ Parsed from DiscRecording.framework DRContentObject.h }

{$ifndef _H_DRContentObject}

{$ifdef TYPES}
type
  DRFileRef = OpaqueType;
  DRFolderRef = OpaqueType;
  DRFSObjectRef = DRTypeRef;
  DRFSObjectRefPtr = ^DRFSObjectRef;
  DRFilesystemMask = UInt32;
  DRFilesystemMaskPtr = ^DRFilesystemMask;

const
  kDRFilesystemMaskISO9660 = 1 shl 0;
  kDRFilesystemMaskJoliet = 1 shl 1;
  kDRFilesystemMaskUDF = 1 shl 2;
  kDRFilesystemMaskHFSPlus = 1 shl 3;
  kDRFilesystemMaskDefault = $FFFFFFFF;
{$endif}

{$ifdef FUNCTIONS}
function DRFSObjectIsVirtual(object_: DRFSObjectRef): Boolean; cdecl; external;
procedure DRFSObjectGetRealFSRef(object_: DRFSObjectRef; fsRef: FSRefPtr); cdecl; external;
function DRFSObjectCopyRealURL(object_: DRFSObjectRef): CFURLRef; cdecl; external;
function DRFSObjectGetParent(object_: DRFSObjectRef): DRFolderRef; cdecl; external;
function DRFSObjectCopyBaseName(object_: DRFSObjectRef): CFStringRef; cdecl; external;
function DRFSObjectCopySpecificName(object_: DRFSObjectRef; fsKey: CFStringRef): CFStringRef; cdecl; external;
function DRFSObjectCopySpecificNames(object_: DRFSObjectRef): CFDictionaryRef; cdecl; external;
function DRFSObjectCopyMangledName(object_: DRFSObjectRef; fsKey: CFStringRef): CFStringRef; cdecl; external;
function DRFSObjectCopyMangledNames(object_: DRFSObjectRef): CFDictionaryRef; cdecl; external;
function DRFSObjectCopyFilesystemProperty(object_: DRFSObjectRef; fsKey: CFStringRef; propertyKey: CFStringRef; coalesce: Boolean): CFTypeRef; cdecl; external;
function DRFSObjectCopyFilesystemProperties(object_: DRFSObjectRef; fsKey: CFStringRef; coalesce: Boolean): CFDictionaryRef; cdecl; external;
function DRFSObjectGetFilesystemMask(object_: DRFSObjectRef; explicitMask: DRFilesystemMaskPtr; effectiveMask: DRFilesystemMaskPtr): DRFilesystemMask; cdecl; external;
procedure DRFSObjectSetBaseName(object_: DRFSObjectRef; baseName: CFStringRef); cdecl; external;
procedure DRFSObjectSetSpecificName(object_: DRFSObjectRef; fsKey: CFStringRef; specificName: CFStringRef); cdecl; external;
procedure DRFSObjectSetSpecificNames(object_: DRFSObjectRef; specificNames: CFDictionaryRef); cdecl; external;
procedure DRFSObjectSetFilesystemProperty(object_: DRFSObjectRef; fsKey: CFStringRef; propertyKey: CFStringRef; value: CFTypeRef); cdecl; external;
procedure DRFSObjectSetFilesystemProperties(object_: DRFSObjectRef; fsKey: CFStringRef; properties: CFDictionaryRef); cdecl; external;
procedure DRFSObjectSetFilesystemMask(object_: DRFSObjectRef; newMask: DRFilesystemMask); cdecl; external;
{$endif}

{$endif}
