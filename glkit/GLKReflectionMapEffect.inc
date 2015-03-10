{ Parsed from GLKit.framework (MacOSX10.10) GLKReflectionMapEffect.h }
{ Created on Sun Mar 8 1:48:55 2015 }


{$ifdef TYPES}
type
  GLKReflectionMapEffectPtr = ^GLKReflectionMapEffect;
{$endif}

{$ifdef CLASSES}

type
  GLKReflectionMapEffect = objcclass external (GLKBaseEffect, GLKNamedEffectProtocol)
  private
    _textureCubeMap: GLKEffectPropertyTexture;
    _matrix: GLKMatrix3;
  public
    procedure prepareToDraw; message 'prepareToDraw';
    function textureCubeMap: GLKEffectPropertyTexture; message 'textureCubeMap';
    procedure setMatrix(newValue: GLKMatrix3); message 'setMatrix:';
    function matrix: GLKMatrix3; message 'matrix';
  end;
{$endif}

