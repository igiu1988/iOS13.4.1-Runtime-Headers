/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

@interface BKUIPearlCrossHairsRenderingView : MTKView {
    void _axis;
    MTLSPathBufferData * _checkMarkData;
    MTLSAnimatablePathCollection * _checkMarkPathCollection;
    <MTLCommandQueue> * _commandQueue;
    MTLSPathBufferData * _crosshairsData;
    BKUIPearlCrossHairsManager * _crosshairsInstanceManager;
    MTLSAnimatablePathCollection * _crosshairsPathCollection;
    NSObject<OS_dispatch_semaphore> * _inFlightSemaphore;
    float  _pathBlend;
    float  _pathBlendDest;
    MTLSplineRenderer * _renderer;
    unsigned long long  _state;
    double  _time;
}

@property void axis;
@property (retain) MTLSPathBufferData *checkMarkData;
@property (retain) MTLSAnimatablePathCollection *checkMarkPathCollection;
@property (retain) MTLSPathBufferData *crosshairsData;
@property (retain) BKUIPearlCrossHairsManager *crosshairsInstanceManager;
@property (retain) MTLSAnimatablePathCollection *crosshairsPathCollection;
@property (nonatomic) bool grayscale;
@property (retain) MTLSplineRenderer *renderer;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (void)axis;
- (id)checkMarkData;
- (id)checkMarkPathCollection;
- (id)crosshairsData;
- (id)crosshairsInstanceManager;
- (id)crosshairsPathCollection;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)getState;
- (bool)grayscale;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 device:(id)arg2;
- (id)renderer;
- (void)setAxis;
- (void)setAxis:(void *)arg1 animated:(void *)arg2; // needs 2 arg types, found 1: bool
- (void)setCheckMarkData:(id)arg1;
- (void)setCheckMarkPathCollection:(id)arg1;
- (void)setCrosshairsData:(id)arg1;
- (void)setCrosshairsInstanceManager:(id)arg1;
- (void)setCrosshairsPathCollection:(id)arg1;
- (void)setGrayscale:(bool)arg1;
- (void)setRenderer:(id)arg1;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
