/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFAssetBundle : NSObject {
    NSURL * _adjustmentBasePairedVideoURL;
    NSURL * _adjustmentBasePhotoURL;
    NSURL * _adjustmentBaseVideoURL;
    NSURL * _adjustmentDataURL;
    NSURL * _alternatePhotoURL;
    NSURL * _audioURL;
    bool  _didReadOriginalPairedVideoMetadata;
    NSURL * _fullSizePairedVideoURL;
    NSURL * _fullSizePhotoURL;
    NSURL * _fullSizeVideoURL;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _livePhotoOriginalImageDisplayTime;
    NSString * _livePhotoOriginalPairingIdentifier;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _livePhotoOriginalVideoDuration;
    NSMutableDictionary * _metadata;
    NSURL * _originalAdjustmentDataURL;
    NSURL * _pairedVideoURL;
    NSURL * _photoURL;
    NSDictionary * _propertyList;
    NSURL * _spatialOvercapturePairedVideoURL;
    NSURL * _spatialOvercapturePhotoURL;
    NSURL * _spatialOvercaptureVideoURL;
    NSURL * _videoURL;
}

@property (nonatomic, readonly) NSURL *adjustmentBasePairedVideoURL;
@property (nonatomic, readonly) NSURL *adjustmentBasePhotoURL;
@property (nonatomic, readonly) NSURL *adjustmentBaseVideoURL;
@property (nonatomic, readonly) NSURL *adjustmentDataURL;
@property (nonatomic, readonly) NSURL *alternatePhotoURL;
@property (nonatomic, copy) NSString *assetDescription;
@property (nonatomic, copy) NSString *assetTitle;
@property (nonatomic, readonly) NSURL *audioURL;
@property (nonatomic, readonly) bool didReadOriginalPairedVideoMetadata;
@property (nonatomic, readonly) NSURL *fullSizePairedVideoURL;
@property (nonatomic, readonly) NSURL *fullSizePhotoURL;
@property (nonatomic, readonly) NSURL *fullSizeVideoURL;
@property (nonatomic, copy) NSSet *keywordTitles;
@property (nonatomic, copy) NSDate *libraryCreationDate;
@property (nonatomic, retain) id libraryLocation;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } livePhotoImageDisplayTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } livePhotoOriginalImageDisplayTime;
@property (nonatomic, copy) NSString *livePhotoOriginalPairingIdentifier;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } livePhotoOriginalVideoDuration;
@property (nonatomic, readonly, copy) NSString *livePhotoPairingIdentifier;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly, copy) NSMutableDictionary *metadata;
@property (nonatomic, readonly) NSURL *originalAdjustmentDataURL;
@property (nonatomic, readonly) NSURL *pairedVideoURL;
@property (nonatomic, readonly) NSURL *photoURL;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) unsigned long long playbackVariation;
@property (nonatomic, copy) NSDictionary *propertyList;
@property (nonatomic, readonly) unsigned long long reframeVariation;
@property (nonatomic, readonly) NSURL *spatialOvercapturePairedVideoURL;
@property (nonatomic, readonly) NSURL *spatialOvercapturePhotoURL;
@property (nonatomic) bool spatialOvercaptureResourcesPurgeable;
@property (nonatomic, readonly) NSURL *spatialOvercaptureVideoURL;
@property (nonatomic, readonly) unsigned short videoComplementVisibilityState;
@property (nonatomic, readonly) NSURL *videoURL;

+ (id)currentFormatVersion;

- (void).cxx_destruct;
- (bool)_pathExtension:(id)arg1 matchesUTIType:(struct __CFString { }*)arg2 error:(id*)arg3;
- (void)_readLivePhotoVideoMetadataIfNeeded;
- (bool)_verifyFileSourceExistsAtURL:(id)arg1 error:(id*)arg2;
- (bool)_writeFileAtURL:(id)arg1 toDirectory:(id)arg2 withUpdatedFilename:(id)arg3 updateManifest:(id)arg4 bundlePathKey:(id)arg5 verifyUTIType:(struct __CFString { }*)arg6 error:(id*)arg7;
- (bool)_writeFileAtURL:(id)arg1 toDirectory:(id)arg2 withUpdatedFilename:(id)arg3 writtenFileURL:(id*)arg4 error:(id*)arg5;
- (bool)_writeFileAtURL:(id)arg1 toDirectory:(id)arg2 writtenFileURL:(id*)arg3 error:(id*)arg4;
- (id)adjustmentBasePairedVideoURL;
- (id)adjustmentBasePhotoURL;
- (id)adjustmentBaseVideoURL;
- (id)adjustmentDataURL;
- (id)alternatePhotoURL;
- (id)assetDescription;
- (id)assetTitle;
- (id)audioURL;
- (id)createAssetBundleWritingErrorWithDescription:(id)arg1;
- (bool)didReadOriginalPairedVideoMetadata;
- (id)fullSizePairedVideoURL;
- (id)fullSizePhotoURL;
- (id)fullSizeVideoURL;
- (id)init;
- (id)initWithAssetBundleAtURL:(id)arg1;
- (id)initWithOriginalPhotoURL:(id)arg1 alternatePhotoURL:(id)arg2 fullSizePhotoURL:(id)arg3 adjustmentBaseFullSizePhotoURL:(id)arg4 spatialOvercapturePhotoURL:(id)arg5 originalPairedVideoURL:(id)arg6 fullSizePairedVideoURL:(id)arg7 adjustmentBaseFullSizePairedVideoURL:(id)arg8 spatialOvercapturePairedVideoURL:(id)arg9 fullSizeVideoURL:(id)arg10 adjustmentsURL:(id)arg11 originalAdjustmentsURL:(id)arg12 mediaSubtypes:(unsigned long long)arg13 playbackStyle:(long long)arg14 playbackVariation:(unsigned long long)arg15 videoComplementVisibilityState:(unsigned short)arg16 reframeVariation:(unsigned long long)arg17;
- (id)initWithOriginalVideoURL:(id)arg1 fullSizeRenderedVideoURL:(id)arg2 adjustmentBaseVideoURL:(id)arg3 spatialOvercaptureVideoURL:(id)arg4 adjustmentsURL:(id)arg5 originalAdjustmentsURL:(id)arg6 mediaSubtypes:(unsigned long long)arg7 playbackStyle:(long long)arg8 playbackVariation:(unsigned long long)arg9 reframeVariation:(unsigned long long)arg10;
- (id)initWithPropertyList:(id)arg1;
- (bool)isMediaSubtype:(unsigned long long)arg1;
- (id)keywordTitles;
- (id)libraryCreationDate;
- (id)libraryLocation;
- (bool)linkOrCopyURL:(id)arg1 toURL:(id)arg2 forceCopy:(bool)arg3 error:(id*)arg4;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoImageDisplayTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoOriginalImageDisplayTime;
- (id)livePhotoOriginalPairingIdentifier;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoOriginalVideoDuration;
- (id)livePhotoPairingIdentifier;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (id)metadata;
- (id)originalAdjustmentDataURL;
- (id)pairedVideoURL;
- (id)photoURL;
- (long long)playbackStyle;
- (unsigned long long)playbackVariation;
- (id)propertyList;
- (unsigned long long)reframeVariation;
- (void)setAssetDescription:(id)arg1;
- (void)setAssetTitle:(id)arg1;
- (void)setKeywordTitles:(id)arg1;
- (void)setLibraryCreationDate:(id)arg1;
- (void)setLibraryLocation:(id)arg1;
- (void)setLivePhotoOriginalImageDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLivePhotoOriginalPairingIdentifier:(id)arg1;
- (void)setLivePhotoOriginalVideoDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPropertyList:(id)arg1;
- (void)setSpatialOvercaptureResourcesPurgeable:(bool)arg1;
- (id)spatialOvercapturePairedVideoURL;
- (id)spatialOvercapturePhotoURL;
- (bool)spatialOvercaptureResourcesPurgeable;
- (id)spatialOvercaptureVideoURL;
- (id)urlsByPathKey;
- (unsigned short)videoComplementVisibilityState;
- (id)videoURL;
- (id)writeDowngradedRepresentationToDirectory:(id)arg1 error:(id*)arg2;
- (bool)writeToBundleAtURL:(id)arg1 error:(id*)arg2;

@end
