/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteQueryResponsePreparer : NSObject {
    <CNAutocompleteFetchDelegate> * _delegate;
    CNAutocompleteFetchRequest * _fetchRequest;
    <CNPromise> * _matchingPriorityResultsPromise;
    NSMutableOrderedSet * _previouslyReturnedResults;
    <CNFuture> * _priorityResultsFuture;
}

@property (nonatomic, readonly) <CNAutocompleteFetchDelegate> *delegate;
@property (nonatomic, readonly) CNAutocompleteFetchRequest *fetchRequest;
@property (nonatomic, retain) <CNPromise> *matchingPriorityResultsPromise;
@property (nonatomic, retain) <CNFuture> *priorityResultsFuture;

+ (id)bundleIdentifierOfCurrentProcess;
+ (id)makeBundleIdentifierOfCurrentProcess;

- (void).cxx_destruct;
- (id)addDiagnosticLog:(id /* block */)arg1;
- (id)applyPriorityResultsOrder:(id)arg1;
- (id)askDelegateToAdjustResults;
- (id)delegate;
- (id)fetchRequest;
- (id)findUniqueResults:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 fetchRequest:(id)arg2;
- (id)matchingPriorityResultsPromise;
- (id)partitionCandidatesForRanking:(id)arg1;
- (id)prepareResults:(id)arg1;
- (id)priorityResultsFuture;
- (bool)resultIdentifierIsValidMessagesChatGuid:(id)arg1;
- (bool)resultMatchesPrefix:(id)arg1 inNameComponentsOfResult:(id)arg2;
- (id)resultsNotPreviouslyReturned:(id)arg1;
- (void)setMatchingPriorityResultsPromise:(id)arg1;
- (void)setPriorityResultsFuture:(id)arg1;
- (id)sortResults;
- (id)suppressResultsWithAddresses:(id)arg1;

@end
