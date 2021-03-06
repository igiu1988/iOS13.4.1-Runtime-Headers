/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRichComplicationCircularOpenGaugeImageView : NTKRichComplicationCircularBaseView {
    NTKRichComplicationImageView * _bottomImageView;
    NTKColoringLabel * _centerLabel;
    NTKRichComplicationCurvedProgressView * _progressView;
}

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (long long)progressFillStyle;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_editingDidEnd;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)init;
- (void)layoutSubviews;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
