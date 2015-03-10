{ Parsed from EventKit.framework (MacOSX10.10) EKParticipant.h }
{ Created on Sun Mar 8 1:45:58 2015 }


{$ifdef TYPES}
type
  EKParticipantPtr = ^EKParticipant;
{$endif}

{$ifdef CLASSES}

type
  EKParticipant = objcclass external (EKObject, NSCopyingProtocol)
  private
  public
    function URL: NSURL; message 'URL';
    function name: NSString; message 'name';
    function participantStatus: EKParticipantStatus; message 'participantStatus';
    function participantRole: EKParticipantRole; message 'participantRole';
    function participantType: EKParticipantType; message 'participantType';
    function isCurrentUser: boolean; message 'isCurrentUser';
    function ABPersonInAddressBook (addressBook: ABAddressBook): ABPerson; message 'ABPersonInAddressBook:'; { available starting in __MAC_10_8,__IPHONE_NA }

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
  end;
{$endif}

