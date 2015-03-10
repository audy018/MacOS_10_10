{ Parsed from MapKit.framework (MacOSX10.10) MKTileOverlayRenderer.h }
{ Created on Sun Mar 8 1:48:51 2015 }


{$ifdef TYPES}
type
  MKTileOverlayRendererPtr = ^MKTileOverlayRenderer;
{$endif}

{$ifdef CLASSES}

type
  MKTileOverlayRenderer = objcclass external (MKOverlayRenderer)
  public
    function initWithTileOverlay (overlay_: MKTileOverlay): instancetype; message 'initWithTileOverlay:';
    procedure reloadData; message 'reloadData';
  end;
{$endif}

