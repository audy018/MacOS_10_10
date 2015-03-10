{ Parsed from WebKit.framework (MacOSX10.10) DOMXPathNSResolver.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMXPathNSResolverProtocolPtr = ^DOMXPathNSResolverProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  DOMXPathNSResolverProtocol = objcprotocol external name 'DOMXPathNSResolver' (NSObjectProtocol)
    function lookupNamespaceURI (prefix: NSString): NSString; message 'lookupNamespaceURI:';
  end;
{$endif}

