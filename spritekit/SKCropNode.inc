{ Parsed from SpriteKit.framework (MacOSX10.10) SKCropNode.h }
{ Created on Sun Mar 8 1:48:56 2015 }


{$ifdef TYPES}
type
  SKCropNodePtr = ^SKCropNode;
{$endif}

{$ifdef CLASSES}

type
  SKCropNode = objcclass external (SKNode)
  public
    procedure setMaskNode(newValue: SKNode); message 'setMaskNode:';
    function maskNode: SKNode; message 'maskNode';
  end;
{$endif}

