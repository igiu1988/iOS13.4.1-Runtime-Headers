/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTMaterialView : UIView <MTVisualStylingProviding, NSCopying> {
    UIViewFloatAnimatableProperty * _backdropFloatAnimatableProperty;
    NSMutableDictionary * _cmVisualStyleCategoriesToProviders;
    long long  _configuration;
    NSString * _groupNameBase;
    UIView * _highlightView;
    bool  _highlighted;
    bool  _needsLayoutOnMoveToWindow;
    NSHashTable * _observers;
    long long  _recipe;
    NSBundle * _recipeBundle;
    bool  _recipeDynamic;
    NSDictionary * _recipeNamesByTraitCollection;
    bool  _useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
}

@property (getter=_backdropFloatAnimatableProperty, nonatomic, retain) UIViewFloatAnimatableProperty *backdropFloatAnimatableProperty;
@property (nonatomic, copy) id /* block */ backdropScaleAdjustment;
@property (getter=isBlurEnabled, nonatomic) bool blurEnabled;
@property (getter=isCaptureOnly, nonatomic) bool captureOnly;
@property (nonatomic) long long configuration;
@property (getter=isContentReplacedWithSnapshot, nonatomic) bool contentReplacedWithSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceCrossfadeIfNecessary;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *groupNameBase;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool ignoresScreenClip;
@property (getter=_materialLayer, nonatomic, readonly) MTMaterialLayer *materialLayer;
@property (nonatomic) long long recipe;
@property (getter=isRecipeDynamic, nonatomic) bool recipeDynamic;
@property (nonatomic, copy) NSString *recipeName;
@property (nonatomic) bool shouldCrossfade;
@property (nonatomic) bool shouldCrossfadeIfNecessary;
@property (readonly) Class superclass;
@property (nonatomic) bool useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
@property (nonatomic) bool useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
@property (nonatomic) double weighting;
@property (getter=isZoomEnabled, nonatomic) bool zoomEnabled;

+ (id)_recipeNameForTraitCollection:(id)arg1 withRecipeNamesByTraitCollection:(id)arg2;
+ (void)initialize;
+ (Class)layerClass;
+ (id)materialViewWithRecipe:(long long)arg1 configuration:(long long)arg2;
+ (id)materialViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3;
+ (id)materialViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(id /* block */)arg4;
+ (id)materialViewWithRecipeNamed:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(id /* block */)arg5;
+ (id)materialViewWithRecipeNamesByTraitCollection:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(id /* block */)arg5;
+ (id)newDefaultHighlightAnimator;
+ (id)staticMaterialViewWithRecipe:(long long)arg1 configuration:(long long)arg2;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (id)_backdropFloatAnimatableProperty;
- (id)_coreMaterialVisualStylingProviderForCategory:(id)arg1;
- (id)_groupNameWithBase:(id)arg1;
- (id)_initWithCoreMaterialRecipe:(id)arg1 fromBundle:(id)arg2 coreMaterialConfiguration:(id)arg3 initialWeighting:(double)arg4 scaleAdjustment:(id /* block */)arg5;
- (id)_initWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(id /* block */)arg4;
- (id)_initWithRecipeNamesByTraitCollection:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(id /* block */)arg5;
- (void)_invalidateAlphaTransformer;
- (id)_materialLayer;
- (void)_notifyObserversWithBlock:(id /* block */)arg1;
- (id)_recipeNameForCurrentTraitCollection;
- (void)_reduceMotionStatusDidChange;
- (void)_reduceTransparencyStatusDidChange;
- (void)_removeObserver:(id)arg1;
- (void)_setRecipeName:(id)arg1 withWeighting:(double)arg2;
- (void)_setupAlphaTransformer;
- (void)_setupOrInvalidateAlphaTransformer;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateGroupNameIfNecessary;
- (void)_updateRecipeNameIfNeeded;
- (bool)addCompletionForCurrentAnimation:(id /* block */)arg1 forMaterialLayer:(id)arg2;
- (id /* block */)backdropScaleAdjustment;
- (long long)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (bool)forceCrossfadeIfNecessary;
- (id)groupName;
- (id)groupNameBase;
- (bool)ignoresScreenClip;
- (id)init;
- (bool)isBlurEnabled;
- (bool)isCaptureOnly;
- (bool)isContentReplacedWithSnapshot;
- (bool)isHighlighted;
- (bool)isManagingInterpolationForMaterialLayer:(id)arg1;
- (bool)isManagingOpacityForMaterialLayer:(id)arg1;
- (bool)isRecipeDynamic;
- (bool)isZoomEnabled;
- (void)layoutSubviews;
- (bool)managesWeightingForMaterialLayer:(id)arg1;
- (id)newShadowView;
- (id)newShadowViewWithCaptureOnlyMaterialView:(bool)arg1;
- (void)prune;
- (long long)recipe;
- (id)recipeName;
- (void)setBackdropFloatAnimatableProperty:(id)arg1;
- (void)setBackdropScaleAdjustment:(id /* block */)arg1;
- (void)setBlurEnabled:(bool)arg1;
- (void)setCaptureOnly:(bool)arg1;
- (void)setConfiguration:(long long)arg1;
- (void)setContentReplacedWithSnapshot:(bool)arg1;
- (void)setForceCrossfadeIfNecessary:(bool)arg1;
- (void)setGroupName:(id)arg1;
- (void)setGroupNameBase:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIgnoresScreenClip:(bool)arg1;
- (void)setRecipe:(long long)arg1;
- (void)setRecipeDynamic:(bool)arg1;
- (void)setRecipeName:(id)arg1;
- (void)setShouldCrossfade:(bool)arg1;
- (void)setShouldCrossfadeIfNecessary:(bool)arg1;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustment:(bool)arg1;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary:(bool)arg1;
- (void)setWeighting:(double)arg1;
- (void)setZoomEnabled:(bool)arg1;
- (bool)shouldCrossfade;
- (bool)shouldCrossfadeIfNecessary;
- (bool)useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
- (bool)useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
- (id)visualStylingProviderForCategory:(long long)arg1;
- (double)weighting;

@end
