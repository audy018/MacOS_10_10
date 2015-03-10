{ Parsed from WebKit.framework (MacOSX10.10) DOMMediaList.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMMediaListPtr = ^DOMMediaList;
{$endif}

{$ifdef CLASSES}

type
  DOMMediaList = objcclass external (DOMObject)
  public
    procedure setMediaText(newValue: NSString); message 'setMediaText:';
    function mediaText: NSString; message 'mediaText';
    function length: cuint; message 'length';
    function item (index: cuint): NSString; message 'item:';
    procedure deleteMedium (oldMedium: NSString); message 'deleteMedium:';
    procedure appendMedium (newMedium: NSString); message 'appendMedium:';
  end;
{$endif}

