{ Parsed from GameKit.framework (MacOSX10.10) GKLeaderboardViewController.h }
{ Created on Sun Mar 8 1:46:49 2015 }


{$ifdef TYPES}
type
  GKLeaderboardViewControllerPtr = ^GKLeaderboardViewController;
  GKLeaderboardViewControllerDelegateProtocolPtr = ^GKLeaderboardViewControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}
type
  GKLeaderboardViewController = objcclass external (GKGameCenterViewController)
  private
    _leaderboardDelegate: GKLeaderboardViewControllerDelegateProtocol;
    _category: NSString;
    _timeScope: GKLeaderboardTimeScope;
  public
    procedure setTimeScope(newValue: GKLeaderboardTimeScope); message 'setTimeScope:';
    function timeScope: GKLeaderboardTimeScope; message 'timeScope';
    procedure setCategory(newValue: NSString); message 'setCategory:';
    function category: NSString; message 'category';
    procedure setLeaderboardDelegate(newValue: GKLeaderboardViewControllerDelegateProtocol); message 'setLeaderboardDelegate:';
    function leaderboardDelegate: GKLeaderboardViewControllerDelegateProtocol; message 'leaderboardDelegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKLeaderboardViewControllerDelegateProtocol = objcprotocol external name 'GKLeaderboardViewControllerDelegate' (NSObjectProtocol)
  required
    procedure leaderboardViewControllerDidFinish (viewController: GKLeaderboardViewController); message 'leaderboardViewControllerDidFinish:';
  end;
{$endif}

