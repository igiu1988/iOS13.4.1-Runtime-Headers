/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDProcessQueryCollection : NSObject {
    HDQueryServerClientState * _clientState;
    NSString * _processBundleIdentifier;
    NSMutableDictionary * _queryServersByUUID;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, copy) HDQueryServerClientState *clientState;
@property (nonatomic, readonly) bool hasQueryServers;
@property (nonatomic, readonly, copy) NSString *processBundleIdentifier;
@property (nonatomic, readonly, copy) NSArray *queryServers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)addQueryServer:(id)arg1;
- (id)clientState;
- (bool)hasQueryServers;
- (id)initWithProcessBundleIdentifier:(id)arg1;
- (id)processBundleIdentifier;
- (id)queryServers;
- (id)queue;
- (void)queue_cancelStateChangeTimer;
- (void)queue_startStateChangeTimerWithInterval:(double)arg1 handler:(id /* block */)arg2;
- (void)removeQueryServer:(id)arg1;
- (void)setClientState:(id)arg1;

@end