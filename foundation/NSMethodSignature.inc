{ Parsed from Foundation.framework (MacOSX10.10) NSMethodSignature.h }
{ Created on Sun Mar 8 1:49:14 2015 }


{$ifdef TYPES}
type
  NSMethodSignaturePtr = ^NSMethodSignature;
{$endif}

{$ifdef CLASSES}

type
  NSMethodSignature = objcclass external (NSObject)
  private
    _private: pointer;
    _reserved:array[0..5] of pointer;
  public
    class function signatureWithObjCTypes (types: PChar): NSMethodSignature; message 'signatureWithObjCTypes:';
    function numberOfArguments: NSUInteger; message 'numberOfArguments';
    function getArgumentTypeAtIndex (idx: NSUInteger): PChar; message 'getArgumentTypeAtIndex:';
    function frameLength: NSUInteger; message 'frameLength';
    function isOneway: boolean; message 'isOneway';
    function methodReturnType: PChar; message 'methodReturnType';
    function methodReturnLength: NSUInteger; message 'methodReturnLength';
  end;
{$endif}

