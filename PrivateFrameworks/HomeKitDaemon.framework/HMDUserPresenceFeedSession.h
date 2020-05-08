/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserPresenceFeedSession : HMFObject <HMFLogging, HMFTimerDelegate> {
    <HMDUserPresenceFeedSessionDelegate> * _delegate;
    HMUserPresenceAuthorization * _presenceAuthStatus;
    HMUserPresenceCompute * _presenceComputeStatus;
    HMDUserPresenceRegion * _presenceRegionStatus;
    HMDUserPresenceUpdateReason * _reason;
    HMDMessageDispatcher * _remoteMessageDispatcher;
    HMDDevice * _residentDevice;
    NSUUID * _sessionID;
    NSDate * _statusChangeDate;
    HMDUserPresenceFeedRetryTimer * _statusUpdateRetryTimer;
    NSUUID * _targetUUID;
    HMDUser * _user;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDUserPresenceFeedSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMUserPresenceAuthorization *presenceAuthStatus;
@property (nonatomic, readonly) HMUserPresenceCompute *presenceComputeStatus;
@property (nonatomic, readonly) HMDUserPresenceRegion *presenceRegionStatus;
@property (nonatomic, retain) HMDUserPresenceUpdateReason *reason;
@property (nonatomic, readonly) HMDMessageDispatcher *remoteMessageDispatcher;
@property (nonatomic, readonly) HMDDevice *residentDevice;
@property (nonatomic, readonly) NSUUID *sessionID;
@property (nonatomic, readonly) NSDate *statusChangeDate;
@property (nonatomic, retain) HMDUserPresenceFeedRetryTimer *statusUpdateRetryTimer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *targetUUID;
@property (nonatomic, readonly) HMDUser *user;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callDelegate;
- (void)_handleStatusUpdateMessageError:(id)arg1 responseTime:(double)arg2;
- (void)_send;
- (id)attributeDescriptions;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 workQueue:(id)arg2 targetUUID:(id)arg3 remoteMessageDispatcher:(id)arg4 residentDevice:(id)arg5 user:(id)arg6 presenceAuthStatus:(id)arg7 presenceComputeStatus:(id)arg8 presenceRegionStatus:(id)arg9 reason:(id)arg10;
- (id)logIdentifier;
- (id)presenceAuthStatus;
- (id)presenceComputeStatus;
- (id)presenceRegionStatus;
- (id)reason;
- (id)remoteMessageDispatcher;
- (id)residentDevice;
- (void)send;
- (id)sessionID;
- (void)setReason:(id)arg1;
- (void)setStatusUpdateRetryTimer:(id)arg1;
- (id)statusChangeDate;
- (id)statusUpdateRetryTimer;
- (id)targetUUID;
- (void)timerDidFire:(id)arg1;
- (id)user;
- (id)workQueue;

@end
