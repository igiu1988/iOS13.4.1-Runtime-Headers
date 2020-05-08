/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGRecentPastEventPotentialMemory : PGPotentialMemory {
    bool  _isBirthday;
    double  _meanContentScore;
    double  _neighborScore;
    NSSet * _peopleNodes;
}

@property bool isBirthday;
@property double meanContentScore;
@property double neighborScore;
@property (retain) NSSet *peopleNodes;

- (void).cxx_destruct;
- (void)computeRemainingScoresWithManager:(id)arg1 controller:(id)arg2 previousPotentialMemory:(id)arg3;
- (id)description;
- (id)initWithAssetCollection:(id)arg1 momentNode:(id)arg2 subcategory:(unsigned long long)arg3;
- (id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 momentNodes:(id)arg3 sourceType:(long long)arg4;
- (bool)isBirthday;
- (double)meanContentScore;
- (double)neighborScore;
- (id)peopleNodes;
- (void)setIsBirthday:(bool)arg1;
- (void)setMeanContentScore:(double)arg1;
- (void)setNeighborScore:(double)arg1;
- (void)setPeopleNodes:(id)arg1;

@end
