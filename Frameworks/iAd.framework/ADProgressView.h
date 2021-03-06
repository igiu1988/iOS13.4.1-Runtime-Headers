/* Generated by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADProgressView : UIView {
    UILabel * _elapsedTimeLabel;
    UILabel * _remainingTimeLabel;
    ADPrerollSlider * _slider;
}

@property (nonatomic, retain) UILabel *elapsedTimeLabel;
@property (nonatomic, retain) UILabel *remainingTimeLabel;
@property (nonatomic, retain) ADPrerollSlider *slider;

- (void).cxx_destruct;
- (id)elapsedTimeLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)remainingTimeLabel;
- (void)setElapsedTime:(double)arg1 totalTime:(double)arg2;
- (void)setElapsedTimeLabel:(id)arg1;
- (void)setRemainingTimeLabel:(id)arg1;
- (void)setSlider:(id)arg1;
- (id)slider;

@end
