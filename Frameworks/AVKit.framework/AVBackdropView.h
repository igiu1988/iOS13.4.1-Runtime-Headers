/* Generated by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVBackdropView : AVView {
    long long  _axis;
    AVCABackdropLayerView * _backdropLayerView;
    bool  _disablesAutoLayout;
    bool  _prefersLowQualityEffects;
    UIVisualEffectView * _secondaryMaterialOverlayView;
    NSArray * _secondaryMaterialOverlayViewConstraints;
    unsigned long long  _shapeStyle;
    UIStackView * _stackView;
    UIView * _targetViewForSecondaryMaterialOverlay;
    NSArray * _temporaryArrangedSubviews;
}

@property (nonatomic, readonly) long long axis;
@property (nonatomic, retain) AVCABackdropLayerView *backdropLayerView;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentLayoutMargins;
@property (nonatomic) bool disablesAutoLayout;
@property (nonatomic) bool prefersLowQualityEffects;
@property (nonatomic, retain) UIVisualEffectView *secondaryMaterialOverlayView;
@property (nonatomic, retain) NSArray *secondaryMaterialOverlayViewConstraints;
@property (nonatomic) unsigned long long shapeStyle;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, retain) UIView *targetViewForSecondaryMaterialOverlay;

+ (void)applyBaseTrackTintToView:(id)arg1;
+ (void)applyCompletedTrackTintToView:(id)arg1;
+ (void)applyGlyphTintColor:(id)arg1 toView:(id)arg2;
+ (void)applyLoadedTrackTintToView:(id)arg1;
+ (void)applyPrimaryGlyphTintToView:(id)arg1;
+ (void)applySecondaryGlyphTintToView:(id)arg1;
+ (void)configureSlider:(id)arg1 thumbView:(id)arg2 loadedTrackView:(id)arg3;
+ (void)configureView:(id)arg1 forTintEffectWithColor:(id)arg2 filterType:(id)arg3;
+ (void)configureView:(id)arg1 withBackgroundFillOfColor:(id)arg2 opacity:(double)arg3 filter:(id)arg4;
+ (void)removeAllFiltersFromView:(id)arg1;
+ (id)secondaryGlyphTintColor;
+ (id)secondaryMaterialOverlayView;

- (void).cxx_destruct;
- (void)_applyShapeStyle;
- (id)_stackViewIfLoaded;
- (id)arrangedSubviews;
- (long long)axis;
- (id)backdropLayerView;
- (id)backgroundColor;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentLayoutMargins;
- (double)customSpacingAfterView:(id)arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (bool)disablesAutoLayout;
- (bool)hasVisibleArrangedSubview;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 disablingAutoLayout:(bool)arg2;
- (void)layoutSubviews;
- (bool)prefersLowQualityEffects;
- (id)secondaryMaterialOverlayView;
- (id)secondaryMaterialOverlayViewConstraints;
- (void)setArrangedSubviews:(id)arg1 axis:(long long)arg2;
- (void)setBackdropLayerView:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCustomSpacing:(double)arg1 afterView:(id)arg2;
- (void)setCustomSpacing:(double)arg1 afterViews:(id)arg2;
- (void)setDisablesAutoLayout:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setPrefersLowQualityEffects:(bool)arg1;
- (void)setSecondaryMaterialOverlayView:(id)arg1;
- (void)setSecondaryMaterialOverlayViewConstraints:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShapeStyle:(unsigned long long)arg1;
- (void)setTargetViewForSecondaryMaterialOverlay:(id)arg1;
- (unsigned long long)shapeStyle;
- (id)stackView;
- (id)targetViewForSecondaryMaterialOverlay;
- (void)updateConstraints;

@end
