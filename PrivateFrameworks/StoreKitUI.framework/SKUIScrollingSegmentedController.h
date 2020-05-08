/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIScrollingSegmentedController : SKUIViewController <SKUIProxyScrollViewDelegate, SKUIScrollingSegmentedControllerCollectionViewDelegate, SKUIScrollingSegmentedControllerItemContextDelegate, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling, SKUIViewControllerWithFocusedViewController, UICollectionViewDataSource, UICollectionViewDelegate> {
    SKUIScrollingSegmentedControllerCollectionView * _contentCollectionView;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentCollectionViewItemSize;
    <SKUIScrollingSegmentedControllerDelegate> * _delegate;
    unsigned long long  _focusedViewControllerIndex;
    double  _maximumContentWidth;
    SKUIScrollingSegmentedControllerNavigationBarTitleView * _navigationBarTitleView;
    SKUIProxyScrollView * _proxyScrollView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _proxyScrollViewContentInsetAdjustment;
    bool  _scrollEnabled;
    struct { 
        double progress; 
        bool isBouncingOffTheEdge; 
    }  _scrollingTabAppearanceStatus;
    NSMutableArray * _titleObservingViewControllers;
    SKUIInteractiveSegmentedControl * _titlesSegmentedControl;
    bool  _viewBackgroundIsWhite;
    NSMapTable * _viewControllerToItemContext;
    NSArray * _viewControllers;
    bool  _wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing;
    bool  _wantsWhiteBackgroundBeyondRightEdgeWhenBouncing;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIScrollingSegmentedControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIViewController *focusedViewController;
@property (nonatomic, readonly) unsigned long long focusedViewControllerIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumContentWidth;
@property (nonatomic, readonly) SKUIScrollingSegmentedControllerNavigationBarTitleView *navigationBarTitleView;
@property (nonatomic) bool scrollEnabled;
@property (nonatomic, readonly) UIScrollView *scrollingTabNestedPagingScrollView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } segmentedControlContentEdgeInsets;
@property (nonatomic) double segmentedControlHeight;
@property (nonatomic) long long segmentedControlLayoutStyle;
@property (readonly) Class superclass;
@property (getter=_titlesSegmentedControl, nonatomic, readonly) SKUIInteractiveSegmentedControl *titlesSegmentedControl;
@property (nonatomic, copy) NSArray *viewControllers;
@property (nonatomic) bool wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing;
@property (nonatomic) bool wantsWhiteBackgroundBeyondRightEdgeWhenBouncing;

- (void).cxx_destruct;
- (bool)_configureSegment:(id)arg1 forViewController:(id)arg2;
- (id)_indexPathOfFocusedItemAllowingLayoutIfNeeded:(bool)arg1;
- (void)_reloadTitleSegments;
- (void)_scrollToTitlesSelectionProgress:(double)arg1 animated:(bool)arg2;
- (void)_setViewControllers:(id)arg1 viewUpdatesHandler:(id /* block */)arg2;
- (id)_titlesSegmentedControl;
- (void)_titlesSegmentedControlValueChangeAction:(id)arg1;
- (void)_updateScrollViewContentOffsetsToTargetContentOffsets;
- (void)_updateTitleValueObservation;
- (void)_updateTitlesSelectionProgress;
- (void)_updateViewBackgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_viewControllerContentScrollViewContentInset;
- (void)_viewControllerNeedsContentScrollViewUpdates:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)contentScrollView;
- (void)contentScrollViewDidChangeForScrollingSegmentedControllerItemContext:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)focusedViewController;
- (unsigned long long)focusedViewControllerIndex;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (double)maximumContentWidth;
- (id)navigationBarTitleView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)replaceViewControllerAtIndex:(unsigned long long)arg1 withViewController:(id)arg2;
- (bool)scrollEnabled;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidMoveToWindow:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollingSegmentedControllerCollectionViewDidLayoutSubviews:(id)arg1;
- (void)scrollingTabAppearanceStatusWasUpdated:(struct { double x1; bool x2; })arg1;
- (id)scrollingTabNestedPagingScrollView;
- (id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })segmentedControlContentEdgeInsets;
- (double)segmentedControlHeight;
- (long long)segmentedControlLayoutStyle;
- (void)selectViewControllerAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaximumContentWidth:(double)arg1;
- (void)setScrollEnabled:(bool)arg1;
- (void)setSegmentedControlContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSegmentedControlHeight:(double)arg1;
- (void)setSegmentedControlLayoutStyle:(long long)arg1;
- (void)setViewControllers:(id)arg1;
- (void)setWantsWhiteBackgroundBeyondLeftEdgeWhenBouncing:(bool)arg1;
- (void)setWantsWhiteBackgroundBeyondRightEdgeWhenBouncing:(bool)arg1;
- (id)viewControllers;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (bool)wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing;
- (bool)wantsWhiteBackgroundBeyondRightEdgeWhenBouncing;

@end
