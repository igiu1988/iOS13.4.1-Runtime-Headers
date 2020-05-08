/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIMsgImageBuffer : NSObject {
    struct CGColorSpace { } * bufferColorspace;
    NSMutableData * data;
    unsigned long long  elementByteSize;
    int  format;
    unsigned long long  height;
    unsigned long long  rowElements;
    unsigned long long  width;
}

@property (retain) NSMutableData *data;
@property (readonly) unsigned long long elementByteSize;
@property (readonly) int format;
@property (readonly) unsigned long long height;
@property (readonly) unsigned long long rowElements;
@property (readonly) unsigned long long width;

- (void).cxx_destruct;
- (void*)bytes;
- (id)data;
- (void)dealloc;
- (unsigned long long)elementByteSize;
- (int)format;
- (unsigned long long)height;
- (id)image;
- (id)initWithBytes:(void*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(long long)arg4 bytesPerComponent:(unsigned long long)arg5 format:(int)arg6 colorspace:(struct CGColorSpace { }*)arg7;
- (id)initWithData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(long long)arg4 bytesPerComponent:(unsigned long long)arg5 format:(int)arg6 colorspace:(struct CGColorSpace { }*)arg7;
- (unsigned long long)rowElements;
- (void)setData:(id)arg1;
- (unsigned long long)width;

@end
