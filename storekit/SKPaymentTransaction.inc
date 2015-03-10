{ Parsed from StoreKit.framework (MacOSX10.10) SKPaymentTransaction.h }
{ Created on Sun Mar 8 1:48:22 2015 }


{$ifdef TYPES}
type
  SKPaymentTransactionPtr = ^SKPaymentTransaction;
{$endif}

{$ifdef TYPES}
const
  SKPaymentTransactionStatePurchasing = 0;
  SKPaymentTransactionStatePurchased = 1;
  SKPaymentTransactionStateFailed = 2;
  SKPaymentTransactionStateRestored = 3;
  SKPaymentTransactionStateDeferred = 4;

type
  SKPaymentTransactionState = NSInteger;
  SKPaymentTransactionStatePtr = ^SKPaymentTransactionState;
{$endif}

{$ifdef CLASSES}

type
  SKPaymentTransaction = objcclass external (NSObject)
  private
    _internal: id;
  public
    function error: NSError; message 'error';
    function originalTransaction: SKPaymentTransaction; message 'originalTransaction';
    function payment: SKPayment; message 'payment';
    function transactionDate: NSDate; message 'transactionDate';
    function transactionIdentifier: NSString; message 'transactionIdentifier';
    function downloads: NSArray; message 'downloads';
    function transactionState: SKPaymentTransactionState; message 'transactionState';
  end;
{$endif}

