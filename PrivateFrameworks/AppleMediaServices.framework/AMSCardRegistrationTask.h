/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSCardRegistrationTask : AMSTask {
    NSString * _countryCode;
    NSString * _merchantIdentifier;
}

@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *merchantIdentifier;

- (void).cxx_destruct;
- (id)_performCardRegistration;
- (id)countryCode;
- (id)initWithCountryCode:(id)arg1 merchantIdentifier:(id)arg2;
- (id)merchantIdentifier;
- (id)performCardRegistration;
- (void)setCountryCode:(id)arg1;
- (void)setMerchantIdentifier:(id)arg1;

@end
