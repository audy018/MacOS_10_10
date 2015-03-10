{ Parsed from CoreLocation.framework (MacOSX10.10) CLCircularRegion.h }
{ Created on Sun Mar 8 1:49:12 2015 }


{$ifdef TYPES}
type
  CLCircularRegionPtr = ^CLCircularRegion;
{$endif}

{$ifdef CLASSES}

type
  CLCircularRegion = objcclass external (CLRegion)
  public
    function initWithCenter_radius_identifier (center_: CLLocationCoordinate2D; radius_: CLLocationDistance; identifier_: NSString): instancetype; message 'initWithCenter:radius:identifier:';
    function center: CLLocationCoordinate2D; message 'center';
    function radius: CLLocationDistance; message 'radius';
    function containsCoordinate (coordinate: CLLocationCoordinate2D): boolean; message 'containsCoordinate:';
  end;
{$endif}

