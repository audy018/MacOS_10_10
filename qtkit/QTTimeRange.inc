{ Parsed from QTKit.framework (MacOSX10.10) QTTimeRange.h }
{ Created on Sun Mar 8 1:48:37 2015 }

{$ifdef TYPES}
type
  QTTimeRange = record
    time: QTTime;
    duration: QTTime;
  end;
type
  QTTimeRangePtr = ^QTTimeRange;
{$endif}

{$ifdef CLASSES}

type
  NSValueQTTimeRangeExtensions = objccategory external (NSValue)
    class function valueWithQTTimeRange (range: QTTimeRange): NSValue; message 'valueWithQTTimeRange:';
    function QTTimeRangeValue AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTTimeRange; message 'QTTimeRangeValue AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
  end;

type
  NSQTTimeRangeCoding = objccategory external (NSCoder)
    procedure encodeQTTimeRange_forKey (range: QTTimeRange; key: NSString); message 'encodeQTTimeRange:forKey:';
    function decodeQTTimeRangeForKey (key: NSString): QTTimeRange; message 'decodeQTTimeRangeForKey:';
  end;
{$endif}

