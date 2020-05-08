/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBElasticSliderMaterialWrapperView : UIView {
    MTMaterialShadowView * _baseMaterialView;
    UIView * _maskView;
    long long  _shadowMode;
    SBElasticSliderView * _sliderView;
    UIView * _sliderWrapperView;
}

@property (nonatomic, readonly) MTMaterialShadowView *baseMaterialView;
@property (nonatomic, readonly) UIView *maskView;
@property (nonatomic) long long shadowMode;
@property (nonatomic, readonly) SBElasticSliderView *sliderView;

- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_updateShadowMode;
- (id)baseMaterialView;
- (id)init;
- (void)layoutSubviews;
- (id)maskView;
- (void)setShadowMode:(long long)arg1;
- (long long)shadowMode;
- (id)sliderView;

@end
