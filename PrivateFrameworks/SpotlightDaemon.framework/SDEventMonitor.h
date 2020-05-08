/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface SDEventMonitor : NSObject {
    NSMutableDictionary * _eventHandlers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableDictionary *eventHandlers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)_startMonitoringEventsForStream:(unsigned long long)arg1;
- (id)eventHandlers;
- (id)init;
- (id)queue;
- (void)registerHandler:(id /* block */)arg1 forEventName:(id)arg2;
- (void)setEventHandlers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)startMonitoringEvents;
- (void)unregisterHandler:(id /* block */)arg1 forEventName:(id)arg2;

@end
