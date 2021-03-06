/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGViewRenderer : NSObject <PXGRenderer, PXScrollViewControllerObserver> {
    <PXGRendererDelegate> * _delegate;
    struct { 
        long long scrollRegime; 
        bool isAnimatingScroll; 
        bool isScrubbing; 
        bool isAnimatingContent; 
        unsigned long long zoomBehavior; 
        bool isViewBoundsChanging; 
        bool isInitialLoad; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } targetRect; 
    }  _interactionState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _renderedVisibleOrigin;
    NSMutableDictionary * _reusableViewsByClass;
    PXScrollViewController * _scrollViewController;
    long long  _spriteBufferCapacity;
    unsigned int * _spriteIndexes;
    id /* block */  _test_renderSnapshotHandler;
    <PXGTextureConverter> * _textureConverter;
    struct { } * _textureInfos;
    NSMutableDictionary * _viewBySpriteIndex;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGRendererDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; } interactionState;
@property (nonatomic, readonly) int presentationType;
@property (nonatomic, retain) PXScrollViewController *scrollViewController;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ test_renderSnapshotHandler;
@property (nonatomic, readonly) <PXGTextureConverter> *textureConverter;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

- (void).cxx_destruct;
- (id)_dequeueViewWithClass:(Class)arg1;
- (void)_makeViewReusable:(id)arg1;
- (void)_resizeBuffersForSpriteCount:(long long)arg1;
- (double)_screenScale;
- (void)_shiftViewsToCompensateForDeferredVisibleOrigin;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; })interactionState;
- (int)presentationType;
- (void)renderSpritesWithTextures:(id)arg1 dataStore:(id)arg2 presentationDataStore:(id)arg3 presentationMetadataStore:(id)arg4 layout:(id)arg5;
- (id)scrollViewController;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInteractionState:(struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; })arg1;
- (void)setNeedsRender;
- (void)setScrollViewController:(id)arg1;
- (void)setTest_renderSnapshotHandler:(id /* block */)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id /* block */)test_renderSnapshotHandler;
- (id)textureConverter;
- (void)updateWithChangeDetails:(id)arg1;
- (id)viewForSpriteIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
