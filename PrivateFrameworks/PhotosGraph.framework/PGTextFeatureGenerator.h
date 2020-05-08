/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGTextFeatureGenerator : NSObject {
    NSCountedSet * _areaNodes;
    NSCountedSet * _businessCategoryNodes;
    NSCountedSet * _businessNodes;
    NSCountedSet * _cityNodes;
    NSCountedSet * _countryNodes;
    NSCountedSet * _districtNodes;
    NSCountedSet * _holidayNodes;
    NSCountedSet * _meaningNodes;
    NSMutableSet * _momentIdentifiers;
    NSSet * _momentNodes;
    unsigned long long  _numberOfAssets;
    NSMapTable * _numberOfAssetsBySceneNode;
    unsigned long long  _numberOfMoments;
    NSDictionary * _optionsByDomain;
    NSCountedSet * _personNodes;
    NSCountedSet * _poiNodes;
    NSCountedSet * _publicEventCategoryNodes;
    NSCountedSet * _publicEventNodes;
    NSCountedSet * _publicEventPerformerNodes;
    NSCountedSet * _roiNodes;
    NSCountedSet * _sceneNodes;
    NSCountedSet * _stateNodes;
}

@property (nonatomic, retain) NSCountedSet *areaNodes;
@property (nonatomic, retain) NSCountedSet *businessCategoryNodes;
@property (nonatomic, retain) NSCountedSet *businessNodes;
@property (nonatomic, retain) NSCountedSet *cityNodes;
@property (nonatomic, retain) NSCountedSet *countryNodes;
@property (nonatomic, retain) NSCountedSet *districtNodes;
@property (nonatomic, retain) NSCountedSet *holidayNodes;
@property (nonatomic, retain) NSCountedSet *meaningNodes;
@property (nonatomic, retain) NSMutableSet *momentIdentifiers;
@property (nonatomic, retain) NSSet *momentNodes;
@property (nonatomic) unsigned long long numberOfAssets;
@property (nonatomic, retain) NSMapTable *numberOfAssetsBySceneNode;
@property (nonatomic) unsigned long long numberOfMoments;
@property (nonatomic, retain) NSDictionary *optionsByDomain;
@property (nonatomic, retain) NSCountedSet *personNodes;
@property (nonatomic, retain) NSCountedSet *poiNodes;
@property (nonatomic, retain) NSCountedSet *publicEventCategoryNodes;
@property (nonatomic, retain) NSCountedSet *publicEventNodes;
@property (nonatomic, retain) NSCountedSet *publicEventPerformerNodes;
@property (nonatomic, retain) NSCountedSet *roiNodes;
@property (nonatomic, retain) NSCountedSet *sceneNodes;
@property (nonatomic, retain) NSCountedSet *stateNodes;

+ (id)_knowledgeOptionsByDomain;
+ (id)_naturalLanguageOptionsByDomain;

- (void).cxx_destruct;
- (void)_resetProperties;
- (id)_sortedTextFeaturesUsingWeightAndTypeFromTextFeatures:(id)arg1;
- (id)_textFeaturesForNode:(id)arg1 type:(unsigned long long)arg2 weight:(float)arg3;
- (id)_textFeaturesForNodes:(id)arg1 type:(unsigned long long)arg2;
- (id)_textFeaturesForPersonNodes:(id)arg1;
- (void)analyzeMomentNodes;
- (id)areaNodes;
- (id)bestTextFeaturesFromTextFeatures:(id)arg1;
- (bool)boundTextFeaturesPerEvent;
- (id)businessCategoryNodes;
- (id)businessNodes;
- (id)cityNodes;
- (id)countryNodes;
- (id)districtNodes;
- (id)generateTextFeatures;
- (id)holidayNodes;
- (id)initWithMomentNodes:(id)arg1;
- (id)knowledgeFeatures;
- (unsigned long long)maximumNumberOfTextFeaturesPerEvent;
- (id)meaningNodes;
- (id)momentIdentifiers;
- (id)momentNodes;
- (id)naturalLanguageFeatures;
- (unsigned long long)numberOfAssets;
- (id)numberOfAssetsBySceneNode;
- (unsigned long long)numberOfMoments;
- (id)optionsByDomain;
- (id)personNodes;
- (id)poiNodes;
- (id)publicEventCategoryNodes;
- (id)publicEventNodes;
- (id)publicEventPerformerNodes;
- (id)roiNodes;
- (id)sceneNodes;
- (void)setAreaNodes:(id)arg1;
- (void)setBusinessCategoryNodes:(id)arg1;
- (void)setBusinessNodes:(id)arg1;
- (void)setCityNodes:(id)arg1;
- (void)setCountryNodes:(id)arg1;
- (void)setDistrictNodes:(id)arg1;
- (void)setHolidayNodes:(id)arg1;
- (void)setMeaningNodes:(id)arg1;
- (void)setMomentIdentifiers:(id)arg1;
- (void)setMomentNodes:(id)arg1;
- (void)setNumberOfAssets:(unsigned long long)arg1;
- (void)setNumberOfAssetsBySceneNode:(id)arg1;
- (void)setNumberOfMoments:(unsigned long long)arg1;
- (void)setOptionsByDomain:(id)arg1;
- (void)setPersonNodes:(id)arg1;
- (void)setPoiNodes:(id)arg1;
- (void)setPublicEventCategoryNodes:(id)arg1;
- (void)setPublicEventNodes:(id)arg1;
- (void)setPublicEventPerformerNodes:(id)arg1;
- (void)setRoiNodes:(id)arg1;
- (void)setSceneNodes:(id)arg1;
- (void)setStateNodes:(id)arg1;
- (id)stateNodes;

@end