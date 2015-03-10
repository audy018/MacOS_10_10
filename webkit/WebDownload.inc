{ Parsed from WebKit.framework (MacOSX10.10) WebDownload.h }
{ Created on Sun Mar 8 1:48:19 2015 }


{$ifdef TYPES}
type
  WebDownloadPtr = ^WebDownload;
{$endif}

{$ifdef CLASSES}

type
  WebDownload = objcclass external (NSURLDownload)
  private
    _webInternal: WebDownloadInternal;
  end;


type
  WebDownloadDelegate = objccategory external (NSObject)
    function downloadWindowForAuthenticationSheet (download: WebDownload): NSWindow; message 'downloadWindowForAuthenticationSheet:';
  end;
{$endif}

