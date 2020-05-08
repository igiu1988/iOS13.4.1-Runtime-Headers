/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICUserIdentity : NSObject <ML3AccountInformationProviding, NSCopying, NSSecureCoding> {
    NSNumber * _DSID;
    bool  _allowsAccountEstablishment;
    bool  _allowsDelegation;
    unsigned long long  _creationTime;
    NSString * _deviceIdentifier;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSNumber *DSID;
@property (nonatomic, readonly, copy) NSString *accountDSID;
@property (nonatomic, readonly) bool allowsAccountEstablishment;
@property (nonatomic, readonly) bool allowsDelegation;
@property (nonatomic, readonly) unsigned long long creationTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

+ (id)activeAccount;
+ (id)activeLockerAccount;
+ (id)autoupdatingActiveAccount;
+ (id)autoupdatingActiveLockerAccount;
+ (id)carrierBundleWithDeviceIdentifier:(id)arg1;
+ (id)nullIdentity;
+ (id)specificAccountWithDSID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DSID;
- (void)_ensureResolvedDSIDUsingSpecificIdentityStore:(id)arg1;
- (bool)_isComparableUsingResolvedDSID;
- (id)_resolvedDSIDUsingSpecificIdentityStore:(id)arg1;
- (void)_setResolvedDSID:(id)arg1;
- (bool)allowsAccountEstablishment;
- (bool)allowsDelegation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)creationTime;
- (id)description;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)hashInStore:(id)arg1;
- (id)identityAllowingDelegation:(bool)arg1;
- (id)identityAllowingEstablishment:(bool)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIdentity:(id)arg1 inStore:(id)arg2;
- (long long)type;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)accountDSID;

@end
