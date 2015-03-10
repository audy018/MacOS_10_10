{ Parsed from CoreImage.framework (MacOSX10.10) CIFilterConstructor.h }
{ Created on Sun Mar 8 1:47:45 2015 }


{$ifdef TYPES}
type
  CIFilterConstructorProtocolPtr = ^CIFilterConstructorProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  CIFilterConstructorProtocol = objcprotocol external name 'CIFilterConstructor'
    function filterWithName (name: NSString): CIFilter; message 'filterWithName:';
  end;
{$endif}

