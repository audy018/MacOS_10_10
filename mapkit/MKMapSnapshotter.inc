{ Parsed from MapKit.framework (MacOSX10.10) MKMapSnapshotter.h }
{ Created on Sun Mar 8 1:48:51 2015 }


{$ifdef TYPES}
type
  MKMapSnapshotterPtr = ^MKMapSnapshotter;
{$endif}

{$ifdef TYPES}
type
  MKMapSnapshotCompletionHandler = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  MKMapSnapshotter = objcclass external (NSObject)
  public
    function initWithOptions (options: MKMapSnapshotOptions): instancetype; message 'initWithOptions:'; { NS_DESIGNATED_INITIALIZER }
    procedure startWithCompletionHandler (completionHandler: MKMapSnapshotCompletionHandler); message 'startWithCompletionHandler:';
    procedure startWithQueue_completionHandler (queue: dispatch_queue_t; completionHandler: MKMapSnapshotCompletionHandler); message 'startWithQueue:completionHandler:';
    procedure cancel; message 'cancel';
    function isLoading: boolean; message 'isLoading';
  end;
{$endif}

