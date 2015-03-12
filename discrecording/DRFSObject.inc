{ Parsed from DiscRecording.framework DRFSObject.h }


{$ifdef TYPES}
type
  DRFSObjectPtr = ^DRFSObject;
{$endif}

{$ifdef TYPES}
type
  DRFilesystemInclusionMask = UInt32;
  DRFilesystemInclusionMaskPtr = ^DRFilesystemInclusionMask;

const
  DRFilesystemInclusionMaskISO9660 = 1 shl 0;
  DRFilesystemInclusionMaskJoliet = 1 shl 1;
  DRFilesystemInclusionMaskUDF = 1 shl 2;
  DRFilesystemInclusionMaskHFSPlus = 1 shl 3;
{$endif}

{$ifdef CLASSES}

type
  DRFSObject = objcclass external (NSObject)
  private
    _ref: pointer;
  public
    function isVirtual: boolean; message 'isVirtual';
    function sourcePath: NSString; message 'sourcePath';
    function parent: DRFolder; message 'parent';
    function baseName: NSString; message 'baseName';
    procedure setBaseName (baseName_: NSString); message 'setBaseName:';
    function specificNameForFilesystem (filesystem: NSString): NSString; message 'specificNameForFilesystem:';
    function specificNames: NSDictionary; message 'specificNames';
    procedure setSpecificName_forFilesystem (name: NSString; filesystem: NSString); message 'setSpecificName:forFilesystem:';
    procedure setSpecificNames (specificNames_: NSDictionary); message 'setSpecificNames:';
    function mangledNameForFilesystem (filesystem: NSString): NSString; message 'mangledNameForFilesystem:';
    function mangledNames: NSDictionary; message 'mangledNames';
    function propertyForKey_inFilesystem_mergeWithOtherFilesystems (key: NSString; filesystem: NSString; merge: boolean): id; message 'propertyForKey:inFilesystem:mergeWithOtherFilesystems:';
    function propertiesForFilesystem_mergeWithOtherFilesystems (filesystem: NSString; merge: boolean): NSDictionary; message 'propertiesForFilesystem:mergeWithOtherFilesystems:';
    procedure setProperty_forKey_inFilesystem (property_: id; key: NSString; filesystem: NSString); message 'setProperty:forKey:inFilesystem:';
    procedure setProperties_inFilesystem (properties: NSDictionary; filesystem: NSString); message 'setProperties:inFilesystem:';
    function explicitFilesystemMask: DRFilesystemInclusionMask; message 'explicitFilesystemMask';
    procedure setExplicitFilesystemMask (mask: DRFilesystemInclusionMask); message 'setExplicitFilesystemMask:';
    function effectiveFilesystemMask: DRFilesystemInclusionMask; message 'effectiveFilesystemMask';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  DRAllFilesystems: NSString; cvar; external;
  DRISO9660: NSString; cvar; external;
  DRISO9660LevelOne: NSString; cvar; external;
  DRISO9660LevelTwo: NSString; cvar; external;
  DRJoliet: NSString; cvar; external;
  DRHFSPlus: NSString; cvar; external;
  DRUDF: NSString; cvar; external;
  DRISO9660VersionNumber: NSString; cvar; external;
  DRInvisible: NSString; cvar; external;
  DRCreationDate: NSString; cvar; external;
  DRContentModificationDate: NSString; cvar; external;
  DRAttributeModificationDate: NSString; cvar; external;
  DRAccessDate: NSString; cvar; external;
  DRBackupDate: NSString; cvar; external;
  DREffectiveDate: NSString; cvar; external;
  DRExpirationDate: NSString; cvar; external;
  DRRecordingDate: NSString; cvar; external;
  DRPosixFileMode: NSString; cvar; external;
  DRPosixUID: NSString; cvar; external;
  DRPosixGID: NSString; cvar; external;
  DRHFSPlusTextEncodingHint: NSString; cvar; external;
  DRHFSPlusCatalogNodeID: NSString; cvar; external;
  DRMacFileType: NSString; cvar; external;
  DRMacFileCreator: NSString; cvar; external;
  DRMacWindowBounds: NSString; cvar; external;
  DRMacIconLocation: NSString; cvar; external;
  DRMacScrollPosition: NSString; cvar; external;
  DRMacWindowView: NSString; cvar; external;
  DRMacFinderFlags: NSString; cvar; external;
  DRMacExtendedFinderFlags: NSString; cvar; external;
  DRMacFinderHideExtension: NSString; cvar; external;
  DRUDFWriteVersion: NSString; cvar; external;
  DRUDFVersion102: NSString; cvar; external;
  DRUDFVersion150: NSString; cvar; external;
  DRUDFPrimaryVolumeDescriptorNumber: NSString; cvar; external;
  DRUDFVolumeSequenceNumber: NSString; cvar; external;
  DRUDFMaxVolumeSequenceNumber: NSString; cvar; external;
  DRUDFInterchangeLevel: NSString; cvar; external;
  DRUDFMaxInterchangeLevel: NSString; cvar; external;
  DRUDFApplicationIdentifierSuffix: NSString; cvar; external;
  DRUDFVolumeSetIdentifier: NSString; cvar; external;
  DRUDFVolumeSetTimestamp: NSString; cvar; external;
  DRUDFVolumeSetImplementationUse: NSString; cvar; external;
  DRUDFRealTimeFile: NSString; cvar; external;
  DRUDFExtendedFilePermissions: NSString; cvar; external;
{$endif}

