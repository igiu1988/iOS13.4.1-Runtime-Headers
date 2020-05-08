/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMetrics : NSObject <AMSBagConsumer, AMSBagConsumer_Project> {
    <AMSBagProtocol> * _bag;
    NSObject<OS_dispatch_queue> * _completionQueue;
    NSString * _containerId;
    <AMSMetricsFlushStrategy> * _currentFlushStrategy;
    AMSMetricsDatabaseDataSource * _databaseSource;
    long long  _destination;
    id /* block */  _flushIntervalBlock;
    bool  _flushOnForeground;
    NSObject<OS_dispatch_queue> * _flushQueue;
    bool  _flushTimerEnabled;
    bool  _flushingDisabled;
    long long  _maxBatchSize;
    long long  _maxRequestCount;
    bool  _monitorsLifecycleEvents;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) <AMSMetricsBagContract> *bagContract;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, readonly) NSString *containerId;
@property (nonatomic, retain) <AMSMetricsFlushStrategy> *currentFlushStrategy;
@property (nonatomic, retain) AMSMetricsDatabaseDataSource *databaseSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long destination;
@property (nonatomic, readonly) long long eventCount;
@property (nonatomic, copy) id /* block */ flushIntervalBlock;
@property (nonatomic) bool flushOnForeground;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *flushQueue;
@property (nonatomic) bool flushTimerEnabled;
@property (nonatomic) bool flushingDisabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maxBatchSize;
@property (nonatomic) long long maxRequestCount;
@property (nonatomic) bool monitorsLifecycleEvents;
@property (readonly) Class superclass;

+ (id)_sharedInstanceUsingBag:(id)arg1;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (bool)appAnalyticsAllowed;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (bool)diagnosticsSubmissionAllowed;
+ (bool)disableBackgroundMetrics;
+ (bool)flushDelayEnabled;
+ (bool)flushTimerEnabled;
+ (bool)recordAppAnalyticsForEvent:(id)arg1 bugType:(id)arg2;
+ (id)serverTimeFromDate:(id)arg1;
+ (id)serverTimeFromTimeInterval:(double)arg1;
+ (void)setDisableBackgroundMetrics:(bool)arg1;
+ (void)setFlushDelayEnabled:(bool)arg1;
+ (void)setFlushTimerEnabled:(bool)arg1;
+ (id)sharedTimerQueue;
+ (double)timeIntervalFromServerTime:(id)arg1;

- (void).cxx_destruct;
- (void)_applicationWillEnterForeground;
- (void)_beginFlushIntervalWithStyle:(long long)arg1;
- (id)_determineFlushStrategyWithDataSource:(id)arg1 topic:(id)arg2;
- (id)_flushDataSource:(id)arg1 topic:(id)arg2;
- (double)_flushInterval;
- (bool)_flushIntervalEnabledForStyle:(long long)arg1;
- (void)_flushIntervalInvalidate;
- (void)_handleFlushIntervalWithStyle:(long long)arg1;
- (id)bag;
- (id)bagContract;
- (void)cancel;
- (id)completionQueue;
- (id)containerId;
- (id)currentFlushStrategy;
- (id)databaseSource;
- (void)dealloc;
- (long long)destination;
- (void)dropEvents;
- (id)enqueueAsyncEvents:(id)arg1;
- (void)enqueueEvent:(id)arg1;
- (void)enqueueEvents:(id)arg1;
- (long long)eventCount;
- (id)flush;
- (id)flushEvents:(id)arg1;
- (id /* block */)flushIntervalBlock;
- (bool)flushOnForeground;
- (id)flushQueue;
- (bool)flushTimerEnabled;
- (id)flushTopic:(id)arg1;
- (bool)flushingDisabled;
- (id)initWithContainerID:(id)arg1 bag:(id)arg2;
- (id)initWithContainerId:(id)arg1 bagContract:(id)arg2;
- (long long)maxBatchSize;
- (long long)maxRequestCount;
- (bool)monitorsLifecycleEvents;
- (void)setBag:(id)arg1;
- (void)setBagContract:(id)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setCurrentFlushStrategy:(id)arg1;
- (void)setDatabaseSource:(id)arg1;
- (void)setDestination:(long long)arg1;
- (void)setFlushIntervalBlock:(id /* block */)arg1;
- (void)setFlushOnForeground:(bool)arg1;
- (void)setFlushQueue:(id)arg1;
- (void)setFlushTimerEnabled:(bool)arg1;
- (void)setFlushingDisabled:(bool)arg1;
- (void)setMaxBatchSize:(long long)arg1;
- (void)setMaxRequestCount:(long long)arg1;
- (void)setMonitorsLifecycleEvents:(bool)arg1;

@end
