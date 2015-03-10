{ Parsed from AppKit.framework (MacOSX10.10) NSTextAlternatives.h }
{ Created on Sun Mar 8 1:49:08 2015 }


{$ifdef TYPES}
type
  NSTextAlternativesPtr = ^NSTextAlternatives;
{$endif}

{$ifdef CLASSES}

type
  NSTextAlternatives = objcclass external (NSObject)
  private
    _primaryString: NSString;
    _alternativeStrings: NSArray;
    _internal: id;
  public
    function initWithPrimaryString_alternativeStrings (primaryString: NSString; alternativeStrings: NSArray): instancetype; message 'initWithPrimaryString:alternativeStrings:';
    function primaryString: NSString; message 'primaryString';
    function alternativeStrings: NSArray; message 'alternativeStrings';
    procedure noteSelectedAlternativeString (alternativeString: NSString); message 'noteSelectedAlternativeString:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  NSTextAlternativesSelectedAlternativeStringNotification: NSString { available in 10_8 }; cvar; external;
{$endif}

