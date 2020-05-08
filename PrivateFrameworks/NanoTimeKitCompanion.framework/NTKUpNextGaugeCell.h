/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextGaugeCell : NTKUpNextBaseCell <CLKMonochromeFilterProvider> {
    CLKFont * _boldFont;
    UILayoutGuide * _contentLayoutGuide;
    NTKColoringLabel * _descriptionLine1Label;
    NTKColoringLabel * _descriptionLine2Label;
    NTKColoringLabel * _descriptionLine3Label;
    NTKColoringLabel * _headerLabel;
    NTKRichComplicationLineProgressView * _progressView;
    CLKFont * _semiboldFont;
    CLKFont * _standardFont;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)colorForView:(id)arg1 accented:(bool)arg2;
- (void)configureWithContent:(id)arg1;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
