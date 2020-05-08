/* Generated by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReaderOutput : NSObject {
    AVAssetReaderOutputInternal * _internal;
}

@property (nonatomic) bool alwaysCopiesSampleData;
@property (getter=_extractionID, setter=_setExtractionID:, nonatomic) int extractionID;
@property (getter=_figAssetReaderExtractionOptions, nonatomic, readonly) NSDictionary *figAssetReaderExtractionOptions;
@property (nonatomic, readonly) NSString *mediaType;
@property (getter=_trimsSampleDurations, nonatomic, readonly) bool trimsSampleDurations;
@property (getter=_weakReferenceToAssetReader, nonatomic, readonly) AVWeakReference *weakReferenceToAssetReader;

+ (id)_figAssetReaderVideoScalingPropertiesFromVideoSettings:(id)arg1 withFormatDescription:(id)arg2;
+ (void)initialize;

- (id)_asset;
- (void)_attachToWeakReferenceToAssetReader:(id)arg1;
- (void)_cancelReading;
- (bool)_enableTrackExtractionReturningError:(id*)arg1;
- (id)_errorForOSStatus:(int)arg1;
- (int)_extractionID;
- (struct OpaqueFigAssetReader { }*)_figAssetReader;
- (void)_figAssetReaderDecodeError;
- (id)_figAssetReaderExtractionOptions;
- (void)_figAssetReaderFailed;
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)arg1;
- (void)_figAssetReaderServerConnectionDied;
- (bool)_isFinished;
- (void)_markAsFinished;
- (bool)_prepareForReadingReturningError:(id*)arg1;
- (void)_setExtractionID:(int)arg1;
- (void)_setFigAssetReader:(struct OpaqueFigAssetReader { }*)arg1;
- (long long)_status;
- (bool)_trimsSampleDurations;
- (bool)_updateTimeRangesOnFigAssetReaderReturningError:(id*)arg1;
- (id)_weakReferenceToAssetReader;
- (bool)alwaysCopiesSampleData;
- (struct opaqueCMSampleBuffer { }*)copyNextSampleBuffer;
- (id)currentTimeRanges;
- (void)dealloc;
- (id)init;
- (void)markConfigurationAsFinal;
- (bool)maximizePowerEfficiency;
- (id)mediaType;
- (void)resetForReadingTimeRanges:(id)arg1;
- (void)setAlwaysCopiesSampleData:(bool)arg1;
- (void)setMaximizePowerEfficiency:(bool)arg1;
- (void)setSupportsRandomAccess:(bool)arg1;
- (bool)supportsRandomAccess;

@end
