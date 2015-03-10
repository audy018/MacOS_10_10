{ Parsed from WebKit.framework (MacOSX10.10) DOMEventListener.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMEventListenerProtocolPtr = ^DOMEventListenerProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  DOMEventListenerProtocol = objcprotocol external name 'DOMEventListener' (NSObjectProtocol)
    procedure handleEvent (evt: DOMEvent); message 'handleEvent:';
  end;
{$endif}

