/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGMeaningfulEventAggregationMemoryGenerator : PGFeaturedMemoryGenerator {
    unsigned long long  _eventType;
    unsigned long long  _extendedMeaning;
    NSDictionary * _graphRequiredCriteriaByIdentifier;
    NSDate * _lowerBoundLocalDate;
    unsigned long long  _meaning;
    unsigned long long  _numberOfUntimelyRejects;
}

@property (nonatomic) unsigned long long eventType;
@property (nonatomic, retain) NSDate *lowerBoundLocalDate;
@property (nonatomic) unsigned long long meaning;

+ (id)_mostSpecificLabelForMeaning:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_canMakeMemoryWithMeaningfulEvents:(id)arg1 forMeaning:(unsigned long long)arg2 isOverTheYears:(bool)arg3;
- (bool)_computeRelevantAssetsForPotentialMemory:(id)arg1;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)arg1;
- (id)_expandedPotentialMemoriesFromPotentialMemory:(id)arg1;
- (unsigned long long)_extendedMeaningForActivityEvent:(id)arg1;
- (unsigned long long)_extendedMeaningForMeaning:(unsigned long long)arg1 meaningfulEvent:(id)arg2;
- (unsigned long long)_extendedMeaningForRestaurantEvent:(id)arg1;
- (id)_extraFeatureNodesFromMeaningfulEvent:(id)arg1 meaning:(unsigned long long)arg2 featureType:(unsigned long long)arg3;
- (id)_filterAssets:(id)arg1 inMomentNode:(id)arg2 forAreaNode:(id)arg3;
- (id)_filterAssets:(id)arg1 inMomentNode:(id)arg2 forCityNode:(id)arg3;
- (id)_filterAssets:(id)arg1 withLocation:(id)arg2;
- (id)_filterAssets:(id)arg1 withPositiveLocations:(id)arg2 negativeLocations:(id)arg3 maximumDistance:(double)arg4;
- (id)_nodesWithFeaturesOfType:(unsigned long long)arg1 fromMeaningfulEvent:(id)arg2;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (id)_potentialOverTheYearsMemoriesForMeaning:(unsigned long long)arg1;
- (id)_stringForExtendedMeaning:(unsigned long long)arg1;
- (bool)_supportsAggregationsForMeaning:(unsigned long long)arg1 primaryFeatureType:(unsigned long long)arg2 secondaryFeatureType:(unsigned long long)arg3;
- (unsigned long long)eventType;
- (id)lowerBoundLocalDate;
- (unsigned long long)meaning;
- (void)setEventType:(unsigned long long)arg1;
- (void)setLowerBoundLocalDate:(id)arg1;
- (void)setMeaning:(unsigned long long)arg1;

@end
