/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPreviewPlatterView : UIView {
    bool  _alwaysCompact;
    UIView * _collapsedClippingView;
    UIViewFloatAnimatableProperty * _collapsedContentHeight;
    UIViewFloatAnimatableProperty * _collapsedContentWidth;
    UITargetedPreview * _collapsedPreview;
    _UIPlatterTransformView * _collapsedTransformView;
    bool  _contentSizeDidChange;
    bool  _expanded;
    UIView * _expandedClippingView;
    UIViewFloatAnimatableProperty * _expandedContentHeight;
    UIViewFloatAnimatableProperty * _expandedContentWidth;
    UITargetedPreview * _expandedPreview;
    _UIPlatterTransformView * _expandedTransformView;
    UIViewFloatAnimatableProperty * _expansionProgress;
    bool  _frozen;
    bool  _hideChromeWhenCollapsed;
    bool  _hideShadowWhenCollapsed;
    _UIPlatterSoftShadowView * _pathShadowView;
    UIViewFloatAnimatableProperty * _platterHeight;
    UIViewFloatAnimatableProperty * _platterWidth;
    unsigned long long  _preferredMorphingAxis;
    bool  _preventPreviewRasterization;
    _UIRoundedRectShadowView * _rectangularShadowView;
    bool  _shouldMorphContents;
}

@property (nonatomic) bool allowsUserInteractionInExpandedPreview;
@property (nonatomic) bool alwaysCompact;
@property (nonatomic, readonly) bool bothViewsAreLikelyOpaque;
@property (nonatomic, retain) UIView *collapsedClippingView;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *collapsedContentHeight;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *collapsedContentWidth;
@property (nonatomic, retain) UITargetedPreview *collapsedPreview;
@property (nonatomic, retain) _UIPlatterTransformView *collapsedTransformView;
@property (nonatomic) bool contentSizeDidChange;
@property (nonatomic) bool expanded;
@property (nonatomic, retain) UIView *expandedClippingView;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *expandedContentHeight;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *expandedContentWidth;
@property (nonatomic, retain) UITargetedPreview *expandedPreview;
@property (nonatomic, retain) _UIPlatterTransformView *expandedTransformView;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *expansionProgress;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (nonatomic) bool hideChromeWhenCollapsed;
@property (nonatomic) bool hideShadowWhenCollapsed;
@property (nonatomic, retain) _UIPlatterSoftShadowView *pathShadowView;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *platterHeight;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *platterWidth;
@property (nonatomic) unsigned long long preferredMorphingAxis;
@property (nonatomic) bool preventPreviewRasterization;
@property (nonatomic, retain) _UIRoundedRectShadowView *rectangularShadowView;
@property (nonatomic) bool shouldMorphContents;

- (void).cxx_destruct;
- (void)_installPreview:(id)arg1 inClippingView:(id)arg2 transformView:(id)arg3;
- (void)_modelUpdates;
- (id)_overrideTraitCollectionForView:(id)arg1 combinedWithTraits:(id)arg2;
- (double)_pathShadowAlphaForExpansionProgress:(double)arg1;
- (void)_prepareAnimatableProperties;
- (bool)_previewIsLikelyOpaque:(id)arg1;
- (bool)_previewPrefersApplyingMask:(id)arg1;
- (double)_rectangularShadowAlphaForExpansionProgress:(double)arg1;
- (void)_updateClippingViews;
- (void)_updateCollapsedChrome;
- (void)_updatePathShadow;
- (void)_updatePathShadowTransform;
- (bool)allowsUserInteractionInExpandedPreview;
- (bool)alwaysCompact;
- (bool)bothViewsAreLikelyOpaque;
- (id)collapsedClippingView;
- (id)collapsedContentHeight;
- (id)collapsedContentWidth;
- (id)collapsedPreview;
- (id)collapsedTransformView;
- (bool)contentSizeDidChange;
- (void)didTearOffForDrag;
- (bool)expanded;
- (id)expandedClippingView;
- (id)expandedContentHeight;
- (id)expandedContentWidth;
- (id)expandedPreview;
- (id)expandedTransformView;
- (id)expansionProgress;
- (void)freezeExpandedPreview;
- (bool)hideChromeWhenCollapsed;
- (bool)hideShadowWhenCollapsed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFrozen;
- (void)layoutSubviews;
- (id)pathShadowView;
- (id)platterHeight;
- (id)platterWidth;
- (unsigned long long)preferredMorphingAxis;
- (bool)preventPreviewRasterization;
- (id)rectangularShadowView;
- (void)setAllowsUserInteractionInExpandedPreview:(bool)arg1;
- (void)setAlwaysCompact:(bool)arg1;
- (void)setCollapsedClippingView:(id)arg1;
- (void)setCollapsedContentHeight:(id)arg1;
- (void)setCollapsedContentWidth:(id)arg1;
- (void)setCollapsedPreview:(id)arg1;
- (void)setCollapsedTransformView:(id)arg1;
- (void)setContentSizeDidChange:(bool)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpandedClippingView:(id)arg1;
- (void)setExpandedContentHeight:(id)arg1;
- (void)setExpandedContentWidth:(id)arg1;
- (void)setExpandedPreview:(id)arg1;
- (void)setExpandedTransformView:(id)arg1;
- (void)setExpansionProgress:(id)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setHideChromeWhenCollapsed:(bool)arg1;
- (void)setHideShadowWhenCollapsed:(bool)arg1;
- (void)setPathShadowView:(id)arg1;
- (void)setPlatterHeight:(id)arg1;
- (void)setPlatterWidth:(id)arg1;
- (void)setPreferredMorphingAxis:(unsigned long long)arg1;
- (void)setPreventPreviewRasterization:(bool)arg1;
- (void)setRectangularShadowView:(id)arg1;
- (void)setShouldMorphContents:(bool)arg1;
- (bool)shouldMorphContents;
- (void)updateContentSize;

@end
