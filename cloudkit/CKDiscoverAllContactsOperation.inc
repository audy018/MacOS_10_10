{ Parsed from CloudKit.framework (MacOSX10.10) CKDiscoverAllContactsOperation.h }
{ Created on Sun Mar 8 1:49:12 2015 }


{$ifdef TYPES}
type
  CKDiscoverAllContactsOperationPtr = ^CKDiscoverAllContactsOperation;
{$endif}

{$ifdef CLASSES}

type
  CKDiscoverAllContactsOperation = objcclass external (CKOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    procedure setDiscoverAllContactsCompletionBlock(newValue: OpaqueCBlock); message 'setDiscoverAllContactsCompletionBlock:';
    function discoverAllContactsCompletionBlock: OpaqueCBlock; message 'discoverAllContactsCompletionBlock';
  end;
{$endif}

