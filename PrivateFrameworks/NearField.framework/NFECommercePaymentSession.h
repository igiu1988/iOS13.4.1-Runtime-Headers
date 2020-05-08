/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFECommercePaymentSession : NFSession <NFECommercePaymentSessionCallbacks> {
    NSDictionary * _appletsById;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)allApplets;
- (id)appletWithIdentifier:(id)arg1;
- (void)dealloc;
- (void)didStartSession:(id)arg1;
- (id)performECommercePayment:(id)arg1 request:(id)arg2;
- (id)performECommercePayment:(id)arg1 request:(id)arg2 error:(id*)arg3;

@end
