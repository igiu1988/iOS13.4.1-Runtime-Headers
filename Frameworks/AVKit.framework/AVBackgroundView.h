/* Generated by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVBackgroundView : UIView {
    bool  _automaticallyDrawsRoundedCorners;
    AVBackdropView * _backdropView;
    bool  _circular;
    bool  _prefersLowQualityEffects;
}

@property (nonatomic) bool automaticallyDrawsRoundedCorners;
@property (nonatomic, retain) AVBackdropView *backdropView;
@property (getter=isCircular, nonatomic) bool circular;
@property (nonatomic) bool prefersLowQualityEffects;

- (void).cxx_destruct;
- (void)_ensureOrRemoveBackdropView;
- (bool)_isContainedInOverlappingBackgroundView;
- (void)_updateBackdropShape;
- (void)addSubview:(id)arg1 applyingMaterialStyle:(long long)arg2 tintEffectStyle:(long long)arg3;
- (bool)automaticallyDrawsRoundedCorners;
- (id)backdropView;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCircular;
- (void)layoutSubviews;
- (bool)prefersLowQualityEffects;
- (void)setAutomaticallyDrawsRoundedCorners:(bool)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setCircular:(bool)arg1;
- (void)setPrefersLowQualityEffects:(bool)arg1;

@end