/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVUIKit.framework/TVUIKit
 */

@interface _TVCarouselView : UIView <TVRowHosting, UICollectionViewDataSource, UICollectionViewDelegate> {
    NSObject<OS_dispatch_source> * _autoScrollTimer;
    double  _autoscrollInterval;
    struct { 
        unsigned int delegateWasNonNil : 1; 
        unsigned int delegateShouldHighlightItemAtIndex : 1; 
        unsigned int delegateDidHighlightItemAtIndex : 1; 
        unsigned int delegateDidUnhighlightItemAtIndex : 1; 
        unsigned int delegateShouldSelectItemAtIndex : 1; 
        unsigned int delegateShouldDeselectItemAtIndex : 1; 
        unsigned int delegateDidSelectItemAtIndex : 1; 
        unsigned int delegateDidDeselectItemAtIndex : 1; 
        unsigned int delegateWillDisplayCellForItemAtIndex : 1; 
        unsigned int delegateDidEndDisplayingCellForItemAtIndex : 1; 
        unsigned int delegateCarouselViewDidScroll : 1; 
        unsigned int delegateDidFocusItemAtIndex : 1; 
        unsigned int delegateDidPlayItemAtIndex : 1; 
        unsigned int delegateWillDisplayItemAtIndex : 1; 
        unsigned int delegateDidEndDisplayingItemAtIndex : 1; 
        unsigned int delegateDidCenterItemAtIndex : 1; 
    }  _carouselViewFlags;
    NSDictionary * _collectionToDatasourceIndexMap;
    _TVCarouselCollectionView * _collectionView;
    <TVCarouselViewDataSource> * _dataSource;
    <TVCarouselViewDelegate> * _delegate;
    CADisplayLink * _displayLink;
    NSDate * _firstFocusChangeInInterval;
    struct { 
        bool layoutUpdateInProgress; 
        bool firstLayoutPass; 
    }  _flags;
    struct CGPoint { 
        double x; 
        double y; 
    }  _focusDirection;
    UIFocusGuide * _focusGuide;
    double  _focusThrottleTimeInterval;
    NSIndexPath * _focusedIndexPath;
    UIView * _headerView;
    unsigned long long  _indexToDeque;
    double  _interitemSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    long long  _numFocusChangesInInterval;
    unsigned long long  _numberOfRealItemsForDataSource;
    double  _offsetChangePerSecond;
    double  _originalSelectionDuration;
    double  _originalUnselectionDuration;
    UIPageControl * _pageControl;
    double  _pageControlMargin;
    NSDictionary * _previousCollectionToDatasourceIndexMap;
    double  _previousDisplayLinkTimestamp;
    unsigned long long  _scrollMode;
    bool  _shouldScaleOnIdleFocus;
    double  _showcaseFactor;
    bool  _showsPageControl;
    struct CGPoint { 
        double x; 
        double y; 
    }  _targetContentOffset;
    double  _unitScrollDuration;
}

@property (nonatomic) double autoscrollInterval;
@property (nonatomic, retain) NSDictionary *collectionToDatasourceIndexMap;
@property (nonatomic) <TVCarouselViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TVCarouselViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, retain) NSDate *firstFocusChangeInInterval;
@property (nonatomic) struct CGPoint { double x1; double x2; } focusDirection;
@property (nonatomic, retain) UIFocusGuide *focusGuide;
@property (nonatomic) double focusThrottleTimeInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic) double offsetChangePerSecond;
@property (nonatomic, retain) UIPageControl *pageControl;
@property (nonatomic) double pageControlMargin;
@property (nonatomic) double previousDisplayLinkTimestamp;
@property (nonatomic) unsigned long long scrollMode;
@property (nonatomic, readonly) bool shouldBindRowsTogether;
@property (nonatomic) bool shouldScaleOnIdleFocus;
@property (nonatomic) double showcaseFactor;
@property (nonatomic) bool showsPageControl;
@property (readonly) Class superclass;
@property (nonatomic) struct CGPoint { double x1; double x2; } targetContentOffset;
@property (nonatomic) double unitScrollDuration;
@property (nonatomic, readonly, copy) NSArray *visibleCells;

// Image: /System/Library/PrivateFrameworks/TVUIKit.framework/TVUIKit

- (void).cxx_destruct;
- (void)_accessibilityReducedMotionNotification:(id)arg1;
- (void)_animatePagedCenteringAnimated:(bool)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (bool)_canScrollCarouselView;
- (id)_cellForItemAtIndex:(unsigned long long)arg1;
- (long long)_centerCollectionViewCellIndex;
- (double)_centeringAnimationDuration;
- (id)_collectionView;
- (struct CGSize { double x1; double x2; })_collectionViewLayoutItemSize;
- (double)_contentOffsetXForCollectionViewIndex:(long long)arg1;
- (void)_focusItemAtIndex:(long long)arg1;
- (void)_handlePlayGesture:(id)arg1;
- (unsigned long long)_itemIndexForIndexPath:(id)arg1;
- (long long)_numberOfCells;
- (id)_prepareIndexMap:(long long)arg1;
- (unsigned long long)_previousItemIndexForIndexPath:(id)arg1;
- (void)_setContentOffsetForCollectionViewIndex:(long long)arg1;
- (void)_setContentOffsetForCollectionViewIndex:(long long)arg1 animated:(bool)arg2;
- (void)_startAutoScrollTimer;
- (void)_startContinuousScroll;
- (void)_stopAutoScrollTimer;
- (void)_stopContinuousScroll;
- (void)_updateAutoScrollTimer;
- (void)_updateCarouselWithDataSource:(id)arg1 indicesToRemove:(id)arg2 indicesToAdd:(id)arg3 indicesToReload:(id)arg4;
- (void)_updateCollectionViewLayout;
- (void)_updateCollectionViewLayoutAnimated:(bool)arg1;
- (void)_updateContentForNewCenterIndex:(long long)arg1;
- (void)_updateContentOffsetForFocusedIndex:(long long)arg1 animated:(bool)arg2;
- (void)_updateIdleModeLayoutAttributes;
- (void)_updatePageControl;
- (double)autoscrollInterval;
- (void)calculateChangeSetForFocusedIndex:(long long)arg1 newDataSourceMap:(id)arg2 indexesToRemove:(inout id*)arg3 indexesToAdd:(inout id*)arg4 indexesToReload:(inout id*)arg5;
- (void)centerItemAtPageIndex:(long long)arg1;
- (id)collectionToDatasourceIndexMap;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)didMoveToWindow;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)displayLink;
- (void)displayLinkDidFire:(id)arg1;
- (id)firstFocusChangeInInterval;
- (struct CGPoint { double x1; double x2; })focusDirection;
- (id)focusGuide;
- (double)focusThrottleTimeInterval;
- (id)focusedCell;
- (id)headerView;
- (unsigned long long)indexForCell:(id)arg1;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)interitemSpacing;
- (struct CGSize { double x1; double x2; })itemSize;
- (void)layoutSubviews;
- (double)offsetChangePerSecond;
- (id)pageControl;
- (double)pageControlMargin;
- (id)preferredFocusedView;
- (double)previousDisplayLinkTimestamp;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)reloadData;
- (unsigned long long)scrollMode;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAutoscrollInterval:(double)arg1;
- (void)setCollectionToDatasourceIndexMap:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setFirstFocusChangeInInterval:(id)arg1;
- (void)setFocusDirection:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFocusGuide:(id)arg1;
- (void)setFocusThrottleTimeInterval:(double)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setInteritemSpacing:(double)arg1 animated:(bool)arg2;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOffsetChangePerSecond:(double)arg1;
- (void)setPageControl:(id)arg1;
- (void)setPageControlMargin:(double)arg1;
- (void)setPreviousDisplayLinkTimestamp:(double)arg1;
- (void)setScrollMode:(unsigned long long)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShouldScaleOnIdleFocus:(bool)arg1;
- (void)setShowcaseFactor:(double)arg1;
- (void)setShowsPageControl:(bool)arg1;
- (void)setTargetContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setUnitScrollDuration:(double)arg1;
- (bool)shouldScaleOnIdleFocus;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (double)showcaseFactor;
- (bool)showsPageControl;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffset;
- (void)tv_setShowcaseFactor:(double)arg1;
- (double)unitScrollDuration;
- (id)visibleCells;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2;

@end
