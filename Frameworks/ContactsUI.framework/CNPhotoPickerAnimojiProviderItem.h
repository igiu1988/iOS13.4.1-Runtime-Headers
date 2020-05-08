/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPhotoPickerAnimojiProviderItem : CNPhotoPickerProviderItem {
    NSData * __generatedImageData;
    NSData * __originalImageData;
    <AVTAvatarRecord> * _avatarRecord;
    CNPhotoPickerColorVariant * _backgroundColorVariant;
    AVTAvatarRecordImageProvider * _imageProvider;
    UIImage * _loadingPlaceholderImage;
    AVTStickerConfiguration * _poseConfiguration;
    AVTRenderingScope * _renderingScope;
    CNAvatarStickerGeneratorProvider * _stickerGeneratorProvider;
}

@property (nonatomic, retain) NSData *_generatedImageData;
@property (nonatomic, retain) NSData *_originalImageData;
@property (nonatomic, retain) <AVTAvatarRecord> *avatarRecord;
@property (nonatomic, retain) CNPhotoPickerColorVariant *backgroundColorVariant;
@property (nonatomic, retain) AVTAvatarRecordImageProvider *imageProvider;
@property (nonatomic, retain) UIImage *loadingPlaceholderImage;
@property (nonatomic, retain) AVTStickerConfiguration *poseConfiguration;
@property (nonatomic, retain) AVTRenderingScope *renderingScope;
@property (nonatomic, retain) CNAvatarStickerGeneratorProvider *stickerGeneratorProvider;
@property (nonatomic, retain) NSData *thumbnailImageData;

- (void).cxx_destruct;
- (id)_generatedImageData;
- (id)_originalImageData;
- (bool)allowsMoveAndScale;
- (bool)allowsVariants;
- (void)applyVariantEffectToFullsizeImageWithCompletion:(id /* block */)arg1;
- (id)avatarRecord;
- (id)backgroundColorVariant;
- (id)contactImageForMetadataStore;
- (id)copyWithColor:(id)arg1;
- (id)copyWithPoseConfiguration:(id)arg1 generatorProvider:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createVariantsItemsWithVariantsManager:(id)arg1;
- (id)generateImageDataIfNeeded;
- (id)generateThumbnailImageDataIfNeeded;
- (unsigned long long)hash;
- (id)imageData;
- (id)imageProvider;
- (unsigned long long)imageType;
- (id)initWithAvatarRecord:(id)arg1 imageProvider:(id)arg2 renderingScope:(id)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5;
- (id)initWithOriginalImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithOriginalImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 backgroundColorVariant:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)loadingPlaceholderImage;
- (id)localizedVariantsTitle;
- (id)originalImageData;
- (id)poseConfiguration;
- (id)renderAvatarWithBackgroundWithImage:(id)arg1;
- (id)renderAvatarWithBackgroundWithImageData:(id)arg1;
- (id)renderAvatarWithPoseWithSize:(double)arg1;
- (id)renderDefaultAvatarImage;
- (id)renderingScope;
- (void)setAvatarRecord:(id)arg1;
- (void)setBackgroundColorVariant:(id)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setLoadingPlaceholderImage:(id)arg1;
- (void)setPoseConfiguration:(id)arg1;
- (void)setRenderingScope:(id)arg1;
- (void)setStickerGeneratorProvider:(id)arg1;
- (void)set_generatedImageData:(id)arg1;
- (void)set_originalImageData:(id)arg1;
- (bool)shouldShowCaption;
- (id)stickerGeneratorProvider;
- (void)updateContact:(id)arg1;
- (id)variantIdentifier;

@end
