/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessCPUStatistics : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BSMachPortTaskNameRight * _taskNameRight;
    struct FBProcessTimes { 
        double beginUserCPUElapsedTime; 
        double beginSystemCPUElapsedTime; 
        double beginIdleCPUElapsedTime; 
        double beginApplicationCPUElapsedTime; 
    }  _times;
}

@property (nonatomic, readonly) double totalElapsedIdleTime;
@property (nonatomic, readonly) double totalElapsedSystemTime;
@property (nonatomic, readonly) double totalElapsedTime;
@property (nonatomic, readonly) double totalElapsedUserTime;

- (void).cxx_destruct;
- (double)_elapsedCPUTime;
- (void)_hostwideUserElapsedCPUTime:(out double*)arg1 systemElapsedCPUTime:(out double*)arg2 idleElapsedCPUTime:(out double*)arg3;
- (void)_lock_getApplicationCPUTimesForUser:(out double*)arg1 system:(out double*)arg2 idle:(out double*)arg3;
- (void)dealloc;
- (id)descriptionForCrashReport;
- (id)initWithTaskNameRight:(id)arg1;
- (double)totalElapsedIdleTime;
- (double)totalElapsedSystemTime;
- (double)totalElapsedTime;
- (double)totalElapsedUserTime;
- (void)update;

@end