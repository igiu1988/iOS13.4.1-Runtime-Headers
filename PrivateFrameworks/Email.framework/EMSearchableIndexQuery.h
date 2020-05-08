/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMSearchableIndexQuery : NSObject <EFCancelable, EFLoggable, EFSignpostable, EMSearchableIndexQueryBuilder, NSProgressReporting> {
    NSString * _bundleIdentifier;
    id /* block */  _changedItemsBlock;
    id /* block */  _completionBlock;
    long long  _count;
    id /* block */  _countChangedBlock;
    bool  _counting;
    EMSearchableIndexQueryExpression * _expression;
    id /* block */  _failureBlock;
    NSArray * _fetchAttributes;
    id /* block */  _gatheredBlock;
    NSProgress * _internalProgress;
    bool  _live;
    bool  _liveQueryDidGather;
    NSLock * _lock;
    NSString * _logIdentifier;
    NSString * _logPrefixString;
    long long  _maxCount;
    NSProgress * _progress;
    NSArray * _protectionClasses;
    CSSearchQuery * _query;
    bool  _queryDidMoveToFinishedState;
    NSString * _queryStatus;
    NSArray * _rankingQueries;
    id /* block */  _removedItemsBlock;
    id /* block */  _resultsBlock;
    EFPromise * _resultsPromise;
    NSError * _simulatedFailedQueryError;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) id /* block */ changedItemsBlock;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic) long long count;
@property (nonatomic, copy) id /* block */ countChangedBlock;
@property (nonatomic) bool counting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) EMSearchableIndexQueryExpression *expression;
@property (nonatomic, copy) id /* block */ failureBlock;
@property (nonatomic, copy) NSArray *fetchAttributes;
@property (nonatomic, copy) id /* block */ gatheredBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) bool isFinished;
@property (nonatomic) bool live;
@property (nonatomic) bool liveQueryDidGather;
@property (nonatomic, copy) NSString *logIdentifier;
@property (nonatomic, copy) NSString *logPrefixString;
@property (nonatomic) long long maxCount;
@property (readonly) NSProgress *progress;
@property (nonatomic, copy) NSArray *protectionClasses;
@property (nonatomic, retain) CSSearchQuery *query;
@property (nonatomic) bool queryDidMoveToFinishedState;
@property (nonatomic, copy) NSString *queryStatus;
@property (nonatomic, copy) NSArray *rankingQueries;
@property (nonatomic, copy) id /* block */ removedItemsBlock;
@property (nonatomic, copy) id /* block */ resultsBlock;
@property (readonly) unsigned long long signpostID;
@property (nonatomic, retain) NSError *simulatedFailedQueryError;
@property (readonly) Class superclass;

+ (id)_modifierStringFromModifiers:(unsigned long long)arg1;
+ (id)_operandStringForOperand:(long long)arg1;
+ (id)_queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3 phraseMatchFormatString:(id)arg4;
+ (id)_queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3 phraseMatchFormatString:(id)arg4 comparisonOperator:(long long)arg5;
+ (double)intervalForSpotlightFailureSimulation;
+ (id)log;
+ (id)queryStringByJoiningQueries:(id)arg1 withOperand:(long long)arg2;
+ (id)queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3 languages:(id)arg4;
+ (id)queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3 languages:(id)arg4 phraseMatchFormatString:(id)arg5 comparisonOperator:(long long)arg6;
+ (id)queryWithExpression:(id)arg1 builder:(id /* block */)arg2;
+ (id)searchWordsForPhrase:(id)arg1 languages:(id)arg2;
+ (id)signpostLog;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_cancelQuery;
- (void)_changeCount:(long long)arg1;
- (void)_changedItems:(id)arg1;
- (void)_completed;
- (void)_failedWithError:(id)arg1;
- (void)_foundItems:(id)arg1;
- (void)_gathered;
- (bool)_isCancellationError:(id)arg1;
- (bool)_isFinishedQueryStatus:(id)arg1;
- (void)_logSignpostForSearchQueryDidFinishWithStatus:(id)arg1;
- (void)_logSignpostForSearchQueryDidReceiveFirstResultsWithItemCount:(unsigned long long)arg1;
- (void)_logSignpostForSearchQueryStart;
- (void)_performClientWork:(id /* block */)arg1;
- (void)_removeAllLiveUpdatesBlocks;
- (void)_removeResultsBlock;
- (void)_removedItems:(id)arg1;
- (void)_searchQueryDidChangeCount:(long long)arg1;
- (void)_searchQueryDidChangeItems:(id)arg1;
- (void)_searchQueryDidComplete;
- (void)_searchQueryDidFailWithError:(id)arg1;
- (void)_searchQueryDidFindItems:(id)arg1;
- (void)_searchQueryDidRemoveIdentifiers:(id)arg1;
- (void)_searchQueryGatherDidEnd;
- (id)bundleIdentifier;
- (void)cancel;
- (id /* block */)changedItemsBlock;
- (id /* block */)completionBlock;
- (long long)count;
- (id /* block */)countChangedBlock;
- (bool)counting;
- (void)dealloc;
- (id)description;
- (id)expression;
- (id /* block */)failureBlock;
- (id)fetchAttributes;
- (id /* block */)gatheredBlock;
- (id)init;
- (id)initWithExpression:(id)arg1 builder:(id /* block */)arg2;
- (bool)isCancelled;
- (bool)isFinished;
- (bool)live;
- (bool)liveQueryDidGather;
- (id)logIdentifier;
- (id)logPrefixString;
- (long long)maxCount;
- (id)progress;
- (id)protectionClasses;
- (id)query;
- (bool)queryDidMoveToFinishedState;
- (id)queryStatus;
- (id)rankingQueries;
- (id /* block */)removedItemsBlock;
- (id /* block */)resultsBlock;
- (void)setBundleIdentifier:(id)arg1;
- (void)setChangedItemsBlock:(id /* block */)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setCount:(long long)arg1;
- (void)setCountChangedBlock:(id /* block */)arg1;
- (void)setCounting:(bool)arg1;
- (void)setFailureBlock:(id /* block */)arg1;
- (void)setFetchAttributes:(id)arg1;
- (void)setGatheredBlock:(id /* block */)arg1;
- (void)setLive:(bool)arg1;
- (void)setLiveQueryDidGather:(bool)arg1;
- (void)setLogIdentifier:(id)arg1;
- (void)setLogPrefixString:(id)arg1;
- (void)setMaxCount:(long long)arg1;
- (void)setProtectionClasses:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryDidMoveToFinishedState:(bool)arg1;
- (void)setQueryStatus:(id)arg1;
- (void)setRankingQueries:(id)arg1;
- (void)setRemovedItemsBlock:(id /* block */)arg1;
- (void)setResultsBlock:(id /* block */)arg1;
- (void)setSimulatedFailedQueryError:(id)arg1;
- (unsigned long long)signpostID;
- (void)simulateFailedQueryWithError:(id)arg1;
- (id)simulatedFailedQueryError;
- (void)start;

@end
