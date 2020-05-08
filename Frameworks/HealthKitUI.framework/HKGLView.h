/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKGLView : UIView {
    EAGLContext * _context;
    bool  _contextPushed;
    unsigned int  _depthRenderbuffer;
    CADisplayLink * _displayLink;
    bool  _displayLinkPaused;
    int  _drawableDepthFormat;
    int  _drawableHeight;
    int  _drawableWidth;
    double  _lastUpdateTime;
    unsigned int  _latestDrawError;
    unsigned int  _multisampleColorRenderbuffer;
    unsigned int  _multisampleFramebuffer;
    float  _preferredFramesPerSecond;
    unsigned int  _resolveColorRenderbuffer;
    unsigned int  _resolveFramebuffer;
    UIScreen * _screen;
    bool  _shouldBypassApplicationStateChecking;
    bool  _shouldDeleteFramebuffer;
    bool  _synchronizesWithCA;
    bool  _use4XMSAA;
    bool  _viewIsVisible;
    bool  _viewSnapshottingActive;
    bool  _viewWillMoveToWindow;
}

@property (nonatomic) int drawableDepthFormat;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) float preferredFramesPerSecond;
@property (nonatomic) bool shouldBypassApplicationStateChecking;
@property (nonatomic) bool synchronizesWithCA;
@property (nonatomic, readonly) double timeSinceLastUpdate;
@property (nonatomic) bool use4XMSAA;
@property (nonatomic, readonly) bool viewIsVisible;

+ (void)clearCachedProgramForVertexShader:(id)arg1 fragmentShader:(id)arg2;
+ (Class)layerClass;

- (void).cxx_destruct;
- (bool)_canDrawContent;
- (void)_context_checkAndRepairFramebuffer;
- (bool)_context_createFramebuffer;
- (void)_context_deleteFramebuffer;
- (void)_context_displayAndPresentFramebuffer:(bool)arg1;
- (void)_context_drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_context_generateSnapshot;
- (void)_context_prepareFramebuffer:(bool*)arg1;
- (bool)_context_presentFramebuffer;
- (void)_context_resolveAndDiscardFramebuffer;
- (bool)_controlsOwnScaleFactor;
- (void)_createDisplayLinkForScreen:(id)arg1;
- (void)_deleteFramebuffer;
- (void)_displayLinkFired;
- (void)_invalidateLastUpdateTime;
- (bool)_isLastUpdateTimeValid;
- (void)_pauseByNotification:(id)arg1;
- (void)_resumeByNotification:(id)arg1;
- (bool)_shouldAllowRendering;
- (void)_update;
- (void)_updateGLLayerIsAsynchronous;
- (void)_updateScreenIfChanged;
- (void)_viewSnapshottingDidEnd;
- (void)_viewSnapshottingWillBegin;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)displayLayer:(id)arg1;
- (unsigned int)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withContext:(id)arg2;
- (int)drawableDepthFormat;
- (id)initWithContext:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(id)arg2;
- (bool)isPaused;
- (void)layoutSubviews;
- (void)loadVertexShader:(id)arg1 fragmentShader:(id)arg2 inBundle:(id)arg3 forProgram:(unsigned int*)arg4 cache:(bool)arg5;
- (void)loadVertexShaderSource:(id)arg1 fragmentShaderSource:(id)arg2 forProgram:(unsigned int*)arg3;
- (void)performWithContext:(id /* block */)arg1;
- (float)preferredFramesPerSecond;
- (void)setContentScaleFactor:(double)arg1;
- (void)setDrawableDepthFormat:(int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFramesPerSecond:(float)arg1;
- (void)setShouldBypassApplicationStateChecking:(bool)arg1;
- (void)setSynchronizesWithCA:(bool)arg1;
- (void)setUse4XMSAA:(bool)arg1;
- (bool)shouldBypassApplicationStateChecking;
- (id)snapshot;
- (bool)synchronizesWithCA;
- (double)timeSinceLastUpdate;
- (void)update;
- (bool)use4XMSAA;
- (bool)viewIsVisible;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
