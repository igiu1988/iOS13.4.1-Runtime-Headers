/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSCardEnrollmentPaymentSessionTask : AMSTask <AMSBagConsumer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_bagKeySet;
+ (id)_paymentServiceURLStringForMerchantURL:(id)arg1;
+ (id)_performSilentEnrollmentPaymentSessionWithContext:(id)arg1;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (void)paymentSessionWithBag:(id)arg1 completion:(id /* block */)arg2;
+ (void)paymentSessionWithCompletion:(id /* block */)arg1;
+ (id)performPaymentSessionEnrollment;
+ (id)performPaymentSessionEnrollmentWithBag:(id)arg1;

@end
