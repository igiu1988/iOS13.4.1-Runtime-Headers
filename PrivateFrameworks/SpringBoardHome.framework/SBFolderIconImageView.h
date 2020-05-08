/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBFolderIconImageView : SBIconImageView <SBFolderIconImageCacheObserver, SBFolderIconObserver> {
    bool  _animating;
    unsigned long long  _backgroundStyle;
    UIView * _backgroundView;
    SBFloatyFolderView * _crossfadeFolderView;
    UIView * _crossfadeScalingView;
    unsigned long long  _currentBackgroundStyle;
    unsigned long long  _currentPageIndex;
    bool  _hasCustomBackgroundView;
    NSHashTable * _imageUpdateDisableAssertions;
    _SBIconGridWrapperView * _leftWrapperView;
    NSMutableArray * _pageElements;
    UIView * _pageGridContainer;
    _SBIconGridWrapperView * _rightWrapperView;
    UIView * _solidColorBackgroundView;
    unsigned long long  _transitionToken;
}

@property (getter=isAnimating, nonatomic, readonly) bool animating;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly) unsigned long long concreteBackgroundStyle;
@property (nonatomic) unsigned long long currentBackgroundStyle;
@property (nonatomic, readonly) unsigned long long currentPageIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCustomBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentPageElement;
- (id)_folderIcon;
- (id)_folderIconImageCache;
- (id)_generateSquareContentsImage;
- (Class)_iconGridImageClass;
- (struct CGSize { double x1; double x2; })_interPageSpacing;
- (struct CGSize { double x1; double x2; })_interiorGridSizeClipRect;
- (void)_performScrollingDirection:(long long)arg1 targetPageIndex:(unsigned long long)arg2 targetPageScrollRow:(unsigned long long)arg3 newLeftElement:(id)arg4 newRightElement:(id)arg5 animated:(bool)arg6;
- (void)_setAnimating:(bool)arg1;
- (void)_setPageElements:(id)arg1;
- (void)_setupGridViewsInDefaultConfiguration;
- (void)_showLeftMinigrid;
- (void)_showRightMinigrid;
- (void)_updateAccessibilityBackgroundContrast;
- (void)_updateCurrentBackgroundStyle;
- (void)_updateRasterization;
- (unsigned long long)backgroundStyle;
- (id)backgroundView;
- (unsigned long long)centerVisibleMiniIconIndex;
- (void)cleanupAfterFloatyFolderCrossfade;
- (unsigned long long)concreteBackgroundStyle;
- (id)contentsImage;
- (unsigned long long)currentBackgroundStyle;
- (unsigned long long)currentPageIndex;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)disableImageUpdatesForReason:(id)arg1;
- (unsigned long long)firstVisibleMiniIconIndex;
- (void)folderIconImageCache:(id)arg1 didUpdateImagesForFolderIcon:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForMiniIconAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForMiniIconAtIndexPath:(id)arg1;
- (void)fulfillGridImageForPageElement:(id)arg1;
- (bool)hasCustomBackgroundView;
- (void)iconViewFolderIconImageCacheDidChange;
- (void)iconViewLegibilitySettingsDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateImageUpdatesAssertion:(id)arg1;
- (bool)isAnimating;
- (unsigned long long)lastVisibleMiniIconIndex;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)prepareToCrossfadeWithFloatyFolderView:(id)arg1 allowFolderInteraction:(bool)arg2;
- (id)representedListLayout;
- (void)scrollToFirstGapAnimated:(bool)arg1;
- (void)scrollToGapOrTopIfFullOfPage:(unsigned long long)arg1 animated:(bool)arg2;
- (void)scrollToTopOfFirstPageAnimated:(bool)arg1;
- (void)scrollToTopOfPage:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setBackgroundAndIconGridImageAlpha:(double)arg1;
- (void)setBackgroundScale:(double)arg1;
- (void)setBackgroundStyle:(unsigned long long)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setCurrentBackgroundStyle:(unsigned long long)arg1;
- (void)setFloatyFolderCrossfadeFraction:(double)arg1;
- (void)setIcon:(id)arg1 location:(id)arg2 animated:(bool)arg3;
- (void)setIconGridImageAlpha:(double)arg1;
- (id)snapshot;
- (void)updateImageAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleImageRelativeFrameForMiniIconAtIndex:(unsigned long long)arg1;
- (unsigned long long)visibleMiniIconCount;
- (unsigned long long)visibleMiniIconListIndex;

@end