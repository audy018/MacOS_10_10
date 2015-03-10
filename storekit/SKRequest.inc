{ Parsed from StoreKit.framework (MacOSX10.10) SKRequest.h }
{ Created on Sun Mar 8 1:48:22 2015 }


{$ifdef TYPES}
type
  SKRequestPtr = ^SKRequest;
  SKRequestDelegateProtocolPtr = ^SKRequestDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  SKRequest = objcclass external (NSObject)
  private
    _requestInternal: id;
  public
    procedure setDelegate(newValue: SKRequestDelegateProtocol); message 'setDelegate:';
    function delegate: SKRequestDelegateProtocol; message 'delegate';
    procedure cancel; message 'cancel';
    procedure start; message 'start';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SKRequestDelegateProtocol = objcprotocol external name 'SKRequestDelegate' (NSObjectProtocol)
  optional
    procedure requestDidFinish (request: SKRequest); message 'requestDidFinish:';
    procedure request_didFailWithError (request: SKRequest; error: NSError); message 'request:didFailWithError:';
  end;
{$endif}

