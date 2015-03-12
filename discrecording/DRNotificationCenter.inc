{ Parsed from DiscRecording.framework DRNotificationCenter.h }


{$ifdef TYPES}
type
  DRNotificationCenterPtr = ^DRNotificationCenter;
{$endif}

{$ifdef CLASSES}

type
  DRNotificationCenter = objcclass external (NSObject)
  private
    _ref: pointer;
  public
    class function currentRunLoopCenter: DRNotificationCenter; message 'currentRunLoopCenter';
    procedure addObserver_selector_name_object (observer: id; aSelector: SEL; notificationName: NSString; anObject: id); message 'addObserver:selector:name:object:';
    procedure removeObserver_name_object (observer: id; aName: NSString; anObject: id); message 'removeObserver:name:object:';
  end;
{$endif}

