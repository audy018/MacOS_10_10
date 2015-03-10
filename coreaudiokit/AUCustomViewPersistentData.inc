{ Parsed from CoreAudioKit.framework (MacOSX10.10) AUCustomViewPersistentData.h }
{ Created on Sun Mar 8 1:47:31 2015 }


{$ifdef TYPES}
type
  AUCustomViewPersistentDataProtocolPtr = ^AUCustomViewPersistentDataProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  AUCustomViewPersistentDataProtocol = objcprotocol external name 'AUCustomViewPersistentData'
    function customViewPersistentData: NSDictionary; message 'customViewPersistentData';
    procedure setCustomViewPersistentData (data: NSDictionary); message 'setCustomViewPersistentData:';
  end;
{$endif}

