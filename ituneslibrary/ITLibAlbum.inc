{ Parsed from ITunesLibrary.framework ITLibAlbum.h }
{ Created on Sun Mar 8 1:48:57 2015 }


{$ifdef TYPES}
type
  ITLibAlbumPtr = ^ITLibAlbum;
{$endif}

{$ifdef CLASSES}

type
  ITLibAlbum = objcclass external (NSObject)
  private
    _title: NSString;
    _sortTitle: NSString;
    _compilation: boolean;
    _discCount: NSUInteger;
    _discNumber: NSUInteger;
    _rating: NSInteger;
    _ratingComputed: boolean;
    _gapless: boolean;
    _trackCount: NSUInteger;
    _albumArtist: NSString;
    _sortAlbumArtist: NSString;
  public
    function title: NSString; message 'title';
    function sortTitle: NSString; message 'sortTitle';
    function isCompilation: boolean; message 'isCompilation';
    function artist: ITLibArtist; message 'artist';
    function discCount: NSUInteger; message 'discCount';
    function discNumber: NSUInteger; message 'discNumber';
    function rating: NSInteger; message 'rating';
    function isRatingComputed: boolean; message 'isRatingComputed';
    function isGapless: boolean; message 'isGapless';
    function trackCount: NSUInteger; message 'trackCount';
    function albumArtist: NSString; message 'albumArtist';
    function sortAlbumArtist: NSString; message 'sortAlbumArtist';
  end;
{$endif}

