/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

@interface HDMCAnalyticsManager : NSObject <HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate> {
    HDPeriodicActivity * _activity;
    HDMCAnalysisManager * _analysisManager;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_performActivityWithCompletion:(id /* block */)arg1;
- (void)_queue_submitAnalyticsWithActivityCompletion:(id /* block */)arg1;
- (double)_retryInterval;
- (double)_submissionInterval;
- (void)daemonReady:(id)arg1;
- (id)initWithProfile:(id)arg1 analysisManager:(id)arg2;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (bool)periodicActivityRequiresProtectedData:(id)arg1;

@end
