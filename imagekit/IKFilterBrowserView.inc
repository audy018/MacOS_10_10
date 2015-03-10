{ Parsed from ImageKit.framework (MacOSX10.10) IKFilterBrowserView.h }
{ Created on Sun Mar 8 1:47:45 2015 }


{$ifdef TYPES}
type
  IKFilterBrowserViewPtr = ^IKFilterBrowserView;
{$endif}

{$ifdef CLASSES}

type
  IKFilterBrowserView = objcclass external (NSView)
  private
    _actionButton: id;
    _addCollectionButton: id;
    _browser: id;
    _descriptionField: id;
    _previewView: id;
    _removeCollectionButton: id;
    _searchField: id;
    _OKButton: id;
    _CancelButton: id;
    _foundFilters: NSMutableArray;
    _options: NSDictionary;
    _showPreviewView: boolean;
    _useNarrowLayout: boolean;
    _modalDelegate: id;
    _priv:array[0..7] of pointer;
  public
    procedure setPreviewState (inState: boolean); message 'setPreviewState:';
    function filterName: NSString; message 'filterName';
  end;
{$endif}

