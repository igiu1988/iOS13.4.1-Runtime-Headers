/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGMoodGeneratorOptions : NSObject {
    unsigned long long  _memoryCategory;
    unsigned long long  _memorySubcategory;
    NSSet * _momentIDs;
    NSArray * _moodHistory;
    NSArray * _prefetchedAssets;
    NSDate * _referenceDate;
    NSDictionary * _sceneIdentifiersByMomentNodeIdentifier;
}

@property (nonatomic) unsigned long long memoryCategory;
@property (nonatomic) unsigned long long memorySubcategory;
@property (retain) NSSet *momentIDs;
@property (nonatomic, retain) NSArray *moodHistory;
@property (retain) NSArray *prefetchedAssets;
@property (retain) NSDate *referenceDate;
@property (retain) NSDictionary *sceneIdentifiersByMomentNodeIdentifier;

- (void).cxx_destruct;
- (unsigned long long)memoryCategory;
- (unsigned long long)memorySubcategory;
- (id)momentIDs;
- (id)moodHistory;
- (id)prefetchedAssets;
- (id)referenceDate;
- (id)sceneIdentifiersByMomentNodeIdentifier;
- (void)setMemoryCategory:(unsigned long long)arg1;
- (void)setMemorySubcategory:(unsigned long long)arg1;
- (void)setMomentIDs:(id)arg1;
- (void)setMoodHistory:(id)arg1;
- (void)setPrefetchedAssets:(id)arg1;
- (void)setReferenceDate:(id)arg1;
- (void)setSceneIdentifiersByMomentNodeIdentifier:(id)arg1;

@end
