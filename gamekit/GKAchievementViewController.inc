{ Parsed from GameKit.framework (MacOSX10.10) GKAchievementViewController.h }
{ Created on Sun Mar 8 1:46:49 2015 }


{$ifdef TYPES}
type
  GKAchievementViewControllerPtr = ^GKAchievementViewController;
  GKAchievementViewControllerDelegateProtocolPtr = ^GKAchievementViewControllerDelegateProtocol;
{$endif}

{$ifdef CLASSES}
type
  GKAchievementViewController = objcclass external (GKGameCenterViewController)
  private
    _achievementDelegate: GKAchievementViewControllerDelegateProtocol;
  public
    procedure setAchievementDelegate(newValue: GKAchievementViewControllerDelegateProtocol); message 'setAchievementDelegate:';
    function achievementDelegate: GKAchievementViewControllerDelegateProtocol; message 'achievementDelegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  GKAchievementViewControllerDelegateProtocol = objcprotocol external name 'GKAchievementViewControllerDelegate' (NSObjectProtocol)
  required
    procedure achievementViewControllerDidFinish (viewController: GKAchievementViewController); message 'achievementViewControllerDidFinish:';
  end;
{$endif}

