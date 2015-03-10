{ Parsed from SpriteKit.framework (MacOSX10.10) SKMutableTexture.h }
{ Created on Sun Mar 8 1:48:56 2015 }


{$ifdef TYPES}
type
  SKMutableTexturePtr = ^SKMutableTexture;
{$endif}

{$ifdef CLASSES}

type
  SKMutableTexture = objcclass external (SKTexture)
  public
    function initWithSize (size_: CGSize): instancetype; message 'initWithSize:';
    class function mutableTextureWithSize (size_: CGSize): instancetype; message 'mutableTextureWithSize:';
    function initWithSize_pixelFormat (size_: CGSize; format: cint): instancetype; message 'initWithSize:pixelFormat:';
    procedure modifyPixelDataWithBlock (block: OpaqueCBlock); message 'modifyPixelDataWithBlock:';
  end;
{$endif}

