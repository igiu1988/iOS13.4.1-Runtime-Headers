/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncRapportCommonStorage : NSObject <_DKSyncCommonClass, _DKSyncRemoteStorage> {
    RPCompanionLinkClient * _client;
    NSMutableDictionary * _companionLinkClients;
    NSObject<OS_dispatch_source> * _companionLinkClientsCleanupTimer;
    NSString * _deviceID;
    NSDictionary * _failIfAsleepOption;
    _DKEventTypeResultStatsCounter * _failIfAsleepStats;
    bool  _isAvailable;
    unsigned long long  _outstandingRequestCount;
    NSMutableSet * _peerSourceDeviceIDsWithCompletedHandshakes;
    double  _retryTimeout;
    bool  _running;
}

@property (nonatomic) bool isAvailable;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)_additionalFlagsForInternal;
- (void)cancelOutstandingOperations;
- (id)client;
- (id)clientForPeer:(id)arg1;
- (void)companionLinkCleanupTimerFired;
- (void)createOrRescheduleCompanionLinkClientsCleanupTimer;
- (void)dealloc;
- (id)deviceForPeer:(id)arg1;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)handleActivateCompanionLinkClient:(id)arg1 forPeer:(id)arg2 error:(id)arg3;
- (void)handleActivateWithError:(id)arg1;
- (void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(id /* block */)arg2;
- (void)handleBeaconWithRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)handleBeaconWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 completion:(id /* block */)arg5;
- (void)handleDeviceChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)handleDeviceFound:(id)arg1;
- (void)handleDeviceLost:(id)arg1;
- (void)handleFetchSourceDeviceIDWithRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)handleFetchSourceDeviceIDWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(id /* block */)arg6;
- (void)handleInvalidation;
- (void)handshakeWithDuetSyncPeer:(id)arg1 orError:(id)arg2;
- (id)init;
- (bool)isAvailable;
- (bool)isTransportActiveForPeer:(id)arg1;
- (id)myDeviceID;
- (id)name;
- (void)performCompanionLinkCleanup;
- (void)registerRequestIDsWithClient:(id)arg1;
- (void)removeAllClientsWithRetiring:(bool)arg1;
- (void)removeClient:(id)arg1 forPeer:(id)arg2 retiring:(bool)arg3;
- (void)sendBeaconToPeer:(id)arg1 completion:(id /* block */)arg2;
- (void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 client:(id)arg4 options:(id)arg5 responseHandler:(id /* block */)arg6;
- (void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 highPriority:(bool)arg4 options:(id)arg5 responseHandler:(id /* block */)arg6;
- (void)setClient:(id)arg1 forPeer:(id)arg2;
- (void)setDeviceID:(id)arg1;
- (void)setIsAvailable:(bool)arg1;
- (void)start;
- (void)startRapport;
- (id)transformCaughtObject:(id)arg1 existingError:(id)arg2;
- (id)transformResponseError:(id)arg1;
- (long long)transportType;

@end
