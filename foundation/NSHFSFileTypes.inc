{ Parsed from Foundation.framework (MacOSX10.10) NSHFSFileTypes.h }
{ Created on Sun Mar 8 1:49:15 2015 }

{$ifdef FUNCTIONS}
function NSFileTypeForHFSTypeCode(hfsFileTypeCode: OSType): NSString; cdecl; external;
function NSHFSTypeCodeFromFileType(fileTypeString: NSString): OSType; cdecl; external;
function NSHFSTypeOfFile(fullFilePath: NSString): NSString; cdecl; external;
{$endif}

