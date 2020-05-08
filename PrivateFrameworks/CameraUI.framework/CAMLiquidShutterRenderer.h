/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMLiquidShutterRenderer : NSObject {
    bool  __backgrounded;
    <MTLCommandQueue> * __commandQueue;
    <MTLDevice> * __device;
    <MTLRenderPipelineState> * __renderPipelineState;
    double  _blurRadius;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } position; 
        double size; 
        struct { 
            double r; 
            double g; 
            double b; 
            double a; 
        } color; 
        double power; 
    }  _centerShape;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } position; 
        double size; 
        struct { 
            double r; 
            double g; 
            double b; 
            double a; 
        } color; 
        double power; 
    }  _dragHandleShape;
    CAMetalLayer * _metalLayer;
    bool  _needsRender;
    bool  _showDragHandle;
}

@property (setter=_setBackgrounded:, nonatomic) bool _backgrounded;
@property (nonatomic, readonly) <MTLCommandQueue> *_commandQueue;
@property (nonatomic, readonly) <MTLDevice> *_device;
@property (nonatomic, readonly) <MTLRenderPipelineState> *_renderPipelineState;
@property (nonatomic) double blurRadius;
@property (nonatomic) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4; } centerShape;
@property (nonatomic) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4; } dragHandleShape;
@property (nonatomic) CAMetalLayer *metalLayer;
@property (nonatomic) bool needsRender;
@property (nonatomic) bool showDragHandle;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground;
- (void)_applicationWillEnterForeground;
- (bool)_backgrounded;
- (id)_commandQueue;
- (id)_device;
- (struct { float x1; float x2; float x3; })_fragmentForShape:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4; })arg1 scale:(double)arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_orthographicMatrixWithLeft:(float)arg1 right:(float)arg2 bottom:(float)arg3 top:(float)arg4 near:(float)arg5 far:(float)arg6;
- (id)_renderPipelineState;
- (void)_setBackgrounded:(bool)arg1;
- (double)blurRadius;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4; })centerShape;
- (void)dealloc;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4; })dragHandleShape;
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2 pixelFormat:(unsigned long long)arg3;
- (id)metalLayer;
- (bool)needsRender;
- (void)renderIfNecessary;
- (void)setBlurRadius:(double)arg1;
- (void)setCenterShape:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4; })arg1;
- (void)setDragHandleShape:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4; })arg1;
- (void)setMetalLayer:(id)arg1;
- (void)setNeedsRender:(bool)arg1;
- (void)setShowDragHandle:(bool)arg1;
- (bool)showDragHandle;

@end
