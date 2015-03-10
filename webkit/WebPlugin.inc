{ Parsed from WebKit.framework (MacOSX10.10) WebPlugin.h }
{ Created on Sun Mar 8 1:48:19 2015 }

{$ifdef CLASSES}

type
  WebPlugIn = objccategory external (NSObject)
    procedure webPlugInInitialize; message 'webPlugInInitialize';
    procedure webPlugInStart; message 'webPlugInStart';
    procedure webPlugInStop; message 'webPlugInStop';
    procedure webPlugInDestroy; message 'webPlugInDestroy';
    procedure webPlugInSetIsSelected (isSelected: boolean); message 'webPlugInSetIsSelected:';
    function objectForWebScript: id; message 'objectForWebScript';
    procedure webPlugInMainResourceDidReceiveResponse (response: NSURLResponse); message 'webPlugInMainResourceDidReceiveResponse:'; { available in 10_6 }
    procedure webPlugInMainResourceDidReceiveData (data: NSData); message 'webPlugInMainResourceDidReceiveData:'; { available in 10_6 }
    procedure webPlugInMainResourceDidFailWithError (error: NSError); message 'webPlugInMainResourceDidFailWithError:'; { available in 10_6 }
    procedure webPlugInMainResourceDidFinishLoading; message 'webPlugInMainResourceDidFinishLoading'; { available in 10_6 }
  end;
{$endif}

