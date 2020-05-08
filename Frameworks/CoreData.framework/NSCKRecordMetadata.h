/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCKRecordMetadata : NSManagedObject

@property (nonatomic, retain) NSString *ckRecordName;
@property (nonatomic, retain) NSData *ckRecordSystemFields;
@property (nonatomic, retain) NSData *ckShare;
@property (nonatomic, retain) NSNumber *entityId;
@property (nonatomic, retain) NSNumber *entityPK;
@property (nonatomic, retain) NSNumber *lastExportedTransactionNumber;
@property (nonatomic) bool needsCloudDelete;
@property (nonatomic) bool needsLocalDelete;
@property (nonatomic) bool needsUpload;
@property (nonatomic, retain) NSNumber *pendingExportChangeTypeNumber;
@property (nonatomic, retain) NSNumber *pendingExportTransactionNumber;
@property (nonatomic, retain) NSCKRecordZoneMetadata *recordZone;

+ (id)batchUpdateMetadataMatchingEntityIdsAndPKs:(id)arg1 withUpdates:(id)arg2 inStore:(id)arg3 withManagedObjectContext:(id)arg4 error:(id*)arg5;
+ (id)countRecordMetadataInStore:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3;
+ (id)countRecordMetadataInStore:(id)arg1 matchingPredicate:(id)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4;
+ (id)createMapOfMetadataMatchingObjectIDs:(id)arg1 inStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4;
+ (id)createMapOfMetadataMatchingRecords:(id)arg1 andRecordIDs:(id)arg2 inStore:(id)arg3 withManagedObjectContext:(id)arg4 error:(id*)arg5;
+ (id)entityPath;
+ (id)insertMetadataForObject:(id)arg1 setRecordName:(bool)arg2 inZone:(id)arg3 recordNamePrefix:(id)arg4 error:(id*)arg5;
+ (id)metadataForObject:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3;
+ (id)metadataForObjectIDs:(id)arg1 inStore:(id)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4;
+ (id)metadataForRecord:(id)arg1 inManagedObjectContext:(id)arg2 fromStore:(id)arg3 error:(id*)arg4;
+ (id)metadataForRecordIDs:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4;
+ (bool)purgeRecordMetadataWithRecordIDs:(id)arg1 inStore:(id)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4;

- (id)createObjectIDForLinkedRow;
- (id)createRecordID;

@end
