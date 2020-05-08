/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFilterToolController : PUPhotoEditToolController <CEKSliderDelegate, CEKWheelScrubberViewDelegate> {
    CIContext * _context;
    id /* block */  _didFinishLoadingFilterThumbnails;
    NSLayoutConstraint * _filterBadgeHeightConstraint;
    CEKBadgeTextView * _filterBadgeView;
    NSMutableArray * _filterBadgeViewConstraints;
    NSLayoutConstraint * _filterBadgeWidthConstraint;
    NSMutableDictionary * _filterIntensityCache;
    NSMutableDictionary * _filterThumbnailCache;
    NSNumberFormatter * _formatter;
    CIImage * _inputImage;
    bool  _isSliderTouchDown;
    bool  _monitorAdjustmentsForCache;
    CEKWheelScrubberView * _scrubberView;
    NSMutableArray * _scrubberViewConstraints;
    CEKSlider * _slider;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _thumbnailTime;
    NSMutableArray * _toolConstraints;
    id /* block */  _willLoadFilterThumbnails;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didFinishLoadingFilterThumbnails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ willLoadFilterThumbnails;

- (void).cxx_destruct;
- (long long)_adjustedFilterIndex;
- (double)_adjustedFilterIntensity;
- (id)_adjustedFilterName;
- (id)_effectAdjustment;
- (id)_effectForIndex:(long long)arg1;
- (long long)_indexForFilterId:(id)arg1;
- (void)_prepareThumbnailImagesIfNeeded;
- (void)_setShowSlider:(bool)arg1 animate:(bool)arg2;
- (void)_setThumbnail:(id)arg1 forKey:(id)arg2;
- (void)_setupFilters;
- (void)_setupScrubber;
- (void)_setupSlider;
- (void)_sliderDidEndScrolling;
- (void)_updateBadgeAndSliderWithEffect:(id)arg1;
- (void)_updateBadgeConstraints;
- (void)_updateCacheWithCIImage:(id)arg1;
- (void)_updateFilterIntensityCache;
- (void)_updateIntensityForEffect:(id)arg1;
- (void)_updateScrubberLayout;
- (void)_updateSelectionTextAnimate:(bool)arg1;
- (void)_updateToolConstraints;
- (void)_updateWithCompositionController:(id)arg1;
- (id)centerToolbarView;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (id /* block */)didFinishLoadingFilterThumbnails;
- (void)didResignActiveTool;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (bool)installTogglePreviewGestureRecognizer:(id)arg1;
- (id)localizedName;
- (void)setDidFinishLoadingFilterThumbnails:(id /* block */)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)setWillLoadFilterThumbnails:(id /* block */)arg1;
- (void)sliderDidEndScrolling:(id)arg1;
- (void)sliderDidScroll:(id)arg1;
- (void)sliderWillBeginScrolling:(id)arg1;
- (void)sliderWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (long long)toolControllerTag;
- (id)toolbarIcon;
- (void)updateViewConstraints;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsZoomAndPanEnabled;
- (void)wheelScrubberView:(id)arg1 updateCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)wheelScrubberViewDidChangeSelectedIndex:(id)arg1;
- (void)wheelScrubberViewDidEndScrolling:(id)arg1;
- (void)wheelScrubberViewWillBeginScrolling:(id)arg1;
- (void)willBecomeActiveTool;
- (id /* block */)willLoadFilterThumbnails;

@end
