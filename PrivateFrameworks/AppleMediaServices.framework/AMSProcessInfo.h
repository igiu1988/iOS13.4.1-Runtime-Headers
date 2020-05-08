/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSProcessInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountMediaType;
    NSData * _auditTokenData;
    NSString * _bundleIdentifier;
    NSURL * _bundleURL;
    NSString * _clientVersion;
    NSString * _executableName;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSString * _localizedName;
    AMSMappedBundleInfo * _mappedBundleInfo;
    NSString * _partnerHeader;
    NSString * _proxyAppBundleID;
}

@property (nonatomic, retain) NSString *accountMediaType;
@property (nonatomic, retain) NSData *auditTokenData;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSURL *bundleURL;
@property (nonatomic, retain) NSString *clientVersion;
@property (nonatomic, retain) NSString *executableName;
@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic, readonly) AMSMappedBundleInfo *mappedBundleInfo;
@property (nonatomic, retain) NSString *partnerHeader;
@property (nonatomic, retain) NSString *proxyAppBundleID;

+ (void)_accessProcessInfoCache:(id /* block */)arg1;
+ (void)_cacheProcessInfo:(id)arg1;
+ (id)_cachedProcessInfoForIdentifier:(id)arg1;
+ (id)_currentProcessBundleIdentifier;
+ (bool)boolForEntitlement:(id)arg1;
+ (bool)boolForMachLookupAccess:(id)arg1;
+ (id)bundleForIdentifier:(id)arg1;
+ (void)copyPropertiesFrom:(id)arg1 to:(id)arg2;
+ (id)currentProcess;
+ (id)defaultMediaTypeAccessQueue;
+ (id)defaultMediaTypeForCurrentProcess;
+ (bool)isBuddyRunning;
+ (void)setDefaultMediaTypeForCurrentProcess:(id)arg1;
+ (id)stringForEntitlement:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)valueForEntitlement:(id)arg1;

- (void).cxx_destruct;
- (id)accountMediaType;
- (id)auditTokenData;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)clientVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)executableName;
- (id)generateConfiguration;
- (id)generateConfigurationFromBag:(id)arg1;
- (id)generateConfigurationFromBagContract:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (id)mappedBundleInfo;
- (id)partnerHeader;
- (id)proxyAppBundleID;
- (void)setAccountMediaType:(id)arg1;
- (void)setAuditTokenData:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleURL:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setExecutableName:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setPartnerHeader:(id)arg1;
- (void)setProxyAppBundleID:(id)arg1;

@end
