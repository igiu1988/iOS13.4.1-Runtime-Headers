/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMICameraVideoPosterFrame : NSObject <NSSecureCoding> {
    NSData * _data;
    unsigned long long  _height;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeOffset;
    unsigned long long  _width;
}

@property (readonly) NSData *data;
@property (readonly) unsigned long long height;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timeOffset;
@property (readonly) unsigned long long width;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)height;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 timeOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeOffset;
- (unsigned long long)width;

@end
