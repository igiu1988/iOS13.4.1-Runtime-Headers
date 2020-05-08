/* Generated by EzioChiu.
 */

@protocol PXMutableImageLayerModulator <NSObject>

@required

- (void)animateChangesWithDuration:(double)arg1;
- (bool)displayingVideoComplement;
- (CALayer *)layer;
- (ISLivePhotoUIView *)livePhotoView;
- (void)removeFilterFromUnownedLayer:(CALayer *)arg1;
- (void)setDisplayingVideoComplement:(bool)arg1;
- (void)setLayer:(CALayer *)arg1;
- (void)setLivePhotoView:(ISLivePhotoUIView *)arg1;

@end
