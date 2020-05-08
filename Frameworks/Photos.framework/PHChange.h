/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHChange : NSObject {
    NSObject<OS_dispatch_queue> * _changeDetailIsolation;
    NSMutableDictionary * _changeDetailsForObjects;
    NSMapTable * _changeHandlingMap;
    PHPersistentChangeToken * _changeToken;
    NSDictionary * _changedAttributesByOID;
    NSSet * _changedObjectIDs;
    NSArray * _changedObjectIDsArray;
    NSDictionary * _changedRelationshipsByOID;
    NSMutableDictionary * _collectionChangeDetailsForObjects;
    NSManagedObjectContext * _context;
    NSSet * _deletedObjectIDs;
    NSDictionary * _deletedUuidsByObjectId;
    NSSet * _insertedObjectIDs;
    NSMutableDictionary * _objectIDsByLocalIdentifier;
    bool  _unknownMergeEvent;
    NSMutableDictionary * _updatedObjectsChangedAttributesByEntityName;
    NSMutableDictionary * _updatedObjectsChangedRelationshipsByEntityName;
}

@property (nonatomic, readonly) PHPersistentChangeToken *changeToken;
@property (nonatomic, readonly) NSManagedObjectContext *context;
@property (nonatomic, readonly) NSDictionary *deletedUuidsByObjectId;
@property (nonatomic, readonly) bool hasIncrementalChanges;
@property (nonatomic, readonly) unsigned long long totalChangeCount;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)handlerQueue;
+ (id)mergePersistedChanges:(id)arg1;
+ (void)pl_simulateChangeWithAssetContainerList:(id)arg1 photoLibrary:(id)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_formatEncodedDictionary:(id)arg1 withDecodeBlock:(id /* block */)arg2;
- (id)_formatedDeletedUUidsByObjectId;
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
- (id)_preloadChangeDetailsWithClearCacheForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)_preloadChangeDetailsWithRefetchForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)_prepareCachedValuesForEntity:(id)arg1;
- (id)_propertyNamesForObjectID:(id)arg1 entityClass:(Class)arg2;
- (id)_relationshipNamesForObjectID:(id)arg1 entityClass:(Class)arg2;
- (bool)anyUpdatedObjectsWithChangedAttributes:(unsigned long long)arg1 ofEntity:(id)arg2;
- (bool)anyUpdatedObjectsWithChangedRelationships:(unsigned long long)arg1 ofEntity:(id)arg2;
- (id)changeDetailsForFetchResult:(id)arg1;
- (id)changeDetailsForObject:(id)arg1;
- (id)changeToken;
- (id)changedAttributesByOID;
- (id)changedLocalIdentifiersForEntityClass:(Class)arg1;
- (id)changedLocalIdentifiersForEntityClass:(Class)arg1 context:(id)arg2;
- (id)changedPropertyNamesForLocalIdentifier:(id)arg1 entityClass:(Class)arg2;
- (id)changedPropertyNamesForObject:(id)arg1;
- (id)changedRelationshipNamesForLocalIdentifier:(id)arg1 entityClass:(Class)arg2;
- (id)changedRelationshipNamesForObject:(id)arg1;
- (id)changedRelationshipsByOID;
- (bool)containsChangesForEntityClass:(Class)arg1;
- (bool)contentOrThumbnailChangedForAsset:(id)arg1;
- (bool)contentOrThumbnailChangedForPHAssetOID:(id)arg1;
- (id)context;
- (id)deletedObjectIDs;
- (id)deletedUuidsByObjectId;
- (id)description;
- (bool)faceRelationshipChangedForPersonWithLocalIdentifier:(id)arg1;
- (bool)favoriteStateChangedForPHAssetOID:(id)arg1;
- (id)fetchUUIDMapForObjectIDs:(id)arg1 entityClass:(Class)arg2 context:(id)arg3;
- (bool)hasIncrementalChanges;
- (bool)hasRelationshipChangesForLocalIdentifier:(id)arg1;
- (bool)hiddenStateChangedForPHAssetOID:(id)arg1;
- (bool)highlightGroupRelationshipChangedForPhotosHighlightWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(bool)arg2;
- (id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(bool)arg2 changeToken:(id)arg3;
- (id)initWithInsertedObjectIDs:(id)arg1 updatedObjectIDs:(id)arg2 deletedObjectIDs:(id)arg3 deletedUuidsByObjectId:(id)arg4 changedAttributesByOID:(id)arg5 changedRelationshipsByOID:(id)arg6 unknownMergeEvent:(bool)arg7 changeToken:(id)arg8 managedObjectContext:(id)arg9;
- (id)insertedObjectIDs;
- (bool)intersectsWithDetectionCriteria:(id)arg1 managedObjectContext:(id)arg2;
- (bool)keyFaceChangedForPersonOID:(id)arg1;
- (bool)momentRelationshipChangedForPhotosHighlightWithIdentifier:(id)arg1;
- (bool)packedBadgeAttributesChangedForPHAssetOID:(id)arg1;
- (bool)personRelationshipChangedForFaceWithLocalIdentifier:(id)arg1;
- (void)preloadChangeDetailsForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 handler:(id /* block */)arg3;
- (void)preloadSimulatedChangeDetailsForManualFetchResults:(id)arg1 handler:(id /* block */)arg2;
- (unsigned long long)totalChangeCount;
- (bool)trashedStateChangedForPHAssetOID:(id)arg1;
- (id)updatedObjectIDs;

// Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion

- (id)nptoRelevantChangeDetailsForFetchResult:(id)arg1;

@end
