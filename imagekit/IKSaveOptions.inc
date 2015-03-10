{ Parsed from ImageKit.framework (MacOSX10.10) IKSaveOptions.h }
{ Created on Sun Mar 8 1:47:45 2015 }


{ Types from IKSaveOptions }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  IKSaveOptionsPtr = ^IKSaveOptions;
{$endif}

{$if (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)}

{$if (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_6)}
{$ifdef CLASSES}

type
  IKSaveOptionsDelegate = objccategory external (NSObject)
    function saveOptions_shouldShowUTType (saveOptions: IKSaveOptions; utType: NSString): boolean; message 'saveOptions:shouldShowUTType:';
  end;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  IKSaveOptions = objcclass external (NSObject)
  private
    _privateData: pointer;
    _saveOptionsView: id;
  public
    procedure setDelegate(newValue: id); message 'setDelegate:';
    function delegate: id; message 'delegate';
    function imageProperties: NSDictionary; message 'imageProperties';
    function imageUTType: NSString; message 'imageUTType';
    function userSelection: NSDictionary; message 'userSelection';
    function initWithImageProperties_imageUTType (imageProperties_: NSDictionary; imageUTType_: NSString): instancetype; message 'initWithImageProperties:imageUTType:';
    procedure addSaveOptionsAccessoryViewToSavePanel (savePanel: NSSavePanel); message 'addSaveOptionsAccessoryViewToSavePanel:';
    {$if (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_6)}
    procedure addSaveOptionsToView (view: NSView); message 'addSaveOptionsToView:';
    {$endif}
  end;
{$endif}

{$endif}
