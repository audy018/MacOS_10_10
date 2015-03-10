{ Parsed from MapKit.framework (MacOSX10.10) MKPolygonRenderer.h }
{ Created on Sun Mar 8 1:48:51 2015 }


{$ifdef TYPES}
type
  MKPolygonRendererPtr = ^MKPolygonRenderer;
{$endif}

{$ifdef CLASSES}

type
  MKPolygonRenderer = objcclass external (MKOverlayPathRenderer)
  public
    function initWithPolygon (polygon: MKPolygon): instancetype; message 'initWithPolygon:';
    function polygon: MKPolygon; message 'polygon';
  end;
{$endif}

