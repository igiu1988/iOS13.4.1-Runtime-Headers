/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSTodayViewController : CSCoverSheetViewControllerBase <CSDateViewScrolling, CSStatusBarBackgroundIntersecting, SBFLegibilitySettingsProvider, SBFLegibilitySettingsProviderDelegate, SPUISearchBarDelegate, WGWidgetGroupViewControllerDelegate> {
    <SBFAuthenticationStatusProvider> * _authenticationStatusProvider;
    NSSet * _contentViews;
    CSComponent * _controlCenterGrabberComponent;
    CSComponent * _dateViewComponent;
    <SBFLegibilitySettingsProviderDelegate> * _delegate;
    UIView * _fakeCanvasView;
    CSComponent * _homeAffordanceComponent;
    CSLayoutStrategy * _layoutStrategy;
    CSPageViewController * _pageController;
    <CSPersistentContentLayoutProviding> * _persistentLayoutProviding;
    CSComponent * _proudLockComponent;
    bool  _pullToSearchPossible;
    bool  _pullToSearchRecognizing;
    bool  _scrollViewContentOffsetDirty;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollViewLastContentOffset;
    bool  _shouldAnimateNextDateComponentUpdate;
    <SBFLegibilitySettingsProvider> * _spotlightLegibilityProvider;
    <CSSpotlightPresenting> * _spotlightPresenter;
    CSComponent * _statusBarBackgroundComponent;
    CSPaddingHeaderViewController * _timePaddingViewController;
    WGWidgetGroupViewController * _todayViewController;
    <CSTodayViewControllerDelegate> * _todayViewControllerDelegate;
    SBViewControllerTransitionContext * _transitionContext;
    <CSWidgetGroupViewControllerProviding> * _widgetGroupViewControllerProvider;
}

@property (nonatomic, retain) <SBFAuthenticationStatusProvider> *authenticationStatusProvider;
@property (nonatomic, readonly) double clippingOffset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFLegibilitySettingsProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double distanceFromBarToContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CSLayoutStrategy *layoutStrategy;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) CSPageViewController *pageController;
@property (nonatomic) <CSPersistentContentLayoutProviding> *persistentLayoutProviding;
@property (nonatomic, retain) <CSSpotlightPresenting> *spotlightPresenter;
@property (readonly) Class superclass;
@property (nonatomic) CSPaddingHeaderViewController *timePaddingViewController;
@property (nonatomic) <CSTodayViewControllerDelegate> *todayViewControllerDelegate;
@property (nonatomic, readonly) double topContentInset;
@property (nonatomic, retain) SBViewControllerTransitionContext *transitionContext;
@property (nonatomic, retain) CSTodayPageView *view;
@property (nonatomic, retain) <CSWidgetGroupViewControllerProviding> *widgetGroupViewControllerProvider;

+ (bool)_isPortrait;
+ (double)verticalSpacingBetweenWidgets;
+ (Class)viewClass;

- (void).cxx_destruct;
- (bool)_allowsDateViewScroll;
- (double)_dateMinY;
- (id)_dateMovingScrollView;
- (void)_evaluateContentViews;
- (void)_initializeTodayViewControllerIfNecessary;
- (id)_majorScrollView;
- (double)_maxClippingOffset;
- (void)_prepareChildViewControllersIfNecessary;
- (id)_searchBarViewController;
- (void)_setTodayViewController:(id)arg1;
- (void)_setUpScrollView:(id)arg1;
- (double)_statusBarHeight;
- (struct CGSize { double x1; double x2; })_timePaddingSize;
- (double)_topContentInsetForNavigationBar:(id)arg1;
- (double)_totalDistanceForBlurTransition;
- (void)_updateAppearance;
- (void)_updateAppearanceForScrollView:(id)arg1;
- (void)_updateAppearanceForScrollView:(id)arg1 animated:(bool)arg2;
- (void)_updateBehavior;
- (void)_updateContentInsets;
- (void)_updateSpotlightLegibility;
- (void)_widgetEditViewDidDisappear:(id)arg1;
- (void)_widgetEditViewDidDisappearImplementation;
- (void)_widgetEditViewWillAppear:(id)arg1;
- (void)_widgetEditViewWillDisappear:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (id)authenticationStatusProvider;
- (void)cleanupAfterSpotlightDismissal;
- (double)clippingOffset;
- (id)delegate;
- (double)distanceFromBarToContent;
- (void)handleDraggingWillEndWithTargetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg1 forScrollView:(id)arg2;
- (bool)handleEvent:(id)arg1;
- (void)handleScrollingEnded:(id)arg1;
- (id)init;
- (id)layoutStrategy;
- (id)legibilitySettings;
- (void)loadView;
- (id)pageController;
- (long long)participantState;
- (id)persistentLayoutProviding;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (bool)pullDownSearchGestureDraggingFromTopOfScrollView:(id)arg1;
- (double)pullDownSearchGesturePercentComplete;
- (double)pullDownSearchGestureYOffset;
- (void)resetForSpotlightDismissalAnimated:(bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)searchBarDidFocus;
- (void)setAuthenticationStatusProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutStrategy:(id)arg1;
- (void)setPageController:(id)arg1;
- (void)setPersistentLayoutProviding:(id)arg1;
- (void)setSpotlightPresenter:(id)arg1;
- (void)setTimePaddingViewController:(id)arg1;
- (void)setTodayViewControllerDelegate:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)setWidgetGroupViewControllerProvider:(id)arg1;
- (id)spotlightPresenter;
- (id)timePaddingViewController;
- (id)todayViewControllerDelegate;
- (double)topContentInset;
- (id)transitionContext;
- (void)updateAccessoryLegibility;
- (void)updateAppearanceForHidden:(bool)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateAppearanceForStatusBarBackgroundHidden:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })widgetGroupViewController:(id)arg1 contentOccludingInsetsForInterfaceOrientation:(long long)arg2;
- (struct CGSize { double x1; double x2; })widgetGroupViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2;
- (id)widgetGroupViewControllerProvider;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })widgetListViewEdgeInsetsIncludingSearchHeader:(bool)arg1;

@end
