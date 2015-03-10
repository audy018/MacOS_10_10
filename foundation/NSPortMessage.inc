{ Parsed from Foundation.framework (MacOSX10.10) NSPortMessage.h }
{ Created on Sun Mar 8 1:49:15 2015 }


{$ifdef TYPES}
type
  NSPortMessagePtr = ^NSPortMessage;
{$endif}

{$ifdef CLASSES}

type
  NSPortMessage = objcclass external (NSObject)
  private
    localPort: NSPort;
    remotePort: NSPort;
    components: NSMutableArray;
    msgid: cuint32;
    reserved2: pointer;
    reserved: pointer;
  public
    function initWithSendPort_receivePort_components (sendPort: NSPort; replyPort: NSPort; components_: NSArray): instancetype; message 'initWithSendPort:receivePort:components:'; { NS_DESIGNATED_INITIALIZER }
    function components_: NSArray; message 'components';
    function receivePort: NSPort; message 'receivePort';
    function sendPort: NSPort; message 'sendPort';
    function sendBeforeDate (date: NSDate): boolean; message 'sendBeforeDate:';
    procedure setMsgid(newValue: cuint32); message 'setMsgid:';
    function msgid_: cuint32; message 'msgid';
  end;
{$endif}

