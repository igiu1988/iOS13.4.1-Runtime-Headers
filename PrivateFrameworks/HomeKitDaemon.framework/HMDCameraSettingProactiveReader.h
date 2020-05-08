/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSettingProactiveReader : HMFObject <HMFLogging> {
    HMDAccessory * _accessory;
    <HMDCameraSettingProactiveReaderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _logID;
    HMFMessage * _pendingMessage;
    NSString * _sessionID;
    NSSet * _streamControlMessageHandlers;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDCameraSettingProactiveReaderDelegate> *delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *logID;
@property (retain) HMFMessage *pendingMessage;
@property (readonly) NSString *sessionID;
@property (readonly) NSSet *streamControlMessageHandlers;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callDidCompleteReadDelegateCallback;
- (void)_handleStreamStatusMultireadResponse:(id)arg1;
- (id)accessory;
- (id)delegate;
- (id)delegateQueue;
- (void)handleMessage:(id)arg1;
- (bool)hasPendingNegotiateMessageForSessionWithIdentifier:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 message:(id)arg5 streamMessageHandlers:(id)arg6 logID:(id)arg7;
- (id)logID;
- (id)logIdentifier;
- (id)pendingMessage;
- (void)readSetting;
- (id)sessionID;
- (void)setPendingMessage:(id)arg1;
- (id)streamControlMessageHandlers;
- (id)workQueue;

@end
