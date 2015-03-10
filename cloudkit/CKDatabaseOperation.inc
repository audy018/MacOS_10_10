{ Parsed from CloudKit.framework (MacOSX10.10) CKDatabaseOperation.h }
{ Created on Sun Mar 8 1:49:12 2015 }


{$ifdef TYPES}
type
  CKDatabaseOperationPtr = ^CKDatabaseOperation;
{$endif}

{$ifdef CLASSES}

type
  CKDatabaseOperation = objcclass external (CKOperation)
  public
    procedure setDatabase(newValue: CKDatabase); message 'setDatabase:';
    function database: CKDatabase; message 'database';
  end;
{$endif}

