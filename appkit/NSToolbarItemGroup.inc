{ Parsed from AppKit.framework (MacOSX10.10) NSToolbarItemGroup.h }
{ Created on Sun Mar 8 1:49:08 2015 }


{$ifdef TYPES}
type
  NSToolbarItemGroupPtr = ^NSToolbarItemGroup;
{$endif}

{$ifdef CLASSES}

type
  NSToolbarItemGroup = objcclass external (NSToolbarItem)
  private
    _groupItems: id;
    _giFlags: bitpacked record
      case byte of
        0: (_anonBitField__giFlags0: cuint);
        1: (
          dirtiedLayout: 0..1;
          reserved: 0..((1 shl 31)-1);
        );
      end;
    _giReserved: id;
  public
    procedure setSubitems(newValue: NSArray); message 'setSubitems:';
    function subitems: NSArray; message 'subitems';
  end;
{$endif}

