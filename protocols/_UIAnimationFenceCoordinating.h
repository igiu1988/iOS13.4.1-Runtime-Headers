/* Generated by EzioChiu.
 */

@protocol _UIAnimationFenceCoordinating <NSObject>

@required

- (void)_synchronizeDrawing;
- (void)_synchronizeDrawingWithFence:(BKSAnimationFenceHandle *)arg1;
- (BKSAnimationFenceHandle *)_synchronizedDrawingFence;

@end
