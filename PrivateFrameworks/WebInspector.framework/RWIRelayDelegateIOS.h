/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIRelayDelegateIOS : NSObject <RWIRelayDelegate> {
    BKSApplicationStateMonitor * _applicationStateMonitor;
    <BSInvalidatable> * _idleTimerAssertion;
    RWIRelay * _relay;
}

- (void).cxx_destruct;
- (void)_backBoardApplicationStateChanged:(id)arg1;
- (void)_createApplicationStateMonitorIfNeeded;
- (void)_startPreventingDeviceFromIdling;
- (void)_stopPreventingDeviceFromIdling;
- (void)_updateDeviceIdlePrevention;
- (void)relay:(id)arg1 activateApplicationWithBundleIdentifier:(id)arg2;
- (bool)relay:(id)arg1 allowIncomingApplicationConnection:(id)arg2 bundleIdentifier:(id)arg3;
- (bool)relay:(id)arg1 allowIncomingApplicationViaProxy:(struct { unsigned int x1[8]; })arg2 pid:(int)arg3;
- (void)relay:(id)arg1 applicationConnected:(id)arg2;
- (void)relay:(id)arg1 applicationDisconnected:(id)arg2;
- (id)relay:(id)arg1 applicationInfoForIncomingConnection:(id)arg2 bundleIdentifier:(id)arg3;
- (void)relay:(id)arg1 applicationUpdated:(id)arg2;
- (void)relay:(id)arg1 unhandledApplicationXPCMessage:(id)arg2;
- (void)relayClientConnectionDidChange:(id)arg1;
- (void)relayInitialize:(id)arg1;
- (id)relaySetupResponseForClientConnection:(id)arg1;

@end
