{ Parsed from CoreMedia.framework (MacOSX10.10) CMAudioDeviceClock.h }
{ Created on Sun Mar 8 1:47:37 2015 }

{$ifndef __CMAUDIODEVICECLOCK__}

{$ifdef FUNCTIONS}
function CMAudioDeviceClockCreate(allocator: CFAllocatorRef; deviceUID: CFStringRef; clockOut: CMClockRef): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_NA }
{$endif}

{$if  not defined(TARGET_OS_IPHONE)}
{$ifdef FUNCTIONS}
function CMAudioDeviceClockCreateFromAudioDeviceID(allocator: CFAllocatorRef; deviceID: AudioDeviceID; clockOut: CMClockRef): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_NA }
function CMAudioDeviceClockSetAudioDeviceUID(clock: CMClockRef; deviceUID: CFStringRef): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_NA }
function CMAudioDeviceClockSetAudioDeviceID(clock: CMClockRef; deviceID: AudioDeviceID): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_NA }
function CMAudioDeviceClockGetAudioDevice(clock: CMClockRef; deviceUIDOut: CFStringRefPtr; deviceIDOut: AudioDeviceIDPtr; trackingDefaultDeviceOut: pboolean): OSStatus; cdecl; external; { available starting in __MAC_10_8, __IPHONE_NA }
{$endif}

{$endif}

{$endif}
