{ Parsed from DiscRecording.framework DRTrack_ContentSupport.h }

{$ifdef CLASSES}

type
  AudioContentCreation = objccategory external (DRTrack)
    class function trackForAudioOfLength_producer (length: DRMSF; producer: id): DRTrack; message 'trackForAudioOfLength:producer:';
    class function trackForAudioFile (path: NSString): DRTrack; message 'trackForAudioFile:';
  end;

type
  DataContentCreation = objccategory external (DRTrack)
    class function trackForRootFolder (rootFolder: DRFolder): DRTrack; message 'trackForRootFolder:';
  end;
{$endif}

