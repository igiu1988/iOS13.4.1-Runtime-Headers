/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRichComplicationRectangularLargeTextView : NTKRichComplicationRectangularBaseView {
    NTKRichComplicationImageView * _headerImageView;
    NTKColoringLabel * _headerLabel;
    NTKColoringLabel * _line1Label;
}

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)init;
- (void)layoutSubviews;
- (void)setFilterProvider:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
