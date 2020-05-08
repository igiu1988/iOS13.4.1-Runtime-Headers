/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionCarrierBundlingEligibilityResponse : NSObject {
    NSString * _SMSSessionIdentifier;
    long long  _carrierBundlingStatusType;
    NSString * _cellularProviderName;
    double  _delayInterval;
    NSError * _error;
    bool  _familySubscription;
    NSString * _headerEnrichmentMessage;
    NSString * _headerEnrichmentSessionIdentifier;
    NSURL * _headerEnrichmentURL;
    bool  _needsHeaderEnrichment;
    bool  _needsSilentSMS;
    NSString * _phoneNumber;
    NSString * _silentSMSMessage;
    NSString * _silentSMSNumber;
    bool  _wantsDelayedRetry;
}

@property (nonatomic, readonly) NSString *SMSSessionIdentifier;
@property (nonatomic, readonly) long long carrierBundlingStatusType;
@property (nonatomic, readonly) NSString *cellularProviderName;
@property (nonatomic, readonly) double delayInterval;
@property (nonatomic, readonly) NSError *error;
@property (getter=isFamilySubscription, nonatomic, readonly) bool familySubscription;
@property (nonatomic, readonly) NSString *headerEnrichmentMessage;
@property (nonatomic, readonly) NSString *headerEnrichmentSessionIdentifier;
@property (nonatomic, readonly) NSURL *headerEnrichmentURL;
@property (nonatomic, readonly) bool needsHeaderEnrichment;
@property (nonatomic, readonly) bool needsSilentSMS;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *silentSMSMessage;
@property (nonatomic, readonly) NSString *silentSMSNumber;
@property (nonatomic, readonly) bool wantsDelayedRetry;

- (void).cxx_destruct;
- (id)SMSSessionIdentifier;
- (long long)carrierBundlingStatusType;
- (id)cellularProviderName;
- (double)delayInterval;
- (id)error;
- (id)headerEnrichmentMessage;
- (id)headerEnrichmentSessionIdentifier;
- (id)headerEnrichmentURL;
- (id)initWithEligibilityDictionary:(id)arg1 cellularProviderName:(id)arg2 phoneNumber:(id)arg3;
- (bool)isFamilySubscription;
- (bool)needsHeaderEnrichment;
- (bool)needsSilentSMS;
- (id)phoneNumber;
- (id)silentSMSMessage;
- (id)silentSMSNumber;
- (bool)wantsDelayedRetry;

@end
