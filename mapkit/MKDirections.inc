{ Parsed from MapKit.framework (MacOSX10.10) MKDirections.h }
{ Created on Sun Mar 8 1:48:51 2015 }


{$ifdef TYPES}
type
  MKDirectionsPtr = ^MKDirections;
{$endif}

{$ifdef TYPES}
type
  MKDirectionsHandler = OpaqueCBlock;
  MKETAHandler = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  MKDirections = objcclass external (NSObject)
  public
    function initWithRequest (request: MKDirectionsRequest): instancetype; message 'initWithRequest:'; { NS_DESIGNATED_INITIALIZER }
    procedure calculateDirectionsWithCompletionHandler (completionHandler: MKDirectionsHandler); message 'calculateDirectionsWithCompletionHandler:';
    procedure calculateETAWithCompletionHandler (completionHandler: MKETAHandler); message 'calculateETAWithCompletionHandler:';
    procedure cancel; message 'cancel';
    function isCalculating: boolean; message 'isCalculating';
  end;
{$endif}

