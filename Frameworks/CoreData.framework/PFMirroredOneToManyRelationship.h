/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFMirroredOneToManyRelationship : PFMirroredRelationship {
    NSRelationshipDescription * _inverseRelationshipDescription;
    NSManagedObjectID * _objectID;
    CKRecordID * _recordID;
    CKRecordID * _relatedRecordID;
    NSRelationshipDescription * _relationshipDescription;
}

@property (nonatomic, readonly) NSRelationshipDescription *inverseRelationshipDescription;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) CKRecordID *recordID;
@property (nonatomic, readonly) CKRecordID *relatedObjectRecordID;
@property (nonatomic, readonly) NSRelationshipDescription *relationshipDescription;

- (void)dealloc;
- (id)initWithManagedObject:(id)arg1 withRecordName:(id)arg2 relatedToRecordWithRecordName:(id)arg3 byRelationship:(id)arg4;
- (id)inverseRelationshipDescription;
- (id)objectID;
- (id)recordID;
- (id)recordTypesToRecordIDs;
- (id)relatedObjectRecordID;
- (id)relationshipDescription;
- (bool)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id*)arg3;

@end
