/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFDemoModeAccessoryItem : HFItem <HFGroupableItemProtocol, HFItemBuilderItem, HFServiceLikeBuilderCreating, HFServiceLikeItem> {
    HMAccessory * _accessory;
    NSDictionary * _configInfo;
}

@property (nonatomic) HMAccessory *accessory;
@property (nonatomic, retain) NSDictionary *configInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) bool isContainedWithinItemGroup;
@property (nonatomic, readonly) bool isItemGroup;
@property (nonatomic, readonly) unsigned long long numberOfItemsContainedWithinGroup;
@property (nonatomic, readonly) NSSet *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

+ (id)accessoryItemForAccessory:(id)arg1;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)accessory;
- (id)configInfo;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)hf_serviceNameComponents;
- (id)home;
- (id)homeKitObject;
- (id)initWithAccessory:(id)arg1;
- (bool)isContainedWithinItemGroup;
- (bool)isItemGroup;
- (bool)isMediaSystemDemoType;
- (id)mediaProfileContainer;
- (id)namingComponentForHomeKitObject;
- (unsigned long long)numberOfItemsContainedWithinGroup;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)services;
- (void)setAccessory:(id)arg1;
- (void)setConfigInfo:(id)arg1;
- (id)valueSource;

@end
