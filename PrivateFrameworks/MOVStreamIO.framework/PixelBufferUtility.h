/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface PixelBufferUtility : NSObject

+ (bool)concatPixelBuffer:(struct __CVBuffer { }*)arg1 withPixelBuffer:(struct __CVBuffer { }*)arg2 targetPixelBuffer:(struct __CVBuffer { }*)arg3;
+ (bool)copyData:(id)arg1 toNonPlanarPixelBuffer:(struct __CVBuffer { }*)arg2;
+ (bool)copyFromPixelBuffer:(struct __CVBuffer { }*)arg1 toPixelBuffer:(struct __CVBuffer { }*)arg2 andShiftBits:(int)arg3;
+ (id)copyNonPlanarPixelBufferData:(struct __CVBuffer { }*)arg1;
+ (bool)copyPixelBuffer:(struct __CVBuffer { }*)arg1 toPixelBuffer:(struct __CVBuffer { }*)arg2 bytesPerPixel:(unsigned long long)arg3;
+ (struct __CVPixelBufferPool { }*)createNewL008PixelBufferPoolWithReferencePixelBuffer:(struct __CVBuffer { }*)arg1 minimumBufferCount:(unsigned long long)arg2;
+ (struct __CVPixelBufferPool { }*)createNewL010PixelBufferPoolWithReferencePixelBuffer:(struct __CVBuffer { }*)arg1 minimumBufferCount:(unsigned long long)arg2;
+ (struct __CFDictionary { }*)createPixelBufferAttributesWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 extendedPixelsPerRow:(unsigned int)arg3 pixelFormat:(int)arg4 bytesPerRowAlignment:(unsigned int)arg5 planeAlignment:(unsigned int)arg6;
+ (struct __CFDictionary { }*)createPixelBufferAttributesWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 pixelFormat:(int)arg3 bytesPerRow:(unsigned int)arg4;
+ (struct __CVPixelBufferPool { }*)createPixelBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 bytesPerRow:(unsigned long long)arg4 minBufferCount:(unsigned long long)arg5;
+ (struct __CVPixelBufferPool { }*)createPixelBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 extendedPixelsPerRow:(unsigned long long)arg4 minBufferCount:(unsigned long long)arg5;
+ (struct __CVBuffer { }*)createRawPixelBufferWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 extendedRows:(unsigned int)arg3 extendedPixelsPerRow:(unsigned int)arg4 pixelFormat:(int)arg5 bytesPerRowAlignment:(unsigned int)arg6 planeAlignment:(unsigned int)arg7 bufferCacheMode:(unsigned int)arg8;
+ (struct __CVBuffer { }*)createRawPixelBufferWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 pixelFormat:(int)arg3 bytesPerRow:(unsigned int)arg4;
+ (unsigned long long)extendedPixelsPerRowOfPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (bool)fillPlaneOfPixelBuffer:(struct __CVBuffer { }*)arg1 planeIndex:(int)arg2 withValue:(unsigned short)arg3;
+ (bool)isPixelBufferCompandedRawBayer:(struct __CVBuffer { }*)arg1;
+ (bool)isPixelBufferRawBayer:(struct __CVBuffer { }*)arg1;
+ (bool)isPixelFormatCompandedRawBayer:(unsigned int)arg1;
+ (bool)isPixelFormatRawBayer:(unsigned int)arg1;
+ (bool)joinCompandedWarholBuffer:(struct __CVBuffer { }*)arg1 intoCompandedBayerBuffer:(struct __CVBuffer { }*)arg2;
+ (bool)joinWarholBuffer:(struct __CVBuffer { }*)arg1 intoBayerBuffer:(struct __CVBuffer { }*)arg2 shiftBitsRightBy:(int)arg3 msbReplication:(bool)arg4;
+ (struct __CVBuffer { }*)newPixelBufferRefCopy:(struct __CVBuffer { }*)arg1;
+ (struct __CVBuffer { }*)newWarholBufferFromCompandedRawBayerPixelBuffer:(struct __CVBuffer { }*)arg1 withPixelBufferPool:(struct __CVPixelBufferPool { }*)arg2;
+ (struct __CVBuffer { }*)newWarholBufferFromRawBayerPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (struct __CVBuffer { }*)newWarholBufferFromRawBayerPixelBuffer:(struct __CVBuffer { }*)arg1 withPixelBufferPool:(struct __CVPixelBufferPool { }*)arg2;
+ (struct __CVBuffer { }*)pixelBufferFromPool:(struct __CVPixelBufferPool { }*)arg1;
+ (bool)splitBayerBuffer:(struct __CVBuffer { }*)arg1 intoWarholPixelBuffer:(struct __CVBuffer { }*)arg2 shiftBitsLeftBy:(int)arg3;
+ (bool)splitCompandedBayerBuffer:(struct __CVBuffer { }*)arg1 intoCompandedWarholPixelBuffer:(struct __CVBuffer { }*)arg2;
+ (bool)verticallySplitPixelBuffer:(struct __CVBuffer { }*)arg1 intoTopPixelBuffer:(struct __CVBuffer { }*)arg2 bottomPixelBuffer:(struct __CVBuffer { }*)arg3;
+ (void)writeBuffer:(const char *)arg1 ofSize:(unsigned long long)arg2 toFile:(id)arg3;

@end
