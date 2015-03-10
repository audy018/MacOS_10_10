{ Parsed from WebKit.framework (MacOSX10.10) DOMCSSCharsetRule.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMCSSCharsetRulePtr = ^DOMCSSCharsetRule;
{$endif}

{$ifdef CLASSES}

type
  DOMCSSCharsetRule = objcclass external (DOMCSSRule)
  public
    function encoding: NSString; message 'encoding';
  end;
{$endif}

