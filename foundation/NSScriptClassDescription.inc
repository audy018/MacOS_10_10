{ Parsed from Foundation.framework (MacOSX10.10) NSScriptClassDescription.h }
{ Created on Sun Mar 8 1:49:15 2015 }


{$ifdef TYPES}
type
  NSScriptClassDescriptionPtr = ^NSScriptClassDescription;
{$endif}

{$ifdef CLASSES}

type
  NSScriptClassDescription = objcclass external (NSClassDescription)
  private
    _suiteName: NSString;
    _objcClassName: NSString;
    _appleEventCode: FourCharCode;
    _superclassNameOrDescription: NSObject;
    _attributeDescriptions: NSArray;
    _toOneRelationshipDescriptions: NSArray;
    _toManyRelationshipDescriptions: NSArray;
    _commandMethodSelectorsByName: NSDictionary;
    _moreVars: id;
  public
    class function classDescriptionForClass (aClass: pobjc_class): NSScriptClassDescription; message 'classDescriptionForClass:';
    function initWithSuiteName_className_dictionary (suiteName: NSString; className: NSString; classDeclaration: NSDictionary): instancetype; message 'initWithSuiteName:className:dictionary:'; { NS_DESIGNATED_INITIALIZER }
    function suiteName: NSString; message 'suiteName';
    function className: NSString; message 'className';
    function implementationClassName: NSString; message 'implementationClassName';
    function superclassDescription: NSScriptClassDescription; message 'superclassDescription';
    function appleEventCode: FourCharCode; message 'appleEventCode';
    function matchesAppleEventCode (appleEventCode_: FourCharCode): boolean; message 'matchesAppleEventCode:';
    function supportsCommand (commandDescription: NSScriptCommandDescription): boolean; message 'supportsCommand:';
    function selectorForCommand (commandDescription: NSScriptCommandDescription): SEL; message 'selectorForCommand:';
    function typeForKey (key: NSString): NSString; message 'typeForKey:';
    function classDescriptionForKey (key: NSString): NSScriptClassDescription; message 'classDescriptionForKey:';
    function appleEventCodeForKey (key: NSString): FourCharCode; message 'appleEventCodeForKey:';
    function keyWithAppleEventCode (appleEventCode_: FourCharCode): NSString; message 'keyWithAppleEventCode:';
    function defaultSubcontainerAttributeKey: NSString; message 'defaultSubcontainerAttributeKey';
    function isLocationRequiredToCreateForKey (toManyRelationshipKey: NSString): boolean; message 'isLocationRequiredToCreateForKey:';
    function hasPropertyForKey (key: NSString): boolean; message 'hasPropertyForKey:'; { available in 10_5, NA }
    function hasOrderedToManyRelationshipForKey (key: NSString): boolean; message 'hasOrderedToManyRelationshipForKey:'; { available in 10_5, NA }
    function hasReadablePropertyForKey (key: NSString): boolean; message 'hasReadablePropertyForKey:'; { available in 10_5, NA }
    function hasWritablePropertyForKey (key: NSString): boolean; message 'hasWritablePropertyForKey:'; { available in 10_5, NA }
  end;


type
  NSDeprecated = objccategory external (NSScriptClassDescription)
    function isReadOnlyKey (key: NSString): boolean; message 'isReadOnlyKey:'; deprecated 'in 10_0, 10_5, NA, NA';
  end;

type
  NSObject_NSScriptClassDescription = objccategory external name 'NSScriptClassDescription' (NSObject)
    function classCode: FourCharCode; message 'classCode';
    function className: NSString; message 'className';
  end;
{$endif}

