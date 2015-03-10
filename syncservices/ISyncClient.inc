{ Parsed from SyncServices.framework (MacOSX10.10) ISyncClient.h }
{ Created on Sun Mar 8 1:48:21 2015 }


{$ifdef TYPES}
type
  ISyncClientPtr = ^ISyncClient;
{$endif}

{$ifdef TYPES}
type
  ISyncStatus = SInt32 deprecated 'in 10_4, 10_7';
  ISyncStatusPtr = ^ISyncStatus deprecated 'in 10_4, 10_7';

const
  ISyncStatusRunning = 1;
  ISyncStatusSuccess = 2;
  ISyncStatusWarnings = 3;
  ISyncStatusErrors = 4;
  ISyncStatusCancelled = 5;
  ISyncStatusFailed = 6;
  ISyncStatusNever = 7;
{$endif}

{$ifdef CLASSES}

type
  ISyncClient = objcclass external (NSObject)
  public
    function clientIdentifier: NSString; message 'clientIdentifier'; deprecated 'in 10_4, 10_7';
    function clientType: NSString; message 'clientType'; deprecated 'in 10_4, 10_7';
    function displayName: NSString; message 'displayName'; deprecated 'in 10_4, 10_7';
    procedure setDisplayName (displayName_: NSString); message 'setDisplayName:'; deprecated 'in 10_4, 10_7';
    function imagePath: NSString; message 'imagePath'; deprecated 'in 10_4, 10_7';
    procedure setImagePath (path: NSString); message 'setImagePath:'; deprecated 'in 10_4, 10_7';
    function supportedEntityNames: NSArray; message 'supportedEntityNames'; deprecated 'in 10_4, 10_7';
    function canPushChangesForEntityName (entityName: NSString): boolean; message 'canPushChangesForEntityName:'; deprecated 'in 10_4, 10_7';
    function canPullChangesForEntityName (entityName: NSString): boolean; message 'canPullChangesForEntityName:'; deprecated 'in 10_4, 10_7';
    function lastSyncDateForEntityName (entityName: NSString): NSDate; message 'lastSyncDateForEntityName:'; deprecated 'in 10_4, 10_7';
    function lastSyncStatusForEntityName (entityName: NSString): ISyncStatus; message 'lastSyncStatusForEntityName:'; deprecated 'in 10_4, 10_7';
    function enabledEntityNames: NSArray; message 'enabledEntityNames'; deprecated 'in 10_4, 10_7';
    function isEnabledForEntityName (entityName: NSString): boolean; message 'isEnabledForEntityName:'; deprecated 'in 10_4, 10_7';
    procedure setEnabled_forEntityNames (flag: boolean; entityNames: NSArray); message 'setEnabled:forEntityNames:'; deprecated 'in 10_4, 10_7';
    function formatsRelationships: boolean; message 'formatsRelationships'; deprecated 'in 10_6, 10_7';
    procedure setFormatsRelationships (flag: boolean); message 'setFormatsRelationships:'; deprecated 'in 10_6, 10_7';
    function shouldReplaceClientRecordsForEntityName (entityName: NSString): boolean; message 'shouldReplaceClientRecordsForEntityName:'; deprecated 'in 10_4, 10_7';
    procedure setShouldReplaceClientRecords_forEntityNames (flag: boolean; entityNames: NSArray); message 'setShouldReplaceClientRecords:forEntityNames:'; deprecated 'in 10_4, 10_7';
    function objectForKey (key: NSString): id; message 'objectForKey:'; deprecated 'in 10_4, 10_7';
    procedure setObject_forKey (value: NSCodingProtocol; key: NSString); message 'setObject:forKey:'; deprecated 'in 10_4, 10_7';
    function filters: NSArray; message 'filters'; deprecated 'in 10_4, 10_7';
    procedure setFilters (filters_: NSArray); message 'setFilters:'; deprecated 'in 10_4, 10_7';
    function shouldSynchronizeWithClientsOfType (clientType_: NSString): boolean; message 'shouldSynchronizeWithClientsOfType:'; deprecated 'in 10_4, 10_7';
    procedure setShouldSynchronize_withClientsOfType (flag: boolean; clientType_: NSString); message 'setShouldSynchronize:withClientsOfType:'; deprecated 'in 10_4, 10_7';
    function syncAlertToolPath: NSString; message 'syncAlertToolPath'; deprecated 'in 10_4, 10_7';
    procedure setSyncAlertToolPath (path: NSString); message 'setSyncAlertToolPath:'; deprecated 'in 10_4, 10_7';
    procedure setSyncAlertHandler_selector (handler: id; selector: SEL); message 'setSyncAlertHandler:selector:'; deprecated 'in 10_4, 10_7';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ISyncClientTypeApplication: NSString deprecated 'in 10_4, 10_7'; cvar; external;
  ISyncClientTypeDevice: NSString deprecated 'in 10_4, 10_7'; cvar; external;
  ISyncClientTypeServer: NSString deprecated 'in 10_4, 10_7'; cvar; external;
  ISyncClientTypePeer: NSString deprecated 'in 10_4, 10_7'; cvar; external;
{$endif}

