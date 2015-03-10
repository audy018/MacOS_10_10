{ Parsed from AudioVideoBridging.framework (MacOSX10.10) AVBEthernetInterface.h }
{ Created on Sun Mar 8 1:45:56 2015 }


{$ifdef TYPES}
type
  AVBEthernetInterfacePtr = ^AVBEthernetInterface;
{$endif}

{$ifdef CLASSES}

type
  AVBEthernetInterface = objcclass external (AVBInterface)
  private
    _notification: io_object_t;
  end;
{$endif}

