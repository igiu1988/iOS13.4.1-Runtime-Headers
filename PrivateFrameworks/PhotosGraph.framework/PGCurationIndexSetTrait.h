/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGCurationIndexSetTrait : PGCurationTrait {
    NSIndexSet * _indexSet;
    unsigned long long  _targetNumberOfMatches;
    NSDictionary * _thresholdByIdentifier;
}

@property (nonatomic, readonly) NSIndexSet *indexSet;
@property (nonatomic) unsigned long long targetNumberOfMatches;
@property (nonatomic, retain) NSDictionary *thresholdByIdentifier;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)indexSet;
- (id)initWithIndexSet:(id)arg1;
- (bool)isActive;
- (id)niceDescription;
- (void)setTargetNumberOfMatches:(unsigned long long)arg1;
- (void)setThresholdByIdentifier:(id)arg1;
- (unsigned long long)targetNumberOfMatches;
- (id)thresholdByIdentifier;
- (double)thresholdForSceneIdentifier:(unsigned int)arg1;

@end
