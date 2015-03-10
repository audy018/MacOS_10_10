{ Parsed from WebKit.framework (MacOSX10.10) WebPluginViewFactory.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  WebPlugInViewFactoryProtocolPtr = ^WebPlugInViewFactoryProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  WebPlugInBaseURLKey: NSString; cvar; external;
  WebPlugInAttributesKey: NSString; cvar; external;
  WebPlugInContainerKey: NSString; cvar; external;
  WebPlugInContainingElementKey: NSString; cvar; external;
  WebPlugInShouldLoadMainResourceKey: NSString { available in 10_6 }; cvar; external;
{$endif}

{$ifdef PROTOCOLS}

type
  WebPlugInViewFactoryProtocol = objcprotocol external name 'WebPlugInViewFactory' (NSObjectProtocol)
    class function plugInViewWithArguments (arguments: NSDictionary): NSView; message 'plugInViewWithArguments:';
  end;
{$endif}

