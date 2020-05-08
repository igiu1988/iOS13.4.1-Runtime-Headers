/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSPaymentSheetResult : NSObject {
    NSString * _passwordEquivalentToken;
    NSString * _paymentToken;
    AMSBiometricsSignatureResult * _signatureResult;
}

@property (nonatomic, retain) NSString *passwordEquivalentToken;
@property (nonatomic, retain) NSString *paymentToken;
@property (nonatomic, retain) AMSBiometricsSignatureResult *signatureResult;

- (void).cxx_destruct;
- (id)passwordEquivalentToken;
- (id)paymentToken;
- (void)setPasswordEquivalentToken:(id)arg1;
- (void)setPaymentToken:(id)arg1;
- (void)setSignatureResult:(id)arg1;
- (id)signatureResult;

@end