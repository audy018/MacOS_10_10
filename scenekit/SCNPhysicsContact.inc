{ Parsed from SceneKit.framework (MacOSX10.10) SCNPhysicsContact.h }
{ Created on Sun Mar 8 1:46:53 2015 }


{$ifdef TYPES}
type
  SCNPhysicsContactPtr = ^SCNPhysicsContact;
{$endif}

{$ifdef CLASSES}

type
  SCNPhysicsContact = objcclass external (NSObject)
  private
    _reserved: id;
  public
    function nodeA: SCNNode; message 'nodeA';
    function nodeB: SCNNode; message 'nodeB';
    function contactPoint: SCNVector3; message 'contactPoint';
    function contactNormal: SCNVector3; message 'contactNormal';
    function collisionImpulse: CGFloat; message 'collisionImpulse';
    function penetrationDistance: CGFloat; message 'penetrationDistance';
  end;
{$endif}

