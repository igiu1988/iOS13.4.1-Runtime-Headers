/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMLivePhotoAnimationCache : NSObject {
    NSDictionary * __animationFramesByColor;
    bool  _automaticModeAllowed;
}

@property (setter=_setAnimationFramesByColor:, nonatomic, retain) NSDictionary *_animationFramesByColor;
@property (getter=_isEmpty, nonatomic, readonly) bool _empty;
@property (nonatomic, readonly) bool automaticModeAllowed;

- (void).cxx_destruct;
- (id)_actuallyLoadEnablingAnimationImagesForColors:(id)arg1 scale:(double)arg2;
- (id)_animationFramesByColor;
- (id)_colors;
- (bool)_isEmpty;
- (void)_setAnimationFramesByColor:(id)arg1;
- (id)_tintColorForMode:(long long)arg1;
- (bool)automaticModeAllowed;
- (id)framesForLivePhotoMode:(long long)arg1;
- (id)initWithAutomaticModeAllowed:(bool)arg1;
- (void)preloadFramesIfNeeded;

@end