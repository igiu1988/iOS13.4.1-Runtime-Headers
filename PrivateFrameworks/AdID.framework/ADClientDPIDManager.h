/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

@interface ADClientDPIDManager : NSObject {
    NSString * _DPID;
    NSObject<OS_dispatch_queue> * _backupFlowQueue;
    NSDate * _dpidReconcileStartDate;
    unsigned long long  _dpidReconcileState;
    bool  _isPrivateContainerSecure;
    bool  _isTest;
    NSMutableArray * _operationsInProgress;
    CKContainer * _privateContainer;
    long long  _qualityOfService;
    CKRecordID * _recordID;
    bool  _sandboxEnvironment;
    bool  _supportsDeviceToDeviceEncryption;
    bool  _updateInProgress;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, retain) NSString *DPID;
@property (retain) NSDate *dpidReconcileStartDate;
@property unsigned long long dpidReconcileState;
@property (nonatomic) bool isPrivateContainerSecure;
@property (nonatomic, readonly) bool isTest;
@property (nonatomic, retain) NSMutableArray *operationsInProgress;
@property (nonatomic, retain) CKContainer *privateContainer;
@property (nonatomic) long long qualityOfService;
@property (nonatomic, retain) CKRecordID *recordID;
@property (nonatomic) bool sandboxEnvironment;
@property (nonatomic) bool supportsDeviceToDeviceEncryption;
@property (nonatomic) bool updateInProgress;
@property (nonatomic, retain) CKRecordZoneID *zoneID;

+ (id)DPIDOperationTypeToString:(unsigned long long)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)DPID;
- (void)backupFlowForCloudKitWorkAtTime:(id)arg1 with:(id /* block */)arg2;
- (bool)canContinueProcessing:(id)arg1;
- (bool)canGenerateDPID;
- (id)containerWithIDString:(id)arg1;
- (void)continueReconcileWithAccountStatus:(long long)arg1 andError:(id)arg2 with:(id /* block */)arg3;
- (void)createErrorForPrivateDB:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)dpidReconcileStartDate;
- (unsigned long long)dpidReconcileState;
- (void)fetchDPIDfromiCloud:(id /* block */)arg1;
- (void)finishOperation:(unsigned long long)arg1;
- (id)generateDPID;
- (void)handleCloudKitError:(id)arg1;
- (void)handlePushNotification:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)iCloudAccountSubscribed;
- (id)init;
- (id)insecureContainer;
- (bool)isLoggedIntoiTunes;
- (bool)isPrivateContainerSecure;
- (bool)isRestrictedByApple;
- (bool)isTest;
- (bool)limitAdTrackingEnabled;
- (id)operationQueueLog;
- (id)operationsInProgress;
- (id)primaryiCloudAccountAltDSID;
- (unsigned long long)primaryiCloudAccountSecurityLevel;
- (id)privateContainer;
- (long long)qualityOfService;
- (void)reconcileDPID:(id /* block */)arg1;
- (id)recordID;
- (void)removeDPIDfromiCloud:(id /* block */)arg1;
- (void)resetDPID:(id /* block */)arg1;
- (void)resetEncryptedZone:(id /* block */)arg1;
- (void)resolveAccountVsStoredManateeState:(long long)arg1 andError:(id)arg2 with:(id /* block */)arg3;
- (void)retryIfNeeded:(id /* block */)arg1;
- (bool)sandboxEnvironment;
- (void)saveDPIDtoiCloud:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)secureContainer;
- (void)setDPID:(id)arg1;
- (void)setDpidReconcileStartDate:(id)arg1;
- (void)setDpidReconcileState:(unsigned long long)arg1;
- (void)setIsPrivateContainerSecure:(bool)arg1;
- (void)setOperationsInProgress:(id)arg1;
- (void)setPrivateContainer:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRecordID:(id)arg1;
- (void)setSandboxEnvironment:(bool)arg1;
- (void)setSupportsDeviceToDeviceEncryption:(bool)arg1;
- (void)setUpdateInProgress:(bool)arg1;
- (void)setZoneID:(id)arg1;
- (void)setiCloudAccountSubscribed:(bool)arg1;
- (void)setupLocalDPID;
- (void)setupiCloudSubscription:(id /* block */)arg1;
- (bool)shouldSyncDPID;
- (void)startOperation:(unsigned long long)arg1;
- (id)subscriptionIdentifier;
- (bool)supportsDeviceToDeviceEncryption;
- (void)syncDPIDWithiCloud:(id /* block */)arg1;
- (void)teardowniCloudSubscription:(id /* block */)arg1;
- (void)updateActiveRecordICloudDSID;
- (bool)updateInProgress;
- (void)writeDPIDtoKeychain;
- (id)zoneID;

@end
