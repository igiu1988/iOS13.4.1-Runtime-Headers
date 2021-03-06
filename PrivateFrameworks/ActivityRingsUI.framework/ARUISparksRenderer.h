/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

@interface ARUISparksRenderer : NSObject <ARUICelebrationsRendering> {
    ARUIAngularSparksComputeState * _angularSparksComputeState;
    ARUIAngularSparksRenderState * _angularSparksRenderState;
    <ARUIBlurRendering> * _blurRenderer;
    <ARUICompositeRendering> * _compositeRenderer;
    <MTLDevice> * _device;
    ARUIKineticSparksComputeState * _kineticSparksComputeState;
    ARUIKineticSparksParticleRenderState * _kineticSparksRenderState;
    <MTLLibrary> * _library;
    <MTLTexture> * _particleTexture;
    bool  _prewarmed;
    <MTLBuffer> * _quadIndexBuffer;
    unsigned long long  _quadIndexCount;
    <MTLBuffer> * _quadVertexBuffer;
}

@property (nonatomic) <ARUIBlurRendering> *blurRenderer;
@property (nonatomic) <ARUICompositeRendering> *compositeRenderer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_computeWithCommandEncoder:(id)arg1 ring:(id)arg2 sparksCelebration:(id)arg3;
- (long long)_largeBlurRadiusForSize:(float)arg1;
- (id)_particlesTextureWithCommandBuffer:(void *)arg1 sparksMap:(void *)arg2 uniformType:(void *)arg3 size:(void *)arg4; // needs 4 arg types, found 3: id, id, unsigned long long
- (void)_renderWithCommandEncoder:(id)arg1 ring:(id)arg2 sparksCelebration:(id)arg3 uniformsType:(unsigned long long)arg4;
- (long long)_smallBlurRadiusForSize:(float)arg1;
- (id)blurRenderer;
- (id)compositeRenderer;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (void)prewarm;
- (void)setBlurRenderer:(id)arg1;
- (void)setCompositeRenderer:(id)arg1;
- (id)sparksTextureWithCommandBuffer:(void *)arg1 sparksMap:(void *)arg2 size:(void *)arg3; // needs 3 arg types, found 2: id, id

@end
