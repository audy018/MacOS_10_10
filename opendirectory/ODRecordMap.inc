{ Parsed from OpenDirectory.framework (MacOSX10.10) ODRecordMap.h }
{ Created on Sun Mar 8 1:48:45 2015 }


{$ifdef TYPES}
type
  ODRecordMapPtr = ^ODRecordMap;
{$endif}

{$ifdef CLASSES}

type
  ODRecordMap = objcclass external (NSObject)
  private
    native: NSString;
    odPredicate: NSDictionary;
    attributes: NSMutableDictionary;
  public
    procedure setNative(newValue: NSString); message 'setNative:';
    function native_: NSString; message 'native';
    procedure setOdPredicate(newValue: NSDictionary); message 'setOdPredicate:';
    function odPredicate_: NSDictionary; message 'odPredicate';
    function attributes_: NSDictionary; message 'attributes';
    function standardAttributeTypes: NSArray; message 'standardAttributeTypes';
    class function recordMap: instancetype; message 'recordMap';
    function attributeMapForStandardAttribute (standardAttribute: NSString): ODAttributeMap; message 'attributeMapForStandardAttribute:'; { available in 10_9 }
    procedure setAttributeMap_forStandardAttribute (attributeMap: ODAttributeMap; standardAttribute: NSString); message 'setAttributeMap:forStandardAttribute:'; { available in 10_9 }
  end;
{$endif}

