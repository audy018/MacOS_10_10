{ Parsed from CloudKit.framework (MacOSX10.10) CKQuery.h }
{ Created on Sun Mar 8 1:49:12 2015 }


{$ifdef TYPES}
type
  CKQueryPtr = ^CKQuery;
{$endif}

{$ifdef CLASSES}

type
  CKQuery = objcclass external (NSObject, NSSecureCodingProtocol, NSCopyingProtocol)
  public
    function init: instancetype; message 'init';
    function initWithCoder (aDecoder: NSCoder): instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithRecordType_predicate (recordType: NSString; predicate: NSPredicate): instancetype; message 'initWithRecordType:predicate:'; { NS_DESIGNATED_INITIALIZER }
    function recordType: NSString; message 'recordType';
    function predicate: NSPredicate; message 'predicate';
    procedure setSortDescriptors(newValue: NSArray); message 'setSortDescriptors:';
    function sortDescriptors: NSArray; message 'sortDescriptors';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

