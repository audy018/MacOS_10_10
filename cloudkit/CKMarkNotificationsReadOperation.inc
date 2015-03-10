{ Parsed from CloudKit.framework (MacOSX10.10) CKMarkNotificationsReadOperation.h }
{ Created on Sun Mar 8 1:49:12 2015 }


{$ifdef TYPES}
type
  CKMarkNotificationsReadOperationPtr = ^CKMarkNotificationsReadOperation;
{$endif}

{$ifdef CLASSES}

type
  CKMarkNotificationsReadOperation = objcclass external (CKOperation)
  public
    function init: instancetype; message 'init';
    function initWithNotificationIDsToMarkRead (notificationIDs: NSArray): instancetype; message 'initWithNotificationIDsToMarkRead:'; { NS_DESIGNATED_INITIALIZER }
    procedure setNotificationIDs(newValue: NSArray); message 'setNotificationIDs:';
    function notificationIDs: NSArray; message 'notificationIDs';
    procedure setMarkNotificationsReadCompletionBlock(newValue: OpaqueCBlock); message 'setMarkNotificationsReadCompletionBlock:';
    function markNotificationsReadCompletionBlock: OpaqueCBlock; message 'markNotificationsReadCompletionBlock';
  end;
{$endif}

