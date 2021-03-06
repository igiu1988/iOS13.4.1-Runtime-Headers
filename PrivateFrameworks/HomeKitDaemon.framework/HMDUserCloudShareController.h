/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserCloudShareController : NSObject <HMFLogging, HMFTimerDelegate> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSHashTable * _connectedClients;
    NSMutableDictionary * _containerIdToBundleIdMap;
    <HMDUserCloudShareControllerDelegate> * _delegate;
    double  _pendingRequestTimeoutInterval;
    HMFTimer * _pendingRequestTimer;
    NSMutableArray * _pendingRequests;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) NSHashTable *connectedClients;
@property (nonatomic, retain) NSMutableDictionary *containerIdToBundleIdMap;
@property (readonly, copy) NSString *debugDescription;
@property <HMDUserCloudShareControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double pendingRequestTimeoutInterval;
@property (nonatomic, retain) HMFTimer *pendingRequestTimer;
@property (nonatomic, readonly) NSMutableArray *pendingRequests;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_addRequestToPending:(id)arg1;
- (id)_connectionForContainerID:(id)arg1;
- (void)_deregisterXpcClient:(id)arg1;
- (void)_handlePendingRequestTimeouts;
- (void)_handleShareForRemoteClientRequest:(id)arg1;
- (void)_invalidateXpcClient:(id)arg1;
- (void)_registerWithXpcClient:(id)arg1 containerIDs:(id)arg2;
- (void)_removeTimerIfNotNeeded;
- (void)_resumeRequestsForContainerID:(id)arg1 connection:(id)arg2;
- (void)_sendShareRequest:(id)arg1 toConnection:(id)arg2;
- (void)_startTimerIfNeeded;
- (id)clientQueue;
- (void)configure;
- (id)connectedClients;
- (id)containerIdToBundleIdMap;
- (id)delegate;
- (void)deregisterXpcClient:(id)arg1;
- (void)handleShareForRemoteClientRequest:(id)arg1 home:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 pendingRequestTimeoutInterval:(double)arg3;
- (void)invalidateXpcClient:(id)arg1;
- (double)pendingRequestTimeoutInterval;
- (id)pendingRequestTimer;
- (id)pendingRequests;
- (void)registerWithXpcClient:(id)arg1 containerIDs:(id)arg2;
- (void)setContainerIdToBundleIdMap:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPendingRequestTimer:(id)arg1;
- (void)timerDidFire:(id)arg1;

@end
