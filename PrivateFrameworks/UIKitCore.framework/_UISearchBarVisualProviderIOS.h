/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISearchBarVisualProviderIOS : NSObject <_UISearchBarVisualProviding> {
    UIBarButtonItem * _animatedAppearanceBarButtonItem;
    _UISearchBarAppearanceStorage * _appearanceStorage;
    _UIBackdropView * _backdrop;
    unsigned long long  _backdropStyle;
    UIVisualEffectView * _backdropVisualEffectView;
    double  _backgroundExtension;
    long long  _barPosition;
    UIColor * _barTintColor;
    UIBarButtonItem * _cancelBarButtonItem;
    UIButton * _cancelButton;
    NSString * _cancelButtonText;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsetPrivateMinOrOverride;
    _UISearchBarLayout * _currentLayout;
    UIView<_UISearchBarVisualProvidingDelegate><_UINavigationBarAugmentedTitleView><UITextInputTraits_Private> * _delegate;
    UIDictationSearchButton * _dictationButton;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _effectiveContentInset;
    long long  _layoutState;
    UINavigationButton * _leftButton;
    <_UINavigationBarTitleViewDataSource> * _navBarTitleViewDataSource;
    long long  _navBarTitleViewLocation;
    _UINavigationBarTitleViewOverlayRects * _navBarTitleViewOverlayRects;
    unsigned long long  _overriddenContentInsetEdges;
    long long  _previousLayoutState;
    _UISearchBarPromptContainerView * _promptContainerView;
    UILabel * _promptLabel;
    _UISearchBarLayout * _prospectiveLayout;
    UISegmentedControl * _scopeBar;
    _UISearchBarScopeBarBackground * _scopeBarBackgroundView;
    _UISearchBarScopeContainerView * _scopeBarContainerView;
    unsigned long long  _scopeBarPosition;
    NSArray * _scopeTitles;
    UISearchBarBackground * _searchBarBackground;
    UIView * _searchBarClippingView;
    struct { 
        unsigned int barStyle : 3; 
        unsigned int searchBarStyle : 3; 
        unsigned int barTranslucence : 3; 
        unsigned int searchFieldLeftViewMode : 2; 
        unsigned int centerPlaceholder : 1; 
        unsigned int disabled : 1; 
        unsigned int reliesOnNavigationBarBackdrop : 1; 
        unsigned int hideBackground : 1; 
        unsigned int backgroundLayoutNeedsUpdate : 1; 
        unsigned int usesEmbeddedAppearance : 1; 
        unsigned int showsCancelButton : 1; 
        unsigned int autoDisableCancelButton : 1; 
        unsigned int cancelButtonWantsLetterpress : 1; 
        unsigned int showsDeleteButton : 1; 
        unsigned int showsSearchResultsButton : 1; 
        unsigned int searchResultsButtonSelected : 1; 
        unsigned int showsBookmarkButton : 1; 
        unsigned int isPlacedInNavigationBar : 1; 
        unsigned int isPlacedInToolbar : 1; 
        unsigned int isHostedByNavigationBar : 1; 
        unsigned int showsScopeBar : 1; 
        unsigned int showDictationButton : 1; 
        unsigned int allowedToShowDictationButton : 1; 
        unsigned int dictationButtonSetupComplete : 1; 
    }  _searchBarVisualProviderFlags;
    UISearchBarTextField * _searchField;
    _UISearchBarSearchContainerView * _searchFieldContainerView;
    UINavigationItem * _searchNavigationItem;
    long long  _selectedScope;
    UIImageView * _separator;
    double  _tableViewIndexWidth;
    _UISearchBarTransitionerBase * _transitioner;
}

@property (nonatomic) bool allowsInlineScopeBar;
@property (nonatomic, readonly) bool alwaysUsesLayoutMarginsForHorizontalContentInset;
@property (nonatomic, readonly) UIBarButtonItem *animatedAppearanceBarButtonItem;
@property (nonatomic) bool autoDisableCancelButton;
@property (nonatomic, retain) _UIBackdropView *backdrop;
@property (nonatomic) unsigned long long backdropStyle;
@property (nonatomic, retain) UIVisualEffectView *backdropVisualEffectView;
@property (nonatomic) double backgroundExtension;
@property (nonatomic, readonly) bool backgroundLayoutNeedsUpdate;
@property (nonatomic) long long barPosition;
@property (nonatomic) long long barStyle;
@property (nonatomic, retain) UIColor *barTintColor;
@property (nonatomic) long long barTranslucence;
@property (nonatomic, readonly) UIBarButtonItem *cancelBarButtonItem;
@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, copy) NSString *cancelButtonText;
@property (nonatomic) bool cancelButtonWantsLetterpress;
@property (nonatomic) bool centerPlaceholder;
@property (nonatomic, retain) _UISearchBarLayout *currentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) UIView<_UISearchBarVisualProvidingDelegate><_UINavigationBarAugmentedTitleView><UITextInputTraits_Private> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool drawsBackground;
@property (nonatomic) bool drawsBackgroundInPalette;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } effectiveContentInset;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (getter=isHostedByNavigationBar, nonatomic) bool hostedByNavigationBar;
@property (getter=isInNavigationPalette, nonatomic) bool inNavigationPalette;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;
@property (nonatomic, readonly) long long layoutState;
@property (nonatomic, readonly) UINavigationButton *leftButton;
@property (getter=isLegacy, nonatomic, readonly) bool legacy;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } minimumContentInset;
@property (nonatomic) <_UINavigationBarTitleViewDataSource> *navBarTitleViewDataSource;
@property (nonatomic) long long navBarTitleViewLocation;
@property (nonatomic, retain) _UINavigationBarTitleViewOverlayRects *navBarTitleViewOverlayRects;
@property (getter=isPlacedInNavigationBar, nonatomic) bool placedInNavigationBar;
@property (getter=isPlacedInToolbar, nonatomic) bool placedInToolbar;
@property (nonatomic, readonly) long long previousLayoutState;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, retain) UILabel *promptLabel;
@property (nonatomic, retain) _UISearchBarLayout *prospectiveLayout;
@property (nonatomic) bool reliesOnNavigationBarBackdrop;
@property (nonatomic, readonly, copy) NSArray *runtimeOnlyViews;
@property (nonatomic, retain) UISegmentedControl *scopeBar;
@property (nonatomic, retain) UIImage *scopeBarBackgroundImage;
@property (nonatomic, retain) _UISearchBarScopeBarBackground *scopeBarBackgroundView;
@property (nonatomic, readonly) UIView *scopeBarContainerView;
@property (nonatomic, readonly) double scopeBarHeight;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } scopeBarInsets;
@property (nonatomic, readonly) bool scopeBarIsVisible;
@property (nonatomic) unsigned long long scopeBarPosition;
@property (nonatomic, copy) NSArray *scopeTitles;
@property (nonatomic, retain) UISearchBarBackground *searchBarBackground;
@property (nonatomic, readonly) UIView *searchBarClippingView;
@property (nonatomic) unsigned long long searchBarStyle;
@property (nonatomic) id searchDisplayController;
@property (nonatomic, retain) UISearchBarTextField *searchField;
@property (nonatomic) struct UIOffset { double x1; double x2; } searchFieldBackgroundPositionAdjustment;
@property (nonatomic, readonly) double searchFieldHeight;
@property (nonatomic) long long searchFieldLeftViewMode;
@property (nonatomic, readonly) UINavigationItem *searchNavigationItem;
@property (getter=isSearchResultsButtonSelected, nonatomic) bool searchResultsButtonSelected;
@property (nonatomic) long long selectedScope;
@property (nonatomic, retain) UIImageView *separator;
@property (nonatomic, retain) UIImage *separatorImage;
@property (nonatomic, readonly) UIImageView *shadowView;
@property (nonatomic) bool showsBookmarkButton;
@property (nonatomic) bool showsCancelButton;
@property (nonatomic) bool showsScopeBar;
@property (nonatomic) bool showsSearchResultsButton;
@property (readonly) Class superclass;
@property (nonatomic) double tableViewIndexWidth;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, retain) _UISearchBarTransitionerBase *transitioner;
@property (nonatomic) bool usesEmbeddedAppearance;

- (void).cxx_destruct;
- (bool)_getNavigationTitleLeadingInset:(double*)arg1 trailingInset:(double*)arg2 isRTL:(bool)arg3;
- (void)_setAutoDisableCancelButton:(bool)arg1;
- (void)_setBarStyle:(long long)arg1;
- (void)_setBarTintColor:(id)arg1;
- (void)_setBarTranslucence:(long long)arg1;
- (void)_setHideBackground:(bool)arg1;
- (void)_setSearchResultsButtonSelected:(bool)arg1;
- (void)_setShowsBookmarkButton:(bool)arg1;
- (void)_setShowsCancelButton:(bool)arg1;
- (void)_setShowsScopeBar:(bool)arg1;
- (void)_setShowsSearchResultsButton:(bool)arg1;
- (void)allowCursorToAppear:(bool)arg1;
- (bool)allowsInlineScopeBar;
- (bool)alwaysUsesLayoutMarginsForHorizontalContentInset;
- (void)animateTransitionToSearchLayoutState:(long long)arg1;
- (id)animatedAppearanceBarButtonItem;
- (void)applySearchBarStyle;
- (bool)autoDisableCancelButton;
- (double)availableBoundsWidth;
- (double)availableBoundsWidthForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)backdrop;
- (unsigned long long)backdropStyle;
- (id)backdropVisualEffectView;
- (double)backgroundExtension;
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (bool)backgroundLayoutNeedsUpdate;
- (double)barHeightForBarMetrics:(long long)arg1;
- (double)barHeightForBarMetrics:(long long)arg1 barPosition:(long long)arg2;
- (double)barHeightForBarMetrics:(long long)arg1 withEffectiveInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (long long)barMetricsForOrientation:(long long)arg1;
- (long long)barPosition;
- (long long)barStyle;
- (id)barTintColor;
- (long long)barTranslucence;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForSearchBarAndUpdateIfNecessaryFromSuggestedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)canShowDictationButton;
- (id)cancelBarButtonItem;
- (id)cancelBarButtonItemIfExists;
- (id)cancelButton;
- (id)cancelButtonText;
- (bool)cancelButtonWantsLetterpress;
- (void)cancelTransitionToSearchLayoutState:(long long)arg1;
- (bool)centerPlaceholder;
- (void)cleanUpDictationMicsWithSearchField:(id)arg1;
- (id)colorForComponent:(unsigned long long)arg1 disabled:(bool)arg2;
- (void)completeTransitionToSearchLayoutState:(long long)arg1;
- (void)configureLayout:(id)arg1;
- (void)configureLayout:(id)arg1 forState:(long long)arg2;
- (bool)containsScopeBar;
- (id)currentLayout;
- (id)currentSeparatorImage;
- (double)defaultHeightForOrientation:(long long)arg1;
- (id)delegate;
- (void)destroyCancelButton;
- (void)destroyPromptLabel;
- (void)dictationAvailabilityDidChange:(id)arg1;
- (void)dictationButtonPressed:(id)arg1 withEvent:(id)arg2;
- (void)dictationControllerDidFinish:(id)arg1;
- (void)displayNavBarCancelButton:(bool)arg1 animated:(bool)arg2;
- (bool)drawsBackground;
- (bool)drawsBackgroundInPalette;
- (void)driveTransitionToSearchLayoutState:(long long)arg1;
- (double)effectiveBackgroundExtension;
- (id)effectiveBarTintColor;
- (void)effectiveBarTintColorDidChange:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })effectiveContentInset;
- (void)getOverrideContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg1 overriddenEdges:(unsigned long long*)arg2;
- (void)getTopInset:(double*)arg1 bottomInset:(double*)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4;
- (void)getTopInset:(double*)arg1 bottomInset:(double*)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4 layoutState:(long long)arg5;
- (bool)hasDarkUIAppearance;
- (id)imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)internalImageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;
- (id)internalImageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 customImage:(bool*)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateLayout;
- (bool)isAtTop;
- (bool)isEnabled;
- (bool)isHostedByNavigationBar;
- (bool)isInBarButNotHosted;
- (bool)isInNavigationPalette;
- (bool)isLegacy;
- (bool)isPlacedInNavigationBar;
- (bool)isPlacedInToolbar;
- (bool)isSearchResultsButtonSelected;
- (bool)isTranslucent;
- (void)layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(bool)arg1;
- (long long)layoutState;
- (void)layoutSubviews;
- (void)layoutSubviewsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leftButton;
- (id)leftButtonIfExists;
- (id)makeShadowView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minimumContentInset;
- (id)navBarTitleViewDataSource;
- (long long)navBarTitleViewLocation;
- (id)navBarTitleViewOverlayRects;
- (double)navigationBarContentHeight;
- (void)navigationBarSlideTransitionDidEnd;
- (void)navigationBarSlideTransitionWillBegin;
- (void)navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(bool)arg2;
- (void)navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(bool)arg2;
- (void)prepare;
- (void)prepareForTransitionToSearchLayoutState:(long long)arg1;
- (long long)previousLayoutState;
- (id)prompt;
- (id)promptLabel;
- (id)prospectiveLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })recalculatedEffectiveContentInsetForLayoutState:(long long)arg1;
- (bool)reliesOnNavigationBarBackdrop;
- (void)removeBackdropVisualEffectView;
- (void)removeLegacyBackdropView;
- (void)resetLayoutState;
- (void)revertViewHierarchyIfNecessary;
- (id)runtimeOnlyViews;
- (id)scopeBar;
- (id)scopeBarBackgroundImage;
- (id)scopeBarBackgroundView;
- (id)scopeBarContainerView;
- (double)scopeBarHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })scopeBarInsets;
- (bool)scopeBarIsVisible;
- (unsigned long long)scopeBarPosition;
- (id)scopeTitles;
- (id)searchBarBackground;
- (id)searchBarClippingView;
- (unsigned long long)searchBarStyle;
- (id)searchDisplayController;
- (id)searchField;
- (id)searchFieldBackgroundImageForState:(unsigned long long)arg1;
- (struct UIOffset { double x1; double x2; })searchFieldBackgroundPositionAdjustment;
- (double)searchFieldHeight;
- (id)searchFieldIfExists;
- (long long)searchFieldLeftViewMode;
- (id)searchNavigationItem;
- (long long)selectedScope;
- (id)separator;
- (id)separatorImage;
- (void)setAllowsInlineScopeBar:(bool)arg1;
- (void)setAutoDisableCancelButton:(bool)arg1;
- (void)setBackdrop:(id)arg1;
- (void)setBackdropStyle:(unsigned long long)arg1;
- (void)setBackdropVisualEffectView:(id)arg1;
- (void)setBackgroundExtension:(double)arg1;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setBackgroundLayoutNeedsUpdate;
- (void)setBarPosition:(long long)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBarTintColor:(id)arg1 forceUpdate:(bool)arg2;
- (void)setBarTranslucence:(long long)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCancelButtonText:(id)arg1;
- (void)setCancelButtonWantsLetterpress:(bool)arg1;
- (void)setCenterPlaceholder:(bool)arg1;
- (void)setClippingViewActive:(bool)arg1;
- (void)setClippingViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentLayout:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateSearchFieldFrameManipulationBlock:(id /* block */)arg1;
- (void)setDisableDictationButton:(bool)arg1;
- (void)setDrawsBackground:(bool)arg1;
- (void)setDrawsBackgroundInPalette:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setHostedByNavigationBar:(bool)arg1;
- (void)setImage:(id)arg1 forSearchBarIcon:(long long)arg2 state:(unsigned long long)arg3;
- (void)setInNavigationPalette:(bool)arg1;
- (void)setMinimumContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNavBarTitleViewDataSource:(id)arg1;
- (void)setNavBarTitleViewLocation:(long long)arg1;
- (void)setNavBarTitleViewOverlayRects:(id)arg1;
- (void)setOverrideContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forRectEdges:(unsigned long long)arg2;
- (void)setPlacedInNavigationBar:(bool)arg1;
- (void)setPlacedInToolbar:(bool)arg1;
- (void)setPrompt:(id)arg1;
- (void)setPromptLabel:(id)arg1;
- (void)setProspectiveLayout:(id)arg1;
- (void)setReliesOnNavigationBarBackdrop:(bool)arg1;
- (void)setScopeBar:(id)arg1;
- (void)setScopeBarBackgroundImage:(id)arg1;
- (void)setScopeBarBackgroundView:(id)arg1;
- (void)setScopeBarPosition:(unsigned long long)arg1;
- (void)setScopeTitles:(id)arg1;
- (void)setSearchBarBackground:(id)arg1;
- (void)setSearchBarStyle:(unsigned long long)arg1;
- (void)setSearchDisplayController:(id)arg1;
- (void)setSearchDisplayControllerShowsCancelButton:(bool)arg1;
- (void)setSearchField:(id)arg1;
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSearchFieldBackgroundPositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)setSearchFieldLeftViewMode:(long long)arg1;
- (void)setSearchResultsButtonSelected:(bool)arg1;
- (void)setSelectedScope:(long long)arg1;
- (void)setSeparator:(id)arg1;
- (void)setSeparatorImage:(id)arg1;
- (void)setShadowVisibleIfNecessary:(bool)arg1;
- (void)setShowDictationButton:(bool)arg1 shouldUpdateView:(bool)arg2;
- (void)setShowsBookmarkButton:(bool)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (void)setShowsCancelButton:(bool)arg1 animated:(bool)arg2;
- (void)setShowsDeleteButton:(bool)arg1;
- (void)setShowsScopeBar:(bool)arg1;
- (void)setShowsScopeBar:(bool)arg1 animateOpacity:(bool)arg2;
- (void)setShowsSearchResultsButton:(bool)arg1;
- (void)setShowsSeparator:(bool)arg1;
- (void)setTableViewIndexWidth:(double)arg1;
- (void)setTransitioner:(id)arg1;
- (void)setUpCancelButton;
- (void)setUpCancelButtonWithAppearance:(id)arg1;
- (void)setUpDictationMicWithSearchField:(id)arg1;
- (void)setUpLeftButton;
- (void)setUpPromptLabel;
- (void)setUpScopeBar;
- (void)setUpSearchBarSearchContainerIfNecessary;
- (void)setUpSearchField;
- (void)setUpSearchNavigationItem;
- (void)setUsesEmbeddedAppearance:(bool)arg1;
- (id)shadowView;
- (bool)shouldCombineLandscapeBarsForOrientation:(long long)arg1;
- (bool)showsBookmarkButton;
- (bool)showsCancelButton;
- (bool)showsScopeBar;
- (bool)showsSearchResultsButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)tableViewIndexWidth;
- (void)teardown;
- (id)textColor;
- (id)transitioner;
- (void)updateBackgroundToBackdropStyle:(long long)arg1;
- (void)updateDictationButton;
- (void)updateEffectiveContentInset;
- (void)updateForAllowedToShowDictationChange;
- (void)updateForDrawsBackgroundInPalette;
- (void)updateIfNecessaryForOldSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateMagnifyingGlassView;
- (void)updateNavigationBarLayoutInsertDataForSearchBar:(id)arg1 collapsibleScopeBar:(id)arg2 forLayoutState:(long long)arg3;
- (void)updateNeedForBackdrop;
- (void)updatePlaceholderColor;
- (void)updateRightView;
- (void)updateScopeBarBackground;
- (void)updateScopeBarForSelectedScope;
- (void)updateSearchBarOpacity;
- (void)updateSearchFieldArt;
- (bool)usesBackdrop;
- (bool)usesEmbeddedAppearance;
- (bool)wantsDictationButton;
- (bool)wouldCombineLandscapeBarsForSize:(struct CGSize { double x1; double x2; })arg1;

@end
