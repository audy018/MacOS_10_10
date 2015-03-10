{ Parsed from CloudKit.framework (MacOSX10.10) CKAsset.h }
{ Created on Sun Mar 8 1:49:12 2015 }


{$ifdef TYPES}
type
  CKAssetPtr = ^CKAsset;
{$endif}

{$ifdef CLASSES}

type
  CKAsset = objcclass external (NSObject)
  public
    function init: instancetype; message 'init';
    function initWithFileURL (fileURL: NSURL): instancetype; message 'initWithFileURL:';
    function fileURL: NSURL; message 'fileURL';
  end;
{$endif}

