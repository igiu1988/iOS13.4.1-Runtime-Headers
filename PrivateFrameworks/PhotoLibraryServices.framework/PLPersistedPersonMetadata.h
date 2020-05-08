/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersistedPersonMetadata : NSObject {
    int  _cloudVerifiedType;
    NSDictionary * _contactMatchingDictionary;
    bool  _cplEnabled;
    NSArray * _detectedFaces;
    NSString * _displayName;
    long long  _fromVersion;
    NSString * _fullName;
    short  _keyFacePickSource;
    unsigned int  _manualOrder;
    NSString * _mergeTargetPersonUUID;
    NSURL * _metadataURL;
    PLPerson * _person;
    NSString * _personUUID;
    NSString * _personUri;
    NSArray * _rejectedFaces;
    int  _type;
    int  _verifiedType;
}

@property (nonatomic) int cloudVerifiedType;
@property (nonatomic, copy) NSDictionary *contactMatchingDictionary;
@property (nonatomic, retain) NSArray *detectedFaces;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) long long fromVersion;
@property (nonatomic, retain) NSString *fullName;
@property (nonatomic) short keyFacePickSource;
@property (nonatomic) unsigned int manualOrder;
@property (nonatomic, retain) NSString *mergeTargetPersonUUID;
@property (nonatomic, retain) NSURL *metadataURL;
@property (nonatomic, retain) PLPerson *person;
@property (nonatomic, retain) NSString *personUUID;
@property (nonatomic, retain) NSString *personUri;
@property (nonatomic, retain) NSArray *rejectedFaces;
@property (nonatomic) int type;
@property (nonatomic) int verifiedType;

+ (id)_clusterRejectedFaceIDsWithPerson:(id)arg1;
+ (bool)_deleteMetadataFileForPersonUUID:(id)arg1 metadataURL:(id)arg2;
+ (id)_detectedFacesToArchiveWithPerson:(id)arg1;
+ (id)_fetchFacesWithPredicate:(id)arg1 resultType:(unsigned long long)arg2 managedObjectContext:(id)arg3 error:(id*)arg4;
+ (id)_metadataFileURLForPersonUUID:(id)arg1 pathManager:(id)arg2;
+ (id)_persistedFaceMetadataWithFaces:(id)arg1 keyFace:(id)arg2 clusterRejectedFaceIDs:(id)arg3;
+ (id)_rejectedFacesToArchiveWithPerson:(id)arg1;
+ (bool)deleteMetadataFileForPersonUUID:(id)arg1 pathManager:(id)arg2;
+ (bool)isValidPath:(id)arg1;
+ (bool)isValidPath:(id)arg1 outPersonUUID:(id*)arg2;
+ (void)performPostImportMigrationFromVersion:(unsigned long long)arg1 fromDataInManagedObjectContext:(id)arg2;
+ (id)personUUIDsToDedupeWithMetadataURLs:(id)arg1 cplEnabled:(bool)arg2;
+ (void)updateMergeTargetPersonWithPersonUUIDMapping:(id)arg1 fromDataInManagedObjectContext:(id)arg2;
+ (id)urlsForPersistedPersonsInMetadataDirectoryOfLibrary:(id)arg1;

- (void).cxx_destruct;
- (void)_addAssetUUIDsFromFaces:(id)arg1 toMutableSet:(id)arg2;
- (bool)_insertDetectedFacesOnPerson:(id)arg1 fromDataInManagedObjectContext:(id)arg2 deferUnmatched:(bool)arg3;
- (bool)_insertRejectedFacesOnPerson:(id)arg1 fromDataInManagedObjectContext:(id)arg2 deferUnmatched:(bool)arg3;
- (id)_metadataData;
- (bool)_readUUID;
- (void)_saveMetadata;
- (int)cloudVerifiedType;
- (id)contactMatchingDictionary;
- (id)description;
- (id)detectedFaceIdentifiers;
- (id)detectedFaces;
- (id)displayName;
- (long long)fromVersion;
- (id)fullName;
- (bool)hasAllAssetsAvailableInManagedObjectContext:(id)arg1 includePendingAssetChanges:(bool)arg2;
- (id)init;
- (id)initWithPLPerson:(id)arg1 metadataURL:(id)arg2;
- (id)initWithPLPerson:(id)arg1 pathManager:(id)arg2;
- (id)initWithPersistedDataAtURL:(id)arg1 cplEnabled:(bool)arg2;
- (id)initWithPersistedDataAtURL:(id)arg1 deferUnarchiving:(bool)arg2 cplEnabled:(bool)arg3;
- (id)insertPersonFromDataInManagedObjectContext:(id)arg1;
- (id)jsonDictionary;
- (short)keyFacePickSource;
- (unsigned int)manualOrder;
- (bool)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg1 diff:(id*)arg2;
- (id)mergeTargetPersonUUID;
- (id)metadataURL;
- (id)person;
- (id)personUUID;
- (id)personUri;
- (bool)readDetectedFaces;
- (bool)readMetadata;
- (id)rejectedFaces;
- (void)removePersistedData;
- (void)setCloudVerifiedType:(int)arg1;
- (void)setContactMatchingDictionary:(id)arg1;
- (void)setDetectedFaces:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFromVersion:(long long)arg1;
- (void)setFullName:(id)arg1;
- (void)setKeyFacePickSource:(short)arg1;
- (void)setManualOrder:(unsigned int)arg1;
- (void)setMergeTargetPersonUUID:(id)arg1;
- (void)setMetadataURL:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setPersonUUID:(id)arg1;
- (void)setPersonUri:(id)arg1;
- (void)setRejectedFaces:(id)arg1;
- (void)setType:(int)arg1;
- (void)setVerifiedType:(int)arg1;
- (int)type;
- (bool)updateFacesInPerson:(id)arg1 fromDataInManagedObjectContext:(id)arg2 deferUnmatched:(bool)arg3;
- (int)verifiedType;
- (void)writePersistedData;

@end
