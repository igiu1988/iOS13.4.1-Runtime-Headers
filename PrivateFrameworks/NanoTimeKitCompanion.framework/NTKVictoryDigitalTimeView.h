/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVictoryDigitalTimeView : UIView <CLKTimeFormatterObserver, NTKTimeView> {
    unsigned long long  _color;
    <NTKVictoryDigitalTimeViewDelegate> * _delegate;
    CLKDevice * _device;
    NTKVictoryDigitsView * _flipDigitsView;
    bool  _flipViewIsLower;
    bool  _frozen;
    bool  _invertedColors;
    NTKVictoryDigitsView * _lowerDigitsView;
    unsigned long long  _style;
    CLKTimeFormatter * _timeFormatter;
    NTKVictoryDigitsView * _upperDigitsView;
}

@property (nonatomic) unsigned long long color;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKVictoryDigitalTimeViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool invertedColors;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;

+ (id)transitionTimingFunction;

- (void).cxx_destruct;
- (long long)_lowerDigitAppearanceForStyle:(unsigned long long)arg1;
- (void)_resetDigitAppearanceForStyle:(unsigned long long)arg1;
- (void)_setFlipViewIsLower:(bool)arg1;
- (void)_setupFlipDigitsView;
- (long long)_upperDigitAppearanceForStyle:(unsigned long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)clearEditingTransitions;
- (unsigned long long)color;
- (long long)defaultAppearance;
- (id)delegate;
- (id)initForDevice:(id)arg1;
- (bool)invertedColors;
- (bool)isFrozen;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setColor:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setInvertedColors:(bool)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTimeOffset:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (void)timeFormatterTextDidChange:(id)arg1;
- (void)willBeginEditing;

@end
