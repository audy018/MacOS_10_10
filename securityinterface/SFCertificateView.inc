{ Parsed from SecurityInterface.framework (MacOSX10.10) SFCertificateView.h }
{ Created on Sun Mar 8 1:48:23 2015 }


{$ifdef TYPES}
type
  SFCertificateViewPtr = ^SFCertificateView;
{$endif}

{$ifndef _SFCERTIFICATEVIEW_H_}
{$ifdef CLASSES}

type
  SFCertificateView = objcclass external (NSView)
  private
    _reserved_SFCertificateView: id;
  public
    procedure setCertificate (certificate: SecCertificateRef); message 'setCertificate:';
    function certificate: SecCertificateRef; message 'certificate';
    procedure setPolicies (policies: id); message 'setPolicies:';
    function policies: NSArray; message 'policies';
    procedure setEditableTrust (editable: boolean); message 'setEditableTrust:';
    function isEditable: boolean; message 'isEditable';
    procedure setDisplayTrust (display: boolean); message 'setDisplayTrust:';
    function isTrustDisplayed: boolean; message 'isTrustDisplayed';
    procedure saveTrustSettings; message 'saveTrustSettings';
    procedure setDisplayDetails (display: boolean); message 'setDisplayDetails:';
    function detailsDisplayed: boolean; message 'detailsDisplayed';
    procedure setDetailsDisclosed (disclosed: boolean); message 'setDetailsDisclosed:';
    function detailsDisclosed: boolean; message 'detailsDisclosed';
    procedure setPoliciesDisclosed (disclosed: boolean); message 'setPoliciesDisclosed:';
    function policiesDisclosed: boolean; message 'policiesDisclosed';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SFCertificateViewDisclosureStateDidChange: NSString; cvar; external;
{$endif}

{$endif}
