{ Parsed from WebKit.framework (MacOSX10.10) DOMProgressEvent.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMProgressEventPtr = ^DOMProgressEvent;
{$endif}

{$ifdef CLASSES}

type
  DOMProgressEvent = objcclass external (DOMEvent)
  public
    function lengthComputable: boolean; message 'lengthComputable';
    function loaded: culonglong; message 'loaded';
    function total: culonglong; message 'total';
  end;
{$endif}

