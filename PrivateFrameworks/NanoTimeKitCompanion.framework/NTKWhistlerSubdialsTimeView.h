/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWhistlerSubdialsTimeView : NTKDualTimeView {
    NTKWhistlerAnalogColorPalette * _palette;
}

@property (nonatomic, retain) NTKWhistlerAnalogColorPalette *palette;

- (void).cxx_destruct;
- (double)_analogTickInset;
- (id)_digitalTimeLabelColorForColor:(unsigned long long)arg1;
- (id)_hourMinuteHandFillColorForColor:(unsigned long long)arg1;
- (id)_hourMinuteHandStrokeColorForColor:(unsigned long long)arg1;
- (unsigned long long)_hourTickCount;
- (struct CGSize { double x1; double x2; })_hourTickSize;
- (unsigned long long)_minuteTickCount;
- (struct CGSize { double x1; double x2; })_minuteTickSize;
- (id)_secondHandColorForColor:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(unsigned long long)arg2 andDevice:(id)arg3;
- (id)palette;
- (void)setPalette:(id)arg1;

@end
