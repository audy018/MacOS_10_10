{ Parsed from DiscRecording.framework (MacOSX10.10) DRFolder.h }
{ Created on Sun Mar 8 1:47:42 2015 }


{$ifdef TYPES}
type
  DRFolderPtr = ^DRFolder;
{$endif}

{$ifdef CLASSES}

type
  DRFolder = objcclass external (DRFSObject)
  private
  public
    class function folderWithPath (path: NSString): DRFolder; message 'folderWithPath:';
    function initWithPath (path: NSString): id; message 'initWithPath:';
  end;


type
  VirtualFolders = objccategory external (DRFolder)
    class function virtualFolderWithName (name: NSString): DRFolder; message 'virtualFolderWithName:';
    function initWithName (name: NSString): id; message 'initWithName:';
    procedure makeVirtual; message 'makeVirtual';
    procedure addChild (child: DRFSObject); message 'addChild:';
    procedure removeChild (child: DRFSObject); message 'removeChild:';
    function count: NSUInteger; message 'count';
    function children: NSArray; message 'children';
  end;
{$endif}

