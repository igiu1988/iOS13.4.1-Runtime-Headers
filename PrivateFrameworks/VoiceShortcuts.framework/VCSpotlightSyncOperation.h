/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCSpotlightSyncOperation : NSObject {
    <VCSpotlightSyncOperationDelegate> * _delegate;
    bool  _fullResync;
    NSSet * _identifiersToRemove;
    CSSearchableIndex * _index;
    NSDictionary * _keyedReferences;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _searchableItemRegistry;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic) <VCSpotlightSyncOperationDelegate> *delegate;
@property (nonatomic, readonly) bool fullResync;
@property (nonatomic, readonly) NSSet *identifiersToRemove;
@property (nonatomic, readonly) CSSearchableIndex *index;
@property (nonatomic, readonly) NSDictionary *keyedReferences;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSDictionary *searchableItemRegistry;
@property (nonatomic, retain) NSObject<OS_os_transaction> *transaction;

+ (void)_fillIdentifiersToRemove:(id*)arg1 searchableItemRegistry:(id*)arg2 withMaximumUpdatedItems:(long long)arg3 references:(id)arg4 localState:(id)arg5;
+ (id)getSpotlightLocalState;
+ (id)spotlightDiffFileURL;

- (void).cxx_destruct;
- (void)cleanupAndExitWithRequestToRelaunch:(bool)arg1;
- (void)clearLocalStateAndExit;
- (id)delegate;
- (void)deleteSpotlightFileAndCleanup;
- (bool)fullResync;
- (id)identifiersToRemove;
- (id)index;
- (void)indexSearchableItems;
- (id)initWithReferences:(id)arg1 clientState:(unsigned long long)arg2 spotlightIndex:(id)arg3 forceFullResync:(bool)arg4;
- (id)keyedReferences;
- (id)queue;
- (void)saveLocalState;
- (id)searchableItemRegistry;
- (void)setDelegate:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)start;
- (id)transaction;

@end
