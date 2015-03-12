{ Parsed from AVFoundation.framework AVPlayerItemProtectedContentAdditions.h }


{ Types from AVPlayerItemProtectedContent }
{$ifdef TYPES}

{$endif}

{$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
{$ifdef TYPES}
type
  AVContentAuthorizationStatus = NSInteger;
  AVContentAuthorizationStatusPtr = ^AVContentAuthorizationStatus;

const
  AVContentAuthorizationUnknown = 0;
  AVContentAuthorizationCompleted = 1;
  AVContentAuthorizationCancelled = 2;
  AVContentAuthorizationTimedOut = 3;
  AVContentAuthorizationBusy = 4;
  AVContentAuthorizationNotAvailable = 5;
  AVContentAuthorizationNotPossible = 6;
{$endif}

{$endif}
{$ifdef CLASSES}

type
  AVPlayerItemProtectedContent = objccategory external (AVPlayerItem)
    function isAuthorizationRequiredForPlayback: boolean; message 'isAuthorizationRequiredForPlayback';
    function isApplicationAuthorizedForPlayback: boolean; message 'isApplicationAuthorizedForPlayback';
    function isContentAuthorizedForPlayback: boolean; message 'isContentAuthorizedForPlayback';
    {$if (defined(TARGET_OS_MAC) and not (defined(TARGET_OS_EMBEDDED) or defined(TARGET_OS_IPHONE)))}
    procedure requestContentAuthorizationAsynchronouslyWithTimeoutInterval_completionHandler (timeoutInterval: NSTimeInterval; handler: OpaqueCBlock); message 'requestContentAuthorizationAsynchronouslyWithTimeoutInterval:completionHandler:'; { available in 10_7, NA }
    procedure cancelContentAuthorizationRequest; message 'cancelContentAuthorizationRequest'; { available in 10_7, NA }
    function contentAuthorizationRequestStatus: AVContentAuthorizationStatus; message 'contentAuthorizationRequestStatus';
    {$endif}
  end;
{$endif}

