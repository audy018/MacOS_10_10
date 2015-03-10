{ Parsed from MapKit.framework (MacOSX10.10) MKLocalSearchRequest.h }
{ Created on Sun Mar 8 1:48:51 2015 }


{$ifdef TYPES}
type
  MKLocalSearchRequestPtr = ^MKLocalSearchRequest;
{$endif}

{$ifdef CLASSES}

type
  MKLocalSearchRequest = objcclass external (NSObject, NSCopyingProtocol)
  public
    procedure setNaturalLanguageQuery(newValue: NSString); message 'setNaturalLanguageQuery:';
    function naturalLanguageQuery: NSString; message 'naturalLanguageQuery';
    procedure setRegion(newValue: MKCoordinateRegion); message 'setRegion:';
    function region: MKCoordinateRegion; message 'region';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

