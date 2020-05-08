/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGHighlightTitleGenerator : NSObject {
    <PGEventEnrichment> * _collection;
    bool  _createVerboseTitle;
    PHAssetCollection * _curatedAssetCollection;
    PHAsset * _keyAsset;
    PGTitleTuple * _titleTuple;
}

@property (nonatomic, retain) <PGEventEnrichment> *collection;
@property (nonatomic) bool createVerboseTitle;
@property (nonatomic, retain) PHAssetCollection *curatedAssetCollection;
@property (nonatomic, retain) PHAsset *keyAsset;
@property (nonatomic, retain) PGTitleTuple *titleTuple;

+ (bool)collectionContainsAppleEvent:(id)arg1;
+ (id)commonMeaningLabelForTitleUsingMomentNodes:(id)arg1;
+ (id)meaningLabelsSortedByPriority;

- (void).cxx_destruct;
- (void)_generateTitleTuples;
- (id)collection;
- (bool)createVerboseTitle;
- (id)curatedAssetCollection;
- (id)initWithCollection:(id)arg1 curatedAssetCollection:(id)arg2 keyAsset:(id)arg3 createVerboseTitle:(bool)arg4;
- (id)keyAsset;
- (void)setCollection:(id)arg1;
- (void)setCreateVerboseTitle:(bool)arg1;
- (void)setCuratedAssetCollection:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setTitleTuple:(id)arg1;
- (id)titleTuple;

@end
