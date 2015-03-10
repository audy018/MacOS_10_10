{ Parsed from WebKit.framework (MacOSX10.10) WKScriptMessageHandler.h }
{ Created on Sun Mar 8 1:48:18 2015 }


{$ifdef TYPES}
type
  WKScriptMessageHandlerProtocolPtr = ^WKScriptMessageHandlerProtocol;
{$endif}

{$if defined(WK_API_ENABLED)}
{$ifdef PROTOCOLS}

type
  WKScriptMessageHandlerProtocol = objcprotocol external name 'WKScriptMessageHandler' (NSObjectProtocol)
  required
    procedure userContentController_didReceiveScriptMessage (userContentController: WKUserContentController; message_: WKScriptMessage); message 'userContentController:didReceiveScriptMessage:';
  end;
{$endif}

{$endif}
