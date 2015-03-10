{ Parsed from GameController.framework (MacOSX10.10) GCControllerDirectionPad.h }
{ Created on Sun Mar 8 1:48:49 2015 }


{ Types from GCControllerDirectionPad }
{$ifdef TYPES}

type
  GCControllerDirectionPadValueChangedHandler = OpaqueCBlock;
{$endif}


{$ifdef TYPES}
type
  GCControllerDirectionPadPtr = ^GCControllerDirectionPad;
{$endif}

{$ifdef CLASSES}

type
  GCControllerDirectionPad = objcclass external (GCControllerElement)
  public
    procedure setValueChangedHandler(newValue: GCControllerDirectionPadValueChangedHandler); message 'setValueChangedHandler:';
    function valueChangedHandler: GCControllerDirectionPadValueChangedHandler; message 'valueChangedHandler';
    function xAxis: GCControllerAxisInput; message 'xAxis';
    function yAxis: GCControllerAxisInput; message 'yAxis';
    function up: GCControllerButtonInput; message 'up';
    function down: GCControllerButtonInput; message 'down';
    function left: GCControllerButtonInput; message 'left';
    function right: GCControllerButtonInput; message 'right';
  end;
{$endif}

