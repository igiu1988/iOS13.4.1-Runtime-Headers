/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSetRadioStationIntent : INIntent <INSetRadioStationIntentExport>

@property (nonatomic, readonly, copy) NSString *channel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *frequency;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *presetNumber;
@property (nonatomic, readonly) long long radioType;
@property (nonatomic, readonly, copy) NSString *stationName;
@property (readonly) Class superclass;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)channel;
- (id)domain;
- (id)frequency;
- (id)initWithRadioType:(long long)arg1 frequency:(id)arg2 stationName:(id)arg3 channel:(id)arg4 presetNumber:(id)arg5;
- (id)parametersByName;
- (id)presetNumber;
- (long long)radioType;
- (void)setChannel:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setFrequency:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPresetNumber:(id)arg1;
- (void)setRadioType:(long long)arg1;
- (void)setStationName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)stationName;
- (id)verb;

@end
