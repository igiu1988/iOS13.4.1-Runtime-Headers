/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

@interface PHMediaFormatConversionRequest : NSObject <NSProgressReporting> {
    PHMediaFormatConversionDestination * _destination;
    PFMediaCapabilities * _destinationCapabilities;
    NSURL * _directoryForTemporaryFiles;
    NSError * _error;
    bool  _forceFormatConversion;
    double  _formatConversionExpansionFactor;
    NSUUID * _identifier;
    NSString * _livePhotoPairingIdentifier;
    long long  _livePhotoPairingIdentifierBehavior;
    NSString * _outputFilename;
    PHMediaFormatConversionCompositeRequest * _parentRequest;
    long long  _passthroughConversionAdditionalByteCount;
    bool  _preflighted;
    NSProgress * _progress;
    bool  _requiresSinglePassVideoConversion;
    bool  _shouldPadOutputFileToEstimatedLength;
    bool  _shouldStripLocation;
    id /* block */  _singlePassVideoConversionUpdateHandler;
    PHMediaFormatConversionSource * _source;
    long long  _status;
    long long  _transferBehaviorUserPreference;
    bool  _useTransferBehaviorUserPreference;
    id  _userInfo;
}

@property (readonly) long long backwardsCompatibilityStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PHMediaFormatConversionDestination *destination;
@property (retain) PFMediaCapabilities *destinationCapabilities;
@property (retain) NSURL *directoryForTemporaryFiles;
@property (retain) NSError *error;
@property (readonly) unsigned long long estimatedOutputFileLength;
@property bool forceFormatConversion;
@property (nonatomic) double formatConversionExpansionFactor;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (readonly) bool isCompositeRequest;
@property (copy) NSString *livePhotoPairingIdentifier;
@property long long livePhotoPairingIdentifierBehavior;
@property (readonly) NSString *outputFileType;
@property (retain) NSString *outputFilename;
@property (readonly) NSString *outputPathExtension;
@property PHMediaFormatConversionCompositeRequest *parentRequest;
@property (nonatomic) long long passthroughConversionAdditionalByteCount;
@property bool preflighted;
@property (retain) NSProgress *progress;
@property (readonly) bool requiresFormatConversion;
@property (readonly) bool requiresMetadataChanges;
@property (readonly) bool requiresPassthroughConversion;
@property bool requiresSinglePassVideoConversion;
@property bool shouldPadOutputFileToEstimatedLength;
@property bool shouldStripLocation;
@property (copy) id /* block */ singlePassVideoConversionUpdateHandler;
@property (retain) PHMediaFormatConversionSource *source;
@property long long status;
@property (readonly) NSString *statusString;
@property (readonly) Class superclass;
@property long long transferBehaviorUserPreference;
@property bool useTransferBehaviorUserPreference;
@property (retain) id userInfo;

+ (double)bitsPerPixelWithImageDimensions:(struct CGSize { double x1; double x2; })arg1 fileLength:(unsigned long long)arg2;
+ (double)heifToJPEGFactorForBitsPerPixel:(double)arg1;
+ (double)heifToJPEGFactorWithImageDimensions:(struct CGSize { double x1; double x2; })arg1 fileLength:(unsigned long long)arg2;
+ (id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id*)arg3;
+ (id)stringForRequestStatus:(long long)arg1;

- (void).cxx_destruct;
- (long long)backwardsCompatibilityStatus;
- (id)description;
- (id)destination;
- (id)destinationCapabilities;
- (void)didFinishProcessing;
- (id)directoryForTemporaryFiles;
- (void)enableSinglePassVideoEncodingWithUpdateHandler:(id /* block */)arg1;
- (id)error;
- (unsigned long long)estimatedOutputFileLength;
- (bool)forceFormatConversion;
- (double)formatConversionExpansionFactor;
- (id)identifier;
- (id)init;
- (bool)isCompositeRequest;
- (id)livePhotoPairingIdentifier;
- (long long)livePhotoPairingIdentifierBehavior;
- (void)markAsCancelled;
- (id)outputFileType;
- (id)outputFilename;
- (id)outputPathExtension;
- (void)padOutputFileToEstimatedLength;
- (id)parentRequest;
- (long long)passthroughConversionAdditionalByteCount;
- (void)preflightWithConversionManager:(id)arg1;
- (bool)preflighted;
- (bool)prepareWithError:(id*)arg1;
- (id)progress;
- (bool)requiresFormatConversion;
- (bool)requiresLivePhotoPairingIdentifierChange;
- (bool)requiresLocationMetadataChange;
- (bool)requiresMetadataChanges;
- (bool)requiresPassthroughConversion;
- (bool)requiresSinglePassVideoConversion;
- (void)setDestination:(id)arg1;
- (void)setDestinationCapabilities:(id)arg1;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (void)setError:(id)arg1;
- (void)setForceFormatConversion:(bool)arg1;
- (void)setFormatConversionExpansionFactor:(double)arg1;
- (void)setLivePhotoPairingIdentifier:(id)arg1;
- (void)setLivePhotoPairingIdentifierBehavior:(long long)arg1;
- (void)setOutputFilename:(id)arg1;
- (void)setParentRequest:(id)arg1;
- (void)setPassthroughConversionAdditionalByteCount:(long long)arg1;
- (void)setPreflighted:(bool)arg1;
- (void)setProgress:(id)arg1;
- (void)setRequiresSinglePassVideoConversion:(bool)arg1;
- (void)setShouldPadOutputFileToEstimatedLength:(bool)arg1;
- (void)setShouldStripLocation:(bool)arg1;
- (void)setSinglePassVideoConversionUpdateHandler:(id /* block */)arg1;
- (void)setSource:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTransferBehaviorUserPreference:(long long)arg1;
- (void)setUseTransferBehaviorUserPreference:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setupProgress;
- (bool)shouldPadOutputFileToEstimatedLength;
- (bool)shouldStripLocation;
- (id /* block */)singlePassVideoConversionUpdateHandler;
- (id)source;
- (long long)status;
- (id)statusString;
- (long long)transferBehaviorUserPreference;
- (void)updateSinglePassVideoConversionStatus:(long long)arg1 addedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 error:(id)arg3;
- (bool)useTransferBehaviorUserPreference;
- (id)userInfo;
- (bool)userPreferenceProhibitsFormatConversion;

@end
