{ Parsed from MapKit.framework (MacOSX10.10) MKGeodesicPolyline.h }
{ Created on Sun Mar 8 1:48:51 2015 }


{$ifdef TYPES}
type
  MKGeodesicPolylinePtr = ^MKGeodesicPolyline;
{$endif}

{$ifdef CLASSES}

type
  MKGeodesicPolyline = objcclass external (MKPolyline)
  public
    class function polylineWithPoints_count (points_: MKMapPointPtr; count: NSUInteger): instancetype; message 'polylineWithPoints:count:';
    class function polylineWithCoordinates_count (coords: CLLocationCoordinate2DPtr; count: NSUInteger): instancetype; message 'polylineWithCoordinates:count:';
  end;
{$endif}

