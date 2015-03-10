{ Parsed from AddressBook.framework (MacOSX10.10) ABSearchElement.h }
{ Created on Sun Mar 8 1:47:29 2015 }


{$ifdef TYPES}
type
  ABSearchElementPtr = ^ABSearchElement;
{$endif}

{$ifdef CLASSES}

type
  ABSearchElement = objcclass external (NSObject)
  public
    class function searchElementForConjunction_children (conjuction: ABSearchConjunction; children: NSArray): ABSearchElement; message 'searchElementForConjunction:children:';
    function matchesRecord (record_: ABRecord): boolean; message 'matchesRecord:';
  end;
{$endif}

