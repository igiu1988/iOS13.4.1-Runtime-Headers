/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDiscoveryObject : NSObject <NSCopying, NSSecureCoding> {
    PKHardwareVersionRange * _hardwareVersionRange;
    NSString * _identifier;
    long long  _maxViewCount;
    PKOSVersionRequirementRange * _osVersionRange;
    PKDiscoveryRelevantDateRange * _relevantDateRange;
    NSString * _ruleIdentifier;
    long long  _status;
    NSArray * _triggers;
    long long  _version;
    long long  _viewCount;
}

@property (nonatomic, retain) PKHardwareVersionRange *hardwareVersionRange;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long maxViewCount;
@property (nonatomic, retain) PKOSVersionRequirementRange *osVersionRange;
@property (nonatomic, retain) PKDiscoveryRelevantDateRange *relevantDateRange;
@property (nonatomic, copy) NSString *ruleIdentifier;
@property (nonatomic) long long status;
@property (nonatomic, retain) NSArray *triggers;
@property (nonatomic) long long version;
@property (nonatomic) long long viewCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hardwareVersionRange;
- (bool)hasTriggers;
- (unsigned long long)hash;
- (id)identifier;
- (void)incrementViewCount;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTerminalStatus;
- (bool)isValidForTime:(id)arg1;
- (long long)maxViewCount;
- (id)osVersionRange;
- (id)relevantDateRange;
- (id)ruleIdentifier;
- (void)setHardwareVersionRange:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMaxViewCount:(long long)arg1;
- (void)setOsVersionRange:(id)arg1;
- (void)setRelevantDateRange:(id)arg1;
- (void)setRuleIdentifier:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTriggers:(id)arg1;
- (void)setVersion:(long long)arg1;
- (void)setViewCount:(long long)arg1;
- (long long)status;
- (id)triggers;
- (void)updateForRuleResult:(bool)arg1;
- (bool)updateWithDiscoveryObject:(id)arg1;
- (void)updatedStatusForAction:(long long)arg1;
- (long long)version;
- (long long)viewCount;

@end
