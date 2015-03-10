{ Parsed from CoreData.framework (MacOSX10.10) NSFetchedPropertyDescription.h }
{ Created on Sun Mar 8 1:48:21 2015 }


{$ifdef TYPES}
type
  NSFetchedPropertyDescriptionPtr = ^NSFetchedPropertyDescription;
{$endif}

{$ifdef CLASSES}

type
  NSFetchedPropertyDescription = objcclass external (NSPropertyDescription)
  private
    _reserved5: pointer;
    _reserved6: pointer;
    _fetchRequest: NSFetchRequest;
    _lazyFetchRequestEntityName: NSString;
  public
    procedure setFetchRequest(newValue: NSFetchRequest); message 'setFetchRequest:';
    function fetchRequest: NSFetchRequest; message 'fetchRequest';
  end;
{$endif}

