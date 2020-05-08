/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSPerson : CLSObject <CLSContactsSearchable> {
    NSString * _appleID;
    NSString * _emailAddress;
    NSString * _familyName;
    bool  _federatedAccount;
    NSString * _givenName;
    NSString * _grade;
    NSString * _iCloudUserID;
    bool  _isEditable;
    bool  _isSearchable;
    NSString * _middleName;
    NSString * _orgID;
    long long  _passcodeType;
    NSString * _phoneticFamilyName;
    NSString * _phoneticGivenName;
    NSString * _phoneticMiddleName;
    bool  _progressTrackingAllowed;
    NSString * _searchText;
    long long  _sourceType;
}

@property (nonatomic, copy) NSString *appleID;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSString *familyName;
@property (getter=isFederatedAccount, nonatomic) bool federatedAccount;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, copy) NSString *grade;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, copy) NSString *iCloudUserID;
@property (getter=isEditable, nonatomic) bool isEditable;
@property (getter=isSearchable, nonatomic) bool isSearchable;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, readonly) NSPersonNameComponents *nameComponents;
@property (nonatomic, copy) NSString *orgID;
@property (nonatomic) long long passcodeType;
@property (nonatomic, copy) NSString *phoneticFamilyName;
@property (nonatomic, copy) NSString *phoneticGivenName;
@property (nonatomic, copy) NSString *phoneticMiddleName;
@property (getter=isProgressTrackingAllowed, nonatomic) bool progressTrackingAllowed;
@property (nonatomic, copy) NSString *searchText;
@property (nonatomic) long long sourceType;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

+ (unsigned long long)roleFromString:(id)arg1;
+ (id)stringForRole:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)appleID;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)givenName;
- (id)grade;
- (id)iCloudUserID;
- (id)initWithCoder:(id)arg1;
- (bool)isEditable;
- (bool)isFederatedAccount;
- (bool)isProgressTrackingAllowed;
- (bool)isSearchable;
- (id)middleName;
- (id)nameComponents;
- (id)orgID;
- (long long)passcodeType;
- (id)phoneticFamilyName;
- (id)phoneticGivenName;
- (id)phoneticMiddleName;
- (id)searchText;
- (void)setAppleID:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setFederatedAccount:(bool)arg1;
- (void)setGivenName:(id)arg1;
- (void)setGrade:(id)arg1;
- (void)setICloudUserID:(id)arg1;
- (void)setIsEditable:(bool)arg1;
- (void)setIsSearchable:(bool)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setOrgID:(id)arg1;
- (void)setPasscodeType:(long long)arg1;
- (void)setPhoneticFamilyName:(id)arg1;
- (void)setPhoneticGivenName:(id)arg1;
- (void)setPhoneticMiddleName:(id)arg1;
- (void)setProgressTrackingAllowed:(bool)arg1;
- (void)setSearchText:(id)arg1;
- (void)setSourceType:(long long)arg1;
- (long long)sourceType;

// Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete

- (void)acceptVisitor:(id)arg1;

@end
