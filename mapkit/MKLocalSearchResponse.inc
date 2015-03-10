{ Parsed from MapKit.framework (MacOSX10.10) MKLocalSearchResponse.h }
{ Created on Sun Mar 8 1:48:51 2015 }


{$ifdef TYPES}
type
  MKLocalSearchResponsePtr = ^MKLocalSearchResponse;
{$endif}

{$ifdef CLASSES}

type
  MKLocalSearchResponse = objcclass external (NSObject)
  public
    function mapItems: NSArray; message 'mapItems';
    function boundingRegion: MKCoordinateRegion; message 'boundingRegion';
  end;
{$endif}

