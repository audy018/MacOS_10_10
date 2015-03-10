{ Parsed from WebKit.framework (MacOSX10.10) DOMCSSImportRule.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMCSSImportRulePtr = ^DOMCSSImportRule;
{$endif}

{$ifdef CLASSES}

type
  DOMCSSImportRule = objcclass external (DOMCSSRule)
  public
    function href: NSString; message 'href';
    function media: DOMMediaList; message 'media';
    function styleSheet: DOMCSSStyleSheet; message 'styleSheet';
  end;
{$endif}

