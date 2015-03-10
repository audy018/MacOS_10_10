{ Parsed from StoreKit.framework (MacOSX10.10) SKProduct.h }
{ Created on Sun Mar 8 1:48:22 2015 }


{$ifdef TYPES}
type
  SKProductPtr = ^SKProduct;
{$endif}

{$ifdef CLASSES}

type
  SKProduct = objcclass external (NSObject)
  private
    _internal: id;
  public
    function localizedDescription: NSString; message 'localizedDescription';
    function localizedTitle: NSString; message 'localizedTitle';
    function price: NSDecimalNumber; message 'price';
    function priceLocale: NSLocale; message 'priceLocale';
    function productIdentifier: NSString; message 'productIdentifier';
    function downloadable: boolean; message 'downloadable';
    function contentVersion: NSString; message 'contentVersion';
    function contentLengths: NSArray; message 'contentLengths';
  end;
{$endif}

