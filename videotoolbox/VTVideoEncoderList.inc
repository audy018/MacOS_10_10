{ Parsed from VideoToolbox.framework (MacOSX10.10) VTVideoEncoderList.h }
{ Created on Sun Mar 8 1:47:13 2015 }

{$ifndef VTVIDEOENCODERLIST_H}

{$ifdef FUNCTIONS}
function VTCopyVideoEncoderList(options: CFDictionaryRef; listOfVideoEncodersOut: CFArrayRefPtr): OSStatus; cdecl; external; { available starting in __MAC_10_8,__IPHONE_8_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kVTVideoEncoderList_CodecType: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTVideoEncoderList_EncoderID: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTVideoEncoderList_CodecName: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTVideoEncoderList_EncoderName: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
  kVTVideoEncoderList_DisplayName: CFStringRef { available starting in __MAC_10_8,__IPHONE_8_0 }; cvar; external;
{$endif}

{$endif}
