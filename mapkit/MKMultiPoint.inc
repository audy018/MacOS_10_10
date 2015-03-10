{ Parsed from MapKit.framework (MacOSX10.10) MKMultiPoint.h }
{ Created on Sun Mar 8 1:48:51 2015 }


{$ifdef TYPES}
type
  MKMultiPointPtr = ^MKMultiPoint;
{$endif}

{$ifdef CLASSES}

type
  MKMultiPoint = objcclass external (MKShape)
  public
    function points: MKMapPointPtr; message 'points';
    function pointCount: NSUInteger; message 'pointCount';
    procedure getCoordinates_range (coords: CLLocationCoordinate2DPtr; range: NSRange); message 'getCoordinates:range:';
  end;
{$endif}

