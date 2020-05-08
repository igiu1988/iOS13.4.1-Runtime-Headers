/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PULayoutSampledSectioning : PULayoutSectioning {
    bool  _hasSomeSampling;
    long long  _lastHitRangeIndex;
    long long  _lastHitRealSectionIndex;
    long long  _lastHitVisualSectionIndex;
    long long * _maximumNumberOfVisibleItemsForVisualSection;
    long long * _numberOfItemsForRealSection;
    long long * _numberOfRealItemsForVisualSection;
    long long  _numberOfRealSections;
    long long  _numberOfVisualSections;
    NSArray * _realSectionIndexesForVisualSection;
    bool  _samplingIsValid;
    id * _sectionSamplers;
    bool  _sectioningIsValid;
    long long * _startIndexInVisualSectionForRealSection;
    bool  _supportsSamplingAndSectionGrouping;
    long long * _visualSectionForRealSection;
}

@property (nonatomic) bool supportsSamplingAndSectionGrouping;

- (void).cxx_destruct;
- (long long)__debugUnsampledIndexForRealIndexPath:(struct PUSimpleIndexPath { long long x1; long long x2; })arg1;
- (void)_cacheSectioningIfNeeded;
- (void)_discardSamplingCache;
- (void)_discardSectioningCache;
- (struct PUSimpleIndexPath { long long x1; long long x2; })_mainRealItemIndexPathForVisualSection:(long long)arg1 andUnsampledItemIndex:(long long)arg2;
- (id)_sectionSamplerForVisualSection:(long long)arg1;
- (long long)_unsampledItemIndexForVisualItemIndex:(long long)arg1 visualSection:(long long)arg2;
- (long long)_visualItemIndexForUnsampledItemIndex:(long long)arg1 visualSection:(long long)arg2 isMainItem:(bool*)arg3;
- (void)dealloc;
- (void)enumerateRealMainItemIndexPathsForVisualSection:(long long)arg1 inVisualItemRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateRealSectionsForVisualSection:(long long)arg1 usingBlock:(id /* block */)arg2;
- (bool)hasSomeSampling;
- (id)init;
- (void)invalidateSampling;
- (void)invalidateSections;
- (struct PUSimpleIndexPath { long long x1; long long x2; })mainRealItemIndexPathForVisualIndexPath:(struct PUSimpleIndexPath { long long x1; long long x2; })arg1;
- (long long)mainRealSectionForVisualSection:(long long)arg1;
- (long long)numberOfRealItemsInVisualSection:(long long)arg1;
- (long long)numberOfVisualItemsInVisualSection:(long long)arg1;
- (void)setSupportsSamplingAndSectionGrouping:(bool)arg1;
- (bool)supportsSamplingAndSectionGrouping;
- (id)visibleUnsampledIndexesForCombinedRealSections:(id)arg1;
- (struct PUSimpleIndexPath { long long x1; long long x2; })visualIndexPathForRealIndexPath:(struct PUSimpleIndexPath { long long x1; long long x2; })arg1 isMainItem:(bool*)arg2;
- (long long)visualSectionForRealSection:(long long)arg1;

@end
