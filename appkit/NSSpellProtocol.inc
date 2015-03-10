{ Parsed from AppKit.framework (MacOSX10.10) NSSpellProtocol.h }
{ Created on Sun Mar 8 1:49:07 2015 }


{$ifdef TYPES}
type
  NSChangeSpellingProtocolPtr = ^NSChangeSpellingProtocol;
  NSIgnoreMisspelledWordsProtocolPtr = ^NSIgnoreMisspelledWordsProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSChangeSpellingProtocol = objcprotocol external name 'NSChangeSpelling'
    procedure changeSpelling (sender: id); message 'changeSpelling:';
  end;

type
  NSIgnoreMisspelledWordsProtocol = objcprotocol external name 'NSIgnoreMisspelledWords'
    procedure ignoreSpelling (sender: id); message 'ignoreSpelling:';
  end;
{$endif}

