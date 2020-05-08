/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBSceneView : UIView <BSInvalidatable, SBSceneHandleObserver, SBScenePlaceholderContentViewProviderDelegate> {
    UIView * _backgroundView;
    UIView * _crossfadeView;
    UIView * _customContentView;
    <SBSceneViewDelegate> * _delegate;
    long long  _effectiveDisplayMode;
    UIView<UIScenePresentation> * _hostView;
    NSString * _hostViewMinificationFilter;
    NSString * _hostingIdentifier;
    long long  _hostingPriority;
    bool  _invalidated;
    NSCountedSet * _liveContentDisableReasons;
    UIView<UISceneSnapshotPresentation> * _liveSnapshotView;
    long long  _orientation;
    <SBScenePlaceholderContentContext> * _placeholderContentContext;
    bool  _placeholderContentEnabled;
    <SBScenePlaceholderContentViewProvider> * _placeholderContentProvider;
    UIView<SBScenePlaceholderContentView> * _placeholderContentView;
    <UIScenePresenter> * _presenter;
    struct CGSize { 
        double width; 
        double height; 
    }  _referenceSize;
    long long  _requestedDisplayMode;
    UIView * _sceneContentContainerView;
    SBSceneHandle * _sceneHandle;
    bool  _shouldRasterizeHostView;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIView *customContentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSceneViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayMode;
@property (nonatomic, readonly) long long effectiveDisplayMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hostViewMinificationFilter;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic, retain) <SBScenePlaceholderContentContext> *placeholderContentContext;
@property (nonatomic) bool placeholderContentEnabled;
@property (nonatomic, retain) <SBScenePlaceholderContentViewProvider> *placeholderContentProvider;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) <UIScenePresenter> *presenter;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } referenceSize;
@property (nonatomic, readonly) SBSceneHandle *sceneHandle;
@property (nonatomic) bool shouldRasterizeHostView;
@property (readonly) Class superclass;

+ (id)defaultDisplayModeAnimationFactory;

- (void).cxx_destruct;
- (bool)_addContentLikeViewToHierarchyForTransitionIfPossible:(id)arg1;
- (long long)_bestDisplayModeLessThanMode:(long long)arg1;
- (void)_clearSnapshotViews;
- (void)_configureBackgroundColorForLiveSnapshot:(bool)arg1;
- (void)_configureHostView;
- (void)_configureLiveSnapshotView;
- (void)_configurePlaceholderContentView;
- (void)_configureSceneLiveHostView:(id)arg1;
- (void)_configureSceneSnapshotContext:(id)arg1;
- (void)_configureViewForEffectiveDisplayMode:(long long)arg1;
- (void)_containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
- (void)_enableHostingIfPossible;
- (void)_evaluateEffectiveDisplayModeWithAnimationFactory:(id)arg1 completion:(id /* block */)arg2;
- (void)_hotSwapLiveSnapshotView;
- (void)_hotSwapPlaceholderContentView;
- (void)_invalidateHostPresenter;
- (void)_invalidateSceneLiveHostView:(id)arg1;
- (void)_layoutLiveHostView:(id)arg1;
- (void)_placeholderVisibilityChanged;
- (void)_recheckLiveContentDependencies;
- (void)_refresh;
- (void)_reloadPlaceholderContentIfNecessary;
- (bool)_representsTranslucentContent;
- (void)_setOrientation:(long long)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)_shouldObserveSceneHostContentState;
- (bool)_shouldViewBeInHierarchyForTransition:(id)arg1;
- (void)_transitionFromDisplayMode:(long long)arg1 showingView:(id)arg2 toDisplayMode:(long long)arg3 showingView:(id)arg4 withAnimationFactory:(id)arg5 completion:(id /* block */)arg6;
- (id)_transitionViewForHostView;
- (void)_updateLiveContentRasterization;
- (void)_updateReferenceSize:(struct CGSize { double x1; double x2; })arg1 andOrientation:(long long)arg2;
- (id)_viewForDisplayMode:(long long)arg1;
- (id)acquireLiveContentDisableAssertionForReason:(id)arg1;
- (id)backgroundView;
- (id)customContentView;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didMoveToWindow;
- (long long)displayMode;
- (long long)effectiveDisplayMode;
- (id)hostViewMinificationFilter;
- (id)initWithSceneHandle:(id)arg1 referenceSize:(struct CGSize { double x1; double x2; })arg2 orientation:(long long)arg3;
- (id)initWithSceneHandle:(id)arg1 referenceSize:(struct CGSize { double x1; double x2; })arg2 orientation:(long long)arg3 hostRequester:(id)arg4;
- (void)invalidate;
- (void)layoutSubviews;
- (id)newSnapshot;
- (long long)orientation;
- (id)placeholderContentContext;
- (bool)placeholderContentEnabled;
- (id)placeholderContentProvider;
- (void)placeholderContentViewProviderContentDidUpdate:(id)arg1;
- (long long)preferredStatusBarStyle;
- (id)presenter;
- (struct CGSize { double x1; double x2; })referenceSize;
- (id)sceneHandle;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (void)setBackgroundView:(id)arg1;
- (void)setCustomContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(id /* block */)arg3;
- (void)setHostViewMinificationFilter:(id)arg1;
- (void)setPlaceholderContentContext:(id)arg1;
- (void)setPlaceholderContentEnabled:(bool)arg1;
- (void)setPlaceholderContentProvider:(id)arg1;
- (void)setShouldRasterizeHostView:(bool)arg1;
- (bool)shouldRasterizeHostView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
