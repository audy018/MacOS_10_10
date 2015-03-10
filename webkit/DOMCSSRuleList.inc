{ Parsed from WebKit.framework (MacOSX10.10) DOMCSSRuleList.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  DOMCSSRuleListPtr = ^DOMCSSRuleList;
{$endif}

{$ifdef CLASSES}

type
  DOMCSSRuleList = objcclass external (DOMObject)
  public
    function length: cuint; message 'length';
    function item (index: cuint): DOMCSSRule; message 'item:';
  end;
{$endif}

