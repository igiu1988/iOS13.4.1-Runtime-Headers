/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsFragmentRenderCommandEncoder : MTLToolsCommandEncoder <MTLFragmentRenderCommandEncoder>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;

- (void)acceptVisitor:(id)arg1;
- (void)drawTrianglesWithPositions:(const float*)arg1 vertexCount:(unsigned long long)arg2 triangleIndices:(const char *)arg3 triangleCount:(unsigned long long)arg4;
- (void)drawTrianglesWithPositions:(const float*)arg1 vertexCount:(unsigned long long)arg2 vertexVaryings:(const float*)arg3 varyingCountPerVertex:(unsigned long long)arg4;
- (void)drawTrianglesWithPositions:(const float*)arg1 vertexCount:(unsigned long long)arg2 vertexVaryings:(const float*)arg3 varyingCountPerVertex:(unsigned long long)arg4 triangleIndices:(const char *)arg5 triangleCount:(unsigned long long)arg6;
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;
- (void)setDepthStencilState:(id)arg1;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setFragmentBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setFragmentSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setFragmentSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned long long)arg4;
- (void)setFragmentTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setRenderPipelineState:(id)arg1;
- (void)setScissorRect:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;
- (void)setStencilReferenceValue:(unsigned int)arg1;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;

@end
