/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudMaster : PLManagedObject <PLSyncableObject>

@property (nonatomic, retain) NSSet *assets;
@property (nonatomic) short cloudLocalState;
@property (nonatomic, retain) NSString *cloudMasterGUID;
@property (nonatomic) NSString *codecName;
@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) short fullSizeJPEGSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *importDate;
@property (nonatomic, retain) NSString *importSessionID;
@property (nonatomic) short importedBy;
@property (nonatomic, readonly, retain) id localID;
@property (nonatomic, retain) PLCloudMasterMediaMetadata *mediaMetadata;
@property (nonatomic, retain) NSString *mediaMetadataType;
@property (nonatomic, retain) PLMomentShare *momentShare;
@property (nonatomic, retain) NSString *originalFilename;
@property (nonatomic) short originalOrientation;
@property (nonatomic, copy) NSString *originatingAssetIdentifier;
@property (nonatomic) short placeholderState;
@property (nonatomic, retain) NSSet *resources;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSSet *transientModernResources;
@property (nonatomic, retain) NSString *uniformTypeIdentifier;
@property (nonatomic) short videoFrameRate;

+ (id)_originalTypes;
+ (id)cloudMasterWithGUID:(id)arg1 inMomentShare:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)cloudMasterWithScopedIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)deleteAllCloudMastersInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (unsigned long long)fullSizeJPEGSourceForUTI:(id)arg1 andImageDimensions:(struct CGSize { double x1; double x2; })arg2;
+ (id)insertIntoPhotoLibrary:(id)arg1 withCloudMasterGUID:(id)arg2 inMomentShare:(id)arg3;
+ (id)listOfSyncedProperties;
+ (void)resetCloudMastersStateInManagedObjectContext:(id)arg1 hardReset:(bool)arg2;

- (void)_promptForNilScopeIdentifierRadar;
- (id)allMasterResources;
- (bool)allOriginalsAreLocallyAvailableForAssetUuid:(id)arg1 useOriginalAltInsteadOfOriginal:(bool)arg2;
- (bool)allOriginalsAreUploaded;
- (void)applyPropertiesFromCPLMasterChange:(id)arg1;
- (id)assetUUIDToCloudResources;
- (void)awakeFromInsert;
- (id)cloudResourceForResourceType:(unsigned long long)arg1 forAssetUuid:(id)arg2;
- (id)cloudResourcesForResourceType:(unsigned long long)arg1;
- (id)cplFullRecord;
- (id)cplMasterPropertyChangeForAsset:(id)arg1;
- (id)cplPropertyRecord;
- (id)description;
- (bool)hasResourcesOtherThanForAssetUuid:(id)arg1;
- (bool)isSyncableChange;
- (id)localID;
- (id)originalFilenameForResourceType:(unsigned long long)arg1 filePath:(id)arg2;
- (id)payloadsForChangedKeys:(id)arg1;
- (void)rm_applyExpungeableResourceStatesFromCPLMasterChange:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)rm_applyResourcesFromCPLMasterChange:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)rm_assetUUIDToCloudResources;
- (id)rm_cloudResourceForResourceType:(unsigned long long)arg1 forAssetUuid:(id)arg2;
- (id)rm_cloudResourcesForResourceType:(unsigned long long)arg1;
- (id)scopedIdentifier;
- (unsigned long long)sizeOfOriginal;
- (bool)supportsCloudUpload;

@end
