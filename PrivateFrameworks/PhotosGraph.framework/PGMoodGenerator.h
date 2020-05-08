/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGMoodGenerator : NSObject {
    PHAssetCollection * _assetCollection;
    PGManager * _graphManager;
    PGMoodVector * _historyWeightedPositiveMoodVector;
    PGMoodVector * _negativeMoodVector;
    double  _negativeThreshold;
    PGMoodGeneratorOptions * _options;
    PGMoodVector * _positiveMoodVector;
    double  _positiveThreshold;
    unsigned long long  _suggestedMood;
}

@property double negativeThreshold;
@property (retain) PGMoodGeneratorOptions *options;
@property double positiveThreshold;

- (void).cxx_destruct;
- (id)_moodSources;
- (void)_processMoodSources;
- (unsigned long long)forbiddenMoods;
- (id)historyWeightedPositiveMoodVector;
- (id)initWithAssetCollection:(id)arg1 graphManager:(id)arg2 options:(id)arg3;
- (id)negativeMoodVector;
- (double)negativeThreshold;
- (id)options;
- (id)positiveMoodVector;
- (double)positiveThreshold;
- (unsigned long long)recommendedMoods;
- (void)setNegativeThreshold:(double)arg1;
- (void)setOptions:(id)arg1;
- (void)setPositiveThreshold:(double)arg1;
- (unsigned long long)suggestedMood;

@end
