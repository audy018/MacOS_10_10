{ Parsed from CryptoTokenKit.framework (MacOSX10.10) TKError.h }
{ Created on Sun Mar 8 1:48:58 2015 }

{$ifdef EXTERNAL_SYMBOLS}
var
  TKErrorDomain: NSString; cvar; external;
{$endif}

{$ifdef TYPES}
type
  TKErrorCode = NSInteger;
  TKErrorCodePtr = ^TKErrorCode;

const
  TKErrorCodeNotImplemented = -1;
  TKErrorCodeCommunicationError = -2;
  TKErrorCodeCorruptedData = -3;
  TKErrorCodeCanceledByUser = -4;
  TKErrorAuthenticationFailed = -5;
  TKErrorObjectNotFound = -6;
  TKErrorTokenNotFound = -7;
{$endif}

