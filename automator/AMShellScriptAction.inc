{ Parsed from Automator.framework (MacOSX10.10) AMShellScriptAction.h }
{ Created on Sun Mar 8 1:47:30 2015 }


{$ifdef TYPES}
type
  AMShellScriptActionPtr = ^AMShellScriptAction;
{$endif}

{$ifdef CLASSES}

type
  AMShellScriptAction = objcclass external (AMBundleAction)
  private
  public
    function remapLineEndings: boolean; message 'remapLineEndings';
    function inputFieldSeparator: NSString; message 'inputFieldSeparator';
    function outputFieldSeparator: NSString; message 'outputFieldSeparator';
  end;
{$endif}

