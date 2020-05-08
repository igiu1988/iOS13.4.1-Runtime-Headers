/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBAppExposeGridSwitcherModifier : SBSwitcherModifier <SBGridLayoutSwitcherModifierDelegate, SBGridSwitcherScrollProviding> {
    NSString * _appExposeBundleID;
    SBGridLayoutSwitcherModifier * _gridLayoutModifier;
    bool  _hasForegroundMainApp;
    double  _initialCardScale;
    unsigned long long  _initialNumberOfRows;
    bool  _isTethered;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> * _multitaskingModifier;
    <SBFluidSwitcherScrollProvidingDelegate> * _scrollDelegate;
}

@property (nonatomic, readonly, copy) NSString *appExposeBundleID;
@property (nonatomic, readonly) double cardScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double effectiveHorizontalSpacing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTethered;
@property (nonatomic, readonly) SBSwitcherModifier<SBFluidSwitcherScrollProviding> *multitaskingModifier;
@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (nonatomic) <SBFluidSwitcherScrollProvidingDelegate> *scrollDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_gridLayoutNumberOfRows;
- (double)_gridLayoutScale;
- (bool)_isGridified;
- (id)appExposeBundleID;
- (double)backdropBlurProgress;
- (long long)backdropBlurType;
- (double)cardScale;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)didMoveToParentModifier:(id)arg1;
- (double)dimmingAlpha;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
- (double)effectiveHorizontalSpacing;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })fullSizeSnapshotsRange;
- (id)handleInsertionEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (id)handleTetheredInsertionEvent:(id)arg1;
- (id)handleTetheredRemovalEvent:(id)arg1;
- (id)initWithTetheredMode:(bool)arg1 multitaskingModifier:(id)arg2 appExposeBundleID:(id)arg3;
- (id)initWithTetheredMode:(bool)arg1 multitaskingModifier:(id)arg2 appExposeBundleID:(id)arg3 initialNumberOfRows:(unsigned long long)arg4 initialCardScale:(double)arg5;
- (unsigned long long)insertionStyleForInsertingAppLayout:(id)arg1;
- (bool)isScrollEnabled;
- (bool)isTethered;
- (bool)isTetheredScrollingEnabled;
- (double)leadingPadding;
- (id)multitaskingModifier;
- (unsigned long long)numberOfRows;
- (bool)respondsToSelector:(SEL)arg1;
- (id)scrollDelegate;
- (void)setScrollDelegate:(id)arg1;
- (double)trailingPadding;
- (bool)wantsDockBehaviorAssertion;

@end
