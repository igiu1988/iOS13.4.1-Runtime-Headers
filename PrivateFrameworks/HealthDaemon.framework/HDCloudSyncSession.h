/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncSession : HDSyncSession {
    NSSet * _excludedSyncStores;
    HDCloudSyncSequenceRecord * _sequenceRecord;
}

@property (nonatomic, retain) HDCloudSyncSequenceRecord *sequenceRecord;

- (void).cxx_destruct;
- (id)excludedSyncStores;
- (long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (id)sequenceRecord;
- (void)setExcludedSyncStores:(id)arg1;
- (void)setSequenceRecord:(id)arg1;

@end