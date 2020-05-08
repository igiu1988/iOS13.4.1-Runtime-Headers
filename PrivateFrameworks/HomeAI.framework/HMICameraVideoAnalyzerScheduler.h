/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMICameraVideoAnalyzerScheduler : HMFObject <HMFLogging, HMFTimerDelegate, HMISystemResourceUsageMonitorDelegate> {
    double  _analysisFPS;
    double  _analysisFPSPreference;
    MovingAverage * _averageAnalysisTimeMovingAverage;
    MovingAverage * _averageTotalAnalysisTimeMovingAverage;
    NSPointerArray * _internalAnalyzers;
    HMFUnfairLock * _lock;
    unsigned long long  _maxConcurrentAnalyzers;
    bool  _paused;
    HMISystemResourceUsageMonitor * _systemResourceUsageMonitor;
    long long  _systemResourceUsageMonitorUsageLevel;
    HMIPIDController * _thermalPIDController;
    HMFTimer * _tick;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) long long activeAnalyzerCount;
@property (readonly) double analysisFPS;
@property (readonly) double analysisFPSPreference;
@property (readonly) NSArray *analyzers;
@property (readonly) double averageAnalysisTime;
@property (readonly) MovingAverage *averageAnalysisTimeMovingAverage;
@property (readonly) double averageTotalAnalysisTime;
@property (readonly) MovingAverage *averageTotalAnalysisTimeMovingAverage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSPointerArray *internalAnalyzers;
@property (nonatomic, readonly) HMFUnfairLock *lock;
@property (readonly) unsigned long long maxConcurrentAnalyzers;
@property (getter=isPaused) bool paused;
@property (readonly) Class superclass;
@property (readonly) long long systemResourceUsageLevel;
@property (readonly) HMISystemResourceUsageMonitor *systemResourceUsageMonitor;
@property long long systemResourceUsageMonitorUsageLevel;
@property (readonly) HMIPIDController *thermalPIDController;
@property (readonly) HMFTimer *tick;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_compactInternalAnalyzers;
- (long long)activeAnalyzerCount;
- (double)analysisFPS;
- (double)analysisFPSPreference;
- (id)analyzers;
- (double)averageAnalysisTime;
- (id)averageAnalysisTimeMovingAverage;
- (double)averageTotalAnalysisTime;
- (id)averageTotalAnalysisTimeMovingAverage;
- (bool)inFullBypassMode;
- (id)init;
- (id)internalAnalyzers;
- (bool)isPaused;
- (id)lock;
- (void)logState;
- (unsigned long long)maxConcurrentAnalyzers;
- (void)registerAnalyzer:(id)arg1;
- (void)removeAllAnalyzers;
- (void)requestDidEnd:(id)arg1 outcome:(long long)arg2;
- (void)resumeThermalPIDController;
- (void)setPaused:(bool)arg1;
- (void)setSystemResourceUsageMonitorUsageLevel:(long long)arg1;
- (void)systemResourceUsageDidChangeTo:(long long)arg1;
- (long long)systemResourceUsageLevel;
- (id)systemResourceUsageMonitor;
- (long long)systemResourceUsageMonitorUsageLevel;
- (id)thermalPIDController;
- (id)tick;
- (void)timerDidFire:(id)arg1;
- (void)updateAnalysisFPS:(id)arg1;
- (id)workQueue;

@end
