{ Parsed from CoreAudioKit.framework (MacOSX10.10) AUPannerView.h }
{ Created on Sun Mar 8 1:47:31 2015 }


{$ifdef TYPES}
type
  AUPannerViewPtr = ^AUPannerView;
{$endif}

{$ifdef CLASSES}

type
  AUPannerView = objcclass external (NSView)
  private
  public
    function audioUnit: AudioUnit; message 'audioUnit';
    class function AUPannerViewWithAudioUnit (au: AudioUnit): AUPannerView; message 'AUPannerViewWithAudioUnit:';
  end;
{$endif}

