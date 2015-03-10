{ Parsed from WebKit.framework (MacOSX10.10) DOMCSSMediaRule.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMCSSMediaRulePtr = ^DOMCSSMediaRule;
{$endif}

{$ifdef CLASSES}

type
  DOMCSSMediaRule = objcclass external (DOMCSSRule)
  public
    function media: DOMMediaList; message 'media';
    function cssRules: DOMCSSRuleList; message 'cssRules';
    function insertRule_index (rule: NSString; index: cuint): cuint; message 'insertRule:index:'; { available in 10_5 }
    procedure deleteRule (index: cuint); message 'deleteRule:';
  end;


type
  DOMCSSMediaRuleDeprecated = objccategory external (DOMCSSMediaRule)
    function insertRule (rule: NSString): cuint; message 'insertRule:'; deprecated 'in 10_4, 10_5';
  end;
{$endif}

