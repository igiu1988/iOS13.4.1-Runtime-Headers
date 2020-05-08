/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPLocationStorage : NSObject {
    PPSQLDatabase * _db;
    id  _deletionObserver;
    PPDKStorage * _dkStorage;
    PPRecordStorageHelper * _storageHelper;
}

- (void).cxx_destruct;
- (id)_areasOfInterestForLocationRecordId:(long long)arg1 txnWitness:(id)arg2;
- (id)_contextualNamedEntitiesForLocationRecordId:(long long)arg1 txnWitness:(id)arg2;
- (void)_deleteLocationsWithRowIdTableWithName:(id)arg1 txnWitness:(id)arg2 atLeastOneLocationRemoved:(bool*)arg3 deletedCount:(unsigned long long*)arg4;
- (bool)_donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(bool)arg5 decayRate:(double)arg6 txnWitness:(id)arg7;
- (void)_insertAreasOfInterest:(id)arg1 forLocationWithRowId:(long long)arg2 txnWitness:(id)arg3;
- (void)_insertContextualNamedEntities:(id)arg1 forLocationWithRowId:(long long)arg2 txnWitness:(id)arg3;
- (id)_placemarkFromRecordQueryRowWithStatement:(id)arg1 columnMapping:(id)arg2 txnWitness:(id)arg3;
- (bool)_shouldSuppressRepeatedImpressions:(id)arg1;
- (void)_truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned int)arg1 txnWitness:(id)arg2;
- (bool)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2;
- (void)dealloc;
- (bool)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 atLeastOneLocationRemoved:(bool*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 atLeastOneLocationRemoved:(bool*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 atLeastOneLocationRemoved:(bool*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6;
- (bool)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 atLeastOneLocationRemoved:(bool*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllLocationsOlderThanDate:(id)arg1 atLeastOneLocationRemoved:(bool*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(bool)arg5 decayRate:(double)arg6 error:(id*)arg7;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (id)initWithDatabase:(id)arg1 maxRecords:(unsigned int)arg2 dkStorage:(id)arg3 loadEmptyDatabaseFromDK:(bool)arg4;
- (bool)iterLocationRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)tempTableForSourceIdsExcludedAlgorithms:(id)arg1 txnWitness:(id)arg2;

@end
