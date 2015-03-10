{ Parsed from Foundation.framework (MacOSX10.10) NSProtocolChecker.h }
{ Created on Sun Mar 8 1:49:15 2015 }


{$ifdef TYPES}
type
  NSProtocolCheckerPtr = ^NSProtocolChecker;
{$endif}

{$ifdef CLASSES}

type
  NSProtocolChecker = objcclass external (NSProxy)
  public
    function protocol: Protocol; message 'protocol';
    function target: NSObject; message 'target';
  end;


type
  NSProtocolCheckerCreation = objccategory external (NSProtocolChecker)
    class function protocolCheckerWithTarget_protocol (anObject: NSObject; aProtocol: Protocol): instancetype; message 'protocolCheckerWithTarget:protocol:';
    function initWithTarget_protocol (anObject: NSObject; aProtocol: Protocol): instancetype; message 'initWithTarget:protocol:';
  end;
{$endif}

