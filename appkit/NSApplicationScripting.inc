{ Parsed from AppKit.framework (MacOSX10.10) NSApplicationScripting.h }
{ Created on Sun Mar 8 1:49:08 2015 }

{$ifdef CLASSES}

type
  NSApplication_NSScripting = objccategory external name 'NSScripting' (NSApplication)
    function orderedDocuments: NSArray; message 'orderedDocuments';
    function orderedWindows: NSArray; message 'orderedWindows';
  end;

type
  NSApplicationScriptingDelegation = objccategory external (NSObject)
    function application_delegateHandlesKey (sender: NSApplication; key: NSString): boolean; message 'application:delegateHandlesKey:';
  end;
{$endif}

