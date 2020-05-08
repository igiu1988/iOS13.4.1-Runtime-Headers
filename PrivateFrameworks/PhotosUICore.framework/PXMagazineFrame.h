/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMagazineFrame : NSObject {
    double  _aspectRatio;
    long long  _height;
    double  _maxAspectRatio;
    double  _minAspectRatio;
    long long  _width;
}

@property (nonatomic) double aspectRatio;
@property (nonatomic) long long height;
@property (nonatomic) double maxAspectRatio;
@property (nonatomic) double minAspectRatio;
@property (nonatomic, readonly) long long numberOfTiles;
@property (nonatomic) long long width;

- (double)aspectRatio;
- (id)description;
- (long long)height;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2;
- (double)maxAspectRatio;
- (double)minAspectRatio;
- (long long)numberOfTiles;
- (void)setAspectRatio:(double)arg1;
- (void)setHeight:(long long)arg1;
- (void)setMaxAspectRatio:(double)arg1;
- (void)setMinAspectRatio:(double)arg1;
- (void)setWidth:(long long)arg1;
- (long long)width;

@end
