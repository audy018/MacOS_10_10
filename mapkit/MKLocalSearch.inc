{ Parsed from MapKit.framework (MacOSX10.10) MKLocalSearch.h }
{ Created on Sun Mar 8 1:48:51 2015 }


{$ifdef TYPES}
type
  MKLocalSearchPtr = ^MKLocalSearch;
{$endif}

{$ifdef TYPES}
type
  MKLocalSearchCompletionHandler = OpaqueCBlock;
{$endif}

{$ifdef CLASSES}

type
  MKLocalSearch = objcclass external (NSObject)
  public
    function initWithRequest (request: MKLocalSearchRequest): instancetype; message 'initWithRequest:'; { NS_DESIGNATED_INITIALIZER }
    procedure startWithCompletionHandler (completionHandler: MKLocalSearchCompletionHandler); message 'startWithCompletionHandler:';
    procedure cancel; message 'cancel';
    function isSearching: boolean; message 'isSearching';
  end;
{$endif}

