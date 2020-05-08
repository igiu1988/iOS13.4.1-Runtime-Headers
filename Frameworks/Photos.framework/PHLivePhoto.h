/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHLivePhoto : NSObject <NSCopying, NSSecureCoding> {
    PHAsset * _asset;
    NSString * _assetLocalIdentifier;
    NSString * _assetUUID;
    float  _audioVolume;
    long long  _contentMode;
    PHImageManager * _imageManager;
    NSURL * _imageURL;
    PHSandboxExtensionWrapper * _imageURLSandboxExtensionWrapper;
    unsigned long long  _options;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _photoTime;
    NSObject * _plImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    NSString * _uniqueIdentifier;
    AVAsset * _videoAsset;
    AVVideoComposition * _videoComposition;
    NSURL * _videoURL;
    PHSandboxExtensionWrapper * _videoURLSandboxExtensionWrapper;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly, copy) NSString *assetLocalIdentifier;
@property (nonatomic, readonly, copy) NSString *assetUUID;
@property (nonatomic) float audioVolume;
@property (nonatomic, readonly) long long contentMode;
@property (nonatomic, readonly, copy) id /* block */ imageFileLoader;
@property (nonatomic) PHImageManager *imageManager;
@property (nonatomic, readonly) NSString *imageTypeIdentifier;
@property (nonatomic, readonly) NSURL *imageURL;
@property (nonatomic, readonly) PHSandboxExtensionWrapper *imageURLSandboxExtensionWrapper;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSString *originalFilename;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoTime;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;
@property (readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) AVAsset *videoAsset;
@property (nonatomic, readonly, copy) AVVideoComposition *videoComposition;
@property (nonatomic, readonly, copy) id /* block */ videoFileLoader;
@property (nonatomic, readonly) NSString *videoTypeIdentifier;
@property (nonatomic, readonly) NSURL *videoURL;
@property (nonatomic, readonly) PHSandboxExtensionWrapper *videoURLSandboxExtensionWrapper;

+ (bool)_canCreateLivePhotoWithURLs:(id)arg1 outError:(id*)arg2;
+ (bool)_canCreateLoopingLivePhotoWithURLs:(id)arg1 outError:(id*)arg2;
+ (bool)_identifyResourceURLs:(id)arg1 outImageURL:(id*)arg2 outVideoURL:(id*)arg3 error:(id*)arg4;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })_photoTimeForLivePhotoWithImageURL:(id)arg1 videoURL:(id)arg2;
+ (bool)_validateFileURLs:(id)arg1 withValidationOptions:(unsigned long long)arg2 outError:(id*)arg3;
+ (void)cancelLivePhotoRequestWithRequestID:(int)arg1;
+ (id)livePhotoWithResourceFileURLs:(id)arg1 error:(id*)arg2;
+ (id)livePhotoWithResourceFileURLs:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 error:(id*)arg4;
+ (id)livePhotoWithResourceFileURLs:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 skipValidation:(bool)arg4 error:(id*)arg5;
+ (id)livePhotoWithResourceFileURLs:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 skipValidation:(bool)arg4 isLooping:(bool)arg5 error:(id*)arg6;
+ (id)loopingLivePhotoWithResourceFileURLs:(id)arg1 error:(id*)arg2;
+ (int)requestLivePhotoWithResourceFileURLs:(id)arg1 placeholderImage:(id)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 contentMode:(long long)arg4 resultHandler:(id /* block */)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_ensureConstituentData;
- (id)_imageManager;
- (id)_initWithImage:(struct CGImage { }*)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 asset:(id)arg5 assetUUID:(id)arg6 options:(unsigned long long)arg7 videoComposition:(id)arg8;
- (id)_initWithImageURL:(id)arg1 videoURL:(id)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 contentMode:(long long)arg4;
- (void)_loadConstituentURLsWithNetworkAccessAllowed:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)_synchronouslyLoadImageURL:(id*)arg1 videoURL:(id*)arg2 error:(id*)arg3;
- (id)asset;
- (id)assetLocalIdentifier;
- (id)assetUUID;
- (float)audioVolume;
- (long long)contentMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPhotoColorAdjustments;
- (id)image;
- (id /* block */)imageFileLoader;
- (id)imageManager;
- (id)imageTypeIdentifier;
- (id)imageURL;
- (id)imageURLSandboxExtensionWrapper;
- (id)initWithBundleAtURL:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(struct CGImage { }*)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 asset:(id)arg5;
- (id)initWithImage:(struct CGImage { }*)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 asset:(id)arg5 options:(unsigned long long)arg6;
- (id)initWithImage:(struct CGImage { }*)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 asset:(id)arg5 options:(unsigned long long)arg6 videoComposition:(id)arg7;
- (id)initWithImage:(struct CGImage { }*)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 assetUUID:(id)arg5 options:(unsigned long long)arg6 videoComposition:(id)arg7;
- (unsigned long long)options;
- (id)originalFilename;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoTime;
- (void)saveToPhotoLibraryWithCompletionHandler:(id /* block */)arg1;
- (void)setAudioVolume:(float)arg1;
- (void)setImageManager:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })targetSize;
- (id)uniqueIdentifier;
- (id)videoAsset;
- (id)videoComplement;
- (id)videoComposition;
- (id /* block */)videoFileLoader;
- (id)videoTypeIdentifier;
- (id)videoURL;
- (id)videoURLSandboxExtensionWrapper;

@end
