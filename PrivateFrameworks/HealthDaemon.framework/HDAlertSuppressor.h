/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAlertSuppressor : NSObject <HDAssertionObserver, HDProcessStateObserver> {
    HDAssertionManager * _assertionManager;
    HDDaemon * _daemon;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _waitingForSuspension;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateSuppressActivityAlertsForSuspendedProcess:(id)arg1;
- (void)_queue_clearSuppressionTimerForAssertion:(id)arg1;
- (void)_queue_invalidateSuppressActivityAlertsForProcessIdentifier:(id)arg1;
- (id)_queue_startAlertSuppressionTimerForProcessIdentifier:(id)arg1;
- (void)_queue_suppressActivityAlertsForProcessIdentifier:(id)arg1;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)assertionManager:(id)arg1 assertionTaken:(id)arg2;
- (id)createAndTakeAssertionForOwnerIdentifier:(id)arg1 processBundleIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithDaemon:(id)arg1;
- (void)processDidEnterBackground:(id)arg1;
- (void)processDidEnterForeground:(id)arg1;
- (void)processResumed:(id)arg1;
- (void)processSuspended:(id)arg1;
- (void)processTerminated:(id)arg1;

@end
