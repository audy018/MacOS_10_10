{ Parsed from SpriteKit.framework (MacOSX10.10) SKReachConstraints.h }
{ Created on Sun Mar 8 1:48:56 2015 }


{$ifdef TYPES}
type
  SKReachConstraintsPtr = ^SKReachConstraints;
{$endif}

{$ifdef CLASSES}

type
  SKReachConstraints = objcclass external (NSObject, NSCodingProtocol)
  public
    procedure setLowerAngleLimit(newValue: CGFloat); message 'setLowerAngleLimit:';
    function lowerAngleLimit: CGFloat; message 'lowerAngleLimit';
    procedure setUpperAngleLimit(newValue: CGFloat); message 'setUpperAngleLimit:';
    function upperAngleLimit: CGFloat; message 'upperAngleLimit';
    function initWithLowerAngleLimit_upperAngleLimit (lowerAngleLimit_: CGFloat; upperAngleLimit_: CGFloat): instancetype; message 'initWithLowerAngleLimit:upperAngleLimit:'; { NS_DESIGNATED_INITIALIZER }

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

