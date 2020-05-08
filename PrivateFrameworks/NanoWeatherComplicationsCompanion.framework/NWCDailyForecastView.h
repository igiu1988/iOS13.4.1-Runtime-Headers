/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

@interface NWCDailyForecastView : UIView {
    LinearGaugeView * _linearGaugeView;
    double  _percentage;
    UILabel * _weekdayLabel;
}

@property (nonatomic, readonly) LinearGaugeView *linearGaugeView;
@property (nonatomic) double percentage;
@property (nonatomic, readonly) UILabel *weekdayLabel;

- (void).cxx_destruct;
- (void)_applyLayoutConstraints:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)applyFilter:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)linearGaugeView;
- (double)percentage;
- (void)setPercentage:(double)arg1;
- (void)updateMonochromeColor:(id)arg1 fraction:(double)arg2;
- (id)weekdayLabel;

@end
