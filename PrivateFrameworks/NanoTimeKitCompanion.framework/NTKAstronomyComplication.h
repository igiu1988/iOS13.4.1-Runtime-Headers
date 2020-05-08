/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAstronomyComplication : NTKComplication {
    unsigned long long  _vista;
}

@property (nonatomic, readonly) unsigned long long vista;

+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (bool)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDailySnapshotKey;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (unsigned long long)vista;

@end
