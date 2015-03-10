{ Parsed from MapKit.framework (MacOSX10.10) MKPlacemark.h }
{ Created on Sun Mar 8 1:48:51 2015 }


{$ifdef TYPES}
type
  MKPlacemarkPtr = ^MKPlacemark;
{$endif}

{$ifdef CLASSES}

type
  MKPlacemark = objcclass external (CLPlacemark, MKAnnotationProtocol)
  public
    function initWithCoordinate_addressDictionary (coordinate: CLLocationCoordinate2D; addressDictionary: NSDictionary): instancetype; message 'initWithCoordinate:addressDictionary:';
    function countryCode: NSString; message 'countryCode';

    { Adopted protocols }
    function coordinate: CLLocationCoordinate2D; message 'coordinate';
    procedure setCoordinate (newCoordinate: CLLocationCoordinate2D); message 'setCoordinate:'; { available in 10_9, 4_0 }
    function subtitle: NSString; message 'subtitle';
    function title: NSString; message 'title';
  end;
{$endif}

