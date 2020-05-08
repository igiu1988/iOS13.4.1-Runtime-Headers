/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
 */

@interface STAnalyticsObserver : NSObject {
    AFAnalyticsObserverConnection * _connection;
    NSMutableDictionary * _observerActions;
}

+ (id)sharedObserver;

- (void).cxx_destruct;
- (void)addObserverActionForType:(long long)arg1 withBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidate;

@end