{ Parsed from Foundation.framework (MacOSX10.10) NSPortCoder.h }
{ Created on Sun Mar 8 1:49:15 2015 }


{$ifdef TYPES}
type
  NSPortCoderPtr = ^NSPortCoder;
{$endif}

{$ifdef CLASSES}

type
  NSPortCoder = objcclass external (NSCoder)
  public
    function isBycopy: boolean; message 'isBycopy';
    function isByref: boolean; message 'isByref';
    procedure encodePortObject (aport: NSPort); message 'encodePortObject:';
    function decodePortObject: NSPort; message 'decodePortObject';
    function connection: NSConnection; message 'connection'; deprecated 'in 10_0, 10_7, 2_0, NA';
    function initWithReceivePort_sendPort_components (rcvPort: NSPort; sndPort: NSPort; comps: NSArray): id; message 'initWithReceivePort:sendPort:components:'; deprecated 'in 10_0, 10_7, 2_0, NA';
    procedure dispatch; message 'dispatch'; deprecated 'in 10_0, 10_7, 2_0, NA';
  end;


type
  NSDistributedObjects = objccategory external (NSObject)
    function classForPortCoder: pobjc_class; message 'classForPortCoder';
    function replacementObjectForPortCoder (coder: NSPortCoder): id; message 'replacementObjectForPortCoder:';
  end;
{$endif}

