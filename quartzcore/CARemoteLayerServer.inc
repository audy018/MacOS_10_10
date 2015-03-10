{ Parsed from QuartzCore.framework (MacOSX10.10) CARemoteLayerServer.h }
{ Created on Sun Mar 8 1:48:55 2015 }


{$ifdef TYPES}
type
  CARemoteLayerServerPtr = ^CARemoteLayerServer;
{$endif}

{$ifdef CLASSES}

type
  CARemoteLayerServer = objcclass external (NSObject)
  private
    _impl: id;
  public
    class function sharedServer: CARemoteLayerServer; message 'sharedServer';
    function serverPort: mach_port_t; message 'serverPort';
  end;


type
  CALayer_CARemoteLayerServer = objccategory external name 'CARemoteLayerServer' (CALayer)
    class function layerWithRemoteClientId (client_id: cuint32): CALayer; message 'layerWithRemoteClientId:';
  end;
{$endif}

