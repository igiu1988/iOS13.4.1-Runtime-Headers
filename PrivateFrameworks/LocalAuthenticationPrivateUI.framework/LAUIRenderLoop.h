/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

@interface LAUIRenderLoop : NSObject {
    bool  _background;
    <CAMetalDrawable> * _current_drawable;
    <LAUIRenderLoopDelegate> * _delegate;
    <MTLDevice> * _device;
    CADisplayLink * _display_link;
    struct CGSize { 
        double width; 
        double height; 
    }  _drawable_size;
    bool  _drawable_size_dirty;
    bool  _drawing;
    bool  _effective_paused;
    bool  _in_application_context;
    bool  _invalidated;
    CAMetalLayer * _layer;
    bool  _paused;
    unsigned long long  _pixel_format;
    long long  _preferred_fps;
}

@property (nonatomic) <LAUIRenderLoopDelegate> *delegate;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic) struct CGSize { double x1; double x2; } drawableSize;
@property (nonatomic) bool framebufferOnly;
@property (nonatomic) bool inApplicationContext;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic) bool paused;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic) long long preferredFramesPerSecond;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_draw:(id)arg1;
- (void)_updateEffectivePausedState;
- (void)attachToScreen:(id)arg1;
- (id)currentDrawable;
- (void)dealloc;
- (id)delegate;
- (id)device;
- (struct CGSize { double x1; double x2; })drawableSize;
- (bool)framebufferOnly;
- (bool)inApplicationContext;
- (id)init;
- (id)initWithPixelFormat:(unsigned long long)arg1 forDevice:(id)arg2;
- (void)invalidate;
- (bool)isDrawableAvailable;
- (id)layer;
- (bool)paused;
- (unsigned long long)pixelFormat;
- (long long)preferredFramesPerSecond;
- (void)setDelegate:(id)arg1;
- (void)setDrawableSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFramebufferOnly:(bool)arg1;
- (void)setInApplicationContext:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;

@end
