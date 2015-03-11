{ Parsed from QTKit.framework (MacOSX10.10) QTMovieLayer.h }
{ Created on Sun Mar 8 1:48:37 2015 }


{$ifdef TYPES}
type
  QTMovieLayerPtr = ^QTMovieLayer;
{$endif}

{$if ((QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)) and ((MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5))}
{$ifdef CLASSES}

type
  QTMovieLayer = objcclass external (CALayer)
  private
    _movieLayerPriv: QTMovieLayerPrivate;
  public
    class function layerWithMovie (movie: QTMovie): id; message 'layerWithMovie:';
    function initWithMovie (movie: QTMovie): id; message 'initWithMovie:';
    procedure setMovie (movie: QTMovie); message 'setMovie:';
    function movie: QTMovie; message 'movie';
  end;
{$endif}

{$endif}
