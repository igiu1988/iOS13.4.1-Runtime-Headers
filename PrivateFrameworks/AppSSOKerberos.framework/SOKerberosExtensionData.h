/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

@interface SOKerberosExtensionData : NSObject {
    bool  _allowAutomaticLogin;
    bool  _allowPasswordChange;
    NSString * _cacheName;
    NSString * _certificateUUID;
    NSArray * _credentialBundleIdACL;
    NSDictionary * _domainRealmMapping;
    bool  _isDefaultRealm;
    NSString * _principalName;
    NSString * _pwChangeURL;
    NSNumber * _pwExpireOverride;
    NSNumber * _pwNotificationDays;
    bool  _pwReqComplexity;
    NSNumber * _pwReqHistory;
    NSNumber * _pwReqLength;
    NSNumber * _pwReqMinAge;
    NSString * _pwReqText;
    NSNumber * _replicationTime;
    bool  _requireUserPresence;
    NSString * _siteCode;
    bool  _syncLocalPassword;
    bool  _useSiteAutoDiscovery;
}

@property (nonatomic) bool allowAutomaticLogin;
@property (nonatomic) bool allowPasswordChange;
@property (nonatomic, retain) NSString *cacheName;
@property (nonatomic, retain) NSString *certificateUUID;
@property (nonatomic, retain) NSArray *credentialBundleIdACL;
@property (nonatomic, retain) NSDictionary *domainRealmMapping;
@property (nonatomic) bool isDefaultRealm;
@property (nonatomic, retain) NSString *principalName;
@property (nonatomic, retain) NSString *pwChangeURL;
@property (nonatomic, retain) NSNumber *pwExpireOverride;
@property (nonatomic, retain) NSNumber *pwNotificationDays;
@property bool pwReqComplexity;
@property (nonatomic, retain) NSNumber *pwReqHistory;
@property (nonatomic, retain) NSNumber *pwReqLength;
@property (nonatomic, retain) NSNumber *pwReqMinAge;
@property (nonatomic, retain) NSString *pwReqText;
@property (nonatomic, retain) NSNumber *replicationTime;
@property (nonatomic) bool requireUserPresence;
@property (nonatomic, retain) NSString *siteCode;
@property bool syncLocalPassword;
@property (nonatomic) bool useSiteAutoDiscovery;

- (void).cxx_destruct;
- (bool)allowAutomaticLogin;
- (bool)allowPasswordChange;
- (id)cacheName;
- (id)certificateUUID;
- (id)credentialBundleIdACL;
- (id)domainRealmMapping;
- (id)initAndPopulateExtensionData;
- (id)initWithDictionary:(id)arg1;
- (bool)isDefaultRealm;
- (id)principalName;
- (id)pwChangeURL;
- (id)pwExpireOverride;
- (id)pwNotificationDays;
- (bool)pwReqComplexity;
- (id)pwReqHistory;
- (id)pwReqLength;
- (id)pwReqMinAge;
- (id)pwReqText;
- (id)replicationTime;
- (bool)requireUserPresence;
- (void)setAllowAutomaticLogin:(bool)arg1;
- (void)setAllowPasswordChange:(bool)arg1;
- (void)setCacheName:(id)arg1;
- (void)setCertificateUUID:(id)arg1;
- (void)setCredentialBundleIdACL:(id)arg1;
- (void)setDomainRealmMapping:(id)arg1;
- (void)setIsDefaultRealm:(bool)arg1;
- (void)setPrincipalName:(id)arg1;
- (void)setPwChangeURL:(id)arg1;
- (void)setPwExpireOverride:(id)arg1;
- (void)setPwNotificationDays:(id)arg1;
- (void)setPwReqComplexity:(bool)arg1;
- (void)setPwReqHistory:(id)arg1;
- (void)setPwReqLength:(id)arg1;
- (void)setPwReqMinAge:(id)arg1;
- (void)setPwReqText:(id)arg1;
- (void)setReplicationTime:(id)arg1;
- (void)setRequireUserPresence:(bool)arg1;
- (void)setSiteCode:(id)arg1;
- (void)setSyncLocalPassword:(bool)arg1;
- (void)setUseSiteAutoDiscovery:(bool)arg1;
- (id)siteCode;
- (bool)syncLocalPassword;
- (bool)useSiteAutoDiscovery;

@end
