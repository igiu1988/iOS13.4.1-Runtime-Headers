/* Generated by EzioChiu.
 */

@protocol HKWorkoutBuilderServerInterface <NSObject>

@required

- (void)remote_addDataSourcesWithIdentifiers:(NSArray *)arg1;
- (void)remote_addMetadata:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_addSamples:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_addWorkoutEvents:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_recoverWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_removeDataSourcesWithIdentifiers:(NSArray *)arg1;
- (void)remote_setShouldCollectEvents:(bool)arg1;
- (void)remote_setStatisticsComputationMethod:(long long)arg1 forType:(HKQuantityType *)arg2;
- (void)remote_setStatisticsMergeStrategy:(unsigned long long)arg1 forType:(HKQuantityType *)arg2;
- (void)remote_setTargetConstructionState:(void *)arg1 startDate:(void *)arg2 endDate:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: long long, NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_updateDevice:(HKDevice *)arg1;

@end
