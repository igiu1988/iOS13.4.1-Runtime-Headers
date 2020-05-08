/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBDaemon : NSObject <RBAssertionManagerDelegate, RBBundlePropertiesManagerDelegate, RBPowerAssertionManagerDelegate, RBProcessManagerDelegate> {
    RBAssertionDescriptorValidator * _assertionDescriptorValidator;
    RBAssertionManager * _assertionManager;
    RBAssertionOriginatorPidStore * _assertionOriginatorPidStore;
    RBBundlePropertiesManager * _bundlePropertiesManager;
    RBDomainAttributeManager * _domainAttributeManager;
    RBEntitlementManager * _entitlementManager;
    RBJetsamBandProvider * _jetsamBandProvider;
    RBConnectionListener * _listener;
    RBPowerAssertionManager * _powerAssertionManager;
    RBProcessManager * _processManager;
    RBProcessMonitor * _processMonitor;
    RBProcessReconnectManager * _reconnectManager;
    RBStateCaptureManager * _stateCaptureManager;
    RBThrottleBestEffortNetworkingManager * _throttleBestEffortNetworkingManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_sharedInstance;
+ (void)run;

- (void).cxx_destruct;
- (id)_init;
- (id)_reconnectOriginatorProcess;
- (void)_start;
- (void)assertionManager:(id)arg1 didAddProcess:(id)arg2 withState:(id)arg3;
- (void)assertionManager:(id)arg1 didBeginTrackingInFightUpdatesForProcessIdentity:(id)arg2;
- (void)assertionManager:(id)arg1 didBeginTrackingStateForProcessIdentity:(id)arg2;
- (void)assertionManager:(id)arg1 didEndTrackingInFightUpdatesForProcessIdentity:(id)arg2;
- (void)assertionManager:(id)arg1 didEndTrackingStateForProcessIdentity:(id)arg2;
- (void)assertionManager:(id)arg1 didInvalidateAssertions:(id)arg2;
- (void)assertionManager:(id)arg1 didRejectAcquisitionFromOriginatorWithExcessiveAssertions:(id)arg2;
- (void)assertionManager:(id)arg1 didRemoveProcess:(id)arg2 withState:(id)arg3;
- (void)assertionManager:(id)arg1 didResolveSystemState:(id)arg2;
- (void)assertionManager:(id)arg1 didUpdateProcessStates:(id)arg2 completion:(id /* block */)arg3;
- (void)assertionManager:(id)arg1 willExpireAssertionsSoonForProcess:(id)arg2 expirationTime:(double)arg3;
- (void)assertionManager:(id)arg1 willInvalidateAssertion:(id)arg2;
- (void)bundlePropertiesManager:(id)arg1 didChangePropertiesForProcessIdentities:(id)arg2;
- (id)debugDescription;
- (id)description;
- (void)emitAssertionSignpostForLegacyReason:(id)arg1;
- (id)init;
- (void)powerAssertionManagerDidAllowIdleSleep:(id)arg1;
- (void)powerAssertionManagerDidPreventIdleSleep:(id)arg1;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)processManager:(id)arg1 didReconnectProcesses:(id)arg2;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)watchdogRegister;

@end
