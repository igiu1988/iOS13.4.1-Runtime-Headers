/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncStoreRecord : HDCloudSyncRecord {
    bool  _active;
    NSString * _ownerIdentifier;
    NSString * _pendingOwner;
    HDCloudSyncSequenceRecord * _slotASequenceHeaderRecord;
    HDCloudSyncSequenceRecord * _slotBSequenceHeaderRecord;
    NSUUID * _storeIdentifier;
    HDCloudSyncSequenceRecord * _tombstoneSequenceRecord;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) long long deviceMode;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, readonly, copy) NSArray *orderedSequenceRecords;
@property (nonatomic, readonly, copy) NSString *ownerIdentifier;
@property (nonatomic, copy) NSString *pendingOwner;
@property (nonatomic, copy) NSString *productType;
@property (nonatomic) long long requiredProtocolVersion;
@property (nonatomic, readonly) HDCloudSyncSequenceRecord *sequenceRecord;
@property (nonatomic, readonly, copy) NSUUID *storeIdentifier;
@property (nonatomic) long long supportedProtocolVersion;
@property (nonatomic, copy) NSString *systemBuildVersion;
@property (nonatomic, readonly) HDCloudSyncSequenceRecord *tombstoneSequenceRecord;

+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isStoreRecord:(id)arg1;
+ (bool)isStoreRecordID:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1;
+ (id)recordWithCKRecord:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_indentedSequenceRecordDescription:(id)arg1;
- (id)activeSequenceHeaderRecord;
- (id)addNewSequenceHeaderRecordWithSyncAnchorMap:(id)arg1 includedIdentifiers:(id)arg2;
- (id)addNewTombstoneSequenceHeaderRecordWithIncludedIdentifiers:(id)arg1;
- (void)addSequenceHeaderRecord:(id)arg1;
- (id)clearCurrentSequenceHeaderRecord;
- (id)clearOldSequenceHeaderRecord;
- (id)clearTombstoneSequenceHeaderRecord;
- (long long)compare:(id)arg1;
- (id)currentSequenceHeaderRecord;
- (id)description;
- (long long)deviceMode;
- (id)deviceName;
- (bool)hasActiveSequence;
- (bool)hasSequenceWithFutureProtocolVersion;
- (unsigned long long)hash;
- (id)initInSyncCircle:(id)arg1 ownerIdentifier:(id)arg2 storeIdentifier:(id)arg3;
- (id)initWithOwnerIdentifier:(id)arg1 storeIdentifier:(id)arg2 pendingOwner:(id)arg3 active:(bool)arg4 record:(id)arg5 schemaVersion:(long long)arg6;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (id)oldSequenceHeaderRecord;
- (id)orderedSequenceRecords;
- (id)ownerIdentifier;
- (id)pendingOwner;
- (id)productType;
- (long long)requiredProtocolVersion;
- (id)sequenceRecord;
- (id)sequenceRecordWithRecordID:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setDeviceMode:(long long)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setPendingOwner:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setRequiredProtocolVersion:(long long)arg1;
- (void)setSupportedProtocolVersion:(long long)arg1;
- (void)setSystemBuildVersion:(id)arg1;
- (id)storeIdentifier;
- (long long)supportedProtocolVersion;
- (id)systemBuildVersion;
- (id)tombstoneSequenceRecord;

@end
