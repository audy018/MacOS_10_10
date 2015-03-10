{ Parsed from GLKit.framework (MacOSX10.10) GLKEffectProperty.h }
{ Created on Sun Mar 8 1:48:55 2015 }


{$ifdef TYPES}
type
  GLKEffectPropertyPtr = ^GLKEffectProperty;
{$endif}

{$ifdef TYPES}
type
  GLKEffectPropertyPrvPtr = OpaqueType;
{$endif}

{$ifdef CLASSES}

type
  GLKEffectProperty = objcclass external (NSObject)
  private
    _location: GLint;
    _nameString: GLcharPtr;
    _prv: GLKEffectPropertyPrvPtr;
  end;
{$endif}

