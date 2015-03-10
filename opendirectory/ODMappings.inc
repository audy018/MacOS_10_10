{ Parsed from OpenDirectory.framework (MacOSX10.10) ODMappings.h }
{ Created on Sun Mar 8 1:48:45 2015 }


{$ifdef TYPES}
type
  ODMappingsPtr = ^ODMappings;
{$endif}

{$ifdef CLASSES}

type
  ODMappings = objcclass external (NSObject)
  private
    comment: NSString;
    templateName: NSString;
    identifier: NSString;
    function_: NSString;
    functionAttributes: NSArray;
    recordTypes: NSMutableDictionary;
  public
    procedure setComment(newValue: NSString); message 'setComment:';
    function comment_: NSString; message 'comment';
    procedure setTemplateName(newValue: NSString); message 'setTemplateName:';
    function templateName_: NSString; message 'templateName';
    procedure setIdentifier(newValue: NSString); message 'setIdentifier:';
    function identifier_: NSString; message 'identifier';
    function recordTypes_: NSArray; message 'recordTypes';
    procedure setFunction(newValue: NSString); message 'setFunction:';
    function function_: NSString; message 'function';
    procedure setFunctionAttributes(newValue: NSArray); message 'setFunctionAttributes:';
    function functionAttributes_: NSArray; message 'functionAttributes';
    class function mappings: instancetype; message 'mappings';
    function recordMapForStandardRecordType (stdType: NSString): ODRecordMap; message 'recordMapForStandardRecordType:'; { available in 10_9 }
    procedure setRecordMap_forStandardRecordType (map: ODRecordMap; stdType: NSString); message 'setRecordMap:forStandardRecordType:'; { available in 10_9 }
  end;
{$endif}

