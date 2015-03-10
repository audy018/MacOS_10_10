{ Parsed from CloudKit.framework (MacOSX10.10) CKDiscoveredUserInfo.h }
{ Created on Sun Mar 8 1:49:12 2015 }


{$ifdef TYPES}
type
  CKDiscoveredUserInfoPtr = ^CKDiscoveredUserInfo;
{$endif}

{$ifdef CLASSES}

type
  CKDiscoveredUserInfo = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function userRecordID: CKRecordID; message 'userRecordID';
    function firstName: NSString; message 'firstName';
    function lastName: NSString; message 'lastName';
  end;
{$endif}

