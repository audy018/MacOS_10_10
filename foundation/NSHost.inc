{ Parsed from Foundation.framework (MacOSX10.10) NSHost.h }
{ Created on Sun Mar 8 1:49:15 2015 }


{$ifdef TYPES}
type
  NSHostPtr = ^NSHost;
{$endif}

{$ifdef CLASSES}

type
  NSHost = objcclass external (NSObject)
  private
    names: NSArray;
    addresses: NSArray;
    reserved: id;
  public
    class function currentHost: instancetype; message 'currentHost';
    class function hostWithName (name: NSString): instancetype; message 'hostWithName:';
    class function hostWithAddress (address: NSString): instancetype; message 'hostWithAddress:';
    function isEqualToHost (aHost: NSHost): boolean; message 'isEqualToHost:';
    function name: NSString; message 'name';
    function names_: NSArray; message 'names';
    function address: NSString; message 'address';
    function addresses_: NSArray; message 'addresses';
    function localizedName: NSString; message 'localizedName';
    class procedure setHostCacheEnabled (flag: boolean); message 'setHostCacheEnabled:'; deprecated 'in 10_0, 10_7';
    class function isHostCacheEnabled: boolean; message 'isHostCacheEnabled'; deprecated 'in 10_0, 10_7';
    class procedure flushHostCache; message 'flushHostCache'; deprecated 'in 10_0, 10_7';
  end;
{$endif}

