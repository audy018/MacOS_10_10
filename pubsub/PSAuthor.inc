{ Parsed from PubSub.framework (MacOSX10.10) PSAuthor.h }
{ Created on Sun Mar 8 1:48:47 2015 }


{$ifdef TYPES}
type
  PSAuthorPtr = ^PSAuthor;
{$endif}

{$if (MAC_OS_X_VERSION_10_5 <= MAC_OS_X_VERSION_MAX_ALLOWED)}
{$ifdef CLASSES}

type
  PSAuthor = objcclass external (NSObject)
  private
    _internal: id;
  public
    function name: NSString; message 'name';
    function email: NSString; message 'email';
    function URL: NSURL; message 'URL';
    procedure setPerson(newValue: ABPerson); message 'setPerson:';
    function person: ABPerson; message 'person';
  end;
{$endif}

{$endif}
