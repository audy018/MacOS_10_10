{ Parsed from ImageKit.framework (MacOSX10.10) IKPictureTaker.h }
{ Created on Sun Mar 8 1:47:45 2015 }


{$ifdef TYPES}
type
  IKPictureTakerPtr = ^IKPictureTaker;
{$endif}

{$if (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)}
{$ifdef CLASSES}

type
  IKPictureTaker = objcclass external (NSPanel)
  private
    _ikReserved: pointer;
  public
    class function pictureTaker: IKPictureTaker; message 'pictureTaker';
    function runModal: NSInteger; message 'runModal';
    procedure beginPictureTakerWithDelegate_didEndSelector_contextInfo (delegate: id; didEndSelector: SEL; contextInfo: pointer); message 'beginPictureTakerWithDelegate:didEndSelector:contextInfo:';
    procedure beginPictureTakerSheetForWindow_withDelegate_didEndSelector_contextInfo (aWindow: NSWindow; delegate: id; didEndSelector: SEL; contextInfo: pointer); message 'beginPictureTakerSheetForWindow:withDelegate:didEndSelector:contextInfo:';
    procedure popUpRecentsMenuForView_withDelegate_didEndSelector_contextInfo (aView: NSView; delegate: id; didEndSelector: SEL; contextInfo: pointer); message 'popUpRecentsMenuForView:withDelegate:didEndSelector:contextInfo:';
    procedure setInputImage (image: NSImage); message 'setInputImage:';
    function inputImage: NSImage; message 'inputImage';
    function outputImage: NSImage; message 'outputImage';
    procedure setMirroring (b: boolean); message 'setMirroring:';
    function mirroring: boolean; message 'mirroring';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  IKPictureTakerAllowsVideoCaptureKey: NSString; cvar; external;
  IKPictureTakerAllowsFileChoosingKey: NSString; cvar; external;
  IKPictureTakerShowRecentPictureKey: NSString; cvar; external;
  IKPictureTakerUpdateRecentPictureKey: NSString; cvar; external;
  IKPictureTakerAllowsEditingKey: NSString; cvar; external;
  IKPictureTakerShowEffectsKey: NSString; cvar; external;
  IKPictureTakerInformationalTextKey: NSString; cvar; external;
  IKPictureTakerImageTransformsKey: NSString; cvar; external;
  IKPictureTakerOutputImageMaxSizeKey: NSString; cvar; external;
  IKPictureTakerShowAddressBookPictureKey: NSString; cvar; external;
  IKPictureTakerShowEmptyPictureKey: NSString; cvar; external;
{$endif}

{$if (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_6)}
{$ifdef EXTERNAL_SYMBOLS}
var
  IKPictureTakerRemainOpenAfterValidateKey: NSString; cvar; external;
{$endif}

{$endif}
{$endif}
