/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

@interface ASVDeviceController : NSObject {
    double  _aspectRatio;
    CALayer * _deviceLayer;
    CALayer * _deviceMaskLayer;
    CALayer * _holeLayer;
    CALayer * _shineInnerLayer;
    CALayer * _shineLayer;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) CALayer *deviceLayer;
@property (nonatomic, readonly) CALayer *holeLayer;
@property (nonatomic) float opacity;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic, readonly) CALayer *shineLayer;
@property (nonatomic) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } transform;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)deviceLayer;
- (id)holeLayer;
- (id)initWithDeviceMaskImage:(id)arg1;
- (float)opacity;
- (struct CGPoint { double x1; double x2; })position;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOpacity:(float)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (id)shineLayer;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transform;
- (void)update:(double)arg1 visible:(double)arg2 layer:(id)arg3;

@end
