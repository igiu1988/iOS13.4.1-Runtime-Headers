/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGViewImageTexture : PXGImageTexture {
    struct CGImage { } * _imageRef;
    bool  _isOpaque;
    unsigned int  _orientation;
}

@property (nonatomic, readonly) struct CGImage { }*imageRef;
@property (nonatomic, readonly) unsigned int orientation;

- (void)dealloc;
- (long long)estimatedByteSize;
- (struct CGImage { }*)imageRef;
- (id)initWithImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2;
- (bool)isOpaque;
- (unsigned int)orientation;
- (struct CGSize { double x1; double x2; })pixelSize;
- (int)presentationType;

@end
