{ Parsed from SpriteKit.framework (MacOSX10.10) SKPhysicsContact.h }
{ Created on Sun Mar 8 1:48:56 2015 }


{$ifdef TYPES}
type
  SKPhysicsContactPtr = ^SKPhysicsContact;
{$endif}

{$ifdef CLASSES}

type
  SKPhysicsContact = objcclass external (NSObject)
  public
    function bodyA: SKPhysicsBody; message 'bodyA';
    function bodyB: SKPhysicsBody; message 'bodyB';
    function contactPoint: CGPoint; message 'contactPoint';
    function contactNormal: CGVector; message 'contactNormal';
    function collisionImpulse: CGFloat; message 'collisionImpulse';
  end;
{$endif}

