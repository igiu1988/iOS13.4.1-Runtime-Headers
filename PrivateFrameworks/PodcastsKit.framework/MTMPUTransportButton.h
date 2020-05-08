/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
 */

@interface MTMPUTransportButton : UIButton <MTMPUTransportButton> {
    UIColor * _disabledColor;
    UIColor * _highlightedColor;
    UIColor * _regularColor;
    UIColor * _selectedColor;
    CALayer * _selectionIndicatorLayer;
    bool  _shouldInferColorsFromTintColor;
    bool  _shouldShowBackgroundForSelectedState;
    MTMPUTransportButtonEventHandler * _transportButtonEventHandler;
    UIImage * _transportButtonImage;
}

@property (nonatomic) bool adjustsImageWhenHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *disabledColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *highlightedColor;
@property (nonatomic, retain) UIColor *regularColor;
@property (nonatomic, retain) UIColor *selectedColor;
@property (nonatomic) bool shouldInferColorsFromTintColor;
@property (nonatomic) bool shouldShowBackgroundForSelectedState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MTMPUTransportButtonEventHandler *transportButtonEventHandler;
@property (nonatomic, retain) UIImage *transportButtonImage;
@property (nonatomic) long long transportButtonImageViewContentMode;

+ (id)_stringForDisplayedSkipInterval:(double)arg1;
+ (id)defaultDisabledColor;
+ (id)defaultHighlightedColor;
+ (id)defaultRegularColor;
+ (id)defaultSelectedColor;
+ (id)skipIntervalImageForInterval:(double)arg1 baseImage:(id)arg2 font:(id)arg3 scale:(double)arg4;
+ (id)transportButton;

- (void).cxx_destruct;
- (void)_updateDisabledTransportButtonImage;
- (void)_updateHighlightedTransportButtonImage;
- (void)_updateRegularTransportButtonImage;
- (void)_updateSelectedTransportButtonImage;
- (void)applyTransportButtonLayoutAttributes:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (id)disabledColor;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)highlightedColor;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)regularColor;
- (id)selectedColor;
- (void)setDisabledColor:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlightedColor:(id)arg1;
- (void)setRegularColor:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setShouldInferColorsFromTintColor:(bool)arg1;
- (void)setShouldShowBackgroundForSelectedState:(bool)arg1;
- (void)setTransportButtonImage:(id)arg1;
- (void)setTransportButtonImageViewContentMode:(long long)arg1;
- (bool)shouldInferColorsFromTintColor;
- (bool)shouldShowBackgroundForSelectedState;
- (bool)shouldTrack;
- (id)transportButtonEventHandler;
- (id)transportButtonImage;
- (long long)transportButtonImageViewContentMode;
- (bool)wantsCustomHighlightAppearance;

@end
