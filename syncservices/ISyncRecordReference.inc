{ Parsed from SyncServices.framework (MacOSX10.10) ISyncRecordReference.h }
{ Created on Sun Mar 8 1:48:21 2015 }


{$ifdef TYPES}
type
  ISyncRecordReferencePtr = ^ISyncRecordReference;
{$endif}

{$ifdef CLASSES}

type
  ISyncRecordReference = objcclass external (NSObject, NSCodingProtocol)
  private

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

