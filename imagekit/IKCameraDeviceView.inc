{ Parsed from ImageKit.framework IKCameraDeviceView.h }


{$ifdef TYPES}
type
  IKCameraDeviceViewPtr = ^IKCameraDeviceView;
  IKCameraDeviceViewDelegateProtocolPtr = ^IKCameraDeviceViewDelegateProtocol;
{$endif}

{$if (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_6)}
{$ifdef PROTOCOLS}

type
  IKCameraDeviceViewDelegateProtocol = objcprotocol external name 'IKCameraDeviceViewDelegate'
  optional
    procedure cameraDeviceViewSelectionDidChange (cameraDeviceView: IKCameraDeviceView); message 'cameraDeviceViewSelectionDidChange:';
    procedure cameraDeviceView_didDownloadFile_location_fileData_error (cameraDeviceView: IKCameraDeviceView; file_: ICCameraFile; url: NSURL; data: NSData; error: NSError); message 'cameraDeviceView:didDownloadFile:location:fileData:error:';
    procedure cameraDeviceView_didEncounterError (cameraDeviceView: IKCameraDeviceView; error: NSError); message 'cameraDeviceView:didEncounterError:';
  end;
{$endif}

{$ifdef TYPES}
type
  IKCameraDeviceViewDisplayMode = NSInteger;
  IKCameraDeviceViewDisplayModePtr = ^IKCameraDeviceViewDisplayMode;

const
  IKCameraDeviceViewDisplayModeTable = 0;
  IKCameraDeviceViewDisplayModeIcon = 1;

type
  IKCameraDeviceViewTransferMode = NSInteger;
  IKCameraDeviceViewTransferModePtr = ^IKCameraDeviceViewTransferMode;

const
  IKCameraDeviceViewTransferModeFileBased = 0;
  IKCameraDeviceViewTransferModeMemoryBased = 1;
{$endif}

{$ifdef CLASSES}

type
  IKCameraDeviceView = objcclass external (NSView)
  private
    _privateData: id;
  public
    procedure setDelegate(newValue: IKCameraDeviceViewDelegateProtocol); message 'setDelegate:';
    function delegate: IKCameraDeviceViewDelegateProtocol; message 'delegate';
    procedure setCameraDevice(newValue: ICCameraDevice); message 'setCameraDevice:';
    function cameraDevice: ICCameraDevice; message 'cameraDevice';
    procedure setMode(newValue: IKCameraDeviceViewDisplayMode); message 'setMode:';
    function mode: IKCameraDeviceViewDisplayMode; message 'mode';
    procedure setHasDisplayModeTable(newValue: boolean); message 'setHasDisplayModeTable:';
    function hasDisplayModeTable: boolean; message 'hasDisplayModeTable';
    procedure setHasDisplayModeIcon(newValue: boolean); message 'setHasDisplayModeIcon:';
    function hasDisplayModeIcon: boolean; message 'hasDisplayModeIcon';
    procedure setDownloadAllControlLabel(newValue: NSString); message 'setDownloadAllControlLabel:';
    function downloadAllControlLabel: NSString; message 'downloadAllControlLabel';
    procedure setDownloadSelectedControlLabel(newValue: NSString); message 'setDownloadSelectedControlLabel:';
    function downloadSelectedControlLabel: NSString; message 'downloadSelectedControlLabel';
    procedure setIconSize(newValue: NSUInteger); message 'setIconSize:';
    function iconSize: NSUInteger; message 'iconSize';
    procedure setTransferMode(newValue: IKCameraDeviceViewTransferMode); message 'setTransferMode:';
    function transferMode: IKCameraDeviceViewTransferMode; message 'transferMode';
    procedure setDisplaysDownloadsDirectoryControl(newValue: boolean); message 'setDisplaysDownloadsDirectoryControl:';
    function displaysDownloadsDirectoryControl: boolean; message 'displaysDownloadsDirectoryControl';
    procedure setDownloadsDirectory(newValue: NSURL); message 'setDownloadsDirectory:';
    function downloadsDirectory: NSURL; message 'downloadsDirectory';
    procedure setDisplaysPostProcessApplicationControl(newValue: boolean); message 'setDisplaysPostProcessApplicationControl:';
    function displaysPostProcessApplicationControl: boolean; message 'displaysPostProcessApplicationControl';
    procedure setPostProcessApplication(newValue: NSURL); message 'setPostProcessApplication:';
    function postProcessApplication: NSURL; message 'postProcessApplication';
    function canRotateSelectedItemsLeft: boolean; message 'canRotateSelectedItemsLeft';
    function canRotateSelectedItemsRight: boolean; message 'canRotateSelectedItemsRight';
    function canDeleteSelectedItems: boolean; message 'canDeleteSelectedItems';
    function canDownloadSelectedItems: boolean; message 'canDownloadSelectedItems';
    function selectedIndexes: NSIndexSet; message 'selectedIndexes';
    procedure selectIndexes_byExtendingSelection (indexes: NSIndexSet; extend: boolean); message 'selectIndexes:byExtendingSelection:';
    procedure rotateLeft (sender: id); message 'rotateLeft:';
    procedure rotateRight (sender: id); message 'rotateRight:';
    procedure deleteSelectedItems (sender: id); message 'deleteSelectedItems:';
    procedure downloadSelectedItems (sender: id); message 'downloadSelectedItems:';
    procedure downloadAllItems (sender: id); message 'downloadAllItems:';
  end;
{$endif}

{$endif}
