{ Parsed from VideoToolbox.framework (MacOSX10.10) VTPixelTransferProperties.h }
{ Created on Sun Mar 8 1:47:13 2015 }

{$ifndef VTPIXELTRANSFERPROPERTIES_H}

{$ifdef EXTERNAL_SYMBOLS}
var
  kVTPixelTransferPropertyKey_ScalingMode: CFStringRef { available starting in 10_8 }; cvar; external;
  kVTScalingMode_Normal: CFStringRef { available starting in 10_8 }; cvar; external;
  kVTScalingMode_CropSourceToCleanAperture: CFStringRef { available starting in 10_8 }; cvar; external;
  kVTScalingMode_Letterbox: CFStringRef { available starting in 10_8 }; cvar; external;
  kVTScalingMode_Trim: CFStringRef { available starting in 10_8 }; cvar; external;
  kVTPixelTransferPropertyKey_DestinationCleanAperture: CFStringRef { available starting in 10_8 }; cvar; external;
  kVTPixelTransferPropertyKey_DestinationPixelAspectRatio: CFStringRef { available starting in 10_8 }; cvar; external;
  kVTPixelTransferPropertyKey_DownsamplingMode: CFStringRef { available starting in 10_8 }; cvar; external;
  kVTDownsamplingMode_Decimate: CFStringRef { available starting in 10_8 }; cvar; external;
  kVTDownsamplingMode_Average: CFStringRef { available starting in 10_8 }; cvar; external;
{$endif}

{$if defined(VT_SUPPORT_COLORSYNC_PIXEL_TRANSFER)}
{$ifdef EXTERNAL_SYMBOLS}
var
  kVTPixelTransferPropertyKey_DestinationColorPrimaries: CFStringRef { available starting in 10_8 }; cvar; external;
  kVTPixelTransferPropertyKey_DestinationTransferFunction: CFStringRef { available starting in 10_8 }; cvar; external;
  kVTPixelTransferPropertyKey_DestinationICCProfile: CFStringRef { available starting in 10_8 }; cvar; external;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  kVTPixelTransferPropertyKey_DestinationYCbCrMatrix: CFStringRef { available starting in 10_8 }; cvar; external;
{$endif}

{$endif}
