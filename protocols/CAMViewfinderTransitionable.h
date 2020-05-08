/* Generated by EzioChiu.
 */

@protocol CAMViewfinderTransitionable

@required

- (long long)desiredAspectRatio;
- (void)prepareForResumingUsingCrossfade;
- (CAMPreviewView *)previewView;
- (void)removeInflightBlurAnimations;

@end
