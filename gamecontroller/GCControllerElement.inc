{ Parsed from GameController.framework (MacOSX10.10) GCControllerElement.h }
{ Created on Sun Mar 8 1:48:49 2015 }


{ Types from GCControllerElement }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  GCControllerElementPtr = ^GCControllerElement;
{$endif}

{$ifdef CLASSES}

type
  GCControllerElement = objcclass external (NSObject)
  public
    {$if  not defined(__has_feature)}
    function collection: GCControllerElement; message 'collection';
    {$else}
    function collection_: GCControllerElement; message 'collection';
    {$endif}
    function isAnalog: boolean; message 'isAnalog';
  end;
{$endif}

