/* Generated by EzioChiu.
 */

@protocol _UIPlatterMenuPanningTransformerDelegate <NSObject>

@required

- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didBeginPanToTransformedPosition:(struct CGPoint { double x1; double x2; })arg2;
- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didEndPanToTransformedPosition:(struct CGPoint { double x1; double x2; })arg2 offsetFromPrevious:(struct CGVector { double x1; double x2; })arg3 velocity:(struct CGVector { double x1; double x2; })arg4;
- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didEnterTransitionNotchForTransformedPosition:(struct CGPoint { double x1; double x2; })arg2;
- (void)panningTransformer:(_UIPlatterMenuPanningTransformer *)arg1 didPanToTransformedPosition:(struct CGPoint { double x1; double x2; })arg2 offsetFromPrevious:(struct CGVector { double x1; double x2; })arg3 touchPosition:(struct CGPoint { double x1; double x2; })arg4 velocity:(struct CGVector { double x1; double x2; })arg5 didChangeAxis:(bool)arg6 axisLock:(unsigned long long)arg7;

@end
