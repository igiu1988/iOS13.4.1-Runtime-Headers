/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessorySettings : HMSettings <HFStateDumpBuildable, HMFLogging, HMObjectMerge> {
    _HMContext * _context;
    <HMAccessorySettingsDelegate> * _delegate;
    HMFUnfairLock * _lock;
    HMAccessorySettingGroup * _rootGroup;
    <HMAccessorySettingsContainer> * _settingsContainer;
    <HMControllable> * _settingsControl;
}

@property (readonly) HMAccessory *accessory;
@property (nonatomic, readonly) _HMContext *context;
@property (getter=isControllable, readonly) bool controllable;
@property (readonly, copy) NSString *debugDescription;
@property <HMAccessorySettingsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMAccessorySettingGroup *rootGroup;
@property <HMAccessorySettingsContainer> *settingsContainer;
@property <HMControllable> *settingsControl;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)localizationKeyForKeyPath:(id)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)__notifyDelegateSettingsDidUpdate;
- (void)__notifyDelegateSettingsWillUpdateWithCompletionHanlder:(id /* block */)arg1;
- (void)_configureWithContext:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_updateSettingsWithBlock:(id /* block */)arg1;
- (id)accessory;
- (id)context;
- (id)delegate;
- (id)initWithSettingsContainer:(id)arg1 settingsControl:(id)arg2 rootGroup:(id)arg3;
- (bool)isControllable;
- (id)rootGroup;
- (void)setDelegate:(id)arg1;
- (void)setSettingsContainer:(id)arg1;
- (void)setSettingsControl:(id)arg1;
- (id)settingsContainer;
- (id)settingsControl;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
