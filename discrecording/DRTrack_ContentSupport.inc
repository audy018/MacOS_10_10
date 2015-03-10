{ Parsed from DiscRecording.framework (MacOSX10.10) DRTrack_ContentSupport.h }
{ Created on Sun Mar 8 1:47:42 2015 }

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

