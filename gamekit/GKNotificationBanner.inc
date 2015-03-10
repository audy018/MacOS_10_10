{ Parsed from GameKit.framework (MacOSX10.10) GKNotificationBanner.h }
{ Created on Sun Mar 8 1:46:49 2015 }


{$ifdef TYPES}
type
  GKNotificationBannerPtr = ^GKNotificationBanner;
{$endif}

{$ifdef CLASSES}

type
  GKNotificationBanner = objcclass external (NSObject)
  public
    class procedure showBannerWithTitle_message_completionHandler (title: NSString; message_: NSString; completionHandler: OpaqueCBlock); message 'showBannerWithTitle:message:completionHandler:'; { available in 10_8, 5_0 }
    class procedure showBannerWithTitle_message_duration_completionHandler (title: NSString; message_: NSString; duration: NSTimeInterval; completionHandler: OpaqueCBlock); message 'showBannerWithTitle:message:duration:completionHandler:'; { available in 10_8, 6_0 }
  end;
{$endif}

