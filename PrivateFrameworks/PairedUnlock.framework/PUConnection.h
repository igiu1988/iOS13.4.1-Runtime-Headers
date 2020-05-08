/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
 */

@interface PUConnection : NSObject {
    <PUConnectionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    id /* block */  _remoteDeviceRemoveLockoutHandler;
    NSXPCConnection * _serverConnection;
    NSObject<OS_dispatch_queue> * _serverConnectionQueue;
    PUConnectionUnlockClient * _unlockClient;
}

@property <PUConnectionDelegate> *delegate;
@property (nonatomic, copy) id /* block */ remoteDeviceRemoveLockoutHandler;

+ (id)clientInterface;
+ (id)serverInterface;
+ (void)syncPasscodeState;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)delegateIfRespondsToSelector:(SEL)arg1;
- (void)didDisableOnlyRemoteUnlock:(bool)arg1 error:(id)arg2;
- (void)didEnableOnlyRemoteUnlock:(bool)arg1 error:(id)arg2;
- (void)didGetRemoteDeviceState:(id)arg1 error:(id)arg2;
- (void)didPairForUnlock:(bool)arg1 error:(id)arg2;
- (void)didUnpairForUnlock:(bool)arg1 error:(id)arg2;
- (void)disableOnlyRemoteUnlock;
- (void)enableOnlyRemoteUnlockWithPasscode:(id)arg1;
- (void)getRemoteDeviceState:(id /* block */)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)pairForUnlockWithPasscode:(id)arg1;
- (void)queryRemoteDeviceState:(id /* block */)arg1;
- (const char *)queueNameWithSuffix:(id)arg1;
- (void)remoteDeviceDidCompleteRemoteAction:(bool)arg1 remoteDeviceState:(id)arg2 error:(id)arg3;
- (void)remoteDeviceDidRemoveLockout:(bool)arg1 error:(id)arg2;
- (void)remoteDeviceDidUnlock;
- (id /* block */)remoteDeviceRemoveLockoutHandler;
- (void)requestDeviceSetWristDetectionDisabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)requestRemoteDeviceRemoteAction:(long long)arg1 type:(long long)arg2;
- (void)requestRemoteDeviceRemoveLockout:(id /* block */)arg1;
- (void)requestRemoteDeviceUnlockNotification;
- (id)serverConnection;
- (void)setDelegate:(id)arg1;
- (void)setRemoteDeviceRemoveLockoutHandler:(id /* block */)arg1;
- (void)setServerConnection:(id)arg1;
- (void)unpairForUnlock;

@end
