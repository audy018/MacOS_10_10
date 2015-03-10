{ Parsed from AppKit.framework (MacOSX10.10) NSEPSImageRep.h }
{ Created on Sun Mar 8 1:49:07 2015 }


{$ifdef TYPES}
type
  NSEPSImageRepPtr = ^NSEPSImageRep;
{$endif}

{$ifdef CLASSES}

type
  NSEPSImageRep = objcclass external (NSImageRep)
  private
    _bBoxOrigin: NSPoint;
    _epsData: NSData;
    _pdfImageRep: NSPDFImageRep;
  public
    class function imageRepWithData (epsData: NSData): instancetype; message 'imageRepWithData:';
    function initWithData (epsData: NSData): instancetype; message 'initWithData:';
    procedure prepareGState; message 'prepareGState'; deprecated 'in 10_0, 10_10';
    function EPSRepresentation: NSData; message 'EPSRepresentation';
    function boundingBox: NSRect; message 'boundingBox';
  end;
{$endif}

