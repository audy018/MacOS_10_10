{ Parsed from WebKit.framework (MacOSX10.10) DOMAbstractView.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMAbstractViewPtr = ^DOMAbstractView;
{$endif}

{$ifdef CLASSES}

type
  DOMAbstractView = objcclass external (DOMObject)
  public
    function document: DOMDocument; message 'document';
  end;
{$endif}

