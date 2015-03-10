{ Parsed from AppKit.framework (MacOSX10.10) NSCustomImageRep.h }
{ Created on Sun Mar 8 1:49:07 2015 }


{$ifdef TYPES}
type
  NSCustomImageRepPtr = ^NSCustomImageRep;
{$endif}

{$ifdef CLASSES}

type
  NSCustomImageRep = objcclass external (NSImageRep)
  private
    _drawMethod: SEL;
    _drawObject: id;
    _reserved: cuint;
  public
    function initWithSize_flipped_drawingHandler (size_: NSSize; drawingHandlerShouldBeCalledWithFlippedContext: boolean; drawingHandler: OpaqueCBlock): instancetype; message 'initWithSize:flipped:drawingHandler:'; { available in 10_8 }
    procedure setDrawingHandler(newValue: OpaqueCBlock); message 'setDrawingHandler:';
    function drawingHandler: OpaqueCBlock; message 'drawingHandler';
    function initWithDrawSelector_delegate (aMethod: SEL; anObject: id): instancetype; message 'initWithDrawSelector:delegate:';
    function drawSelector: SEL; message 'drawSelector';
    function delegate: id; message 'delegate';
  end;
{$endif}

