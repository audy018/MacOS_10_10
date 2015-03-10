{ Parsed from QTKit.framework (MacOSX10.10) QTTime.h }
{ Created on Sun Mar 8 1:48:37 2015 }

{$ifdef TYPES}
const
  kQTTimeIsIndefinite = 1 shl 0;

type
  QTTime = record
    timeValue: clonglong;
    timeScale: clong;
    flags: clong;
  end;
type
  QTTimePtr = ^QTTime;
{$endif}

{$ifdef CLASSES}

type
  NSValueQTTimeExtensions = objccategory external (NSValue)
    class function valueWithQTTime (time: QTTime): NSValue; message 'valueWithQTTime:';
    function QTTimeValue AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: QTTime; message 'QTTimeValue AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
  end;

type
  NSQTTimeCoding = objccategory external (NSCoder)
    procedure encodeQTTime_forKey (time: QTTime; key: NSString); message 'encodeQTTime:forKey:';
    function decodeQTTimeForKey (key: NSString): QTTime; message 'decodeQTTimeForKey:';
  end;
{$endif}

{$if (QTKIT_VERSION_MAX_ALLOWED >= QTKIT_VERSION_7_2)}
{$ifdef CLASSES}

type
  NSValueQTSMPTETimeExtensions = objccategory external (NSValue)
    class function valueWithSMPTETime (time: SMPTETime): NSValue; message 'valueWithSMPTETime:';
    function SMPTETimeValue AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3: SMPTETime; message 'SMPTETimeValue AVAILABLE_QTKIT_VERSION_7_2_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3';
  end;

type
  NSCoderQTSMPTETimeCoding = objccategory external (NSCoder)
    procedure encodeSMPTETime_forKey (time: SMPTETime; key: NSString); message 'encodeSMPTETime:forKey:';
    function decodeSMPTETimeForKey (key: NSString): SMPTETime; message 'decodeSMPTETimeForKey:';
  end;
{$endif}

{$endif}
