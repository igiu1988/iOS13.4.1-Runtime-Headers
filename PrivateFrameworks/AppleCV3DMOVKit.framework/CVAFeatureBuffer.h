/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

@interface CVAFeatureBuffer : NSObject <NSSecureCoding> {
    unsigned int  _bytesPerRow;
    NSData * _data;
    unsigned int  _height;
    NSString * _sourceStreamID;
    double  _timestamp;
    unsigned int  _width;
}

@property unsigned int bytesPerRow;
@property (retain) NSData *data;
@property unsigned int height;
@property (retain) NSString *sourceStreamID;
@property double timestamp;
@property unsigned int width;

+ (id)classes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)bytesPerRow;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (struct __CVBuffer { }*)getPixelBuffer;
- (unsigned int)height;
- (id)initWithCoder:(id)arg1;
- (id)initWithPixelBufferRef:(struct __CVBuffer { }*)arg1 timestamp:(double)arg2 streamID:(id)arg3;
- (void)setBytesPerRow:(unsigned int)arg1;
- (void)setData:(id)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setSourceStreamID:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setWidth:(unsigned int)arg1;
- (id)sourceStreamID;
- (double)timestamp;
- (unsigned int)width;

@end
