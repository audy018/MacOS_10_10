{ Parsed from ImageKit.framework (MacOSX10.10) IKFilterUI.h }
{ Created on Sun Mar 8 1:47:45 2015 }


{$ifdef TYPES}
type
  IKFilterCustomUIProviderProtocolPtr = ^IKFilterCustomUIProviderProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  IKUISizeFlavor: NSString; cvar; external;
  IKUISizeMini: NSString; cvar; external;
  IKUISizeSmall: NSString; cvar; external;
  IKUISizeRegular: NSString; cvar; external;
  IKUImaxSize: NSString; cvar; external;
  IKUIFlavorAllowFallback: NSString; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  IKFilterUIAddition = objccategory external (CIFilter)
    function viewForUIConfiguration_excludedKeys (inUIConfiguration: NSDictionary; inKeys: NSArray): IKFilterUIView; message 'viewForUIConfiguration:excludedKeys:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  IKFilterCustomUIProviderProtocol = objcprotocol external name 'IKFilterCustomUIProvider'
    function provideViewForUIConfiguration_excludedKeys (inUIConfiguration: NSDictionary; inKeys: NSArray): IKFilterUIView; message 'provideViewForUIConfiguration:excludedKeys:';
  end;
{$endif}

