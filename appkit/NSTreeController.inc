{ Parsed from AppKit.framework (MacOSX10.10) NSTreeController.h }
{ Created on Sun Mar 8 1:49:08 2015 }


{$ifdef TYPES}
type
  NSTreeControllerPtr = ^NSTreeController;
{$endif}

{$ifdef CLASSES}

type
  NSTreeController = objcclass external (NSObjectController)
  private
    _treeControllerReserved1: id;
    _modelObservingKeyPaths: NSArray;
    _treeStructureObservers: id;
    _arrangedObjects: id;
    _rootNode: id;
    _selectionIndexPaths: id;
    __treeControllerFlags: bitpacked record
      case byte of
        0: (_anonBitField___treeControllerFlags0: cuint);
        1: (
          _avoidsEmptySelection: 0..1;
          _preservesSelection: 0..1;
          _selectsInsertedObjects: 0..1;
          _explicitlyCannotInsert: 0..1;
          _explicitlyCannotInsertChild: 0..1;
          _explicitlyCannotAddChild: 0..1;
          _alwaysUsesMultipleValuesMarker: 0..1;
          _observingThroughArrangedObjects: 0..1;
          _mutatingNodes: 0..1;
          _performingFetch: 0..1;
          _skipSortingAfterFetch: 0..1;
          _usesIdenticalComparisonOfModelObjects: 0..1;
          _reservedTreeController: 0..((1 shl 20)-1);
        );
      end;
    _selectedObjects: NSArray;
    _childrenKeyPath: NSString;
    _countKeyPath: NSString;
    _leafKeyPath: NSString;
    _sortDescriptors: NSArray;
  public
    procedure rearrangeObjects; message 'rearrangeObjects';
    function arrangedObjects: id; message 'arrangedObjects';
    procedure setChildrenKeyPath(newValue: NSString); message 'setChildrenKeyPath:';
    function childrenKeyPath: NSString; message 'childrenKeyPath';
    procedure setCountKeyPath(newValue: NSString); message 'setCountKeyPath:';
    function countKeyPath: NSString; message 'countKeyPath';
    procedure setLeafKeyPath(newValue: NSString); message 'setLeafKeyPath:';
    function leafKeyPath: NSString; message 'leafKeyPath';
    procedure setSortDescriptors(newValue: NSArray); message 'setSortDescriptors:';
    function sortDescriptors: NSArray; message 'sortDescriptors';
    procedure setContent(newValue: id); message 'setContent:';
    function content: id; message 'content';
    procedure add (sender: id); message 'add:';
    procedure remove (sender: id); message 'remove:';
    procedure addChild (sender: id); message 'addChild:';
    procedure insert (sender: id); message 'insert:';
    procedure insertChild (sender: id); message 'insertChild:';
    function canInsert: boolean; message 'canInsert';
    function canInsertChild: boolean; message 'canInsertChild';
    function canAddChild: boolean; message 'canAddChild';
    procedure insertObject_atArrangedObjectIndexPath (object_: id; indexPath: NSIndexPath); message 'insertObject:atArrangedObjectIndexPath:';
    procedure insertObjects_atArrangedObjectIndexPaths (objects: NSArray; indexPaths: NSArray); message 'insertObjects:atArrangedObjectIndexPaths:';
    procedure removeObjectAtArrangedObjectIndexPath (indexPath: NSIndexPath); message 'removeObjectAtArrangedObjectIndexPath:';
    procedure removeObjectsAtArrangedObjectIndexPaths (indexPaths: NSArray); message 'removeObjectsAtArrangedObjectIndexPaths:';
    procedure setAvoidsEmptySelection(newValue: boolean); message 'setAvoidsEmptySelection:';
    function avoidsEmptySelection: boolean; message 'avoidsEmptySelection';
    procedure setPreservesSelection(newValue: boolean); message 'setPreservesSelection:';
    function preservesSelection: boolean; message 'preservesSelection';
    procedure setSelectsInsertedObjects(newValue: boolean); message 'setSelectsInsertedObjects:';
    function selectsInsertedObjects: boolean; message 'selectsInsertedObjects';
    procedure setAlwaysUsesMultipleValuesMarker(newValue: boolean); message 'setAlwaysUsesMultipleValuesMarker:';
    function alwaysUsesMultipleValuesMarker: boolean; message 'alwaysUsesMultipleValuesMarker';
    function selectedObjects: NSArray; message 'selectedObjects';
    function setSelectionIndexPaths (indexPaths: NSArray): boolean; message 'setSelectionIndexPaths:';
    function selectionIndexPaths: NSArray; message 'selectionIndexPaths';
    function setSelectionIndexPath (indexPath: NSIndexPath): boolean; message 'setSelectionIndexPath:';
    function selectionIndexPath: NSIndexPath; message 'selectionIndexPath';
    function addSelectionIndexPaths (indexPaths: NSArray): boolean; message 'addSelectionIndexPaths:';
    function removeSelectionIndexPaths (indexPaths: NSArray): boolean; message 'removeSelectionIndexPaths:';
    function selectedNodes: NSArray; message 'selectedNodes';
    procedure moveNode_toIndexPath (node: NSTreeNode; indexPath: NSIndexPath); message 'moveNode:toIndexPath:'; { available in 10_5 }
    procedure moveNodes_toIndexPath (nodes: NSArray; startingIndexPath: NSIndexPath); message 'moveNodes:toIndexPath:'; { available in 10_5 }
    function childrenKeyPathForNode (node: NSTreeNode): NSString; message 'childrenKeyPathForNode:'; { available in 10_5 }
    function countKeyPathForNode (node: NSTreeNode): NSString; message 'countKeyPathForNode:'; { available in 10_5 }
    function leafKeyPathForNode (node: NSTreeNode): NSString; message 'leafKeyPathForNode:'; { available in 10_5 }
  end;
{$endif}

