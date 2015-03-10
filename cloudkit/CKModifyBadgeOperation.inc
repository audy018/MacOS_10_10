{ Parsed from CloudKit.framework (MacOSX10.10) CKModifyBadgeOperation.h }
{ Created on Sun Mar 8 1:49:12 2015 }


{$ifdef TYPES}
type
  CKModifyBadgeOperationPtr = ^CKModifyBadgeOperation;
{$endif}

{$ifdef CLASSES}

type
  CKModifyBadgeOperation = objcclass external (CKOperation)
  public
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithBadgeValue (badgeValue: NSUInteger): instancetype; message 'initWithBadgeValue:';
    procedure setBadgeValue(newValue: NSUInteger); message 'setBadgeValue:';
    function badgeValue: NSUInteger; message 'badgeValue';
    procedure setModifyBadgeCompletionBlock(newValue: OpaqueCBlock); message 'setModifyBadgeCompletionBlock:';
    function modifyBadgeCompletionBlock: OpaqueCBlock; message 'modifyBadgeCompletionBlock';
  end;
{$endif}

