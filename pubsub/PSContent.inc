{ Parsed from PubSub.framework (MacOSX10.10) PSContent.h }
{ Created on Sun Mar 8 1:48:47 2015 }


{$ifdef TYPES}
type
  PSContentPtr = ^PSContent;
{$endif}

{$if (MAC_OS_X_VERSION_10_5 <= MAC_OS_X_VERSION_MAX_ALLOWED)}
{$ifdef CLASSES}

type
  PSContent = objcclass external (NSObject)
  private
    _internal: id;
  public
    function plainTextString: NSString; message 'plainTextString';
    function HTMLString: NSString; message 'HTMLString';
    function data: NSData; message 'data';
    function MIMEType: NSString; message 'MIMEType';
  end;
{$endif}

{$endif}
