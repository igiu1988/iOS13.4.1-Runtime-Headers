/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMActionSet : NSObject <HFFavoritable, HFReorderableHomeKitObject, HFStateDumpBuildable, HMFMessageReceiver, HMMutableApplicationData, HMObjectMerge, NSSecureCoding> {
    NSString * _actionSetType;
    HMApplicationData * _applicationData;
    _HMContext * _context;
    HMMutableArray * _currentActions;
    bool  _executionInProgress;
    HMHome * _home;
    NSDate * _lastExecutionDate;
    HMFUnfairLock * _lock;
    NSString * _name;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSString *actionSetType;
@property (nonatomic, readonly, copy) NSSet *actions;
@property (nonatomic, readonly) HMApplicationData *applicationData;
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (nonatomic, retain) _HMContext *context;
@property (nonatomic, retain) HMMutableArray *currentActions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExecuting, nonatomic, readonly) bool executing;
@property (nonatomic) bool executionInProgress;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *hf_characteristicWriteActions;
@property (nonatomic, readonly, copy) NSDate *hf_dateAdded;
@property (nonatomic, readonly, copy) NSString *hf_displayName;
@property (nonatomic, readonly) bool hf_hasSetFavorite;
@property (nonatomic, readonly) <HFIconDescriptor> *hf_iconDescriptor;
@property (nonatomic, readonly) bool hf_isFavorite;
@property (nonatomic, readonly) bool hf_requiresDeviceUnlock;
@property (nonatomic, readonly) bool hf_shouldShowInFavorites;
@property (nonatomic) HMHome *home;
@property (nonatomic, readonly, copy) NSDate *lastExecutionDate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, copy) NSString *name;
@property (readonly, copy) NSDictionary *shortcutsDictionaryRepresentation;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)actionSetFromProtoBuf:(id)arg1 home:(id)arg2;
+ (id)allowedActionClasses;
+ (id)shortcutsComponentActionSet;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_addAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_doAddAction:(id)arg1 uuid:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_doRemoveActionWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleActionAddedNotification:(id)arg1;
- (void)_handleActionRemovedNotification:(id)arg1;
- (void)_handleActionSetExecutedNotification:(id)arg1;
- (void)_handleActionSetRenamedNotification:(id)arg1;
- (void)_handleActionSetStartExecutionNotification:(id)arg1;
- (void)_handleActionUpdatedNotification:(id)arg1;
- (void)_invalidate;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_removeAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_unconfigure;
- (void)_updateAction:(id)arg1 changes:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)actionSetType;
- (id)actions;
- (void)addAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)applicationData;
- (id)applicationDataIdentifier;
- (id)context;
- (id)currentActions;
- (void)dealloc;
- (id)encodeAsProtoBuf;
- (void)encodeWithCoder:(id)arg1;
- (bool)executionInProgress;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3;
- (id)initWithShortcutsDictionaryRepresentation:(id)arg1 home:(id)arg2;
- (bool)isExecuting;
- (id)lastExecutionDate;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)name;
- (void)removeAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)requiresDeviceUnlock;
- (void)setApplicationData:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentActions:(id)arg1;
- (void)setExecutionInProgress:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setLastExecutionDate:(id)arg1;
- (void)setName:(id)arg1;
- (id)shortcutsDictionaryRepresentation;
- (id)uniqueIdentifier;
- (void)updateApplicationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_standardIconDescriptorForActionSetType:(id)arg1;

- (id)hf_affectedCharacteristics;
- (id)hf_affectedMediaSessions;
- (id)hf_affectedServices;
- (bool)hf_affectsServiceWithIdentifier:(id)arg1;
- (id)hf_characteristicWriteActions;
- (id)hf_dateAdded;
- (id)hf_displayName;
- (bool)hf_hasSetFavorite;
- (id)hf_iconDescriptor;
- (bool)hf_isAnonymous;
- (bool)hf_isFavorite;
- (bool)hf_isShortcutOwned;
- (bool)hf_requiresDeviceUnlock;
- (id)hf_shortcutAction;
- (bool)hf_shouldShowInFavorites;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateIconDescriptor:(id)arg1;
- (id)hf_updateIsFavorite:(bool)arg1;

@end
