{ Parsed from SpriteKit.framework (MacOSX10.10) SKEffectNode.h }
{ Created on Sun Mar 8 1:48:56 2015 }


{$ifdef TYPES}
type
  SKEffectNodePtr = ^SKEffectNode;
{$endif}

{$ifdef CLASSES}

type
  SKEffectNode = objcclass external (SKNode)
  public
    procedure setFilter(newValue: CIFilter); message 'setFilter:';
    function filter: CIFilter; message 'filter';
    procedure setShouldCenterFilter(newValue: boolean); message 'setShouldCenterFilter:';
    function shouldCenterFilter: boolean; message 'shouldCenterFilter';
    procedure setShouldEnableEffects(newValue: boolean); message 'setShouldEnableEffects:';
    function shouldEnableEffects: boolean; message 'shouldEnableEffects';
    procedure setShouldRasterize(newValue: boolean); message 'setShouldRasterize:';
    function shouldRasterize: boolean; message 'shouldRasterize';
    procedure setBlendMode(newValue: SKBlendMode); message 'setBlendMode:';
    function blendMode: SKBlendMode; message 'blendMode';
    procedure setShader(newValue: SKShader); message 'setShader:';
    function shader: SKShader; message 'shader';
  end;
{$endif}

