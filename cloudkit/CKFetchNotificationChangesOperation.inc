{ Parsed from CloudKit.framework (MacOSX10.10) CKFetchNotificationChangesOperation.h }
{ Created on Sun Mar 8 1:49:12 2015 }


{$ifdef TYPES}
type
  CKFetchNotificationChangesOperationPtr = ^CKFetchNotificationChangesOperation;
{$endif}

{$ifdef CLASSES}

type
  CKFetchNotificationChangesOperation = objcclass external (CKOperation)
  public
    function initWithPreviousServerChangeToken (previousServerChangeToken: CKServerChangeToken): instancetype; message 'initWithPreviousServerChangeToken:';
    procedure setPreviousServerChangeToken(newValue: CKServerChangeToken); message 'setPreviousServerChangeToken:';
    function previousServerChangeToken: CKServerChangeToken; message 'previousServerChangeToken';
    procedure setResultsLimit(newValue: NSUInteger); message 'setResultsLimit:';
    function resultsLimit: NSUInteger; message 'resultsLimit';
    function moreComing: boolean; message 'moreComing';
    procedure setNotificationChangedBlock(newValue: OpaqueCBlock); message 'setNotificationChangedBlock:';
    function notificationChangedBlock: OpaqueCBlock; message 'notificationChangedBlock';
    procedure setFetchNotificationChangesCompletionBlock(newValue: OpaqueCBlock); message 'setFetchNotificationChangesCompletionBlock:';
    function fetchNotificationChangesCompletionBlock: OpaqueCBlock; message 'fetchNotificationChangesCompletionBlock';
  end;
{$endif}

