{ Parsed from Foundation.framework (MacOSX10.10) NSExtensionRequestHandling.h }
{ Created on Sun Mar 8 1:49:14 2015 }


{$ifdef TYPES}
type
  NSExtensionRequestHandlingProtocolPtr = ^NSExtensionRequestHandlingProtocol;
{$endif}

{$if defined(__OBJC2__)}
{$ifdef PROTOCOLS}

type
  NSExtensionRequestHandlingProtocol = objcprotocol external name 'NSExtensionRequestHandling' (NSObjectProtocol)
  required
    procedure beginRequestWithExtensionContext (context: NSExtensionContext); message 'beginRequestWithExtensionContext:';
  end;
{$endif}

{$endif}
