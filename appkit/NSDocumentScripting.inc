{ Parsed from AppKit.framework (MacOSX10.10) NSDocumentScripting.h }
{ Created on Sun Mar 8 1:49:08 2015 }

{$ifdef CLASSES}

type
  NSDocument_NSScripting = objccategory external name 'NSScripting' (NSDocument)
    procedure setLastComponentOfFileName(newValue: NSString); message 'setLastComponentOfFileName:';
    function lastComponentOfFileName: NSString; message 'lastComponentOfFileName';
    function handleSaveScriptCommand (command: NSScriptCommand): id; message 'handleSaveScriptCommand:';
    function handleCloseScriptCommand (command: NSCloseCommand): id; message 'handleCloseScriptCommand:';
    function handlePrintScriptCommand (command: NSScriptCommand): id; message 'handlePrintScriptCommand:';
    function objectSpecifier: NSScriptObjectSpecifier; message 'objectSpecifier';
  end;
{$endif}

