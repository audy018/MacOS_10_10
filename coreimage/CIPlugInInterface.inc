{ Parsed from CoreImage.framework (MacOSX10.10) CIPlugInInterface.h }
{ Created on Sun Mar 8 1:47:45 2015 }


{$ifdef TYPES}
type
  CIPlugInRegistrationProtocolPtr = ^CIPlugInRegistrationProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  CIPlugInRegistrationProtocol = objcprotocol external name 'CIPlugInRegistration'
    function load (host: pointer): boolean; message 'load:';
  end;
{$endif}

