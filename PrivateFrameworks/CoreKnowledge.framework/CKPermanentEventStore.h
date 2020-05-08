/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKPermanentEventStore : NSObject <CKPermanentEventStorePrivate, CKPermanentReadableEventStore, CKPermanentWritableEventStore> {
    void knowledgeStore;
}

@property (nonatomic, readonly) CKKnowledgeStore *backingStore;

+ (id)createEventWithIdentifier:(id)arg1 dateInterval:(id)arg2 metadata:(id)arg3 fromEvent:(id)arg4;
+ (id)defaultStore;

- (void).cxx_destruct;
- (id)backingStore;
- (void)deleteEventWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)deleteEventWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)deleteInteractionsWithBundleId:(id)arg1 error:(id*)arg2;
- (void)historicEventWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)historicEventsAndReturnError:(id*)arg1;
- (void)historicEventsWithCompletionHandler:(id /* block */)arg1;
- (void)historicEventsWithSourceBundleIdentifier:(id)arg1 andIntent:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithKnowledgeStore:(id)arg1;
- (void)recordEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)recordEvent:(id)arg1 error:(id*)arg2;
- (void)recordInteraction:(id)arg1 bundleId:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)recordInteraction:(id)arg1 bundleId:(id)arg2 error:(id*)arg3;
- (void)recordInteraction:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)recordInteraction:(id)arg1 error:(id*)arg2;
- (void)setFirstSeen:(id)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setFrequency:(long long)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setLastDuration:(double)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setLastSeen:(id)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setTotalDuration:(double)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;

@end
