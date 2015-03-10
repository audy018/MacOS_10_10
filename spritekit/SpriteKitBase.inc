{ Parsed from SpriteKit.framework (MacOSX10.10) SpriteKitBase.h }
{ Created on Sun Mar 8 1:48:56 2015 }

{$ifdef TYPES}
const
  SK_AVAILABLE = __OSX_AVAILABLE_STARTING;
{$endif}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  SKColor = UIColor;
{$endif}

{$else}
{$endif}
{$ifdef TYPES}
type
  vector_float3 = single;
  vector_float3Ptr = ^vector_float3;
{$endif}

{$ifndef CGVECTOR_DEFINED}
{$ifdef TYPES}
const
  CGVECTOR_DEFINED = 1;

type
  CGVector = record
    dx: CGFloat;
    dy: CGFloat;
  end;
type
  CGVectorPtr = ^CGVector;
{$endif}

{$endif}
