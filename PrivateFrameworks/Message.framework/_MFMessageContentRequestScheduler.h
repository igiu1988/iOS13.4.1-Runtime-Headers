/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFMessageContentRequestScheduler : NSObject <EFScheduler> {
    EDMessagePersistence * _messagePersistence;
    unsigned long long  _requestID;
    <EFScheduler> * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EDMessagePersistence *messagePersistence;
@property (nonatomic, retain) <EFScheduler> *scheduler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)initWithScheduler:(id)arg1 messagePersistence:(id)arg2;
- (id)initWithScheduler:(id)arg1 requestID:(unsigned long long)arg2 messagePersistence:(id)arg3;
- (id)messagePersistence;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockWithActivity:(id /* block */)arg1 requestID:(unsigned long long)arg2;
- (id)performCancelableBlock:(id /* block */)arg1;
- (void)performSyncBlock:(id /* block */)arg1;
- (void)performVoucherPreservingBlock:(id /* block */)arg1;
- (id)performWithObject:(id)arg1;
- (id)scheduler;
- (void)setMessagePersistence:(id)arg1;
- (void)setScheduler:(id)arg1;

@end
