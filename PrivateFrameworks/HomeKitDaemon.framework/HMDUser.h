/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUser : HMFObject <HMDBackingStoreObjectProtocol, HMDCloudShareTrustManagerDataSource, HMDCloudShareTrustManagerDelegate, HMDHomeMessageReceiver, HMDSettingsControllerDelegate, HMDUserDataControllerDelegate, HMDUserSettingsBackingStoreControllerDelegate, HMFDumpState, HMFLogging, NSSecureCoding> {
    HMDAccountHandle * _accountHandle;
    HMDAccountIdentifier * _accountIdentifier;
    HMDAssistantAccessControl * _assistantAccessControl;
    NSNumber * _camerasAccessLevelValue;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMBShareUserID * _cloudShareID;
    NAFuture * _cloudShareIDFuture;
    HMDCloudShareTrustManager * _cloudShareTrustManager;
    NSString * _displayName;
    HMDHome * _home;
    HAPPairingIdentity * _pairingIdentity;
    HMUserPresenceAuthorization * _presenceAuthStatus;
    HMDUserSettingsBackingStoreController * _privateBackingStoreController;
    HMDSettingsControllerDependency * _privateSettingsControllerDependency;
    unsigned long long  _privilege;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSMutableArray * _relayAccessTokens;
    NSString * _relayIdentifier;
    bool  _remoteAccessAllowed;
    HMDCloudShareMessenger * _shareMessenger;
    HMDUserSettingsBackingStoreController * _sharedBackingStoreController;
    HMDSettingsControllerDependency * _sharedSettingsControllerDependency;
    HMDUserDataController * _userDataController;
    NSString * _userID;
    NSUUID * _uuid;
}

@property (copy) HMDAccountIdentifier *accountIdentifier;
@property (getter=isAdministrator, readonly) bool administrator;
@property (retain) HMDAssistantAccessControl *assistantAccessControl;
@property (readonly) NSUUID *assistantAccessControlModelUUID;
@property (readonly, copy) AVOutputDeviceAuthorizedPeer *av_authorizedPeer;
@property (nonatomic, retain) NSNumber *camerasAccessLevelValue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain) HMBShareUserID *cloudShareID;
@property (readonly) NAFuture *cloudShareIDFuture;
@property (retain) HMDCloudShareTrustManager *cloudShareTrustManager;
@property (getter=isCurrentUser, readonly) bool currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *encodingRemoteDisplayName;
@property (readonly) unsigned long long hash;
@property HMDHome *home;
@property (readonly) bool isCurrentUser;
@property (readonly) bool isRunningOnHomeOwnersDevice;
@property (readonly) bool isUserSettingsPrefEnabled;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (getter=isOwner, readonly) bool owner;
@property (copy) HAPPairingIdentity *pairingIdentity;
@property (copy) HMUserPresenceAuthorization *presenceAuthStatus;
@property (retain) HMDUserSettingsBackingStoreController *privateBackingStoreController;
@property (retain) HMDSettingsControllerDependency *privateSettingsControllerDependency;
@property unsigned long long privilege;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (copy) NSString *relayIdentifier;
@property (getter=isRemoteAccessAllowed) bool remoteAccessAllowed;
@property (getter=isRemoteGateway, readonly) bool remoteGateway;
@property (retain) HMDCloudShareMessenger *shareMessenger;
@property (retain) HMDUserSettingsBackingStoreController *sharedBackingStoreController;
@property (retain) HMDSettingsControllerDependency *sharedSettingsControllerDependency;
@property (readonly) Class superclass;
@property (retain) HMDUserDataController *userDataController;
@property (copy) NSString *userID;
@property (readonly) NSUUID *userUUID;
@property (setter=setUUID:, copy) NSUUID *uuid;
@property (getter=isValid, readonly) bool valid;

+ (id)UUIDWithUserID:(id)arg1 forHomeIdentifier:(id)arg2 uuid:(id)arg3 pairingIdentity:(id)arg4;
+ (id)currentUserWithPrivilege:(unsigned long long)arg1 forHome:(id)arg2;
+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)ownerWithUserID:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 homeManager:(id)arg4;
+ (bool)supportsSecureCoding;
+ (id)userIDForAccountHandle:(id)arg1;
+ (id)userWithDictionary:(id)arg1 forHome:(id)arg2;

- (void).cxx_destruct;
- (void)__handleAddedAccount:(id)arg1;
- (void)__handleRemovedAccount:(id)arg1;
- (void)_addRelayAccessToken:(id)arg1;
- (unsigned long long)_compatiblePrivilege;
- (void)_fixupRelayAccessTokens;
- (void)_handleAssistantAccessControlUpdate:(id)arg1;
- (void)_handleMediaContentProfileAccessControlUpdate:(id)arg1;
- (void)_handlePairingIdentityRequest:(id)arg1;
- (void)_handleShareClientPayloadRequest:(id)arg1;
- (void)_handleShareLookupInfoRequest:(id)arg1;
- (void)_migrateRelayAccessTokensCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(id /* block */)arg3;
- (id)_relayAccessTokenForIdentifier:(id)arg1;
- (void)_removeRelayAccessToken:(id)arg1;
- (void)_sendSecureShareClientPayloadToMostEligibleDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)_transactionUserUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)account;
- (id)accountHandle;
- (id)accountIdentifier;
- (void)addRelayAccessToken:(id)arg1;
- (id)assistantAccessControl;
- (id)assistantAccessControlModelUUID;
- (id)attributeDescriptions;
- (id)av_authorizedPeer;
- (id)backingStoreController:(id)arg1 createParticipantManagerForCloudZone:(id)arg2;
- (id)backingStoreObjects:(long long)arg1;
- (unsigned long long)camerasAccessLevel;
- (id)camerasAccessLevelValue;
- (id)clientQueue;
- (id)cloudShareID;
- (id)cloudShareIDFuture;
- (id)cloudShareTrustManager;
- (void)cloudShareTrustManager:(id)arg1 didFetchOwnerCloudShareID:(id)arg2;
- (void)cloudShareTrustManager:(id)arg1 didRemoveUserWithUUID:(id)arg2;
- (bool)cloudShareTrustManager:(id)arg1 shouldShareTrustWithUser:(id)arg2;
- (void)configureCloudShareTrustManager;
- (void)configureWithHome:(id)arg1;
- (bool)containsRelayAccessToken:(id)arg1;
- (void)dealloc;
- (void)deregisterForMessages;
- (void)deregisterIdentity;
- (id)dictionaryEncoding;
- (void)didFinishConfiguringForCloudShareTrustManager:(id)arg1;
- (void)didRemoveTrustZoneInCloudShareTrustManager:(id)arg1;
- (void)didStartBackingStoreController:(id)arg1;
- (void)didStopBackingStoreController:(id)arg1;
- (id)displayName;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)encodingRemoteDisplayName;
- (void)handleAssistantAccessControlUpdate:(id)arg1;
- (void)handleMediaContentProfileAccessControlUpdate:(id)arg1;
- (void)handleRemovedAccessory:(id)arg1;
- (unsigned long long)hash;
- (id)home;
- (id)homeForCloudShareTrustManager:(id)arg1;
- (id)initWithAccountHandle:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelObject:(id)arg1;
- (void)initializeUserSettingsWithHome:(id)arg1;
- (bool)isAdministrator;
- (bool)isCurrentUser;
- (bool)isCurrentUserAndOwner;
- (bool)isEqual:(id)arg1;
- (bool)isOwner;
- (bool)isOwnerCapableForTrustManager:(id)arg1;
- (bool)isRemoteAccessAllowed;
- (bool)isRemoteGateway;
- (bool)isRunningOnHomeOwnersDevice;
- (bool)isUserSettingsPrefEnabled;
- (bool)isValid;
- (id)logIdentifier;
- (id)messageDestination;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)migrateCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(id /* block */)arg3;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)ownerForCloudShareTrustManager:(id)arg1;
- (id)ownerForUserSettingsBackingStoreController:(id)arg1;
- (id)pairingIdentity;
- (id)pairingUsername;
- (id)presenceAuthStatus;
- (id)privateBackingStoreController;
- (id)privateSettingValuesByKeyPathForAWD;
- (id)privateSettingsControllerDependency;
- (id)privateZoneControllerForUserDataController:(id)arg1;
- (unsigned long long)privilege;
- (id)propertyQueue;
- (id)publicKey;
- (void)recoverTrustManagerDueToUUIDChange;
- (void)recoverUserCloudDataDueToUUIDChange;
- (void)recoverUserSettingsDueToUUIDChange;
- (bool)refreshDisplayName;
- (void)registerForMessages;
- (void)registerIdentity;
- (id)relayAccessTokenForAccessory:(id)arg1;
- (id)relayAccessTokens;
- (id)relayIdentifier;
- (void)removeAccessoriesFromAssistantAccessControlList:(id)arg1;
- (void)removeCloudData;
- (void)removeCloudShareID;
- (void)removeRelayAccessToken:(id)arg1;
- (bool)requiresMakoSupport;
- (void)setAccountHandle:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAssistantAccessControl:(id)arg1;
- (void)setCamerasAccessLevelValue:(id)arg1;
- (void)setCloudShareID:(id)arg1;
- (void)setCloudShareTrustManager:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setPairingIdentity:(id)arg1;
- (void)setPresenceAuthStatus:(id)arg1;
- (void)setPrivateBackingStoreController:(id)arg1;
- (void)setPrivateSettingsControllerDependency:(id)arg1;
- (void)setPrivilege:(unsigned long long)arg1;
- (void)setRelayIdentifier:(id)arg1;
- (void)setRemoteAccessAllowed:(bool)arg1;
- (void)setShareMessenger:(id)arg1;
- (void)setSharedBackingStoreController:(id)arg1;
- (void)setSharedSettingsControllerDependency:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setUserDataController:(id)arg1;
- (void)setUserID:(id)arg1;
- (void)settingsController:(id)arg1 didUpdateWithCompletion:(id /* block */)arg2;
- (id)settingsController:(id)arg1 willUpdateSettingAtKeyPath:(id)arg2 withValue:(id)arg3;
- (id)shareMessenger;
- (id)sharedBackingStoreController;
- (id)sharedSettingValuesByKeyPathForAWD;
- (id)sharedSettingsControllerDependency;
- (id)sharedZoneControllerForUserDataController:(id)arg1;
- (id)shortDescription;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)trustTargetUUID;
- (void)unconfigure;
- (bool)updateAdministrator:(bool)arg1;
- (void)updateCloudShareID:(id)arg1;
- (void)updateRelayIdentifier:(id)arg1;
- (id)userDataController;
- (bool)userDataController:(id)arg1 isMediaContentProfileCapableAccessoryID:(id)arg2;
- (bool)userDataController:(id)arg1 isPersonalRequestCapableAccessoryID:(id)arg2;
- (id)userDataController:(id)arg1 participantManagerForCloudZone:(id)arg2;
- (void)userDataControllerDidUpdateAssistantAccessControl:(id)arg1;
- (void)userDataControllerDidUpdateMediaContentProfile:(id)arg1;
- (id)userID;
- (id)userUUID;
- (id)uuid;
- (id)zoneNameForCloudShareTrustManager:(id)arg1;

@end
