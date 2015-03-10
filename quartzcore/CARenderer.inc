{ Parsed from QuartzCore.framework (MacOSX10.10) CARenderer.h }
{ Created on Sun Mar 8 1:48:55 2015 }


{$ifdef TYPES}
type
  CARendererPtr = ^CARenderer;
{$endif}

{$ifdef CLASSES}

type
  CARenderer = objcclass external (NSObject)
  private
    _priv: CARendererPrivPtr;
  public
    class function rendererWithCGLContext_options (ctx: pointer; dict: NSDictionary): CARenderer; message 'rendererWithCGLContext:options:';
    procedure setLayer(newValue: CALayer); message 'setLayer:';
    function layer: CALayer; message 'layer';
    procedure setBounds(newValue: CGRect); message 'setBounds:';
    function bounds: CGRect; message 'bounds';
    procedure beginFrameAtTime_timeStamp (t: CFTimeInterval; ts: CVTimeStampPtr); message 'beginFrameAtTime:timeStamp:';
    function updateBounds: CGRect; message 'updateBounds';
    procedure addUpdateRect (r: CGRect); message 'addUpdateRect:';
    procedure render; message 'render';
    function nextFrameTime: CFTimeInterval; message 'nextFrameTime';
    procedure endFrame; message 'endFrame';
  end;
{$endif}

