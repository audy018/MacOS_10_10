{ Parsed from NotificationCenter.framework (MacOSX10.10) NCWidgetController.h }
{ Created on Sun Mar 8 1:49:09 2015 }


{$ifdef TYPES}
type
  NCWidgetControllerPtr = ^NCWidgetController;
{$endif}

{$ifdef CLASSES}

type
  NCWidgetController = objcclass external (NSObject)
  public
    class function widgetController: instancetype; message 'widgetController';
    class function defaultWidgetController: NCWidgetController; message 'defaultWidgetController'; deprecated 'in "Use widgetController instead."';
    procedure setHasContent_forWidgetWithBundleIdentifier (flag: boolean; bundleID: NSString); message 'setHasContent:forWidgetWithBundleIdentifier:';
  end;
{$endif}

