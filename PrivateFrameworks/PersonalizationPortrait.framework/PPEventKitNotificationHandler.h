/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPEventKitNotificationHandler : PPNotificationHandler {
    NSMutableSet * _events;
    NSObject<OS_dispatch_queue> * _eventsQueue;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _hasWaiter;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _isFiring;
    NSObject<OS_dispatch_queue> * _waiterQueue;
}

- (void).cxx_destruct;
- (void)_clearFlags;
- (void)_executeBlocksWithEvents:(id)arg1;
- (id)_popEvents;
- (void)_pushEvents:(id)arg1;
- (id)description;
- (void)fireWithEvents:(id)arg1;
- (id)initWithName:(id)arg1 waitSeconds:(double)arg2;

@end