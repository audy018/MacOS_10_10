{ Parsed from Automator.framework (MacOSX10.10) AMAppleScriptAction.h }
{ Created on Sun Mar 8 1:47:30 2015 }


{$ifdef TYPES}
type
  AMAppleScriptActionPtr = ^AMAppleScriptAction;
{$endif}

{$ifdef CLASSES}

type
  AMAppleScriptAction = objcclass external (AMBundleAction)
  private
    _script: OSAScript;
  public
    procedure setScript(newValue: OSAScript); message 'setScript:';
    function script: OSAScript; message 'script';
  end;
{$endif}

