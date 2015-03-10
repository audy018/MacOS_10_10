{ Parsed from CoreImage.framework (MacOSX10.10) CIKernel.h }
{ Created on Sun Mar 8 1:47:45 2015 }


{$ifdef TYPES}
type
  CIKernelPtr = ^CIKernel;
{$endif}

{$ifdef CLASSES}

type
  CIKernel = objcclass external (NSObject)
  private
    _priv: pointer;
  public
    class function kernelsWithString (s: NSString): NSArray; message 'kernelsWithString:';
    class function kernelWithString (s: NSString): CIKernel; message 'kernelWithString:'; { available starting in __MAC_10_10, __IPHONE_5_0 }
    function name: NSString; message 'name';
    procedure setROISelector (aMethod: SEL); message 'setROISelector:';
  end;
{$endif}

