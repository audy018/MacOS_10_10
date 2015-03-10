{ Parsed from Accounts.framework (MacOSX10.10) ACAccountType.h }
{ Created on Sun Mar 8 1:45:55 2015 }


{$ifdef TYPES}
type
  ACAccountTypePtr = ^ACAccountType;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  ACAccountTypeIdentifierTwitter: NSString { available in 10_8, 5_0 }; cvar; external;
  ACAccountTypeIdentifierFacebook: NSString { available in 10_8, NA }; cvar; external;
  ACAccountTypeIdentifierSinaWeibo: NSString { available in 10_8, NA }; cvar; external;
  ACAccountTypeIdentifierTencentWeibo: NSString { available in 10_9, NA }; cvar; external;
  ACAccountTypeIdentifierLinkedIn: NSString { available in 10_9, NA }; cvar; external;
  ACFacebookAppIdKey: NSString { available in 10_8, NA }; cvar; external;
  ACFacebookPermissionsKey: NSString { available in 10_8, NA }; cvar; external;
  ACFacebookAudienceKey: NSString { available in 10_8, NA }; cvar; external;
  ACFacebookAudienceEveryone: NSString { available in 10_8, NA }; cvar; external;
  ACFacebookAudienceFriends: NSString { available in 10_8, NA }; cvar; external;
  ACFacebookAudienceOnlyMe: NSString { available in 10_8, NA }; cvar; external;
  ACLinkedInAppIdKey: NSString { available in 10_9, NA }; cvar; external;
  ACLinkedInPermissionsKey: NSString { available in 10_9, NA }; cvar; external;
  ACTencentWeiboAppIdKey: NSString { available in 10_9, NA }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  ACAccountType = objcclass external (NSObject)
  public
    function accountTypeDescription: NSString; message 'accountTypeDescription';
    function identifier: NSString; message 'identifier';
    function accessGranted: boolean; message 'accessGranted';
  end;
{$endif}

