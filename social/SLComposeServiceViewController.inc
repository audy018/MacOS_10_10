{ Parsed from Social.framework (MacOSX10.10) SLComposeServiceViewController.h }
{ Created on Sun Mar 8 1:46:54 2015 }


{ Types from SLComposeServiceViewController }
{$ifdef TYPES}





{$endif}


{$ifdef TYPES}
type
  SLComposeServiceViewControllerPtr = ^SLComposeServiceViewController;
{$endif}

{$ifdef CLASSES}

type
  SLComposeServiceViewController = objcclass external (UIViewController, UITextViewDelegateProtocol)
  public
    procedure presentationAnimationDidFinish; message 'presentationAnimationDidFinish';
    {$if defined(TARGET_OS_IPHONE)}
    function textView: UITextViewPtr; message 'textView';
    {$else}
    function textView_: NSTextView; message 'textView';
    {$endif}
    function contentText: NSString; message 'contentText';
    procedure setPlaceholder(newValue: NSString); message 'setPlaceholder:';
    function placeholder: NSString; message 'placeholder';
    procedure didSelectPost; message 'didSelectPost';
    procedure didSelectCancel; message 'didSelectCancel';
    procedure cancel; message 'cancel';
    function isContentValid: boolean; message 'isContentValid';
    procedure validateContent; message 'validateContent';
    procedure setCharactersRemaining(newValue: NSNumber); message 'setCharactersRemaining:';
    function charactersRemaining: NSNumber; message 'charactersRemaining';
    {$if defined(TARGET_OS_IPHONE)}
    function configurationItems: NSArray; message 'configurationItems';
    procedure reloadConfigurationItems; message 'reloadConfigurationItems';
    procedure pushConfigurationViewController (viewController: UIViewController); message 'pushConfigurationViewController:';
    procedure popConfigurationViewController; message 'popConfigurationViewController';
    {$endif}
    {$if defined(TARGET_OS_IPHONE)}
    function loadPreviewView: UIViewPtr; message 'loadPreviewView';
    {$endif}
    {$if defined(TARGET_OS_IPHONE)}
    procedure setAutoCompletionViewController(newValue: UIViewController); message 'setAutoCompletionViewController:';
    function autoCompletionViewController: UIViewController; message 'autoCompletionViewController';
    {$endif}
  end;
{$endif}

