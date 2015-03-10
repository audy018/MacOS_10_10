{ Parsed from AppKit.framework (MacOSX10.10) NSSpeechRecognizer.h }
{ Created on Sun Mar 8 1:49:07 2015 }


{$ifdef TYPES}
type
  NSSpeechRecognizerPtr = ^NSSpeechRecognizer;
  NSSpeechRecognizerDelegateProtocolPtr = ^NSSpeechRecognizerDelegateProtocol;
{$endif}

{$ifdef CLASSES}

type
  NSSpeechRecognizer = objcclass external (NSObject)
  private
    _privateNSSpeechRecognizerVars: id;
  public
    function init: instancetype; message 'init';
    procedure startListening; message 'startListening';
    procedure stopListening; message 'stopListening';
    procedure setDelegate(newValue: NSSpeechRecognizerDelegateProtocol); message 'setDelegate:';
    function delegate: NSSpeechRecognizerDelegateProtocol; message 'delegate';
    procedure setCommands(newValue: NSArray); message 'setCommands:';
    function commands: NSArray; message 'commands';
    procedure setDisplayedCommandsTitle(newValue: NSString); message 'setDisplayedCommandsTitle:';
    function displayedCommandsTitle: NSString; message 'displayedCommandsTitle';
    procedure setListensInForegroundOnly(newValue: boolean); message 'setListensInForegroundOnly:';
    function listensInForegroundOnly: boolean; message 'listensInForegroundOnly';
    procedure setBlocksOtherRecognizers(newValue: boolean); message 'setBlocksOtherRecognizers:';
    function blocksOtherRecognizers: boolean; message 'blocksOtherRecognizers';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  NSSpeechRecognizerDelegateProtocol = objcprotocol external name 'NSSpeechRecognizerDelegate' (NSObjectProtocol)
  optional
    procedure speechRecognizer_didRecognizeCommand (sender: NSSpeechRecognizer; command: id); message 'speechRecognizer:didRecognizeCommand:';
  end;
{$endif}

