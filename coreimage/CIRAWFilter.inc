{ Parsed from CoreImage.framework (MacOSX10.10) CIRAWFilter.h }
{ Created on Sun Mar 8 1:47:45 2015 }

{$ifdef CLASSES}

type
  CIRAWFilter = objccategory external (CIFilter)
    class function filterWithImageURL_options (url: NSURL; options: NSDictionary): CIFilter; message 'filterWithImageURL:options:';
    class function filterWithImageData_options (data: NSData; options: NSDictionary): CIFilter; message 'filterWithImageData:options:';
  end;
{$endif}

