/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHealthStoreConfiguration : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _applicationSDKVersion;
    NSString * _debugIdentifier;
    HKProfileIdentifier * _profileIdentifier;
    NSString * _sourceBundleIdentifier;
}

@property (nonatomic, readonly) unsigned int applicationSDKVersion;
@property (nonatomic, readonly, copy) NSString *debugIdentifier;
@property (nonatomic, readonly, copy) HKProfileIdentifier *profileIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceBundleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)applicationSDKVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceBundleIdentifier:(id)arg1 debugIdentifier:(id)arg2 profileIdentifier:(id)arg3 applicationSDKVersion:(unsigned int)arg4;
- (bool)isEqual:(id)arg1;
- (id)profileIdentifier;
- (id)sourceBundleIdentifier;

@end
