/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSecureElementConsistencyChecker : NSObject {
    <PKCloudStoreCoordinatorDelegate> * _cloudStoreCoordinatorDelegate;
    <PKSecureElementConsistencyCheckerDelegate> * _delegate;
    PKPaymentWebService * _paymentWebService;
    NSObject<OS_dispatch_queue> * _processingQueue;
}

@property (nonatomic) <PKSecureElementConsistencyCheckerDelegate> *delegate;
@property (nonatomic, retain) PKPaymentWebService *paymentWebService;

+ (id)checkConsistencyWithDeviceState:(id)arg1 registeredRegions:(id)arg2;
+ (long long)cleanupActionsForApplet:(id)arg1 withAssociatedPaymentApplication:(id)arg2;
+ (long long)cleanupActionsForDeviceCredential:(id)arg1 withAssociatedPassCredential:(id)arg2;
+ (bool)isCheckingConsistencyForSecureElementID:(id)arg1;

- (void).cxx_destruct;
- (bool)_downloadPasses;
- (void)_rescheduleWithBackoff;
- (id)delegate;
- (id)initWithPaymentWebService:(id)arg1 delegate:(id)arg2;
- (id)initWithPaymentWebService:(id)arg1 delegate:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3;
- (id)paymentWebService;
- (void)queue_startWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPaymentWebService:(id)arg1;
- (void)startWithCompletion:(id /* block */)arg1;

@end
