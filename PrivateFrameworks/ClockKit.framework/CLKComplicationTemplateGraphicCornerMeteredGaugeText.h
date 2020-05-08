/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateGraphicCornerMeteredGaugeText : CLKComplicationTemplate {
    CLKGaugeProvider * _gaugeProvider;
    CLKTextProvider * _leadingTextProvider;
    CLKFullColorImageProvider * _outerImageProvider;
    CLKTextProvider * _outerTextProvider;
    CLKTextProvider * _trailingTextProvider;
}

@property (nonatomic, copy) CLKGaugeProvider *gaugeProvider;
@property (nonatomic, copy) CLKTextProvider *leadingTextProvider;
@property (nonatomic, copy) CLKFullColorImageProvider *outerImageProvider;
@property (nonatomic, copy) CLKTextProvider *outerTextProvider;
@property (nonatomic, copy) CLKTextProvider *trailingTextProvider;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)gaugeProvider;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (id)leadingTextProvider;
- (id)outerImageProvider;
- (id)outerTextProvider;
- (void)setGaugeProvider:(id)arg1;
- (void)setLeadingTextProvider:(id)arg1;
- (void)setOuterImageProvider:(id)arg1;
- (void)setOuterTextProvider:(id)arg1;
- (void)setTrailingTextProvider:(id)arg1;
- (id)trailingTextProvider;

@end
