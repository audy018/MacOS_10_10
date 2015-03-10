{ Parsed from MapKit.framework (MacOSX10.10) MKTypes.h }
{ Created on Sun Mar 8 1:48:51 2015 }

{$ifdef TYPES}
type
  MKMapType = NSUInteger;
  MKMapTypePtr = ^MKMapType;

const
  MKMapTypeStandard = 0;
  MKMapTypeSatellite = 1;
  MKMapTypeHybrid = 2;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  MKErrorDomain: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  MKErrorCode = NSUInteger;
  MKErrorCodePtr = ^MKErrorCode;

const
  MKErrorUnknown = 1;
  MKErrorServerFailure = 2;
  MKErrorLoadingThrottled = 3;
  MKErrorPlacemarkNotFound = 4;
  MKErrorDirectionsNotFound = 5 { available in 10_9, 7_0 };
{$endif}

