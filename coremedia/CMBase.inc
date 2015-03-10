{ Parsed from CoreMedia.framework (MacOSX10.10) CMBase.h }
{ Created on Sun Mar 8 1:47:37 2015 }

{$ifndef CMBASE_H}

{$ifndef __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_7_0}
{$ifdef TYPES}
const
  __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_7_0 = WEAK_IMPORT_ATTRIBUTE;
{$endif}

{$endif}

{$if defined(TARGET_OS_WINDOWS) and defined(TARGET_CPU_X86_64)}
{$ifdef TYPES}
type
  CMItemCount = cint64;
  CMItemCountPtr = ^CMItemCount;
  CMItemIndex = cint64;
  CMItemIndexPtr = ^CMItemIndex;
{$endif}

{$else}
{$ifdef TYPES}
type
  CMItemCount = clong;
  CMItemCountPtr = ^CMItemCount;
  CMItemIndex = clong;
  CMItemIndexPtr = ^CMItemIndex;
{$endif}

{$endif}
{$ifdef TYPES}
type
  CMPersistentTrackID = cint32;
  CMPersistentTrackIDPtr = ^CMPersistentTrackID;

const
  kCMPersistentTrackID_Invalid = 0;
{$endif}

{$endif}
