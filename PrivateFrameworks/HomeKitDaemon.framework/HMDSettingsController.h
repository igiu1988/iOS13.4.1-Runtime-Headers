/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSettingsController : HMFObject <HMDSettingTransactionReceiverProtocol, HMDSettingsControllerProtocol, HMDSettingsMessageController, HMFLogging> {
    <HMDSettingsControllerDelegate> * _delegate;
    <HMDSettingsControllerDependency> * _dependency;
    NSMapTable * _groupsMap;
    <HMDSettingsMessageHandlerProtocol> * _messageHandler;
    <HMDSettingGroupOwnerProtocol> * _rootGroup;
    NSMapTable * _settingsMap;
}

@property (readonly) NSArray *allObjectIdentifiers;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDSettingsControllerDelegate> *delegate;
@property (readonly) <HMDSettingsControllerDependency> *dependency;
@property (readonly, copy) NSString *description;
@property (retain) NSMapTable *groupsMap;
@property (readonly) unsigned long long hash;
@property (readonly) <HMDSettingsMessageHandlerProtocol> *messageHandler;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (retain) <HMDSettingGroupOwnerProtocol> *rootGroup;
@property (retain) NSMapTable *settingsMap;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_flattenedSettingControllerRoot:(id)arg1 withCurrentPath:(id)arg2 andReturnDictionary:(id)arg3;
- (void)_handleAddedRootGroup:(id)arg1;
- (id)_keyPathsFromGroup:(id)arg1 currentPath:(id)arg2;
- (id)_keyPathsToModelInModelIDToModelLookup:(id)arg1 parentIDToModelIDsLookup:(id)arg2 currentID:(id)arg3 currentPath:(id)arg4;
- (void)_updateRootGroup:(id)arg1;
- (id)allObjectIdentifiers;
- (void)configure;
- (id)delegate;
- (id)dependency;
- (void)encodeWithCoder:(id)arg1;
- (id)groupsMap;
- (void)handleAddedConstraintModel:(id)arg1 completion:(id /* block */)arg2;
- (void)handleAddedConstraintModel:(id)arg1 shouldNotify:(bool)arg2 completion:(id /* block */)arg3;
- (void)handleAddedGroupModel:(id)arg1 completion:(id /* block */)arg2;
- (void)handleAddedGroupModel:(id)arg1 shouldNotify:(bool)arg2 completion:(id /* block */)arg3;
- (void)handleAddedSettingModel:(id)arg1 completion:(id /* block */)arg2;
- (void)handleAddedSettingModel:(id)arg1 shouldNotify:(bool)arg2 completion:(id /* block */)arg3;
- (id)initWithDependency:(id)arg1 delegate:(id)arg2;
- (id)keyPathsInExistingSettings;
- (id)keyPathsInModels:(id)arg1;
- (void)loadWithModels:(id)arg1;
- (id)logIdentifier;
- (id)messageHandler;
- (void)migrateSettingsWithCompletion:(id /* block */)arg1;
- (id)modelsToMakeSettings;
- (id)modelsToMigrateSettings;
- (void)resetupMessageHandlersWithAddedGroups:(id)arg1 removedGroups:(id)arg2 addedSettings:(id)arg3 removedSettings:(id)arg4;
- (id)rootGroup;
- (void)setGroupsMap:(id)arg1;
- (void)setRootGroup:(id)arg1;
- (void)setSettingsMap:(id)arg1;
- (id)settingForIdentifier:(id)arg1;
- (id)settingForKeyPath:(id)arg1;
- (id)settingGroupForIdentifier:(id)arg1;
- (id)settingValuesByKeyPathWithPrefix:(id)arg1;
- (void)settingsHierarchyDidChange;
- (id)settingsMap;
- (void)transactionSettingConstraintModelRemoved:(id)arg1 completion:(id /* block */)arg2;
- (void)transactionSettingConstraintModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(id /* block */)arg3;
- (void)transactionSettingGroupModelRemoved:(id)arg1 completion:(id /* block */)arg2;
- (void)transactionSettingGroupModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(id /* block */)arg3;
- (void)transactionSettingModelRemoved:(id)arg1 completion:(id /* block */)arg2;
- (void)transactionSettingModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(id /* block */)arg3;
- (void)updateParentsInKeyPathToModel:(id)arg1 usingKeyPathToSetting:(id)arg2;
- (void)updateRootGroup:(id)arg1;
- (void)updateWithEncodedValue:(id)arg1 onSettingIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)updateWithValue:(id)arg1 onSetting:(id)arg2 completion:(id /* block */)arg3;
- (void)updateWithValue:(id)arg1 onSettingIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end
