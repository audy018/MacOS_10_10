{ Parsed from AppKit.framework (MacOSX10.10) NSTextStorageScripting.h }
{ Created on Sun Mar 8 1:49:08 2015 }

{$ifdef CLASSES}

type
  Scripting = objccategory external (NSTextStorage)
    procedure setAttributeRuns(newValue: NSArray); message 'setAttributeRuns:';
    function attributeRuns: NSArray; message 'attributeRuns';
    procedure setParagraphs(newValue: NSArray); message 'setParagraphs:';
    function paragraphs: NSArray; message 'paragraphs';
    procedure setWords(newValue: NSArray); message 'setWords:';
    function words: NSArray; message 'words';
    procedure setCharacters(newValue: NSArray); message 'setCharacters:';
    function characters: NSArray; message 'characters';
    procedure setFont(newValue: NSFont); message 'setFont:';
    function font: NSFont; message 'font';
    procedure setForegroundColor(newValue: NSColor); message 'setForegroundColor:';
    function foregroundColor: NSColor; message 'foregroundColor';
  end;
{$endif}

