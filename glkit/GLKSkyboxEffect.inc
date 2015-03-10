{ Parsed from GLKit.framework (MacOSX10.10) GLKSkyboxEffect.h }
{ Created on Sun Mar 8 1:48:55 2015 }


{$ifdef TYPES}
type
  GLKSkyboxEffectPtr = ^GLKSkyboxEffect;
{$endif}

{$ifdef CLASSES}

type
  GLKSkyboxEffect = objcclass external (NSObject, GLKNamedEffectProtocol)
  private
    _center: GLKVector3;
    _xSize, _ySize, _zSize: GLfloat;
    _textureCubeMap: GLKEffectPropertyTexture;
    _transform: GLKEffectPropertyTransform;
    _label: NSString;
  public
    procedure prepareToDraw; message 'prepareToDraw';
    procedure draw; message 'draw';
    procedure setCenter(newValue: GLKVector3); message 'setCenter:';
    function center: GLKVector3; message 'center';
    procedure setXSize(newValue: GLfloat); message 'setXSize:';
    function xSize: GLfloat; message 'xSize';
    procedure setYSize(newValue: GLfloat); message 'setYSize:';
    function ySize: GLfloat; message 'ySize';

    procedure setZSize(newValue: GLfloat); message 'setZSize:';
    function zSize: GLfloat; message 'zSize';
    function textureCubeMap: GLKEffectPropertyTexture; message 'textureCubeMap';
    function transform: GLKEffectPropertyTransform; message 'transform';
    procedure setLabel(newValue: NSString); message 'setLabel:';
    function label_: NSString; message 'label';
  end;
{$endif}

