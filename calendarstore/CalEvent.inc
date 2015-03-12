{ Parsed from CalendarStore.framework CalEvent.h }


{$ifdef TYPES}
type
  CalEventPtr = ^CalEvent;
{$endif}

{$ifdef CLASSES}

type
  CalEvent = objcclass external (CalCalendarItem)
  private
    _isAllDay: boolean;
    _location: NSString;
    _recurrenceRule: CalRecurrenceRule;
    _startDate: NSDate;
    _endDate: NSDate;
    _attendees: NSArray;
    _isDetached: boolean;
    _occurrence: NSDate;
  public
    class function event: id; message 'event'; deprecated 'in 10_5, 10_8';
    procedure setIsAllDay(newValue: boolean); message 'setIsAllDay:';
    function isAllDay: boolean; message 'isAllDay';
    procedure setLocation(newValue: NSString); message 'setLocation:';
    function location: NSString; message 'location';
    procedure setRecurrenceRule(newValue: CalRecurrenceRule); message 'setRecurrenceRule:';
    function recurrenceRule: CalRecurrenceRule; message 'recurrenceRule';
    procedure setStartDate(newValue: NSDate); message 'setStartDate:';
    function startDate: NSDate; message 'startDate';
    procedure setEndDate(newValue: NSDate); message 'setEndDate:';
    function endDate: NSDate; message 'endDate';
    function attendees: NSArray; message 'attendees';
    function isDetached: boolean; message 'isDetached';
    function occurrence: NSDate; message 'occurrence';
  end;
{$endif}

