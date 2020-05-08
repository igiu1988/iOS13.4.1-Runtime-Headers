/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSystemResourcesManager : NSObject <BRReachabilityObserver> {
    NSHashTable * _appListObservers;
    bool  _connectedToPowerSource;
    NSDate * _connectedToPowerSourceCheckedDate;
    bool  _invalidated;
    NSMutableDictionary * _lowDiskDict;
    NSMutableSet * _lowDiskSet;
    NSObject<OS_dispatch_source> * _lowDiskSource;
    NSObject<OS_dispatch_source> * _lowDiskTimer;
    NSHashTable * _lowMemoryObservers;
    br_pacer * _memoryNotificationCoalescePacer;
    NSObject<OS_dispatch_source> * _memoryNotificationEventSource;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    bool  _powerLevelOK;
    NSObject<OS_dispatch_source> * _powerLevelOKTimer;
    int  _powerNotifyToken;
    NSHashTable * _powerObservers;
    NSMapTable * _processObservers;
    unsigned int  _reachabilityFlags;
    NSObject<OS_dispatch_source> * _reachabilityFlagsTimer;
    BRReachabilityMonitor * _reachabilityMonitor;
    NSHashTable * _reachabilityObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isNetworkReachable;
@property (readonly) bool isPowerOK;
@property (readonly) unsigned int reachabilityFlags;
@property (readonly) Class superclass;

+ (id)manager;

- (void).cxx_destruct;
- (void)__resetReachability;
- (id)_createMonitoringObjectForProcessID:(int)arg1 observer:(id)arg2;
- (void)_didReceiveMemoryWarning;
- (void)_initAppListObservers;
- (void)_initLowDiskManager;
- (void)_initLowMemory;
- (void)_initPowerManager;
- (void)_initProcessObservers;
- (void)_initReachability;
- (void)_initXPCFSEvents;
- (void)_invalidateAppListObservers;
- (void)_invalidateLowDiskManager;
- (void)_invalidateLowMemory;
- (void)_invalidatePowerManager;
- (void)_invalidateProcessMonitorObject:(id)arg1;
- (void)_invalidateProcessObservers;
- (void)_invalidateReachability;
- (void)_processLowDiskNotification:(bool)arg1;
- (void)_resetLowDiskManager;
- (void)_resetPowerManager;
- (void)_resetReachability;
- (void)_setPowerLevel:(bool)arg1;
- (void)_setPowerLevelWithCoalescing:(bool)arg1;
- (void)_setReachabilityFlags:(unsigned int)arg1;
- (void)_setReachabilityFlagsWithCoalescing:(unsigned int)arg1;
- (void)addAppListObserver:(id)arg1;
- (void)addLowDiskObserver:(id)arg1 forDevice:(int)arg2;
- (void)addLowMemoryObserver:(id)arg1;
- (void)addPowerObserver:(id)arg1;
- (void)addProcessMonitor:(id)arg1 forProcessID:(int)arg2;
- (void)addReachabilityObserver:(id)arg1;
- (void)close;
- (bool)connectedToPowerSource;
- (void)dealloc;
- (bool)hasEnoughSpaceForDevice:(int)arg1;
- (id)init;
- (bool)isNetworkReachable;
- (bool)isPowerOK;
- (unsigned int)reachabilityFlags;
- (void)reachabilityMonitor:(id)arg1 didChangeReachabilityFlagsTo:(unsigned int)arg2;
- (void)reachabilityMonitor:(id)arg1 didChangeReachabilityStatusTo:(bool)arg2;
- (void)removeAppListObserver:(id)arg1;
- (void)removeLowDiskObserver:(id)arg1 forDevice:(int)arg2;
- (void)removeLowMemoryObserver:(id)arg1;
- (void)removePowerObserver:(id)arg1;
- (void)removeProcessMonitor:(id)arg1;
- (void)removeReachabilityObserver:(id)arg1;
- (void)reset;
- (void)resume;
- (void)suspend;

@end
