{ Parsed from VideoToolbox.framework VTPixelTransferSession.h }

{$ifndef VTPIXELTRANSFERSESSION_H}

{$ifdef TYPES}
type
  VTPixelTransferSessionRef = OpaqueType;
{$endif}

{$ifdef FUNCTIONS}
function VTPixelTransferSessionCreate(allocator: CFAllocatorRef; pixelTransferSessionOut: VTPixelTransferSessionRef): OSStatus; cdecl; external; { available starting in 10_8 }
procedure VTPixelTransferSessionInvalidate(session: VTPixelTransferSessionRef); cdecl; external; { available starting in 10_8 }
function VTPixelTransferSessionGetTypeID: CFTypeID; cdecl; external; { available starting in 10_8 }
function VTPixelTransferSessionTransferImage(session: VTPixelTransferSessionRef; sourceBuffer: CVPixelBufferRef; destinationBuffer: CVPixelBufferRef): OSStatus; cdecl; external; { available starting in 10_8 }
{$endif}

{$endif}
