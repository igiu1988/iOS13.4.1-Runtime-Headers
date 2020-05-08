/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageResult : PHCompositeMediaResult {
    NSNumber * _exifOrientation;
    struct CGImage { } * _imageRef;
}

@property (nonatomic, copy) NSNumber *exifOrientation;

- (void).cxx_destruct;
- (bool)containsValidData;
- (void)dealloc;
- (id)exifOrientation;
- (id)imageData;
- (struct CGImage { }*)imageRef;
- (id)imageURL;
- (id)imageUTI;
- (void)setExifOrientation:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageRef:(struct CGImage { }*)arg1;
- (void)setImageURL:(id)arg1;
- (void)setImageUTI:(id)arg1;
- (long long)uiOrientation;

@end
