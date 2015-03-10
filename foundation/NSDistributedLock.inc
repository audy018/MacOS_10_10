{ Parsed from Foundation.framework (MacOSX10.10) NSDistributedLock.h }
{ Created on Sun Mar 8 1:49:15 2015 }


{$ifdef TYPES}
type
  NSDistributedLockPtr = ^NSDistributedLock;
{$endif}

{$ifdef CLASSES}

type
  NSDistributedLock = objcclass external (NSObject)
  private
    _priv: pointer;
  public
    class function lockWithPath (path: NSString): NSDistributedLock; message 'lockWithPath:';
    function init: instancetype; message 'init';
    function initWithPath (path: NSString): instancetype; message 'initWithPath:'; { NS_DESIGNATED_INITIALIZER }
    function tryLock: boolean; message 'tryLock';
    procedure unlock; message 'unlock';
    procedure breakLock; message 'breakLock';
    function lockDate: NSDate; message 'lockDate';
  end;
{$endif}

