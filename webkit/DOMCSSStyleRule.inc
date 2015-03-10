{ Parsed from WebKit.framework (MacOSX10.10) DOMCSSStyleRule.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMCSSStyleRulePtr = ^DOMCSSStyleRule;
{$endif}

{$ifdef CLASSES}

type
  DOMCSSStyleRule = objcclass external (DOMCSSRule)
  public
    procedure setSelectorText(newValue: NSString); message 'setSelectorText:';
    function selectorText: NSString; message 'selectorText';
    function style: DOMCSSStyleDeclaration; message 'style';
  end;
{$endif}

