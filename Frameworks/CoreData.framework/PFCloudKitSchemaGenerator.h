/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitSchemaGenerator : NSObject {
    NSString * _configurationName;
    NSPersistentStoreCoordinator * _coordinator;
    NSManagedObjectContext * _managedObjectContext;
    NSCloudKitMirroringDelegateOptions * _mirroringOptions;
    NSManagedObjectModel * _model;
    CKRecordZone * _recordZone;
    NSPersistentStore * _store;
}

@property (nonatomic, readonly) NSString *configurationName;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *coordinator;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *mirroringOptions;
@property (nonatomic, readonly) NSManagedObjectModel *model;
@property (nonatomic, readonly) CKRecordZone *recordZone;
@property (nonatomic, readonly) NSPersistentStore *store;

+ (id)newRepresentativeRecordForStaticFieldsInEntity:(id)arg1 inZoneWithID:(id)arg2;
+ (id)representativeValueFor:(id)arg1;

- (void).cxx_destruct;
- (id)configurationName;
- (id)coordinator;
- (void)dealloc;
- (id)init;
- (id)initWithObservedStore:(id)arg1 zone:(id)arg2 mirroringOptions:(id)arg3;
- (id)managedObjectContext;
- (id)mirroringOptions;
- (id)model;
- (id)newRepresentativeRecords:(id*)arg1;
- (void)populateRelationshipsOnObject:(id)arg1 withCache:(id)arg2;
- (void)populateValuesOnObject:(id)arg1;
- (id)recordZone;
- (id)representativeObjectForEntity:(id)arg1 withManagedObjectContext:(id)arg2 cache:(id)arg3 populate:(bool)arg4;
- (id)store;

@end
