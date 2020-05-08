/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDetectedFace : PLManagedObject <PLSyncableDetectedFace>

@property (nonatomic, copy) NSDate *adjustmentVersion;
@property (nonatomic, retain) NSDate *adjustmentVersion;
@property (nonatomic) unsigned short ageType;
@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic, readonly) bool assetVisible;
@property (nonatomic) unsigned short baldType;
@property (nonatomic) double blurScore;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) int cloudNameSource;
@property (nonatomic, retain) NSSet *clusterRejectedPersons;
@property (nonatomic) int clusterSequenceNumber;
@property (nonatomic) short confirmedFaceCropGenerationState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int effectiveNameSource;
@property (nonatomic) unsigned short eyeMakeupType;
@property (nonatomic) unsigned short eyesState;
@property (nonatomic) int faceAlgorithmVersion;
@property (nonatomic, retain) PLFaceCrop *faceCrop;
@property (nonatomic, retain) PLDetectedFaceGroup *faceGroup;
@property (nonatomic, retain) PLDetectedFaceGroup *faceGroupBeingKeyFace;
@property (nonatomic, retain) PLDetectedFaceprint *faceprint;
@property (nonatomic) unsigned short facialHairType;
@property (nonatomic) unsigned short genderType;
@property (nonatomic) unsigned short glassesType;
@property (nonatomic, retain) NSString *groupingIdentifier;
@property (nonatomic) unsigned short hairColorType;
@property (nonatomic) bool hasSmile;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidden;
@property (nonatomic) bool isInTrash;
@property (nonatomic) bool isLeftEyeClosed;
@property (nonatomic) bool isRightEyeClosed;
@property (nonatomic, readonly) bool isTrainingFace;
@property (nonatomic) double leftEyeX;
@property (nonatomic) double leftEyeY;
@property (nonatomic) unsigned short lipMakeupType;
@property (nonatomic, readonly, retain) id localID;
@property (nonatomic) bool manual;
@property (nonatomic, retain) NSString *masterIdentifier;
@property (nonatomic) double mouthX;
@property (nonatomic) double mouthY;
@property (nonatomic) int nameSource;
@property (nonatomic, retain) <PLSyncablePerson> *person;
@property (nonatomic, retain) PLPerson *person;
@property (nonatomic, retain) <PLSyncablePerson> *personBeingKeyFace;
@property (nonatomic, retain) PLPerson *personBeingKeyFace;
@property (nonatomic) double poseYaw;
@property (nonatomic) double quality;
@property (nonatomic) int qualityMeasure;
@property (nonatomic, retain) NSSet *rejectedPersons;
@property (nonatomic, retain) NSSet *rejectedPersonsNeedingFaceCrops;
@property (nonatomic) double rightEyeX;
@property (nonatomic) double rightEyeY;
@property (nonatomic) double roll;
@property (nonatomic) double size;
@property (nonatomic) unsigned short smileType;
@property (nonatomic) long long sourceHeight;
@property (nonatomic) long long sourceWidth;
@property (readonly) Class superclass;
@property (nonatomic) int trainingType;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic) double yaw;

+ (id)_facesMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2 inPhotoLibrary:(id)arg3;
+ (id)_syncableFacesToUploadInitiallyPredicate;
+ (void)batchFetchDetectedFacesByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(id /* block */)arg4;
+ (void)batchFetchKeyFacesByPersonUUIDWithPersonUUIDs:(id)arg1 library:(id)arg2 completion:(id /* block */)arg3;
+ (unsigned long long)countOfHiddenFacesOnAssetsWithObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)detectedFaceWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
+ (void)enumerateAssetUUIDsForSearchIndexingWithDetctedFaceUUIDs:(id)arg1 managedObjectContext:(id)arg2 assetUUIDHandler:(id /* block */)arg3;
+ (id)findExistingFaceMatchingDimension:(id)arg1 inFaces:(id)arg2 ignoreSourceAssetDimensions:(bool)arg3;
+ (id)predicateForArchival;
+ (id)predicatesForFacesNeedingFaceCropGeneration;
+ (id)predicatesToExcludeNonVisibleFaces;
+ (long long)resetAssetForAllSyncableFacesInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1 hardReset:(bool)arg2;
+ (id)syncableFacesPredicate;
+ (id)syncableFacesToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned long long)arg2;

- (void)_touchPersonForPersistenceIfNeeded;
- (void)_updateFaceGroupIfNeeded;
- (void)_verifyAssetRelationship;
- (void)addClusterRejectedPerson:(id)arg1;
- (void)addRejectedPerson:(id)arg1;
- (void)addRejectedPersonNeedingFaceCrops:(id)arg1;
- (void)awakeFromInsert;
- (id)cplFullRecord;
- (id)debugLogDescription;
- (void)delete;
- (int)effectiveNameSource;
- (bool)isSyncableChange;
- (bool)isTrainingFace;
- (bool)isValidForPersistence;
- (id)localID;
- (id)momentShare;
- (id)namingDescription;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;
- (double)photosFaceRepresentationBlurScore;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationCenterY;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (bool)photosFaceRepresentationHasSmile;
- (bool)photosFaceRepresentationIsLeftEyeClosed;
- (bool)photosFaceRepresentationIsRightEyeClosed;
- (id)photosFaceRepresentationLocalIdentifier;
- (double)photosFaceRepresentationQuality;
- (long long)photosFaceRepresentationQualityMeasure;
- (double)photosFaceRepresentationRoll;
- (double)photosFaceRepresentationSize;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;
- (void)removeFaceprint;
- (void)setEffectiveNameSource:(int)arg1;
- (bool)supportsCloudUpload;
- (id)syncDescription;
- (bool)validForPersistenceChangedForChangedKeys:(id)arg1;
- (void)willSave;

@end
