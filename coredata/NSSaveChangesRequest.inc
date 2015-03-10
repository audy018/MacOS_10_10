{ Parsed from CoreData.framework (MacOSX10.10) NSSaveChangesRequest.h }
{ Created on Sun Mar 8 1:48:21 2015 }


{$ifdef TYPES}
type
  NSSaveChangesRequestPtr = ^NSSaveChangesRequest;
{$endif}

{$ifdef CLASSES}

type
  NSSaveChangesRequest = objcclass external (NSPersistentStoreRequest)
  private
    _insertedObjects: NSSet;
    _updatedObjects: NSSet;
    _deletedObjects: NSSet;
    _optimisticallyLockedObjects: NSSet;
    _flags: culong;
    _reserved1: pointer;
  public
    function initWithInsertedObjects_updatedObjects_deletedObjects_lockedObjects (insertedObjects: NSSet; updatedObjects: NSSet; deletedObjects: NSSet; lockedObjects: NSSet): instancetype; message 'initWithInsertedObjects:updatedObjects:deletedObjects:lockedObjects:';
    function insertedObjects: NSSet; message 'insertedObjects';
    function updatedObjects: NSSet; message 'updatedObjects';
    function deletedObjects: NSSet; message 'deletedObjects';
    function lockedObjects: NSSet; message 'lockedObjects';
  end;
{$endif}

