/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncSubscriptionRecord : HDCloudSyncRecord

@property (nonatomic, readonly, copy) CKRecordID *storeRecordID;

+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isSubscriptionRecord:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1;
+ (id)recordIDsWithZoneID:(id)arg1;
+ (id)recordWithCKRecord:(id)arg1 error:(id*)arg2;

- (id)description;
- (id)initForStoreRecord:(id)arg1;
- (id)initWithCKRecord:(id)arg1 forStoreRecordID:(id)arg2 schemaVersion:(long long)arg3;
- (id)storeRecordID;

@end
