/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaSession : HMFObject <HMDHomeMessageReceiver, HMFDumpState, HMFLogging, HMFTimerDelegate, NSSecureCoding> {
    bool  _connected;
    bool  _currentAccessorySession;
    HMDMediaEndpoint * _endpoint;
    NSString * _logID;
    NSMutableSet * _mediaProfiles;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSString * _sessionIdentifier;
    NSMutableArray * _setPlaybackStateCompletionHandlers;
    HMFTimer * _setPlaybackStateTimer;
    HMDMediaSessionState * _state;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (getter=isConnected, nonatomic) bool connected;
@property (getter=isCurrentAccessorySession, nonatomic) bool currentAccessorySession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMDMediaEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *logID;
@property (nonatomic, readonly) NSArray *mediaProfiles;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly, copy) NSString *sessionIdentifier;
@property (nonatomic, retain) NSMutableArray *setPlaybackStateCompletionHandlers;
@property (nonatomic, retain) HMFTimer *setPlaybackStateTimer;
@property (nonatomic, retain) HMDMediaSessionState *state;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uuid;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)mediaPropertyMessageKeys;
+ (Class)mediaPropertyValueTypeWithMessageKey:(id)arg1;
+ (id)sessionForCurrentAccessory:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_getPlaybackStateWithCompletion:(id /* block */)arg1;
- (void)_handleGetPlaybackState:(id)arg1;
- (void)_handleMediaSessionSetAudioControl:(id)arg1;
- (void)_handleMediaUpdateMuted:(id)arg1;
- (void)_handleMediaUpdateVolume:(id)arg1;
- (void)_handleSetPlayback:(id)arg1;
- (id)_initWithEndpoint:(id)arg1 mediaProfiles:(id)arg2 state:(id)arg3;
- (id)_initWithMediaProfiles:(id)arg1 state:(id)arg2;
- (void)_invokePendingSetPlaybackStateBlocksOfError:(id)arg1;
- (void)_notifyClientsOfUpdatedVolume:(id)arg1 muted:(id)arg2 inResponseToMessage:(id)arg3;
- (void)_postNotificationOfMediaStateUpdateWithError:(id)arg1 inResponseToMessage:(id)arg2;
- (void)_postNotificationOfMediaStateUpdateWithPayload:(id)arg1;
- (void)_queueSetPlaybackStateCompletion:(id /* block */)arg1;
- (void)_registerForSessionUpdates:(bool)arg1;
- (void)_setPlaybackState:(long long)arg1 completion:(id /* block */)arg2;
- (void)addMediaProfile:(id)arg1;
- (void)dealloc;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (void)evaluateIfMediaPlaybackStateChanged:(id)arg1;
- (void)handleMediaPlaybackStateNotification:(id)arg1;
- (void)handleMediaSessionSetAudioControl:(id)arg1;
- (void)handleRefreshPlayback:(id)arg1;
- (void)handleSetPlayback:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(id)arg1 mediaProfiles:(id)arg2 state:(id)arg3;
- (bool)isConnected;
- (bool)isCurrentAccessorySession;
- (bool)isEqual:(id)arg1;
- (id)logID;
- (id)logIdentifier;
- (id)mediaProfiles;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)propertyQueue;
- (void)readProperties:(id)arg1 completion:(id /* block */)arg2;
- (void)registerForSessionUpdates:(bool)arg1;
- (void)removeMediaProfile:(id)arg1;
- (id)sessionIdentifier;
- (void)setConnected:(bool)arg1;
- (void)setCurrentAccessorySession:(bool)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setLogID:(id)arg1;
- (id)setPlaybackStateCompletionHandlers;
- (id)setPlaybackStateTimer;
- (void)setSetPlaybackStateCompletionHandlers:(id)arg1;
- (void)setSetPlaybackStateTimer:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (void)timerDidFire:(id)arg1;
- (void)updateEndpoint:(id)arg1;
- (void)updateWithResponses:(id)arg1 message:(id)arg2;
- (id)uuid;
- (id)workQueue;
- (void)writeProperties:(id)arg1 completion:(id /* block */)arg2;

@end
