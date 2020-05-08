/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

@interface TPSDeliveryInfo : TPSDeliveryObject {
    long long  _customizationID;
    TPSDeliveryCondition * _desiredOutcomeCondition;
    NSString * _displayBundleID;
    long long  _displayMaxCount;
    NSArray * _eligibleContext;
    NSString * _identifier;
    NSString * _lastModifiedDate;
    int  _priority;
    TPSDeliveryCondition * _triggerCondition;
    NSArray * _usageEvents;
}

@property (nonatomic) long long customizationID;
@property (nonatomic, copy) TPSDeliveryCondition *desiredOutcomeCondition;
@property (nonatomic, copy) NSString *displayBundleID;
@property (nonatomic) long long displayMaxCount;
@property (nonatomic, copy) NSArray *eligibleContext;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *lastModifiedDate;
@property (nonatomic, readonly) int priority;
@property (nonatomic, copy) TPSDeliveryCondition *triggerCondition;
@property (nonatomic, copy) NSArray *usageEvents;

+ (id)classSet;
+ (void)eventsInfoArrayForDeliveryInfoDictionary:(id)arg1 triggerEvents:(id*)arg2 desiredOutcomeEvents:(id*)arg3;
+ (id)identifierFromDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_lastModifiedDateFromDictionary:(id)arg1;
- (id)conditionForType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)customizationID;
- (id)debugDescription;
- (id)desiredOutcomeCondition;
- (id)desiredOutcomeEventIdentifiers;
- (id)dismissalEventIdentifiers;
- (id)displayBundleID;
- (long long)displayMaxCount;
- (id)eligibleContext;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasChangesFromDictionary:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)lastModifiedDate;
- (int)priority;
- (void)restartDesiredOutcomeTracking;
- (void)restartTriggerTracking;
- (void)setCustomizationID:(long long)arg1;
- (void)setDesiredOutcomeCondition:(id)arg1;
- (void)setDisplayBundleID:(id)arg1;
- (void)setDisplayMaxCount:(long long)arg1;
- (void)setEligibleContext:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setTriggerCondition:(id)arg1;
- (void)setUsageEvents:(id)arg1;
- (id)triggerCondition;
- (id)triggerEventIdentifiers;
- (id)usageEvents;

@end
