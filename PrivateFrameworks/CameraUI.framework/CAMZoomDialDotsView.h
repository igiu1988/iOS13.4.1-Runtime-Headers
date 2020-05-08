/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMZoomDialDotsView : UIView {
    CALayer * __dotLayer;
    double  _dotSpacingAngle;
}

@property (nonatomic, readonly) CALayer *_dotLayer;
@property (nonatomic) struct CGPoint { double x1; double x2; } dotCenter;
@property (nonatomic) long long dotCount;
@property (nonatomic) double dotSpacingAngle;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_dotLayer;
- (id)_replicatorLayer;
- (struct CGPoint { double x1; double x2; })dotCenter;
- (long long)dotCount;
- (double)dotSpacingAngle;
- (id)initWithDotImage:(id)arg1;
- (void)setDotCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDotCount:(long long)arg1;
- (void)setDotSpacingAngle:(double)arg1;

@end
