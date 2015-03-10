{ Parsed from Foundation.framework (MacOSX10.10) NSDistributedNotificationCenter.h }
{ Created on Sun Mar 8 1:49:15 2015 }


{$ifdef TYPES}
type
  NSDistributedNotificationCenterPtr = ^NSDistributedNotificationCenter;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSLocalNotificationCenterType: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  NSNotificationSuspensionBehavior = NSUInteger;
  NSNotificationSuspensionBehaviorPtr = ^NSNotificationSuspensionBehavior;

const
  NSNotificationSuspensionBehaviorDrop = 1;
  NSNotificationSuspensionBehaviorCoalesce = 2;
  NSNotificationSuspensionBehaviorHold = 3;
  NSNotificationSuspensionBehaviorDeliverImmediately = 4;
{$endif}

{$ifdef CLASSES}

type
  NSDistributedNotificationCenter = objcclass external (NSNotificationCenter)
  private
  public
    procedure postNotificationName_object_userInfo_options (name: NSString; object_: NSString; userInfo: NSDictionary; options: NSUInteger); message 'postNotificationName:object:userInfo:options:';
    procedure setSuspended(newValue: boolean); message 'setSuspended:';
    function suspended: boolean; message 'suspended';
    procedure addObserver_selector_name_object (observer: id; aSelector: SEL; aName: NSString; anObject: NSString); message 'addObserver:selector:name:object:';
    procedure postNotificationName_object (aName: NSString; anObject: NSString); message 'postNotificationName:object:';
    procedure postNotificationName_object_userInfo (aName: NSString; anObject: NSString; aUserInfo: NSDictionary); message 'postNotificationName:object:userInfo:';
    procedure removeObserver_name_object (observer: id; aName: NSString; anObject: NSString); message 'removeObserver:name:object:';
  end;
{$endif}

