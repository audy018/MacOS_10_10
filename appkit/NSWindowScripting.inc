{ Parsed from AppKit.framework (MacOSX10.10) NSWindowScripting.h }
{ Created on Sun Mar 8 1:49:08 2015 }

{$ifdef CLASSES}

type
  NSWindow_NSScripting = objccategory external name 'NSScripting' (NSWindow)
    function hasCloseBox: boolean; message 'hasCloseBox';
    function hasTitleBar: boolean; message 'hasTitleBar';
    function isFloatingPanel: boolean; message 'isFloatingPanel';
    function isMiniaturizable: boolean; message 'isMiniaturizable';
    function isModalPanel: boolean; message 'isModalPanel';
    function isResizable: boolean; message 'isResizable';
    function isZoomable: boolean; message 'isZoomable';
    procedure setOrderedIndex(newValue: NSInteger); message 'setOrderedIndex:';
    function orderedIndex: NSInteger; message 'orderedIndex';
    procedure setIsMiniaturized (flag: boolean); message 'setIsMiniaturized:';
    procedure setIsVisible (flag: boolean); message 'setIsVisible:';
    procedure setIsZoomed (flag: boolean); message 'setIsZoomed:';
    function handleCloseScriptCommand (command: NSCloseCommand): id; message 'handleCloseScriptCommand:';
    function handlePrintScriptCommand (command: NSScriptCommand): id; message 'handlePrintScriptCommand:';
    function handleSaveScriptCommand (command: NSScriptCommand): id; message 'handleSaveScriptCommand:';
  end;
{$endif}

