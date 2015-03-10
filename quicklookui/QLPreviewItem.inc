{ Parsed from QuickLookUI.framework (MacOSX10.10) QLPreviewItem.h }
{ Created on Sun Mar 8 1:48:25 2015 }


{$ifdef TYPES}
type
  QLPreviewItemProtocolPtr = ^QLPreviewItemProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  QLPreviewItemProtocol = objcprotocol external name 'QLPreviewItem' (NSObjectProtocol)
  required
    function previewItemURL: NSURL; message 'previewItemURL';
  optional
    function previewItemTitle: NSString; message 'previewItemTitle';
    function previewItemDisplayState: id; message 'previewItemDisplayState';
  end;
{$endif}

{$ifdef CLASSES}

type
  QLPreviewConvenienceAdditions = objccategory external (NSURL)
  end;
{$endif}

