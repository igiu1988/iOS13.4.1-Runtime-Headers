/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDInteractionStoreNotifier : NSObject {
    _CDInteractionStore * _interactionStore;
    int  _notifierToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) _CDInteractionStore *interactionStore;

- (void).cxx_destruct;
- (void)dealloc;
- (void)deleted;
- (id)initWithInteractionStore:(id)arg1;
- (id)interactionStore;
- (void)postPackedMechanisms:(unsigned long long)arg1;
- (void)recorded:(id)arg1;

@end
