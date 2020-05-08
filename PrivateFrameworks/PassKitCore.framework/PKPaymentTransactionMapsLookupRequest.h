/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentTransactionMapsLookupRequest : NSObject {
    bool  _clearingAttempt;
    NSObject<OS_dispatch_queue> * _internalQueue;
    PKPaymentApplication * _paymentApplication;
    PKPaymentTransaction * _transaction;
}

@property (getter=isClearingAttempt, nonatomic) bool clearingAttempt;

- (void).cxx_destruct;
- (id)_brandFromMapItem:(id)arg1;
- (id)_merchantFromMapItem:(id)arg1;
- (id)_merchantLookupRequest;
- (id)initWithTransaction:(id)arg1 paymentApplication:(id)arg2;
- (bool)isClearingAttempt;
- (void)setClearingAttempt:(bool)arg1;
- (void)startLookupWithCompletion:(id /* block */)arg1;

@end
