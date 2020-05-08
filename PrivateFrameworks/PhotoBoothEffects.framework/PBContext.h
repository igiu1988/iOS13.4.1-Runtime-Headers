/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

@interface PBContext : NSObject

@property (nonatomic, retain) struct __CVPixelBufferPool { }*largePool;
@property (nonatomic) struct _CAImageQueue { }*outputImageQueue;
@property (nonatomic, retain) struct __CVPixelBufferPool { }*smallPool;

+ (id)openCLContext;
+ (id)openGLContext;
+ (id)openGLContext:(id)arg1;

- (void)applyFilter:(id)arg1 toSurface:(struct __IOSurface { }*)arg2 mirrored:(bool)arg3 resultHandler:(id /* block */)arg4;
- (void)applyFilter:(id)arg1 toSurface:(struct __IOSurface { }*)arg2 mirrored:(bool)arg3 surfaceResultHandler:(id /* block */)arg4;
- (struct __CVBuffer { }*)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (struct __CVBuffer { }*)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 mirrored:(bool)arg3;
- (id)init;
- (struct __CVPixelBufferPool { }*)largePool;
- (struct _CAImageQueue { }*)outputImageQueue;
- (void)preloadFilter:(id)arg1;
- (void)renderFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)renderFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 mirrored:(bool)arg3;
- (void)renderNineUp:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)renderNineUp:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 mirrored:(bool)arg3;
- (void)setLargePool:(struct __CVPixelBufferPool { }*)arg1;
- (void)setOutputImageQueue:(struct _CAImageQueue { }*)arg1;
- (void)setSmallPool:(struct __CVPixelBufferPool { }*)arg1;
- (struct __CVPixelBufferPool { }*)smallPool;

@end