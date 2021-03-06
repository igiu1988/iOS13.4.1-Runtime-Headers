/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGSceneprintsBehavioralProcessor : NSObject <PGBehavioralAlgorithm> {
    NSMapTable * _goldAssetSceneprintsAndDates;
    NSSet * _goldAssetUUIDs;
    NSSet * _goldAssets;
    double  _similarityThreshold;
}

@property (nonatomic, readonly) NSMapTable *goldAssetSceneprintsAndDates;
@property (nonatomic, readonly) NSSet *goldAssetUUIDs;
@property (nonatomic, readonly) NSSet *goldAssets;
@property (nonatomic) double similarityThreshold;

- (void).cxx_destruct;
- (id)dataToPersist;
- (id)goldAssetSceneprintsAndDates;
- (id)goldAssetUUIDs;
- (id)goldAssets;
- (id)initWithGoldAssets:(id)arg1 graph:(id)arg2;
- (id)initWithGoldAssets:(id)arg1 graph:(id)arg2 persistedData:(id)arg3;
- (void)preprocessWithProgressBlock:(id /* block */)arg1;
- (id)semanticScoreByAssetUUIDForAssets:(id)arg1;
- (float)semanticScoreForAsset:(id)arg1;
- (void)setSimilarityThreshold:(double)arg1;
- (double)similarityThreshold;

@end
