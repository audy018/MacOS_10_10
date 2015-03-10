{ Parsed from StoreKit.framework (MacOSX10.10) SKDownload.h }
{ Created on Sun Mar 8 1:48:22 2015 }


{$ifdef TYPES}
type
  SKDownloadPtr = ^SKDownload;
{$endif}

{$ifdef TYPES}
const
  SKDownloadStateWaiting = 0;
  SKDownloadStateActive = 1;
  SKDownloadStatePaused = 2;
  SKDownloadStateFinished = 3;
  SKDownloadStateFailed = 4;
  SKDownloadStateCancelled = 5;
type
  SKDownloadState = NSInteger;
{$endif}

{$ifdef CLASSES}

type
  SKDownload = objcclass external (NSObject)
  private
    _internal: id;
  public
    function contentIdentifier: NSString; message 'contentIdentifier';
    function state: SKDownloadState; message 'state';
    function contentURL: NSURL; message 'contentURL';
    function progress: single; message 'progress';
    function error: NSError; message 'error';
    function timeRemaining: NSTimeInterval; message 'timeRemaining';
    function contentLength: NSNumber; message 'contentLength';
    function contentVersion: NSString; message 'contentVersion';
    class function contentURLForProductID (productID: NSString): NSURL; message 'contentURLForProductID:';
    class procedure deleteContentForProductID (productID: NSString); message 'deleteContentForProductID:';
  end;
{$endif}

