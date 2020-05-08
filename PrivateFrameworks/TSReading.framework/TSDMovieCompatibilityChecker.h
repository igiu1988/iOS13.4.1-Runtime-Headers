/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDMovieCompatibilityChecker : NSObject {
    AVAsset * mAsset;
    long long  mCompatibilityLevel;
    struct { 
        int width; 
        int height; 
    }  mCustomMaxPlayableVideoDimensions;
    int  mCustomMaxPlayableVideoPixelsPerFrame;
    NSSet * mCustomPlayableVideoCodecTypes;
    NSError * mError;
}

@property (nonatomic, readonly) long long compatibilityLevel;
@property (nonatomic, readonly) NSError *error;

- (void)cancel;
- (void)checkCompatibilityUpToLevel:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)checkCustomCompatibilityWithVideoCodecTypes:(id)arg1 maxPlayableVideoDimensions:(struct CGSize { double x1; double x2; })arg2 maxPlayableVideoPixelsPerFrame:(int)arg3 completionHandler:(id /* block */)arg4;
- (long long)compatibilityLevel;
- (void)dealloc;
- (id)error;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (bool)p_assetHasSupportedFileTypeOnAllDevices;
- (void)p_didFinishCheckingCompatibilityUpToLevel:(long long)arg1 actualLevel:(long long)arg2 didCancel:(bool)arg3 error:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)p_isAudioTrackPlayableOnAllDevices:(id)arg1;
- (bool)p_isH263VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription { }*)arg1;
- (bool)p_isH264VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription { }*)arg1;
- (bool)p_isLoadedAssetPlayableOnAllDevices;
- (bool)p_isMPEG4VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription { }*)arg1;
- (bool)p_isSorenson3VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription { }*)arg1;
- (bool)p_isVideoTrackPlayableOnAllDevices:(id)arg1;
- (id)p_sampleDescriptionExtensionAtomDataFromVideoFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 forAtomType:(id)arg2;

@end
