{ Parsed from QuartzCore.framework (MacOSX10.10) CATiledLayer.h }
{ Created on Sun Mar 8 1:48:55 2015 }


{$ifdef TYPES}
type
  CATiledLayerPtr = ^CATiledLayer;
{$endif}

{$ifdef CLASSES}

type
  CATiledLayer = objcclass external (CALayer)
  public
    class function fadeDuration: CFTimeInterval; message 'fadeDuration';
    procedure setLevelsOfDetail(newValue: size_t); message 'setLevelsOfDetail:';
    function levelsOfDetail: size_t; message 'levelsOfDetail';
    procedure setLevelsOfDetailBias(newValue: size_t); message 'setLevelsOfDetailBias:';
    function levelsOfDetailBias: size_t; message 'levelsOfDetailBias';
    procedure setTileSize(newValue: CGSize); message 'setTileSize:';
    function tileSize: CGSize; message 'tileSize';
  end;
{$endif}

