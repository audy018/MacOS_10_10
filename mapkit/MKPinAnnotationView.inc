{ Parsed from MapKit.framework (MacOSX10.10) MKPinAnnotationView.h }
{ Created on Sun Mar 8 1:48:51 2015 }


{$ifdef TYPES}
type
  MKPinAnnotationViewPtr = ^MKPinAnnotationView;
{$endif}

{$ifdef TYPES}
type
  MKPinAnnotationColor = NSUInteger;
  MKPinAnnotationColorPtr = ^MKPinAnnotationColor;

const
  MKPinAnnotationColorRed = 0;
  MKPinAnnotationColorGreen = 1;
  MKPinAnnotationColorPurple = 2;
{$endif}

{$ifdef CLASSES}

type
  MKPinAnnotationView = objcclass external (MKAnnotationView)
  public
    procedure setPinColor(newValue: MKPinAnnotationColor); message 'setPinColor:';
    function pinColor: MKPinAnnotationColor; message 'pinColor';
    procedure setAnimatesDrop(newValue: boolean); message 'setAnimatesDrop:';
    function animatesDrop: boolean; message 'animatesDrop';
  end;
{$endif}

