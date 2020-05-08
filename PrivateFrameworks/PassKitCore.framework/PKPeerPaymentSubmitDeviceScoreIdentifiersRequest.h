/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentSubmitDeviceScoreIdentifiersRequest : PKPeerPaymentWebServiceRequest {
    NSString * _paymentIdentifier;
    NSUUID * _requestDeviceScoreIdentifier;
    NSUUID * _sendDeviceScoreIdentifier;
}

@property (nonatomic, copy) NSString *paymentIdentifier;
@property (nonatomic, copy) NSUUID *requestDeviceScoreIdentifier;
@property (nonatomic, copy) NSUUID *sendDeviceScoreIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)paymentIdentifier;
- (id)requestDeviceScoreIdentifier;
- (id)sendDeviceScoreIdentifier;
- (void)setPaymentIdentifier:(id)arg1;
- (void)setRequestDeviceScoreIdentifier:(id)arg1;
- (void)setSendDeviceScoreIdentifier:(id)arg1;

@end
