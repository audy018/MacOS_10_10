{ Parsed from CloudKit.framework (MacOSX10.10) CKRecordID.h }
{ Created on Sun Mar 8 1:49:12 2015 }


{$ifdef TYPES}
type
  CKRecordIDPtr = ^CKRecordID;
{$endif}

{$ifdef CLASSES}

type
  CKRecordID = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithRecordName (recordName: NSString): instancetype; message 'initWithRecordName:';
    function initWithRecordName_zoneID (recordName: NSString; zoneID: CKRecordZoneID): instancetype; message 'initWithRecordName:zoneID:'; { NS_DESIGNATED_INITIALIZER }
    function recordName: NSString; message 'recordName';
    function zoneID: CKRecordZoneID; message 'zoneID';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

