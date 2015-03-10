{ Parsed from GLKit.framework (MacOSX10.10) GLKNamedEffect.h }
{ Created on Sun Mar 8 1:48:55 2015 }


{$ifdef TYPES}
type
  GLKNamedEffectProtocolPtr = ^GLKNamedEffectProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  GLKNamedEffectProtocol = objcprotocol external name 'GLKNamedEffect'
  required
    procedure prepareToDraw; message 'prepareToDraw';
  end;
{$endif}

