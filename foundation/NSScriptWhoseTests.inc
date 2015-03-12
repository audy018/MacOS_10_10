{ Parsed from Foundation.framework NSScriptWhoseTests.h }


{$ifdef TYPES}
type
  NSScriptWhoseTestPtr = ^NSScriptWhoseTest;
  NSLogicalTestPtr = ^NSLogicalTest;
  NSSpecifierTestPtr = ^NSSpecifierTest;
{$endif}

{$ifdef TYPES}
type
  NSTestComparisonOperation = NSUInteger;
  NSTestComparisonOperationPtr = ^NSTestComparisonOperation;

const
  NSEqualToComparison = 0;
  NSLessThanOrEqualToComparison = 1;
  NSLessThanComparison = 2;
  NSGreaterThanOrEqualToComparison = 3;
  NSGreaterThanComparison = 4;
  NSBeginsWithComparison = 5;
  NSEndsWithComparison = 6;
  NSContainsComparison = 7;
{$endif}

{$ifdef CLASSES}

type
  NSScriptWhoseTest = objcclass external (NSObject, NSCodingProtocol)
  private
  public
    function isTrue: boolean; message 'isTrue';
    function init: instancetype; message 'init'; { NS_DESIGNATED_INITIALIZER }
    function initWithCoder (inCoder: NSCoder): instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
  end;

type
  NSLogicalTest = objcclass external (NSScriptWhoseTest)
  private
    _operator: cint;
    _subTests: id;
  public
    function initAndTestWithTests (subTests: NSArray): instancetype; message 'initAndTestWithTests:'; { NS_DESIGNATED_INITIALIZER }
    function initOrTestWithTests (subTests: NSArray): instancetype; message 'initOrTestWithTests:'; { NS_DESIGNATED_INITIALIZER }
    function initNotTestWithTest (subTest: NSScriptWhoseTest): instancetype; message 'initNotTestWithTest:'; { NS_DESIGNATED_INITIALIZER }
  end;

type
  NSSpecifierTest = objcclass external (NSScriptWhoseTest)
  private
    _comparisonOperator: NSTestComparisonOperation;
    _object1: NSScriptObjectSpecifier;
    _object2: id;
  public
    function init: instancetype; message 'init';
    function initWithCoder (inCoder: NSCoder): instancetype; message 'initWithCoder:'; { NS_DESIGNATED_INITIALIZER }
    function initWithObjectSpecifier_comparisonOperator_testObject (obj1: NSScriptObjectSpecifier; compOp: NSTestComparisonOperation; obj2: id): instancetype; message 'initWithObjectSpecifier:comparisonOperator:testObject:'; { NS_DESIGNATED_INITIALIZER }
  end;


type
  NSComparisonMethods = objccategory external (NSObject)
    function isEqualTo (object_: id): boolean; message 'isEqualTo:';
    function isLessThanOrEqualTo (object_: id): boolean; message 'isLessThanOrEqualTo:';
    function isLessThan (object_: id): boolean; message 'isLessThan:';
    function isGreaterThanOrEqualTo (object_: id): boolean; message 'isGreaterThanOrEqualTo:';
    function isGreaterThan (object_: id): boolean; message 'isGreaterThan:';
    function isNotEqualTo (object_: id): boolean; message 'isNotEqualTo:';
    function doesContain (object_: id): boolean; message 'doesContain:';
    function isLike (object_: NSString): boolean; message 'isLike:';
    function isCaseInsensitiveLike (object_: NSString): boolean; message 'isCaseInsensitiveLike:';
  end;

type
  NSScriptingComparisonMethods = objccategory external (NSObject)
    function scriptingIsEqualTo (object_: id): boolean; message 'scriptingIsEqualTo:';
    function scriptingIsLessThanOrEqualTo (object_: id): boolean; message 'scriptingIsLessThanOrEqualTo:';
    function scriptingIsLessThan (object_: id): boolean; message 'scriptingIsLessThan:';
    function scriptingIsGreaterThanOrEqualTo (object_: id): boolean; message 'scriptingIsGreaterThanOrEqualTo:';
    function scriptingIsGreaterThan (object_: id): boolean; message 'scriptingIsGreaterThan:';
    function scriptingBeginsWith (object_: id): boolean; message 'scriptingBeginsWith:';
    function scriptingEndsWith (object_: id): boolean; message 'scriptingEndsWith:';
    function scriptingContains (object_: id): boolean; message 'scriptingContains:';
  end;
{$endif}

