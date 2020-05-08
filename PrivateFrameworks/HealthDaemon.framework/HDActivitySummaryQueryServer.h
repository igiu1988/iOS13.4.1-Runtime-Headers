/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivitySummaryQueryServer : HDQueryServer {
    bool  _deliversUpdates;
    HDSQLitePredicate * _filterPredicate;
    bool  _hasSentInitialResults;
    long long  _lastProcessedAnchor;
    HDActivitySummaryQueryHelper * _queryHelper;
}

+ (Class)queryClass;
+ (id)requiredEntitlements;

- (void).cxx_destruct;
- (void)_queue_deliverActivitySummariesToClient:(id)arg1 isFinalBatch:(bool)arg2 clearPendingBatches:(bool)arg3;
- (void)_queue_deliverErrorToClient:(id)arg1;
- (void)_queue_deliverResultsWithActivitySummaries:(id)arg1 isFinalBatch:(bool)arg2 clearPendingBatches:(bool)arg3 error:(id)arg4;
- (void)_queue_start;
- (void)_queue_stop;
- (void)_setUpInitialQueryHelper;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end