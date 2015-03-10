{ Parsed from CoreMedia.framework (MacOSX10.10) CMMemoryPool.h }
{ Created on Sun Mar 8 1:47:37 2015 }

{$ifndef CMMEMORYPOOL_H}

{$ifdef TYPES}
type
  CMMemoryPoolRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function CMMemoryPoolGetTypeID: CFTypeID; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCMMemoryPoolOption_AgeOutPeriod: CFStringRef; cvar; external;
{$endif}

{$ifdef FUNCTIONS}
function CMMemoryPoolCreate(options: CFDictionaryRef): CMMemoryPoolRef; cdecl; external;
function CMMemoryPoolGetAllocator(pool: CMMemoryPoolRef): CFAllocatorRef; cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
procedure CMMemoryPoolFlush(pool: CMMemoryPoolRef); cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
procedure CMMemoryPoolInvalidate(pool: CMMemoryPoolRef); cdecl; external; { available starting in __MAC_10_8, __IPHONE_6_0 }
{$endif}

{$endif}
