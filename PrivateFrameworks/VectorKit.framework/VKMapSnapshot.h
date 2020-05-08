/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapSnapshot : NSObject <NSSecureCoding> {
    VKCamera * _camera;
    unsigned long long  _height;
    struct CGImage { } * _image;
    double  _scale;
    unsigned long long  _width;
}

@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) double scale;

+ (bool)supportsSecureCoding;

- (id)_initWithImage:(struct CGImage { }*)arg1 scale:(double)arg2 camera:(id)arg3;
- (struct { double x1; double x2; })coordinateForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct CGImage { }*)image;
- (id)imageDataInFormat:(unsigned long long)arg1;
- (id)imageSurface;
- (id)initWithCoder:(id)arg1;
- (struct CGPoint { double x1; double x2; })pointForCoordinate:(struct { double x1; double x2; })arg1;
- (double)scale;

@end
