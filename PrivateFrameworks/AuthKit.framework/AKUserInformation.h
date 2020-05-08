/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKUserInformation : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _accountAliases;
    NSString * _accountName;
    NSDictionary * _additionalInfo;
    NSString * _ageOfMajority;
    unsigned long long  _appleIDSecurityLevel;
    unsigned long long  _authMode;
    NSString * _authorizedApplicationsListVersion;
    NSString * _familyName;
    NSString * _forwardingEmail;
    NSString * _givenName;
    NSNumber * _hasUsedAuthorization;
    NSNumber * _isLegacyStudent;
    NSNumber * _isUnderage;
    NSString * _masterKeyID;
    NSNumber * _phoneAsAppleID;
    NSString * _previouslySelectedEmail;
    NSNumber * _previouslyWantedPrivateEmail;
    NSArray * _reachableEmails;
    unsigned long long  _repairState;
    NSString * _selectedEmail;
    NSNumber * _vettedPrimaryEmail;
}

@property (nonatomic, copy) NSArray *accountAliases;
@property (nonatomic, copy) NSString *accountName;
@property (nonatomic, copy) NSDictionary *additionalInfo;
@property (nonatomic, copy) NSString *ageOfMajority;
@property (nonatomic) unsigned long long appleIDSecurityLevel;
@property (nonatomic) unsigned long long authMode;
@property (nonatomic, copy) NSString *authorizedApplicationsListVersion;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSString *forwardingEmail;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, copy) NSNumber *hasUsedAuthorization;
@property (nonatomic, copy) NSNumber *isLegacyStudent;
@property (nonatomic, copy) NSNumber *isUnderage;
@property (nonatomic, copy) NSString *masterKeyID;
@property (nonatomic, copy) NSNumber *phoneAsAppleID;
@property (nonatomic, copy) NSString *previouslySelectedEmail;
@property (nonatomic, copy) NSNumber *previouslyWantedPrivateEmail;
@property (nonatomic, copy) NSArray *reachableEmails;
@property (nonatomic) unsigned long long repairState;
@property (nonatomic, copy) NSString *selectedEmail;
@property (nonatomic, copy) NSNumber *vettedPrimaryEmail;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountAliases;
- (id)accountName;
- (id)additionalInfo;
- (id)ageOfMajority;
- (unsigned long long)appleIDSecurityLevel;
- (unsigned long long)authMode;
- (id)authorizedApplicationsListVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)forwardingEmail;
- (id)givenName;
- (id)hasUsedAuthorization;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseBody:(id)arg1;
- (id)isLegacyStudent;
- (id)isUnderage;
- (id)masterKeyID;
- (id)phoneAsAppleID;
- (id)previouslySelectedEmail;
- (id)previouslyWantedPrivateEmail;
- (id)reachableEmails;
- (unsigned long long)repairState;
- (id)selectedEmail;
- (void)setAccountAliases:(id)arg1;
- (void)setAccountName:(id)arg1;
- (void)setAdditionalInfo:(id)arg1;
- (void)setAgeOfMajority:(id)arg1;
- (void)setAppleIDSecurityLevel:(unsigned long long)arg1;
- (void)setAuthMode:(unsigned long long)arg1;
- (void)setAuthorizedApplicationsListVersion:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setForwardingEmail:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setHasUsedAuthorization:(id)arg1;
- (void)setIsLegacyStudent:(id)arg1;
- (void)setIsUnderage:(id)arg1;
- (void)setMasterKeyID:(id)arg1;
- (void)setPhoneAsAppleID:(id)arg1;
- (void)setPreviouslySelectedEmail:(id)arg1;
- (void)setPreviouslyWantedPrivateEmail:(id)arg1;
- (void)setReachableEmails:(id)arg1;
- (void)setRepairState:(unsigned long long)arg1;
- (void)setSelectedEmail:(id)arg1;
- (void)setVettedPrimaryEmail:(id)arg1;
- (id)vettedPrimaryEmail;

@end
