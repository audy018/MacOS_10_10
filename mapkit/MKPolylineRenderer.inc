{ Parsed from MapKit.framework (MacOSX10.10) MKPolylineRenderer.h }
{ Created on Sun Mar 8 1:48:51 2015 }


{$ifdef TYPES}
type
  MKPolylineRendererPtr = ^MKPolylineRenderer;
{$endif}

{$ifdef CLASSES}

type
  MKPolylineRenderer = objcclass external (MKOverlayPathRenderer)
  public
    function initWithPolyline (polyline: MKPolyline): instancetype; message 'initWithPolyline:';
    function polyline: MKPolyline; message 'polyline';
  end;
{$endif}

