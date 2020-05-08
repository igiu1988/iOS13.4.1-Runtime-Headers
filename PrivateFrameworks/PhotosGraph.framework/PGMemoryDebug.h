/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGMemoryDebug : NSObject {
    NSDictionary * _additionalInfoKeywords;
    double  _collectionContentScore;
    NSArray * _collectionMeaningLabels;
    double  _collectionMeaningScore;
    double  _contentScore;
    NSDictionary * _eventKeywords;
    unsigned long long  _forbiddenMoods;
    double  _graphScore;
    PGMoodVector * _historyWeightedPositiveMoodVector;
    NSDictionary * _matchingKeywords;
    double  _matchingScore;
    double  _meanContentScore;
    NSArray * _meaningLabels;
    NSArray * _moodKeywords;
    PGMoodVector * _negativeMoodVector;
    double  _neighborScore;
    unsigned long long  _numberOfCollections;
    unsigned long long  _numberOfMoments;
    unsigned long long  _numberOfPeople;
    unsigned long long  _numberOfRelevantAssets;
    PGMoodVector * _positiveMoodVector;
    unsigned long long  _recommendedMoods;
    NSDictionary * _referenceKeywords;
    unsigned long long  _suggestedMood;
}

@property (nonatomic, retain) NSDictionary *additionalInfoKeywords;
@property (nonatomic) double collectionContentScore;
@property (nonatomic, retain) NSArray *collectionMeaningLabels;
@property (nonatomic) double collectionMeaningScore;
@property (nonatomic) double contentScore;
@property (nonatomic, retain) NSDictionary *eventKeywords;
@property (nonatomic) unsigned long long forbiddenMoods;
@property (nonatomic) double graphScore;
@property (nonatomic, retain) PGMoodVector *historyWeightedPositiveMoodVector;
@property (nonatomic, retain) NSDictionary *matchingKeywords;
@property (nonatomic) double matchingScore;
@property (nonatomic) double meanContentScore;
@property (nonatomic, retain) NSArray *meaningLabels;
@property (nonatomic, retain) NSArray *moodKeywords;
@property (nonatomic, retain) PGMoodVector *negativeMoodVector;
@property (nonatomic) double neighborScore;
@property (nonatomic) unsigned long long numberOfCollections;
@property (nonatomic) unsigned long long numberOfMoments;
@property (nonatomic) unsigned long long numberOfPeople;
@property (nonatomic) unsigned long long numberOfRelevantAssets;
@property (nonatomic, retain) PGMoodVector *positiveMoodVector;
@property (nonatomic) unsigned long long recommendedMoods;
@property (nonatomic, retain) NSDictionary *referenceKeywords;
@property (nonatomic) unsigned long long suggestedMood;

- (void).cxx_destruct;
- (id)additionalInfoKeywords;
- (double)collectionContentScore;
- (id)collectionMeaningLabels;
- (double)collectionMeaningScore;
- (double)contentScore;
- (id)eventKeywords;
- (unsigned long long)forbiddenMoods;
- (double)graphScore;
- (id)historyWeightedPositiveMoodVector;
- (id)matchingKeywords;
- (double)matchingScore;
- (double)meanContentScore;
- (id)meaningLabels;
- (id)moodKeywords;
- (id)negativeMoodVector;
- (double)neighborScore;
- (unsigned long long)numberOfCollections;
- (unsigned long long)numberOfMoments;
- (unsigned long long)numberOfPeople;
- (unsigned long long)numberOfRelevantAssets;
- (id)positiveMoodVector;
- (unsigned long long)recommendedMoods;
- (id)referenceKeywords;
- (void)setAdditionalInfoKeywords:(id)arg1;
- (void)setCollectionContentScore:(double)arg1;
- (void)setCollectionMeaningLabels:(id)arg1;
- (void)setCollectionMeaningScore:(double)arg1;
- (void)setContentScore:(double)arg1;
- (void)setEventKeywords:(id)arg1;
- (void)setForbiddenMoods:(unsigned long long)arg1;
- (void)setGraphScore:(double)arg1;
- (void)setHistoryWeightedPositiveMoodVector:(id)arg1;
- (void)setMatchingKeywords:(id)arg1;
- (void)setMatchingScore:(double)arg1;
- (void)setMeanContentScore:(double)arg1;
- (void)setMeaningLabels:(id)arg1;
- (void)setMoodKeywords:(id)arg1;
- (void)setNegativeMoodVector:(id)arg1;
- (void)setNeighborScore:(double)arg1;
- (void)setNumberOfCollections:(unsigned long long)arg1;
- (void)setNumberOfMoments:(unsigned long long)arg1;
- (void)setNumberOfPeople:(unsigned long long)arg1;
- (void)setNumberOfRelevantAssets:(unsigned long long)arg1;
- (void)setPositiveMoodVector:(id)arg1;
- (void)setRecommendedMoods:(unsigned long long)arg1;
- (void)setReferenceKeywords:(id)arg1;
- (void)setSuggestedMood:(unsigned long long)arg1;
- (unsigned long long)suggestedMood;

@end