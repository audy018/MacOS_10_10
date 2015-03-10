{ Parsed from OSAKit.framework (MacOSX10.10) OSAScriptView.h }
{ Created on Sun Mar 8 1:47:30 2015 }


{$ifdef TYPES}
type
  OSAScriptViewPtr = ^OSAScriptView;
{$endif}

{$ifdef CLASSES}

type
  OSAScriptView = objcclass external (NSTextView)
  private
    _private: OSAScriptViewPrivate;
  public
    procedure setSource(newValue: NSString); message 'setSource:';
    function source: NSString; message 'source';
    procedure setUsesScriptAssistant(newValue: boolean); message 'setUsesScriptAssistant:';
    function usesScriptAssistant: boolean; message 'usesScriptAssistant';
    procedure setUsesTabs(newValue: boolean); message 'setUsesTabs:';
    function usesTabs: boolean; message 'usesTabs';
    procedure setTabWidth(newValue: NSUInteger); message 'setTabWidth:';
    function tabWidth: NSUInteger; message 'tabWidth';
    procedure setWrapsLines(newValue: boolean); message 'setWrapsLines:';
    function wrapsLines: boolean; message 'wrapsLines';
    procedure setIndentsWrappedLines(newValue: boolean); message 'setIndentsWrappedLines:';
    function indentsWrappedLines: boolean; message 'indentsWrappedLines';
    procedure setIndentWidth(newValue: NSUInteger); message 'setIndentWidth:';
    function indentWidth: NSUInteger; message 'indentWidth';
  end;
{$endif}

