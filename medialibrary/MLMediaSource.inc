{ Parsed from MediaLibrary.framework (MacOSX10.10) MLMediaSource.h }
{ Created on Sun Mar 8 1:48:52 2015 }


{$ifdef TYPES}
type
  MLMediaSourcePtr = ^MLMediaSource;
{$endif}

{$ifdef CLASSES}

type
  MLMediaSource = objcclass external (NSObject)
  public
    function mediaLibrary: MLMediaLibrary; message 'mediaLibrary';
    function mediaSourceIdentifier: NSString; message 'mediaSourceIdentifier';
    function attributes: NSDictionary; message 'attributes';
    function rootMediaGroup: MLMediaGroup; message 'rootMediaGroup';
    function mediaGroupForIdentifier (mediaGroupIdentifier: NSString): MLMediaGroup; message 'mediaGroupForIdentifier:';
    function mediaGroupsForIdentifiers (mediaGroupIdentifiers: NSArray): NSDictionary; message 'mediaGroupsForIdentifiers:';
    function mediaObjectForIdentifier (mediaObjectIdentifier: NSString): MLMediaObject; message 'mediaObjectForIdentifier:';
    function mediaObjectsForIdentifiers (mediaObjectIdentifiers: NSArray): NSDictionary; message 'mediaObjectsForIdentifiers:';
  end;
{$endif}

