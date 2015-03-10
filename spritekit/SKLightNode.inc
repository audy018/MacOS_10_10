{ Parsed from SpriteKit.framework (MacOSX10.10) SKLightNode.h }
{ Created on Sun Mar 8 1:48:56 2015 }


{$ifdef TYPES}
type
  SKLightNodePtr = ^SKLightNode;
{$endif}

{$ifdef CLASSES}

type
  SKLightNode = objcclass external (SKNode)
  public
    procedure setEnabled(newValue: boolean); message 'setEnabled:';
    function isEnabled: boolean; message 'isEnabled';
    procedure setLightColor(newValue: SKColorPtr); message 'setLightColor:';
    function lightColor: SKColorPtr; message 'lightColor';
    procedure setAmbientColor(newValue: SKColorPtr); message 'setAmbientColor:';
    function ambientColor: SKColorPtr; message 'ambientColor';
    procedure setShadowColor(newValue: SKColorPtr); message 'setShadowColor:';
    function shadowColor: SKColorPtr; message 'shadowColor';
    procedure setFalloff(newValue: CGFloat); message 'setFalloff:';
    function falloff: CGFloat; message 'falloff';
    procedure setCategoryBitMask(newValue: cuint32); message 'setCategoryBitMask:';
    function categoryBitMask: cuint32; message 'categoryBitMask';
  end;
{$endif}

