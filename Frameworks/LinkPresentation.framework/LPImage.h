/* Generated by EzioChiu
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPImage : NSObject <LPAsynchronousResource, NSSecureCoding> {
    NSString * _MIMEType;
    NSObject<OS_dispatch_group> * _asynchronousLoadGroup;
    LPImage * _darkInterfaceAlternativeImage;
    NSData * _data;
    UIImage * _decodedPlatformImage;
    bool  _fallbackIcon;
    NSURL * _fileURL;
    bool  _hasComputedHasTransparency;
    bool  _hasComputedPixelSize;
    bool  _hasTransparency;
    LPImage * _imageLoadedFromItemProvider;
    NSItemProvider * _itemProvider;
    NSObject<OS_dispatch_group> * _itemProviderLoadGroup;
    UIImage * _originalPlatformImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    UIImage * _platformImage;
    LPImageProperties * _properties;
    NSArray * _remoteURLsForEmailCompatibleOutput;
}

@property (nonatomic, readonly, copy) NSString *MIMEType;
@property (getter=_isAnimated, nonatomic, readonly) bool _animated;
@property (setter=_setDarkInterfaceAlternativeImage:, nonatomic, retain) LPImage *_darkInterfaceAlternativeImage;
@property (nonatomic, readonly) unsigned long long _encodedSize;
@property (getter=_isFallbackIcon, nonatomic) bool _fallbackIcon;
@property (nonatomic, readonly) bool _hasTransparency;
@property (nonatomic, readonly, retain) NSItemProvider *_itemProvider;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _pixelSize;
@property (nonatomic, retain) NSArray *_remoteURLsForEmailCompatibleOutput;
@property (nonatomic, readonly, copy) NSString *_srcsetForRemoteURLs;
@property (nonatomic, readonly, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *platformImage;
@property (nonatomic, readonly, copy) LPImageProperties *properties;
@property (readonly) Class superclass;

+ (id)_PDFImageNamed:(id)arg1 template:(bool)arg2;
+ (id)_PNGImageNamed:(id)arg1;
+ (id)_PNGImageNamed:(id)arg1 template:(bool)arg2;
+ (id)_loadImageSubsampledToScreenSizeFromData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)_asTemplate;
- (void)_createDataFromPlatformImage;
- (id)_darkInterfaceAlternativeImage;
- (unsigned long long)_encodedSize;
- (bool)_hasTransparency;
- (id)_initWithCGImage:(struct CGImage { }*)arg1;
- (id)_initWithCGImage:(struct CGImage { }*)arg1 properties:(id)arg2;
- (id)_initWithImage:(id)arg1;
- (id)_initWithImage:(id)arg1 properties:(id)arg2;
- (id)_initWithPlatformImageGenerator:(id /* block */)arg1;
- (bool)_isAnimated;
- (bool)_isFallbackIcon;
- (id)_itemProvider;
- (void)_mapDataFromFileURL;
- (struct CGSize { double x1; double x2; })_pixelSize;
- (void)_preparePlatformImageWithCompletionHandler:(id /* block */)arg1;
- (id)_remoteURLsForEmailCompatibleOutput;
- (void)_setDarkInterfaceAlternativeImage:(id)arg1;
- (bool)_shouldEncodeData;
- (id)_srcsetForRemoteURLs;
- (void)_synchronouslyDecodePlatformImageWithMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_waitForAsynchronouslyLoadedImageIfNeeded;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)init;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initWithItemProvider:(id)arg1 properties:(id)arg2 placeholderImage:(id)arg3;
- (id)initWithPlatformImage:(id)arg1;
- (id)initWithPlatformImage:(id)arg1 properties:(id)arg2;
- (void)loadAsynchronouslyWithCompletionHandler:(id /* block */)arg1;
- (bool)needsAsynchronousLoad;
- (id)platformImage;
- (id)properties;
- (void)setFileURL:(id)arg1;
- (void)setPlatformImage:(id)arg1;
- (void)set_fallbackIcon:(bool)arg1;
- (void)set_remoteURLsForEmailCompatibleOutput:(id)arg1;

@end
