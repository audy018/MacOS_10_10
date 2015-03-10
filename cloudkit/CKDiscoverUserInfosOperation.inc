{ Parsed from CloudKit.framework (MacOSX10.10) CKDiscoverUserInfosOperation.h }
{ Created on Sun Mar 8 1:49:12 2015 }


{$ifdef TYPES}
type
  CKDiscoverUserInfosOperationPtr = ^CKDiscoverUserInfosOperation;
{$endif}

{$ifdef CLASSES}

type
  CKDiscoverUserInfosOperation = objcclass external (CKOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithEmailAddresses_userRecordIDs (emailAddresses: NSArray; userRecordIDs: NSArray): instancetype; message 'initWithEmailAddresses:userRecordIDs:';
    procedure setEmailAddresses(newValue: NSArray); message 'setEmailAddresses:';
    function emailAddresses: NSArray; message 'emailAddresses';
    procedure setUserRecordIDs(newValue: NSArray); message 'setUserRecordIDs:';
    function userRecordIDs: NSArray; message 'userRecordIDs';
    procedure setDiscoverUserInfosCompletionBlock(newValue: OpaqueCBlock); message 'setDiscoverUserInfosCompletionBlock:';
    function discoverUserInfosCompletionBlock: OpaqueCBlock; message 'discoverUserInfosCompletionBlock';
  end;
{$endif}

