/* Generated by EzioChiu.
 */

@protocol MSPHistoryReplicaRecordFromCloud <MSPReplicaRecordFromCloud>

@required

- (void)applyDeleteTombstoneEdit:(MSPHistoryReplicaEditDeleteTombstone *)arg1;
- (void)applyUpdateModificationDateEdit:(MSPHistoryReplicaEditUpdateModificationDate *)arg1;

@end
