/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteLoginMessageSender : HMFObject <HMFLogging> {
    HMDAppleMediaAccessory * _accessory;
    HMDDevice * _device;
    HMDMessageDispatcher * _remoteMessageDispatcher;
    NSUUID * _target;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAppleMediaAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMDDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDMessageDispatcher *remoteMessageDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *target;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessory;
- (id)device;
- (id)initWithTarget:(id)arg1 accessory:(id)arg2 device:(id)arg3 workQueue:(id)arg4 remoteMessageDispatcher:(id)arg5;
- (id)logIdentifier;
- (id)remoteMessageDispatcher;
- (void)sendRemoteMessageWithName:(id)arg1 payload:(id)arg2 responseHandler:(id /* block */)arg3;
- (id)target;
- (id)workQueue;

@end
