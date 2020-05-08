/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUISidebandMediaEntityImageLoadParams : NSObject <VUIImageLoadParams> {
    NSString * _imageIdentifierInternal;
    VUIImageInfoManagedObject * _imageInfo;
    unsigned long long  _imageTypeInternal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *imageIdentifier;
@property (nonatomic, retain) NSString *imageIdentifierInternal;
@property (nonatomic, retain) VUIImageInfoManagedObject *imageInfo;
@property (nonatomic, readonly) unsigned long long imageType;
@property (nonatomic) unsigned long long imageTypeInternal;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)imageIdentifier;
- (id)imageIdentifierInternal;
- (id)imageInfo;
- (unsigned long long)imageType;
- (unsigned long long)imageTypeInternal;
- (id)initWithVideoManagedObject:(id)arg1 imageType:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)setImageIdentifierInternal:(id)arg1;
- (void)setImageInfo:(id)arg1;
- (void)setImageTypeInternal:(unsigned long long)arg1;

@end
