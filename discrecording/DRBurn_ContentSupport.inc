{ Parsed from DiscRecording.framework (MacOSX10.10) DRBurn_ContentSupport.h }
{ Created on Sun Mar 8 1:47:42 2015 }

{$ifdef CLASSES}

type
  ImageContentCreation = objccategory external (DRBurn)
    class function layoutForImageFile (path: NSString): id; message 'layoutForImageFile:';
  end;
{$endif}

