/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

@interface BMInteractionProvider : NSObject {
    _CDInteractionStore * _interactionStore;
}

@property (nonatomic, readonly) _CDInteractionStore *interactionStore;

- (void).cxx_destruct;
- (id)batchFetchedPhotoSuggestionsForInteractions:(id)arg1;
- (id)init;
- (id)initWithInteractionStore:(id)arg1;
- (id)interactionEventsForTypes:(id)arg1 error:(id*)arg2;
- (id)interactionStore;

@end
