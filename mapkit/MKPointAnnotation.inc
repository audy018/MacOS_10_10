{ Parsed from MapKit.framework (MacOSX10.10) MKPointAnnotation.h }
{ Created on Sun Mar 8 1:48:51 2015 }


{$ifdef TYPES}
type
  MKPointAnnotationPtr = ^MKPointAnnotation;
{$endif}

{$ifdef CLASSES}

type
  MKPointAnnotation = objcclass external (MKShape)
  public
    procedure setCoordinate(newValue: CLLocationCoordinate2D); message 'setCoordinate:';
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
  end;
{$endif}

