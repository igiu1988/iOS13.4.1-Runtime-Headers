/* Generated by EzioChiu.
 */

@protocol GEORequestCounterProtocol <NSObject>

@required

- (void)clearCounters;
- (bool)countersEnabled;
- (void)fetchAnalyticsHandlingDataFrom:(void *)arg1 completion:(void *)arg2 completionQueue:(void *)arg3; // needs 3 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*, NSObject<OS_dispatch_queue> *
- (void)fetchRoutePreloadSessionsFrom:(void *)arg1 completion:(void *)arg2 completionQueue:(void *)arg3; // needs 3 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*, NSObject<OS_dispatch_queue> *
- (void)fetchTrafficProbeCollectionsStartingFrom:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)finishedProactiveTileDownloadForIdentifier:(NSString *)arg1 policy:(unsigned char)arg2 tilesConsidered:(unsigned int)arg3 tileDownloadAttempts:(unsigned int)arg4 successes:(unsigned int)arg5 failures:(unsigned int)arg6 bytesDownloaded:(unsigned long long)arg7;
- (void)readProactiveTileDownloadsSince:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)readRequestLogsSince:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)readRequestsPerAppSince:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)recordAnalyticsDBExpireCount:(long long)arg1 logMsgType:(long long)arg2 at:(NSDate *)arg3;
- (void)recordAnalyticsPersistCount:(long long)arg1 logMsgType:(long long)arg2 at:(NSDate *)arg3;
- (void)recordAnalyticsUploadFailureCount:(long long)arg1 logMsgType:(long long)arg2 at:(NSDate *)arg3;
- (void)recordAnalyticsUploadSuccessCount:(long long)arg1 bytes:(long long)arg2 logMsgType:(long long)arg3 usedCellular:(bool)arg4 at:(NSDate *)arg5;
- (void)recordRoutePreloadSessionAt:(NSDateInterval *)arg1 transportType:(long long)arg2 tilesPreloaded:(unsigned long long)arg3 tilesUsed:(unsigned long long)arg4 tilesMissed:(unsigned long long)arg5;
- (void)recordTrafficProbeCollectionAt:(NSDate *)arg1 tripId:(NSString *)arg2 locationCount:(int)arg3 result:(unsigned char)arg4;
- (<GEORequestCounterTicket> *)requestCounterTicketForType:(unsigned char)arg1 appId:(NSString *)arg2;
- (void)setCountersEnabled:(bool)arg1;
- (void)startPowerLogSessionWithName:(NSString *)arg1;
- (void)startedProactiveTileDownloadForIdentifier:(NSString *)arg1 policy:(unsigned char)arg2;

@end
