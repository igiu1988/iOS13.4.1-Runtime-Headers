/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARReplaySensorPublic : NSObject <ARReplaySensorProtocol, ARReplaySensorProtocolInternal> {
    float  _advanceFramesPerSecondMultiplier;
    NSString * _arkitVersion;
    NSSet * _availableMetadataStreams;
    NSSet * _availableVideoStreams;
    NSMutableDictionary * _calibrationBuffer;
    NSMutableArray * _cmDataBuffer;
    ARImageCroppingTechnique * _croppingTechnique;
    NSSet * _customDataClasses;
    NSMutableArray * _cvaDepthTOFBuffer;
    <ARSensorDelegate> * _delegate;
    JDJasperCameraSystemCalibrationData * _depthCameraCalibrationData;
    ARDepthPointCloudGenerator * _depthPointCloudGenerator;
    NSString * _depthVideoStreamIdentifier;
    unsigned long long  _depthVideoTrackType;
    NSString * _deviceModel;
    bool  _displaySynchronizationMarker;
    long long  _displaySynchronizationMarkerFrames;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _extrinsicsFromUltrawideToJasper;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _extrinsicsFromUltrawideToWide;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _extrinsicsFromWideToJasper;
    _Atomic bool  _finishedReplaying;
    int  _imageIndex;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageResolution;
    bool  _interrupted;
    bool  _isJasperEnabled;
    NSString * _mainVideoStreamIdentifier;
    bool  _manualCommandLineMode;
    NSMutableDictionary * _metadataCache;
    ARReplayMovieDataWrapper * _mostRecentWrappedImageDataOfDepthStream;
    long long  _nextFrameIndex;
    NSMutableDictionary * _nextWrappedImageDataForStreamIdentifierMap;
    double  _nominalFrameRate;
    NSString * _osVersion;
    ARParentImageSensorSettings * _parentImageSensorSettings;
    MOVReaderInterface * _reader;
    double  _recordTimestampToMovieTimestampDifference;
    NSSet * _recordedResultClasses;
    unsigned long long  _recordedSensorTypes;
    double  _recordingTimeToReplayTimeOffset;
    bool  _recordingTimeToReplayTimeOffsetReset;
    long long  _replayMode;
    NSObject<OS_dispatch_queue> * _replayQueue;
    <ARReplaySensorDelegate> * _replaySensorDelegate;
    bool  _replayStarted;
    bool  _running;
    NSURL * _sequenceURL;
    ARSession * _session;
    double  _startTime;
    struct __CVBuffer { } * _synchronizationMarker;
    struct __CVPixelBufferPool { } * _synchronizationMarkerPool;
    struct OpaqueVTPixelTransferSession { } * _synchronizationTransferSession;
    long long  _targetFrameIndex;
    long long  _tick;
    NSObject<OS_dispatch_source> * _timer;
    <ARReplaySensorDelegate> * _traceReplaySensorDelegate;
    NSMutableArray * _userEventBuffer;
    bool  _usingST2Recording;
    NSSet * _videoStreamsToReplay;
}

@property float advanceFramesPerSecondMultiplier;
@property (nonatomic, readonly) NSString *arkitVersion;
@property (nonatomic, readonly) NSMutableArray *cmDataBuffer;
@property (nonatomic, copy) NSSet *customDataClasses;
@property (nonatomic, readonly) NSMutableArray *cvaDepthTOFBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic, readonly) bool finishedReplaying;
@property (readonly) unsigned long long hash;
@property (nonatomic) int imageIndex;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageResolution;
@property (nonatomic, readonly) bool interrupted;
@property (nonatomic, readonly) bool isReplayingManually;
@property (nonatomic, retain) NSString *mainVideoStreamIdentifier;
@property long long nextFrameIndex;
@property (nonatomic, readonly) double nominalFrameRate;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, retain) ARParentImageSensorSettings *parentImageSensorSettings;
@property (nonatomic) unsigned long long powerUsage;
@property (nonatomic, readonly) NSArray *recordedResultClassList;
@property (nonatomic, readonly) NSSet *recordedResultClasses;
@property (nonatomic, readonly) unsigned long long recordedSensorTypes;
@property (nonatomic) double recordingTimeToReplayTimeOffset;
@property (nonatomic) bool recordingTimeToReplayTimeOffsetReset;
@property (nonatomic, readonly) long long replayMode;
@property <ARReplaySensorDelegate> *replaySensorDelegate;
@property (nonatomic, readonly) NSURL *sequenceURL;
@property (nonatomic) ARSession *session;
@property (readonly) Class superclass;
@property (getter=isSynchronousMode, nonatomic, readonly) bool synchronousMode;
@property long long targetFrameIndex;
@property <ARReplaySensorDelegate> *traceReplaySensorDelegate;
@property (nonatomic, readonly) NSMutableArray *userEventBuffer;

- (void).cxx_destruct;
- (bool)_allStreamsAreAvailable:(id)arg1;
- (void)_appendCalibrationData:(id)arg1 streamIdentifier:(id)arg2;
- (void)_didOutputSensorData:(id)arg1;
- (double)_getMinFrameDurationForStream:(id)arg1;
- (id)_mainVideoStringID:(id)arg1;
- (id)_populateCalibrationStream:(id)arg1;
- (id)_readDepthCameraCalibrationData;
- (void)_replaySensorFinishedReplayingData;
- (id)_streamIdentifierForCaptureDeviceType:(id)arg1 position:(long long)arg2;
- (void)advance;
- (void)advanceFrame;
- (float)advanceFramesPerSecondMultiplier;
- (void)advanceToFrameIndex:(long long)arg1;
- (id)arkitVersion;
- (id)availableVideoFormatForDeviceType:(id)arg1 position:(long long)arg2;
- (id)cmDataBuffer;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentCMTime;
- (double)currentTime;
- (id)customDataClasses;
- (id)customDataForTimestamp:(double)arg1;
- (id)cvaDepthTOFBuffer;
- (void)dealloc;
- (id)delegate;
- (id)deviceModel;
- (void)endInterruption;
- (void)endReplay;
- (void)failWithError:(id)arg1;
- (bool)finishedReplaying;
- (id)getItemsFromStream:(id)arg1 upToMovieTime:(double)arg2 converter:(id /* block */)arg3;
- (id)getNextWrappedImageDataForReplay;
- (id)getNextWrappedItemsFromStream:(id)arg1 converter:(id /* block */)arg2;
- (id)getResultDataForClasses:(id)arg1 upToRecordTime:(double)arg2;
- (id)getWrappedItemsFromPixelBufferStream:(id)arg1 upToMovieTime:(double)arg2 converter:(id /* block */)arg3;
- (id)getWrappedItemsFromStream:(id)arg1 upToMovieTime:(double)arg2 converter:(id /* block */)arg3;
- (id)imageDataToReplayForTimestamp:(double)arg1;
- (int)imageIndex;
- (struct CGSize { double x1; double x2; })imageResolution;
- (id)initWithDataFromFile:(id)arg1;
- (id)initWithSequenceURL:(id)arg1 manualReplay:(bool)arg2;
- (id)initWithSequenceURL:(id)arg1 manualReplay:(bool)arg2 synchronousMode:(bool)arg3;
- (id)initWithSequenceURL:(id)arg1 replayMode:(long long)arg2;
- (void)interrupt;
- (bool)interrupted;
- (bool)isEqual:(id)arg1;
- (bool)isReplayingManually;
- (bool)isSynchronousMode;
- (id /* block */)keyedArchiveConverter:(Class)arg1;
- (id /* block */)keyedArchiveConverterForClasses:(id)arg1;
- (id)mainVideoStreamIdentifier;
- (id /* block */)metadataWrapperConverter:(Class)arg1;
- (long long)nextFrameIndex;
- (double)nominalFrameRate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)osVersion;
- (id)parentImageSensorSettings;
- (id)peekNextWrappedImageDataForAllRequiredStreams;
- (id)peekNextWrappedImageDataForStreamIdentifier:(id)arg1;
- (void)prepareForReplay;
- (unsigned long long)providedDataTypes;
- (void)readAndVendCMDatasUntil:(double)arg1;
- (void)readAndVendCVADepthTOFsUntil:(double)arg1;
- (void)readAndVendCVAUserEventsUntil:(double)arg1;
- (void)readFileMetadata;
- (bool)readNextFrameFromStream:(id)arg1 forWrapper:(id)arg2;
- (id)recordedResultClassList;
- (id)recordedResultClasses;
- (unsigned long long)recordedSensorTypes;
- (double)recordingTimeToReplayTimeOffset;
- (bool)recordingTimeToReplayTimeOffsetReset;
- (long long)replayMode;
- (id)replaySensorDelegate;
- (id)replayTechniqueForResultDataClasses:(id)arg1;
- (id)sequenceURL;
- (id)session;
- (void)setAdvanceFramesPerSecondMultiplier:(float)arg1;
- (void)setCustomDataClasses:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageIndex:(int)arg1;
- (void)setMainVideoStreamIdentifier:(id)arg1;
- (void)setNextFrameIndex:(long long)arg1;
- (void)setParentImageSensorSettings:(id)arg1;
- (void)setRecordingTimeToReplayTimeOffset:(double)arg1;
- (void)setRecordingTimeToReplayTimeOffsetReset:(bool)arg1;
- (void)setReplaySensorDelegate:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTargetFrameIndex:(long long)arg1;
- (void)setTraceReplaySensorDelegate:(id)arg1;
- (double)sourceTimestampForMovieTimestamp:(double)arg1;
- (void)start;
- (void)startReplayIfNeeded;
- (void)stop;
- (long long)targetFrameIndex;
- (void)tick;
- (id)traceReplaySensorDelegate;
- (id)userEventBuffer;
- (id)wrappedImageDataOrderedByTime:(id)arg1;

@end
