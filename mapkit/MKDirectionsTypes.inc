{ Parsed from MapKit.framework (MacOSX10.10) MKDirectionsTypes.h }
{ Created on Sun Mar 8 1:48:51 2015 }

{$ifdef TYPES}
type
  MKDirectionsTransportType = NSUInteger;
  MKDirectionsTransportTypePtr = ^MKDirectionsTransportType;

const
  MKDirectionsTransportTypeAutomobile = 1 shl 0;
  MKDirectionsTransportTypeWalking = 1 shl 1;
  MKDirectionsTransportTypeAny = $0FFFFFFF;
{$endif}

