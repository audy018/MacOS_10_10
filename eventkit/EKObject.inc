{ Parsed from EventKit.framework EKObject.h }


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

