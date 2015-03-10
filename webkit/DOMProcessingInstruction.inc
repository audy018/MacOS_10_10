{ Parsed from WebKit.framework (MacOSX10.10) DOMProcessingInstruction.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMProcessingInstructionPtr = ^DOMProcessingInstruction;
{$endif}

{$ifdef CLASSES}

type
  DOMProcessingInstruction = objcclass external (DOMCharacterData)
  public
    function target: NSString; message 'target';
    function sheet: DOMStyleSheet; message 'sheet';
  end;
{$endif}

