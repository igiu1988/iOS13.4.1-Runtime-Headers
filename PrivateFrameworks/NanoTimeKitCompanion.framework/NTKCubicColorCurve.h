/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCubicColorCurve : NTKColorCurve {
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _colors;
    unsigned long long  _count;
    float * _fractions;
    NTKCubicSpline * _spline;
}

- (void).cxx_destruct;
- (id)colorForFraction:(float)arg1;
- (void)dealloc;
- (id)initWithColorCurveElements:(id)arg1;

@end
