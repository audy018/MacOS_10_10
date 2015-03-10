{ Parsed from WebKit.framework (MacOSX10.10) WKFoundation.h }
{ Created on Sun Mar 8 1:48:18 2015 }

{$if  not (defined(WK_API_ENABLED))}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
const
  WK_API_ENABLED = 1;
{$endif}

{$else}
{$endif}
{$endif}

