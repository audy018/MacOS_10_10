{ Parsed from EventKit.framework (MacOSX10.10) EKObject.h }
{ Created on Sun Mar 8 1:45:58 2015 }


{$ifdef TYPES}
type
  EKObjectPtr = ^EKObject;
{$endif}

{$ifdef CLASSES}

type
  EKObject = objcclass external (NSObject)
  private
  public
    function hasChanges: boolean; message 'hasChanges';
    function isNew: boolean; message 'isNew';
    procedure reset; message 'reset';
    procedure rollback; message 'rollback';
    function refresh: boolean; message 'refresh';
  end;
{$endif}

