{ Parsed from WebKit.framework (MacOSX10.10) DOMCSSFontFaceRule.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMCSSFontFaceRulePtr = ^DOMCSSFontFaceRule;
{$endif}

{$ifdef CLASSES}

type
  DOMCSSFontFaceRule = objcclass external (DOMCSSRule)
  public
    function style: DOMCSSStyleDeclaration; message 'style';
  end;
{$endif}

