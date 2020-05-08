/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudHistoryMergeOperation : NSObject {
    NSSet * _existingVisits;
    WBSCloudHistoryFetchResult * _fetchResult;
    WBSHistory * _history;
    bool  _mergeStarted;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _redirectChainEarliestVisits;
    NSSet * _redirectChainSourceVisits;
    NSSet * _tombstones;
    NSMutableDictionary * _tombstonesByURLString;
    NSMutableDictionary * _visitsByVisitIdentifiers;
}

- (void).cxx_destruct;
- (void)_buildRedirectChains;
- (void)_buildVisitsByVisitIdentifiersMap;
- (void)_filterVisitsByTombstones;
- (void)_loadTombstonesWithCompletion:(id /* block */)arg1;
- (void)_lookUpExistingItemsWithCompletion:(id /* block */)arg1;
- (void)_lookupRedirectChainSourcesWithCompletion:(id /* block */)arg1;
- (void)_mergeVisitsWithCompletion:(id /* block */)arg1;
- (void)_removeDuplicateVisits;
- (void)_replayAndAddTombstones:(id /* block */)arg1;
- (void)_updateClientVersions;
- (id)initWithHistory:(id)arg1 fetchResult:(id)arg2;
- (void)mergeWithCompletion:(id /* block */)arg1;

@end
