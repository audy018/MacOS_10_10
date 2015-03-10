{ Parsed from CoreAudio.framework (MacOSX10.10) HostTime.h }
{ Created on Sun Mar 8 1:48:36 2015 }

{$if  not (defined(__HostTime_h__))}

{$ifdef FUNCTIONS}
function AudioConvertHostTimeToNanos(inHostTime: UInt64): UInt64; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
function AudioConvertNanosToHostTime(inNanos: UInt64): UInt64; cdecl; external; { available starting in __MAC_10_0, __IPHONE_2_0 }
{$endif}

{$endif}
