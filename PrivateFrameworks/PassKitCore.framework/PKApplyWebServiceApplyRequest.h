/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKApplyWebServiceApplyRequest : PKApplyWebServiceRequest {
    NSString * _actionIdentifier;
    NSString * _applicationIdentifier;
    NSURL * _baseURL;
    NSArray * _certificates;
    NSString * _coreIDVNextStepToken;
    unsigned long long  _featureIdentifier;
    NSDecimalNumber * _installmentAmount;
    NSString * _installmentCurrencyCode;
    bool  _isInstallment;
    NSString * _previousContextIdentifier;
}

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, copy) NSArray *certificates;
@property (nonatomic, copy) NSString *coreIDVNextStepToken;
@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic, retain) NSDecimalNumber *installmentAmount;
@property (nonatomic, copy) NSString *installmentCurrencyCode;
@property (nonatomic) bool isInstallment;
@property (nonatomic, copy) NSString *previousContextIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)actionIdentifier;
- (id)applicationIdentifier;
- (id)baseURL;
- (id)certificates;
- (id)coreIDVNextStepToken;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)featureIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)installmentAmount;
- (id)installmentCurrencyCode;
- (bool)isInstallment;
- (id)previousContextIdentifier;
- (void)setActionIdentifier:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setCertificates:(id)arg1;
- (void)setCoreIDVNextStepToken:(id)arg1;
- (void)setFeatureIdentifier:(unsigned long long)arg1;
- (void)setInstallmentAmount:(id)arg1;
- (void)setInstallmentCurrencyCode:(id)arg1;
- (void)setIsInstallment:(bool)arg1;
- (void)setPreviousContextIdentifier:(id)arg1;

@end
