/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKMetalRendererController : NSObject <PKRendererVSyncControllerDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _actualSize;
    NSObject<OS_dispatch_semaphore> * _canBeginRenderSemaphore;
    _Atomic int  _cancelAllRendering;
    _Atomic int  _cancelLongRunningRenderingCount;
    <CAMetalDrawable> * _currentDrawable;
    <MTLTexture> * _currentTextureTarget;
    <PKMetalRendererControllerDelegate> * _delegate;
    PKStrokeGenerator * _inputController;
    double  _inputScale;
    bool  _isTorndown;
    _Atomic double  _lastFrameDuration;
    _Atomic unsigned long long  _lastPresentationTime;
    PKLinedPaper * _linedPaper;
    double  _liveStrokeDuration;
    double  _liveStrokeElapsedTime;
    bool  _liveStrokeMode;
    NSArray * _liveStrokeStrokes;
    struct CGImage { } * _paperTextureImage;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _paperTransform;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    NSMutableArray * _postPresentCallbacks;
    double  _presentationCount;
    double  _presentationDelay;
    double  _presentationDelayGrowth;
    CAMetalLayer * _presentationLayer;
    double  _presentationMaxDelay;
    _Atomic int  _queuedRenders;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _readyToBeginRender;
    NSObject<OS_dispatch_queue> * _renderQueue;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _renderTransform;
    PKMetalRenderer * _renderer;
    struct PKRunningStat { 
        long long numValues; 
        long long numValuesOverLimit; 
        double oldM; 
        double newM; 
        double oldS; 
        double newS; 
        double maxValue; 
        double limit; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _strokeLatencyStat;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _strokeTransform;
    id /* block */  _vSyncTimeoutBlock;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _viewScissor;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } actualSize;
@property (nonatomic) double backboardPaperMultiply;
@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic) <PKMetalRendererControllerDelegate> *delegate;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic, readonly) PKStrokeGenerator *inputController;
@property double inputScale;
@property (nonatomic) bool invertColors;
@property (nonatomic, retain) PKLinedPaper *linedPaper;
@property (nonatomic) double liveStrokeDuration;
@property (nonatomic) double liveStrokeElapsedTime;
@property (nonatomic) bool liveStrokeMode;
@property (nonatomic, copy) NSArray *liveStrokeStrokes;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } paperTransform;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic) CAMetalLayer *presentationLayer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *renderQueue;
@property struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } renderTransform;
@property (nonatomic, retain) PKMetalRenderer *renderer;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } strokeTransform;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } viewScissor;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_copyIntoTilesFromRenderQueue:(id)arg1 tileTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (unsigned long long)_drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 useLayerContext:(bool)arg4 progress:(id)arg5;
- (void)_drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 useLayerContext:(bool)arg4 renderCompletion:(id /* block */)arg5;
- (void)_present:(double)arg1;
- (bool)_renderAheadWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 at:(double)arg2;
- (void)_renderAndPresent:(bool)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)_renderDrawPoints;
- (void)_renderLiveStrokeAndPresentWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 at:(double)arg2;
- (struct CGSize { double x1; double x2; })actualSize;
- (double)backboardPaperMultiply;
- (void)buildRenderCacheForStrokes:(id)arg1;
- (void)callBlockAfterPresenting:(id /* block */)arg1;
- (void)cancelAllRendering;
- (void)cancelLongRunningRenders;
- (void)cancelVSyncTimeoutBlock;
- (void)changeRenderSize;
- (void)clear;
- (id)commandQueue;
- (void)copyIntoTiles:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)device;
- (void)didFinishRendering:(id /* block */)arg1;
- (void)drawImage:(struct CGImage { }*)arg1 andMask:(struct CGImage { }*)arg2;
- (void)drawImage:(struct CGImage { }*)arg1 andMask:(struct CGImage { }*)arg2 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (bool)drawStrokes:(id)arg1 intoTile:(id)arg2 renderCount:(long long)arg3;
- (void)drawStrokes:(id)arg1 renderIntermediateSteps:(bool)arg2 completion:(id /* block */)arg3;
- (void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 useLayerContext:(bool)arg4 completion:(id /* block */)arg5;
- (void)drawTexture:(id)arg1;
- (void)drawingBeganWithStroke:(id)arg1;
- (void)drawingCancelled;
- (void)drawingCancelledWithCompletion:(id /* block */)arg1;
- (void)drawingEnded:(id)arg1 finishStrokeBlock:(id /* block */)arg2;
- (void)flushMemoryIfPossible;
- (id)initWithPixelSize:(struct CGSize { double x1; double x2; })arg1 actualSize:(struct CGSize { double x1; double x2; })arg2 renderQueue:(id)arg3 usePrivateResourceHandler:(bool)arg4;
- (id)inputController;
- (double)inputScale;
- (bool)invertColors;
- (bool)isAllRenderingCancelled;
- (bool)isLongRunningRenderingCancelled;
- (id)linedPaper;
- (double)liveStrokeDuration;
- (double)liveStrokeElapsedTime;
- (bool)liveStrokeMode;
- (id)liveStrokeStrokes;
- (struct CGImage { }*)newCGImage;
- (struct CGImage { }*)newCGImageWithClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })paperTransform;
- (struct CGSize { double x1; double x2; })pixelSize;
- (void)pokeEventDispatcher;
- (bool)prerenderWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 inputScale:(double)arg2 at:(double)arg3;
- (id)presentationLayer;
- (void)purgeOriginalBackFramebuffer;
- (id)renderQueue;
- (void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 imageClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 completion:(id /* block */)arg5;
- (struct CGImage { }*)renderStrokesSync:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 imageClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)renderTiles:(id)arg1 tileTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)renderTilesIntoTiles:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })renderTransform;
- (void)renderWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 inputScale:(double)arg2 at:(double)arg3;
- (id)renderer;
- (void)replaceInkTexture:(id)arg1 image:(struct CGImage { }*)arg2;
- (void)resumeLongRunningRenders;
- (void)resumeLongRunningRendersAfterAllWorkIsDone;
- (void)setBackboardPaperMultiply:(double)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInputScale:(double)arg1;
- (void)setInvertColors:(bool)arg1;
- (void)setLinedPaper:(id)arg1;
- (void)setLiveRenderingOverrideColor:(struct CGColor { }*)arg1;
- (void)setLiveStrokeDuration:(double)arg1;
- (void)setLiveStrokeElapsedTime:(double)arg1;
- (void)setLiveStrokeMode:(bool)arg1;
- (void)setLiveStrokeStrokes:(id)arg1;
- (void)setPaperTextureImage:(struct CGImage { }*)arg1;
- (void)setPaperTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPixelSize:(struct CGSize { double x1; double x2; })arg1 actualSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setPresentationLayer:(id)arg1;
- (void)setRenderTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setRenderer:(id)arg1;
- (void)setResourceCacheSize:(unsigned long long)arg1;
- (void)setStrokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setViewScissor:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setup;
- (bool)setupCurrentDrawable;
- (void)setupSync;
- (void)signalVSyncSemaphore:(double)arg1 presentationTime:(unsigned long long)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })strokeTransform;
- (void)teardown;
- (void)teardownSync;
- (void)testLiveStrokeToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 texture:(struct CGImage { }*)arg2 strokeInterval:(float)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewScissor;

@end