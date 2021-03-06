/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

@interface SASMyriadController : NSObject <SASLockStateMonitorDelegate> {
    CMMotionActivityManager * _activityManager;
    bool  _canceledByMyriad;
    FBSDisplayLayoutMonitor * _displayMonitor;
    bool  _isLifted;
    bool  _isLocked;
    double  _liftEndTime;
    SASLockStateMonitor * _lockStateMonitor;
    struct { 
        MTTimerManager *timerManager; 
        MTAlarmManager *alarmManager; 
        NSMutableSet *lastFiringTimerIDs; 
        NSMutableSet *lastFiringAlarmIDs; 
        NSMutableDictionary *lastTimerFiringDates; 
        NSMutableDictionary *lastAlarmFiringDates; 
        bool isTimerFiring; 
        bool isAlarmFiring; 
    }  _mobileClockObserver;
    NSObject<OS_dispatch_semaphore> * _myriadFinishedSemaphore;
    NSObject<OS_dispatch_queue> * _myriadWorkQueue;
    double  _raiseToWakeTime;
}

@property (nonatomic) bool canceledByMyriad;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)currentController;

- (void).cxx_destruct;
- (void)_handleCMMotionActivity:(id)arg1;
- (id)_init;
- (void)_resetMTAlarmObserver;
- (void)_resetMTTimerObserver;
- (void)_setFiringAlarmIfNeeded:(id)arg1;
- (void)_setFiringTimerIfNeeded:(id)arg1;
- (void)_startObservingMTAlarmNotifications;
- (void)_startObservingMTTimerNotifications;
- (void)_stopObservingMTAlarmNotifications;
- (void)_stopObservingMTTimerNotifications;
- (void)_updateRaiseToWakeTimeForTransition:(id)arg1;
- (void)activateForInTaskRequest:(bool)arg1 isVisible:(bool)arg2;
- (bool)activateForRequest:(id)arg1 visible:(bool)arg2;
- (void)alarmsChanged:(id)arg1;
- (void)alarmsReset:(id)arg1;
- (bool)canceledByMyriad;
- (void)dealloc;
- (void)didChangeLockState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)setCanceledByMyriad:(bool)arg1;
- (void)timersChanged:(id)arg1;
- (void)timersReset:(id)arg1;

@end
