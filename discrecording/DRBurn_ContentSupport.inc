{ Parsed from DiscRecording.framework DRBurn_ContentSupport.h }

{$ifdef CLASSES}

type
  ImageContentCreation = objccategory external (DRBurn)
    class function layoutForImageFile (path: NSString): id; message 'layoutForImageFile:';
  end;
{$endif}

