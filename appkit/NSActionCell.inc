{ Parsed from AppKit.framework (MacOSX10.10) NSActionCell.h }
{ Created on Sun Mar 8 1:49:07 2015 }


{$ifdef TYPES}
type
  NSActionCellPtr = ^NSActionCell;
{$endif}

{$ifdef CLASSES}

type
  NSActionCell = objcclass external (NSCell)
  private
    _tag: NSInteger;
    _target: id;
    _action: SEL;
    _controlView: id;
  public
    procedure setTarget(newValue: id); message 'setTarget:';
    function target: id; message 'target';
    procedure setAction(newValue: SEL); message 'setAction:';
    function action: SEL; message 'action';
    procedure setTag(newValue: NSInteger); message 'setTag:';
    function tag: NSInteger; message 'tag';
  end;
{$endif}

