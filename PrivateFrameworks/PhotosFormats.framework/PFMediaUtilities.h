/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFMediaUtilities : NSObject

+ (id)UTIForExtension:(id)arg1;
+ (id)UTIForHFSType:(unsigned int)arg1;
+ (id)UTIForURL:(id)arg1 error:(id*)arg2;
+ (bool)UTIRequiresRasterizationDPI:(id)arg1;
+ (bool)canGenerateImageDerivativesFromUTI:(id)arg1;
+ (bool)canLoadAssetAsRawForInteractiveEditingWithImageProperties:(id)arg1;
+ (long long)defaultRasterizationDPI;
+ (id)imagePropertiesFromImageSource:(struct CGImageSource { }*)arg1;
+ (id)imagePropertiesFromImageSource:(struct CGImageSource { }*)arg1 atIndex:(unsigned long long)arg2;
+ (bool)isAudioUTI:(id)arg1;
+ (bool)isGifUTI:(id)arg1;
+ (bool)isHeifUTI:(id)arg1;
+ (bool)isImageUTI:(id)arg1;
+ (bool)isJpeg2000UTI:(id)arg1;
+ (bool)isJpegUTI:(id)arg1;
+ (bool)isMovieUTI:(id)arg1;
+ (bool)isPdfUTI:(id)arg1;
+ (bool)isPngUTI:(id)arg1;
+ (bool)isPsdUTI:(id)arg1;
+ (bool)isQuicktimeMovieUTI:(id)arg1;
+ (bool)isRawUTI:(id)arg1;
+ (bool)isTiffUTI:(id)arg1;
+ (bool)isValidAVFileForURL:(id)arg1;
+ (bool)isValidExtension:(id)arg1 forUTI:(id)arg2;
+ (bool)isValidImageFileForURL:(id)arg1;
+ (id)mainVideoTrackForAsset:(id)arg1;
+ (struct CGSize { double x1; double x2; })maximumImageSizeFromProperties:(id)arg1;
+ (id)preferredExtensionForUTI:(id)arg1;
+ (long long)rawSourceMaximumPixelCountForBackgroundProcessing;
+ (long long)rawSourceMaximumPixelCountForInteractiveEditing;
+ (id)resourceModelUTIForExtension:(id)arg1;

@end
