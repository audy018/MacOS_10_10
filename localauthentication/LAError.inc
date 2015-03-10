{ Parsed from LocalAuthentication.framework (MacOSX10.10) LAError.h }
{ Created on Sun Mar 8 1:49:15 2015 }

{$ifdef TYPES}
type
  LAError = NSInteger;
  LAErrorPtr = ^LAError;

const
  LAErrorAuthenticationFailed = kLAErrorAuthenticationFailed;
  LAErrorUserCancel = kLAErrorUserCancel;
  LAErrorUserFallback = kLAErrorUserFallback;
  LAErrorSystemCancel = kLAErrorSystemCancel;
  LAErrorPasscodeNotSet = kLAErrorPasscodeNotSet;
  LAErrorTouchIDNotAvailable = kLAErrorTouchIDNotAvailable;
  LAErrorTouchIDNotEnrolled = kLAErrorTouchIDNotEnrolled;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  LAErrorDomain: NSString { available in 10_10, 8_0 }; cvar; external;
{$endif}

