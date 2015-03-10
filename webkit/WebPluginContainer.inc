{ Parsed from WebKit.framework (MacOSX10.10) WebPluginContainer.h }
{ Created on Sun Mar 8 1:48:19 2015 }

{$ifdef CLASSES}

type
  WebPlugInContainer = objccategory external (NSObject)
    procedure webPlugInContainerLoadRequest_inFrame (request: NSURLRequest; target: NSString); message 'webPlugInContainerLoadRequest:inFrame:';
    procedure webPlugInContainerShowStatus (message_: NSString); message 'webPlugInContainerShowStatus:';
    function webPlugInContainerSelectionColor: NSColor; message 'webPlugInContainerSelectionColor';
    function webFrame: WebFrame; message 'webFrame';
  end;
{$endif}

