/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSInternalQueueController : NSObject {
    void * _contextKey;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)assertQueueIsCurrent;
- (void)assertQueueIsNotCurrent;
- (id)init;
- (id)initWithName:(char *)arg1 contextKey:(void*)arg2;
- (id)initWithQueue:(id)arg1;
- (bool)isQueueCurrent;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 waitUntilDone:(bool)arg2;
- (id)queue;

@end
