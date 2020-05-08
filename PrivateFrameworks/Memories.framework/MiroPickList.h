/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroPickList : NSObject <NSCopying> {
    NSArray * _adjustedPickOrder;
    bool  _calculatingPickOrder;
    NSArray * _dateOrder;
    NSSet * _disallowedAssetIDs;
    NSDictionary * _freezeRanges;
    NSArray * _frozenAdjustedPickOrder;
    NSArray * _frozenSourceAssets;
    NSArray * _frozenSourceOrder;
    bool  _penalizeNonLocalAssets;
    NSSet * _photosCuratedAssetIDs;
    NSArray * _pickOrder;
    bool  _prioritizeCuratedSetAssets;
    NSSet * _requiredAssetIDs;
    NSArray * _scoreOrder;
    bool  _skipDistanceCalculation;
    NSArray * _sourceAssets;
    NSArray * _sourceOrder;
    NSDictionary * _specialInfo;
    NSArray * _splitOrder;
}

@property (nonatomic, retain) NSArray *adjustedPickOrder;
@property (nonatomic) bool calculatingPickOrder;
@property (nonatomic, readonly) int countAtOrAboveBadT;
@property (nonatomic, retain) NSArray *dateOrder;
@property (nonatomic, retain) NSSet *disallowedAssetIDs;
@property (nonatomic, retain) NSDictionary *freezeRanges;
@property (nonatomic, readonly) int freezeState;
@property (nonatomic, retain) NSArray *frozenAdjustedPickOrder;
@property (nonatomic, retain) NSArray *frozenSourceAssets;
@property (nonatomic, retain) NSArray *frozenSourceOrder;
@property (nonatomic, readonly) int idealCount;
@property (nonatomic, readonly) bool isCompelling;
@property (nonatomic) bool penalizeNonLocalAssets;
@property (nonatomic, retain) NSSet *photosCuratedAssetIDs;
@property (nonatomic, retain) NSArray *pickOrder;
@property (nonatomic) bool prioritizeCuratedSetAssets;
@property (nonatomic, retain) NSSet *requiredAssetIDs;
@property (nonatomic, retain) NSArray *scoreOrder;
@property (nonatomic) bool skipDistanceCalculation;
@property (nonatomic, retain) NSArray *sourceAssets;
@property (nonatomic, retain) NSArray *sourceOrder;
@property (nonatomic, copy) NSDictionary *specialInfo;
@property (nonatomic, retain) NSArray *splitOrder;

- (void).cxx_destruct;
- (void)_assignTrimRangesChronologicallyToPickInfos:(id)arg1;
- (void)_assignTrimRangesIntelligentlyToPickInfos:(id)arg1;
- (id)_computeAdjustedPickOrder;
- (double)_fractionOfPickInfo:(id)arg1 coveredByRanges:(id)arg2;
- (id)_pickInfosForAssetID:(id)arg1;
- (void)_reset;
- (id)adjustedPickOrder;
- (id)assetsUpToSceneCount:(long long)arg1;
- (bool)calculateFreezeFromFrozenSourceAssets;
- (void)calculateFullPickList;
- (void)calculatePickListFromVPFrameworkResults;
- (bool)calculatingPickOrder;
- (id)classifications;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)countAtOrAboveBadT;
- (int)countAtTValue:(double)arg1;
- (id)dateOrder;
- (id)description;
- (id)disallowedAssetIDs;
- (id)expandVideoAssetsAndConvertToScenes:(id)arg1;
- (id)freezeRanges;
- (int)freezeState;
- (id)frozenAdjustedPickOrder;
- (id)frozenSourceAssets;
- (id)frozenSourceOrder;
- (id)highestScoringItemFromIndex:(long long)arg1 lookingRight:(bool)arg2;
- (id)highestScoringItemToTheLeftFromIndex:(long long)arg1;
- (id)highestScoringItemToTheRightFromIndex:(long long)arg1;
- (int)idealCount;
- (id)initWithAssets:(id)arg1;
- (bool)isCompelling;
- (id)mediaAnalyzer;
- (bool)penalizeNonLocalAssets;
- (id)people;
- (id)photoLibrary;
- (id)photosCuratedAssetIDs;
- (id)pickOrder;
- (id)pickOrderFromSourceOrder;
- (bool)prioritizeCuratedSetAssets;
- (id)rangesForAssets:(id)arg1;
- (id)requiredAssetIDs;
- (id)scenesUpToCount:(long long)arg1 localOnly:(bool)arg2;
- (id)scoreOrder;
- (void)setAdjustedPickOrder:(id)arg1;
- (void)setCalculatingPickOrder:(bool)arg1;
- (void)setDateOrder:(id)arg1;
- (void)setDisallowedAssetIDs:(id)arg1;
- (void)setFreezeRanges:(id)arg1;
- (void)setFrozenAdjustedPickOrder:(id)arg1;
- (void)setFrozenSourceAssets:(id)arg1;
- (void)setFrozenSourceOrder:(id)arg1;
- (void)setPenalizeNonLocalAssets:(bool)arg1;
- (void)setPhotosCuratedAssetIDs:(id)arg1;
- (void)setPickOrder:(id)arg1;
- (void)setPrioritizeCuratedSetAssets:(bool)arg1;
- (void)setRequiredAssetIDs:(id)arg1;
- (void)setScoreOrder:(id)arg1;
- (void)setSkipDistanceCalculation:(bool)arg1;
- (void)setSourceAssets:(id)arg1;
- (void)setSourceOrder:(id)arg1;
- (void)setSpecialInfo:(id)arg1;
- (void)setSplitOrder:(id)arg1;
- (bool)skipDistanceCalculation;
- (id)sourceAssets;
- (id)sourceOrder;
- (id)sourceOrderFromSourceAssets;
- (id)sourceOrderFromSourceAssetsViaNewAPI;
- (id)sourceOrderFromSourceAssetsViaNewAPIStoppingAtCompelling:(bool*)arg1;
- (id)sourceOrderFromSourceAssetsViaOldAPI;
- (id)specialInfo;
- (id)splitDistancesForAssetID:(id)arg1;
- (id)splitOrder;
- (void)updateAssetsWithSpecialInfo;

@end
