{ Parsed from MapKit.framework (MacOSX10.10) MKCircleRenderer.h }
{ Created on Sun Mar 8 1:48:51 2015 }


{$ifdef TYPES}
type
  MKCircleRendererPtr = ^MKCircleRenderer;
{$endif}

{$ifdef CLASSES}

type
  MKCircleRenderer = objcclass external (MKOverlayPathRenderer)
  public
    function initWithCircle (circle: MKCircle): instancetype; message 'initWithCircle:';
    function circle: MKCircle; message 'circle';
  end;
{$endif}

