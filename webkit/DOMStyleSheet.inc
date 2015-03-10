{ Parsed from WebKit.framework (MacOSX10.10) DOMStyleSheet.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMStyleSheetPtr = ^DOMStyleSheet;
{$endif}

{$ifdef CLASSES}

type
  DOMStyleSheet = objcclass external (DOMObject)
  public
    function type_: NSString; message 'type';
    procedure setDisabled(newValue: boolean); message 'setDisabled:';
    function disabled: boolean; message 'disabled';
    function ownerNode: DOMNode; message 'ownerNode';
    function parentStyleSheet: DOMStyleSheet; message 'parentStyleSheet';
    function href: NSString; message 'href';
    function title: NSString; message 'title';
    function media: DOMMediaList; message 'media';
  end;
{$endif}

