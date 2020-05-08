/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotosHighlight : PLManagedObject <PLPhotosHighlightData>

@property (nonatomic, retain) NSSet *assets;
@property (nonatomic) int assetsCount;
@property (nonatomic) unsigned short category;
@property (nonatomic, retain) NSSet *childDayGroupPhotosHighlights;
@property (nonatomic, retain) NSSet *childPhotosHighlights;
@property (nonatomic, retain) NSSet *dayGroupAssets;
@property (nonatomic) int dayGroupAssetsCount;
@property (nonatomic, retain) NSSet *dayGroupExtendedAssets;
@property (nonatomic) int dayGroupExtendedAssetsCount;
@property (nonatomic, retain) PLManagedAsset *dayGroupKeyAsset;
@property (nonatomic, retain) NSSet *dayGroupSummaryAssets;
@property (nonatomic) int dayGroupSummaryAssetsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) int endTimeZoneOffset;
@property (nonatomic) unsigned short enrichmentState;
@property (nonatomic) short enrichmentVersion;
@property (nonatomic, retain) NSSet *extendedAssets;
@property (nonatomic) int extendedCount;
@property (readonly) unsigned long long hash;
@property (nonatomic) short highlightVersion;
@property (nonatomic) bool isCurated;
@property (nonatomic, readonly) bool isPromoted;
@property (nonatomic, readonly) bool isRecent;
@property (nonatomic, retain) PLManagedAsset *keyAsset;
@property (nonatomic, retain) PLManagedAsset *keyAssetForKind;
@property (nonatomic) unsigned short kind;
@property (nonatomic, readonly, retain) NSDate *localEndDate;
@property (nonatomic, readonly, retain) NSDate *localStartDate;
@property (nonatomic, retain) NSSet *moments;
@property (nonatomic, readonly, retain) NSArray *momentsSortedByTime;
@property (nonatomic, retain) PLManagedAsset *monthFirstAsset;
@property (nonatomic, retain) PLManagedAsset *monthKeyAsset;
@property (nonatomic) unsigned long long mood;
@property (nonatomic, readonly) unsigned long long numberOfAssetsInExtended;
@property (nonatomic, retain) PLPhotosHighlight *parentDayGroupPhotosHighlight;
@property (nonatomic, retain) PLPhotosHighlight *parentPhotosHighlight;
@property (nonatomic) double promotionScore;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) int startTimeZoneOffset;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSSet *summaryAssets;
@property (nonatomic) int summaryCount;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) unsigned short type;
@property (nonatomic, readonly, retain) NSObject<NSCopying> *uniqueObjectID;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, retain) NSString *verboseSmartDescription;
@property (nonatomic) unsigned short visibilityState;
@property (nonatomic, retain) PLManagedAsset *yearKeyAsset;

+ (id)_kindDescription:(unsigned short)arg1;
+ (id)_predicateForHighlightsOfKind:(unsigned short)arg1;
+ (id)allPhotosHighlightsInManagedObjectContext:(id)arg1 predicate:(id)arg2 keyPathsForPrefetching:(id)arg3 error:(id*)arg4;
+ (id)baseSearchIndexPredicate;
+ (id)batchFetchPhotosHighlightUUIDsByAssetUUIDsWithAssetUUIDs:(id)arg1 library:(id)arg2 error:(id*)arg3;
+ (id)batchFetchPhotosHighlightUUIDsByMomentUUIDsWithMomentUUIDs:(id)arg1 library:(id)arg2 error:(id*)arg3;
+ (id)entityName;
+ (id)fetchRequest;
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 title:(id)arg3;
+ (id)insertNewPhotosHighlightInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)predicateForAllAssetsInPhotosHighlight:(id)arg1;
+ (id)predicateForEmptyHighlightsOfKind:(unsigned short)arg1;
+ (id)predicateForInvalidDayGroupHighlights;
+ (id)predicateForInvalidDayHighlights;
+ (id)predicateForInvalidHighlightsOfAllKinds;
+ (id)predicateForInvalidMonthOrYearHighlights;
+ (id)sortByTimeSortDescriptors;

- (void)_appendBusinessCategories:(id)arg1 toCollection:(id)arg2;
- (void)_appendBusinessNames:(id)arg1 toCollection:(id)arg2;
- (void)_appendDates:(id)arg1 withDateFormatter:(id)arg2 withSynonyms:(id)arg3 toCollection:(id)arg4;
- (void)_appendHolidays:(id)arg1 toCollection:(id)arg2;
- (void)_appendHomeToCollection:(id)arg1;
- (void)_appendLocationsInfo:(id)arg1 toCollection:(id)arg2;
- (void)_appendMeanings:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;
- (void)_appendPOIs:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;
- (void)_appendPersonsWithUUIDs:(id)arg1 toCollection:(id)arg2;
- (void)_appendPublicEventCategories:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;
- (void)_appendPublicEventStrings:(id)arg1 toCollection:(id)arg2 forSearchIndexCategory:(unsigned long long)arg3;
- (void)_appendROIs:(id)arg1 withSynonyms:(id)arg2 toCollection:(id)arg3;
- (void)_appendScenesWithIdentifiers:(id)arg1 toCollection:(id)arg2 sceneTaxonomyProxy:(id)arg3;
- (void)_appendSocialGroupIdentifiers:(id)arg1 toCollection:(id)arg2;
- (void)_appendWorkText:(id)arg1 toCollection:(id)arg2;
- (id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1;
- (void)awakeFromInsert;
- (id)bestAsset;
- (void)bumpHighlightVersion;
- (id)debugDescription;
- (void)delete;
- (id)description;
- (id)diagnosticInformation;
- (void)getSearchIndexContentsForCollection:(id)arg1 fromDictionary:(id)arg2 withDateFormatter:(id)arg3 synonymsDictionaries:(id)arg4 sceneTaxonomyProxy:(id)arg5;
- (bool)isPromoted;
- (bool)isRecent;
- (id)keyAssetForKind;
- (id)localEndDate;
- (id)localStartDate;
- (id)momentsSortedByTime;
- (unsigned long long)numberOfAssetsInExtended;
- (void)refreshAssets;
- (void)refreshCuratedAssetsForCurationType:(unsigned short)arg1;
- (void)removeAssetData:(id)arg1;
- (int)searchAssetsCountForKind;
- (void)setKeyAssetForKind:(id)arg1;
- (bool)supportsDiagnosticInformation;
- (id)uniqueObjectID;

@end
