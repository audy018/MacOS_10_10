{ Parsed from DiscRecording.framework (MacOSX10.10) DRContentFolder.h }
{ Created on Sun Mar 8 1:47:42 2015 }

{$ifndef _H_DRContentFolder}

{$ifdef FUNCTIONS}
function DRFolderGetTypeID: CFTypeID; cdecl; external;
function DRFolderCreateReal(fsRef: FSRefPtr): DRFolderRef; cdecl; external;
function DRFolderCreateRealWithURL(urlRef: CFURLRef): DRFolderRef; cdecl; external;
function DRFolderCreateVirtual(baseName: CFStringRef): DRFolderRef; cdecl; external;
procedure DRFolderConvertRealToVirtual(realFolder: DRFolderRef); cdecl; external;
procedure DRFolderAddChild(parent: DRFolderRef; newChild: DRFSObjectRef); cdecl; external;
procedure DRFolderRemoveChild(parent: DRFolderRef; child: DRFSObjectRef); cdecl; external;
function DRFolderCountChildren(folder: DRFolderRef): UInt32; cdecl; external;
function DRFolderCopyChildren(folder: DRFolderRef): CFArrayRef; cdecl; external;
{$endif}

{$endif}
