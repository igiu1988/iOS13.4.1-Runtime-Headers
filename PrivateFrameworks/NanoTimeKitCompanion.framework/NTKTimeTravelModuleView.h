/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimeTravelModuleView : NTKModuleView {
    UIView * _backgroundView;
    CALayer * _borderLayer;
    NSCalendar * _cal;
    NSDate * _date;
    bool  _is24HourMode;
    double  _nowLabelCenterY;
    NSDateComponentsFormatter * _offsetDateFormatter;
    bool  _shouldUseNowText;
    <NTKTimeTravelModuleViewTapClient> * _tapDelegate;
    UILabel * _timeScrubDifferenceLabel;
    UILabel * _timeScrubNowLabel;
}

@property (nonatomic) <NTKTimeTravelModuleViewTapClient> *tapDelegate;

+ (double)_actualCornerRadiusForDevice:(id)arg1;
+ (double)_defaultHeightForDevice:(id)arg1;
+ (double)cornerRadius;
+ (id)timeTravelColor;

- (void).cxx_destruct;
- (id)_formatDateStringForIntervalBetweenReferenceDate:(id)arg1 andOverrideDate:(id)arg2;
- (void)_layoutContentView;
- (void)_setupBorder;
- (id)initWithMaximumWidth:(double)arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)prepareToAppear;
- (void)scrubToDate:(id)arg1;
- (void)setTapDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tapDelegate;

@end
