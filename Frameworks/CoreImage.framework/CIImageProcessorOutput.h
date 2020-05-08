/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIImageProcessorOutput : CIImageProcessorInOut <CIImageProcessorOutput> {
    <MTLCommandBuffer> * _cmdBuffer;
}

@property (nonatomic, readonly) void*baseAddress;
@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) <MTLCommandBuffer> *metalCommandBuffer;
@property (nonatomic, readonly) <MTLTexture> *metalTexture;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } region;
@property (nonatomic, readonly) struct __IOSurface { }*surface;

- (void*)baseAddress;
- (unsigned int)contextID;
- (void)dealloc;
- (id)initWithSurface:(struct __IOSurface { }*)arg1 texture:(struct Texture { union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; } x_1_1_1; void *x_1_1_2; } x1; })arg2 allowSRGB:(bool)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 context:(struct Context { int (**x1)(); struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x_1_2_1; } x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; bool x10; struct CGContext {} *x11; float x12; bool x13; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_14_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_14_1_2; } x14; struct CGAffineTransform { double x_15_1_1; double x_15_1_2; double x_15_1_3; double x_15_1_4; double x_15_1_5; double x_15_1_6; } x15; unsigned int x16; unsigned long long x17; unsigned long long x18; int x19; BOOL x20[64]; bool x21; struct ObjectCache<CI::MainProgram, false> {} *x22; struct ObjectCache<CI::Node, false> {} *x23; struct ObjectCache<CI::Node, false> {} *x24; double x25; double x26; struct RenderTask {} *x27; int x28; int x29; struct Context {} *x30; unsigned long long x31; }*)arg5;
- (id)metalCommandBuffer;
- (bool)metalCommandBufferRequested;
- (id)metalContext;
- (id)metalTexture;
- (struct CGColorSpace { }*)workingColorSpace;

@end
