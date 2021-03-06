/* Generated by EzioChiu.
 */

@protocol DESService <NSObject>

@required

- (void)deleteAllSavedRecordsForBundleId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteSavedRecordForBundleId:(void *)arg1 identfier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchInstalledBundlesIdsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchRecordsForBundleId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 10: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, NSArray *, NSError *, void*
- (void)fetchSavedRecordInfoForRecordType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)fetchTelemetryForBundleId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)postRecipeResultForBundleId:(void *)arg1 baseURL:(void *)arg2 result:(void *)arg3 recipeUUID:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSURL *, NSDictionary *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)runEvaluationForBundleId:(void *)arg1 recipePath:(void *)arg2 recordUUIDs:(void *)arg3 attachments:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 13: NSString *, NSString *, NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSData *, NSURL *, NSError *, void*
- (void)runLiveEvaluationForAllBundlesWithBaseURL:(void *)arg1 localeIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)runLiveEvaluationForBundleId:(void *)arg1 baseURL:(void *)arg2 localeIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveCoreDuetEvent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: _DKEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)saveRecordForBundleId:(void *)arg1 data:(void *)arg2 recordInfo:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSData *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSError *, void*
- (void)setValue:(void *)arg1 forInfoKey:(void *)arg2 bundleID:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*

@end
