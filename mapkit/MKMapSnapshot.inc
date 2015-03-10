{ Parsed from MapKit.framework (MacOSX10.10) MKMapSnapshot.h }
{ Created on Sun Mar 8 1:48:51 2015 }


{ Types from MKMapSnapshot }
{$ifdef TYPES}

{$endif}


{$ifdef TYPES}
type
  MKMapSnapshotPtr = ^MKMapSnapshot;
{$endif}

{$ifdef CLASSES}

type
  MKMapSnapshot = objcclass external (NSObject)
  public
    {$if defined(TARGET_OS_IPHONE)}
    function image: UIImage; message 'image';
    function pointForCoordinate (coordinate: CLLocationCoordinate2D): CGPoint; message 'pointForCoordinate:';
    {$else}
    function image_: NSImage; message 'image';
    function pointForCoordinate (coordinate: CLLocationCoordinate2D): NSPoint; message 'pointForCoordinate:';
    {$endif}
  end;
{$endif}

