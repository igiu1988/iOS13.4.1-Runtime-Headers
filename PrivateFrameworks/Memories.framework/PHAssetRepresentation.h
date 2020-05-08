/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PHAssetRepresentation : NSObject {
    bool  _adjustedVersion;
    PHAsset * _asset;
    double  _downloadProgress;
    NSDate * _downloadRequestDate;
    unsigned long long  _downloadState;
    bool  _isAvailable;
    unsigned long long  _lastKnownPersistenceState;
    NSString * _localIdentifier;
    long long  _mediaType;
    NSDate * _modificationDate;
    PHAssetResource * _mostUsefulResource;
}

@property (getter=isAdjustedVersion, nonatomic) bool adjustedVersion;
@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, readonly) NSString *derivativeFilePath;
@property (nonatomic) double downloadProgress;
@property (nonatomic, retain) NSDate *downloadRequestDate;
@property (nonatomic) unsigned long long downloadState;
@property (nonatomic) unsigned long long lastKnownPersistenceState;
@property (nonatomic, retain) NSString *localIdentifier;
@property (nonatomic) long long mediaType;
@property (nonatomic, retain) NSDate *modificationDate;
@property (readonly) PHAssetResource *mostUsefulResource;

+ (void)_cacheAssetRepresentation:(id)arg1;
+ (id)_cachedAssetRepresentationWithIdentifier:(id)arg1 adjustedVersion:(bool)arg2;
+ (id)assetRepresentationWithAsset:(id)arg1 adjustedVersion:(bool)arg2;
+ (id)assetRepresentationWithAssetsLibraryPersistentURL:(id)arg1;
+ (id)assetRepresentationWithIdentifierURL:(id)arg1;
+ (id)assetRepresentationWithPhotosIdentifierURL:(id)arg1;
+ (void)clearStaticCache;
+ (void)createStaticCache;
+ (void)initialize;

- (void).cxx_destruct;
- (id)asset;
- (id)avAsset;
- (struct CGImage { }*)cgimageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGImage { }*)cgimageWithSize:(struct CGSize { double x1; double x2; })arg1 imageManager:(id)arg2;
- (void)dealloc;
- (id)derivativeFilePath;
- (id)description;
- (double)downloadProgress;
- (id)downloadRequestDate;
- (unsigned long long)downloadState;
- (unsigned long long)estimatedFileSize;
- (id)handlePlayerItemRequestCompletionWithResult:(id)arg1 info:(id)arg2 videoRequestOptions:(id)arg3;
- (id)handleRequestCompletionWithResult:(id)arg1 info:(id)arg2 videoRequestOptions:(id)arg3;
- (id)handleVideoRequestCompletionWithResult:(id)arg1 info:(id)arg2 videoRequestOptions:(id)arg3;
- (unsigned long long)hash;
- (id)identifierURL;
- (id)image;
- (id)imageData;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 imageManager:(id)arg2;
- (id)initWithAsset:(id)arg1 adjustedVersion:(bool)arg2;
- (id)initWithAsset:(id)arg1 localIdentifier:(id)arg2 adjustedVersion:(bool)arg3 modificationDate:(id)arg4 mediaType:(long long)arg5;
- (id)initWithLocalIdentifier:(id)arg1 adjustedVersion:(bool)arg2 modificationDate:(id)arg3 mediaType:(long long)arg4;
- (bool)isAdjustedVersion;
- (bool)isDerivativeFilePathPointingToJPEGorRAWorHEIFFile;
- (bool)isDownloading;
- (bool)isEqual:(id)arg1;
- (bool)isHEIF;
- (unsigned long long)lastKnownPersistenceState;
- (id)localIdentifier;
- (long long)mediaType;
- (id)modificationDate;
- (id)mostUsefulResource;
- (id)privateFileURL;
- (id)privateFileURLForResource:(id)arg1;
- (id)privateVideoFileURL;
- (void)queryLastKnownPersistenceState;
- (int)requestExportSessionWithResultHandler:(id /* block */)arg1 progressHandler:(id /* block */)arg2;
- (int)requestImageDataWithResultHandler:(id /* block */)arg1;
- (int)requestImageDataWithResultHandler:(id /* block */)arg1 progressHandler:(id /* block */)arg2 synchronous:(bool)arg3;
- (int)requestImageDataWithResultHandler:(id /* block */)arg1 synchronous:(bool)arg2;
- (int)requestImageWithResultHandler:(id /* block */)arg1;
- (int)requestImageWithResultHandler:(id /* block */)arg1 progressHandler:(id /* block */)arg2;
- (int)requestImageWithResultHandler:(id /* block */)arg1 progressHandler:(id /* block */)arg2 imageManager:(id)arg3;
- (int)requestMediaWithResultHandler:(id /* block */)arg1 progressHandler:(id /* block */)arg2;
- (int)requestPlayerItemWithResultHandler:(id /* block */)arg1 progressHandler:(id /* block */)arg2 networkAccessAllowed:(bool)arg3;
- (int)requestThumbnailWithResultHandler:(id /* block */)arg1 synchronous:(bool)arg2 networkAccessAllowed:(bool)arg3;
- (int)requestVideoWithResultHandler:(id /* block */)arg1;
- (int)requestVideoWithResultHandler:(id /* block */)arg1 progressHandler:(id /* block */)arg2;
- (int)requestVideoWithResultHandler:(id /* block */)arg1 progressHandler:(id /* block */)arg2 imageManager:(id)arg3;
- (void)setAdjustedVersion:(bool)arg1;
- (void)setAsset:(id)arg1;
- (void)setDownloadProgress:(double)arg1;
- (void)setDownloadRequestDate:(id)arg1;
- (void)setDownloadState:(unsigned long long)arg1;
- (void)setLastKnownPersistenceState:(unsigned long long)arg1;
- (void)setLocalIdentifier:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setModificationDate:(id)arg1;
- (id)thumbnailImage;

@end
