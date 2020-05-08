/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCaptureEngine : NSObject <AVCaptureVideoThumbnailContentsDelegate, CAMPanoramaProcessorDelegate> {
    CAMMemoizationCache * __captureEngineDeviceCache;
    NSObject<OS_dispatch_queue> * __captureServicesQueue;
    AVCaptureSession * __captureSession;
    NSObject<OS_dispatch_queue> * __captureSessionQueue;
    NSHashTable * __effectsPreviewSampleBufferDelegates;
    NSObject<OS_dispatch_queue> * __effectsPreviewSampleBufferQueue;
    CIContext * __effectsPreviewSurfaceFilteringContext;
    NSObject<OS_dispatch_queue> * __effectsPreviewSurfaceFilteringQueue;
    long long  __engineOptions;
    NSObject<OS_dispatch_queue> * __metadataObjectsQueue;
    unsigned long long  __numberOfRecoveryAttempts;
    AVSpatialOverCaptureVideoPreviewLayer * __overCaptureVideoPreviewLayer;
    unsigned int  __panoramaAssertionIdentifier;
    NSObject<OS_dispatch_semaphore> * __panoramaFirstImageQueueUpdateSemaphore;
    NSObject<OS_dispatch_queue> * __panoramaFirstImageQueueUpdateSemaphoreQueue;
    struct _CAImageQueue { } * __panoramaImageQueue;
    CAMPanoramaProcessor * __panoramaProcessor;
    NSObject<OS_dispatch_queue> * __panoramaSampleBufferQueue;
    NSObject<OS_dispatch_queue> * __panoramaSubgraphQueue;
    bool  __performingRecovery;
    CAMPowerController * __powerController;
    NSObject<OS_dispatch_queue> * __recoveryMutexQueue;
    NSMutableArray * __servicesQueueCaptureServices;
    NSMutableDictionary * __sessionQueueCachedPhotoInitiationSettings;
    NSURL * __sessionQueueLastCompletedVideoURL;
    NSMutableDictionary * __sessionQueueRegisteredStillImageRequests;
    NSMutableSet * __sessionQueueRegisteredStillImageRequestsDispatchedToFilteringQueue;
    NSMutableDictionary * __sessionQueueRequestsBeingRecorded;
    AVCaptureVideoPreviewLayer * __videoPreviewLayer;
    NSHashTable * __videoThumbnailContentsDelegates;
    AVCaptureDevice * _audioCameraDevice;
    AVCaptureDeviceInput * _audioCaptureDeviceInput;
    AVCaptureDevice * _currentCameraDevice;
    AVCapturePhotoOutput * _currentStillImageOutput;
    AVCaptureVideoDataOutput * _effectsPreviewVideoDataOutput;
    bool  _interrupted;
    bool  _managedDevicesLockedForConfiguration;
    AVCaptureMetadataOutput * _metadataOutput;
    CAMCaptureMovieFileOutput * _movieFileOutput;
    CAMPanoramaConfiguration * _panoramaConfiguration;
    CAMPanoramaOutput * _panoramaVideoDataOutput;
    AVCapturePhotoOutput * _stillImageOutput;
    AVCaptureVideoThumbnailOutput * _videoThumbnailOutput;
}

@property (nonatomic, readonly) CAMMemoizationCache *_captureEngineDeviceCache;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_captureServicesQueue;
@property (nonatomic, readonly) AVCaptureSession *_captureSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_captureSessionQueue;
@property (nonatomic, readonly) NSHashTable *_effectsPreviewSampleBufferDelegates;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_effectsPreviewSampleBufferQueue;
@property (nonatomic, readonly) CIContext *_effectsPreviewSurfaceFilteringContext;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_effectsPreviewSurfaceFilteringQueue;
@property (nonatomic, readonly) long long _engineOptions;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_metadataObjectsQueue;
@property (setter=_setNumberOfRecoveryAttempts:, nonatomic) unsigned long long _numberOfRecoveryAttempts;
@property (nonatomic, readonly) AVSpatialOverCaptureVideoPreviewLayer *_overCaptureVideoPreviewLayer;
@property (setter=_setPanoramaAssertionIdentifier:, nonatomic) unsigned int _panoramaAssertionIdentifier;
@property (setter=_setPanoramaFirstImageQueueUpdateSemaphore:, nonatomic, retain) NSObject<OS_dispatch_semaphore> *_panoramaFirstImageQueueUpdateSemaphore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_panoramaFirstImageQueueUpdateSemaphoreQueue;
@property (setter=_setPanoramaImageQueue:, nonatomic) struct _CAImageQueue { }*_panoramaImageQueue;
@property (setter=_setPanoramaProcessor:, nonatomic, retain) CAMPanoramaProcessor *_panoramaProcessor;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_panoramaSampleBufferQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_panoramaSubgraphQueue;
@property (getter=_isPerformingRecovery, setter=_setPerformingRecovery:, nonatomic) bool _performingRecovery;
@property (nonatomic, readonly) CAMPowerController *_powerController;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_recoveryMutexQueue;
@property (nonatomic, readonly) NSMutableArray *_servicesQueueCaptureServices;
@property (nonatomic, readonly) NSMutableDictionary *_sessionQueueCachedPhotoInitiationSettings;
@property (setter=_setSessionQueueLastCompletedVideoURL:, nonatomic, retain) NSURL *_sessionQueueLastCompletedVideoURL;
@property (nonatomic, readonly) NSMutableDictionary *_sessionQueueRegisteredStillImageRequests;
@property (nonatomic, readonly) NSMutableSet *_sessionQueueRegisteredStillImageRequestsDispatchedToFilteringQueue;
@property (nonatomic, readonly) NSMutableDictionary *_sessionQueueRequestsBeingRecorded;
@property (nonatomic, readonly) AVCaptureVideoPreviewLayer *_videoPreviewLayer;
@property (nonatomic, readonly) NSHashTable *_videoThumbnailContentsDelegates;
@property (nonatomic, retain) AVCaptureDevice *currentCameraDevice;
@property (nonatomic, retain) AVCapturePhotoOutput *currentStillImageOutput;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInterrupted, setter=_setInterrupted:, nonatomic) bool interrupted;
@property (getter=areManagedDevicesLockedForConfiguration, nonatomic) bool managedDevicesLockedForConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AVCaptureVideoPreviewLayer *videoPreviewLayer;

+ (id)_cacheKeyForDeviceType:(id)arg1 position:(long long)arg2;
+ (void)preheatCaptureResources;

- (void).cxx_destruct;
- (id)_accumulatedUserInfoFromCommand:(id)arg1;
- (void)_beginSessionConfigurationIfRequiredByCommand:(id)arg1 withContext:(id)arg2 logReason:(out id*)arg3;
- (void)_cancelDelayedSessionNonstartRecovery;
- (id)_captureEngineDeviceCache;
- (id)_captureEngineDeviceForDeviceType:(id)arg1 position:(long long)arg2;
- (void)_captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 forVideoCaptureRequest:(id)arg4 videoZoomFactor:(double)arg5 error:(id)arg6;
- (id)_captureServicesQueue;
- (id)_captureSession;
- (id)_captureSessionQueue;
- (void)_commitSessionConfigurationIfNecessaryWithLogReason:(id)arg1;
- (id)_coordinationInfoForCTMVideoRequest:(id)arg1 videoOutputURL:(id)arg2 resolvedMomentCaptureMovieSettings:(id)arg3;
- (id)_coordinationInfoForRequest:(id)arg1 photo:(id)arg2;
- (id)_coordinationInfoForRequest:(id)arg1 resolvedSettings:(id)arg2 videoComplementURL:(id)arg3 isFiltered:(bool)arg4;
- (struct __CVBuffer { }*)_createOutputPixelBufferWithSize:(struct CGSize { double x1; double x2; })arg1 matchingInputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (double)_delayForRecoveryAttempt:(unsigned long long)arg1;
- (void)_didFinishStillImageCaptureForUniqueID:(long long)arg1 error:(id)arg2;
- (id)_effectsPreviewSampleBufferDelegates;
- (id)_effectsPreviewSampleBufferQueue;
- (id)_effectsPreviewSurfaceFilteringContext;
- (id)_effectsPreviewSurfaceFilteringQueue;
- (long long)_engineOptions;
- (void)_enumerateCaptureServicesUsingBlock:(id /* block */)arg1;
- (void)_enumerateCaptureServicesUsingBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_executeCommand:(id)arg1 withContext:(id)arg2;
- (id)_expectedResultSpecifiersForResolvedMomentCaptureMovieSettings:(id)arg1;
- (id)_expectedResultSpecifiersForResolvedPhotoSettings:(id)arg1;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleCaptureOutputDidFinishCapturingPhoto:(id)arg1 deferredPhotoProxy:(id)arg2 error:(id)arg3;
- (void)_handleFailedSessionRecoveryAttemptAfterDelay:(bool)arg1;
- (void)_handleSessionDidStartRunning:(id)arg1;
- (void)_handleSessionDidStopRunning:(id)arg1;
- (void)_handleSessionInterruption:(id)arg1;
- (void)_handleSessionInterruptionEnded:(id)arg1;
- (void)_handleSessionRuntimeError:(id)arg1;
- (bool)_isPerformingRecovery;
- (bool)_isSessionModificationRequiredByCommand:(id)arg1 logReason:(out id*)arg2;
- (bool)_lockAllEngineManagedDevices;
- (bool)_lockManagedCapturedDevice:(id)arg1;
- (id)_metadataObjectsQueue;
- (struct __CVBuffer { }*)_newFilteredPixelBufferFromPixelBuffer:(struct __CVBuffer { }*)arg1 filters:(id)arg2;
- (long long)_notificationForError:(struct __CFString { }*)arg1;
- (void)_notifyServicesOfPanoramaConfigurationChangeWithImageQueue:(struct _CAImageQueue { }*)arg1 direction:(long long)arg2;
- (unsigned long long)_numberOfRecoveryAttempts;
- (id)_overCaptureVideoPreviewLayer;
- (unsigned int)_panoramaAssertionIdentifier;
- (id)_panoramaFirstImageQueueUpdateSemaphore;
- (id)_panoramaFirstImageQueueUpdateSemaphoreQueue;
- (struct _CAImageQueue { }*)_panoramaImageQueue;
- (id)_panoramaProcessor;
- (id)_panoramaSampleBufferQueue;
- (void)_panoramaSampleBufferQueue_stopPanoramaCaptureIfNecessaryInterrupted:(bool)arg1;
- (id)_panoramaSubgraphQueue;
- (void)_performSessionNonstartRecoveryIfNeeded;
- (void)_performSessionRuntimeRecovery:(id)arg1;
- (id)_photoOutputFromSession:(id)arg1;
- (id)_powerController;
- (id)_previewFiltersForFilterType:(long long)arg1 previewCrop:(long long)arg2 inPreviewSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_recoverFromSessionRuntimeError;
- (id)_recoveryMutexQueue;
- (void)_resetPerformingRecoveryState;
- (void)_scheduleDelayedRecoveryCheckIfNecessary;
- (void)_scheduleDelayedSessionNonstartRecovery;
- (id)_servicesQueueCaptureServices;
- (id)_sessionQueueCachedPhotoInitiationSettings;
- (id)_sessionQueueLastCompletedVideoURL;
- (void)_sessionQueuePanoramaSetup;
- (void)_sessionQueuePanoramaTeardown;
- (id)_sessionQueueRegisteredStillImageRequests;
- (id)_sessionQueueRegisteredStillImageRequestsDispatchedToFilteringQueue;
- (id)_sessionQueueRequestsBeingRecorded;
- (void)_sessionQueue_performPostprocessingForPreviewBuffer:(struct __CVBuffer { }*)arg1 filters:(id)arg2 stillImageCaptureRequestKey:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_sessionQueue_startWithRetryCount:(unsigned long long)arg1 retryInterval:(double)arg2 logReason:(id)arg3 completion:(id /* block */)arg4;
- (void)_setInterrupted:(bool)arg1;
- (void)_setNumberOfRecoveryAttempts:(unsigned long long)arg1;
- (void)_setPanoramaAssertionIdentifier:(unsigned int)arg1;
- (void)_setPanoramaFirstImageQueueUpdateSemaphore:(id)arg1;
- (void)_setPanoramaImageQueue:(struct _CAImageQueue { }*)arg1;
- (void)_setPanoramaProcessor:(id)arg1;
- (void)_setPerformingRecovery:(bool)arg1;
- (void)_setSessionQueueLastCompletedVideoURL:(id)arg1;
- (bool)_shouldStartSessionOnConfigurationChanges;
- (void)_subgraphQueueCreatePanoramaImageQueueIfNecessary;
- (void)_subgraphQueueCreatePanoramaProcessorIfNecessaryWithEncodingBehavior:(long long)arg1;
- (void)_subgraphQueueHandlePanoramaErrorNotification:(struct __CFString { }*)arg1;
- (void)_subgraphQueueHandlePanoramaStatusNotification:(struct __CFString { }*)arg1;
- (void)_subgraphQueueHandlePanoramaWarningNotification:(struct __CFString { }*)arg1;
- (void)_unlockAllEngineManagedDevices;
- (void)_unlockManagedCaptureDevice:(id)arg1;
- (void)_updateContext:(id)arg1;
- (void)_updateCurrentlyConfiguredObjects;
- (void)_updateEffectsSubgraph;
- (bool)_updatePanoramaSubgraphForEnteringBackground:(bool)arg1;
- (void)_updateVideoThumbnailSubgraph;
- (void)_validateSessionRecovery;
- (id)_validateVideoAtURL:(id)arg1 withCaptureID:(long long)arg2 withCaptureError:(id)arg3 isVideoComplement:(bool)arg4 stillImageDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 reportedDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 outActualDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg7 outVideoRecordingStoppedReason:(long long*)arg8;
- (id)_videoDeviceInputFromSession:(id)arg1;
- (id)_videoPreviewLayer;
- (id)_videoThumbnailContentsDelegates;
- (bool)areManagedDevicesLockedForConfiguration;
- (id)audioCaptureDevice;
- (id)audioCaptureDeviceInput;
- (id)backCameraDevice;
- (id)backDualCameraDevice;
- (id)backSuperWideCameraDevice;
- (id)backTelephotoCameraDevice;
- (id)backTripleCameraDevice;
- (id)backWideDualCameraDevice;
- (void)cacheMomentCaptureSettings:(id)arg1 forIdentifier:(id)arg2;
- (id)cachedMomentCaptureSettingsForIdentifier:(id)arg1;
- (void)captureOutput:(id)arg1 didBeginMovieCaptureForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 didCapturePhotoForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishCaptureForResolvedSettings:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishCapturingDeferredPhotoProxy:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishMovieCaptureForResolvedSettings:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishProcessingLivePhotoToMovieFileAtURL:(id)arg2 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 photoDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 resolvedSettings:(id)arg5 error:(id)arg6;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(id)arg2 resolvedSettings:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishRecordingMovie:(id)arg2;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didFinishWritingMovie:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 forMetadataObjectTypes:(id)arg3 fromConnection:(id)arg4;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)captureOutput:(id)arg1 willBeginCaptureForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 willCapturePhotoForResolvedSettings:(id)arg2;
- (void)changePanoramaEncodingBehaviorIfNeeded:(long long)arg1;
- (void)changeToPanoramaDirection:(long long)arg1;
- (void)clearCachedMomentCaptureSettingsForIdentifier:(id)arg1;
- (id)currentCameraDevice;
- (id)currentStillImageOutput;
- (void)dealloc;
- (id)effectsPreviewVideoDataOutput;
- (void)enqueueCommand:(id)arg1;
- (id)frontCameraDevice;
- (id)frontPearlCameraDevice;
- (id)initWithPowerController:(id)arg1 options:(long long)arg2;
- (bool)isInterrupted;
- (id)metadataOutput;
- (id)movieFileOutput;
- (id)overCaptureVideoPreviewLayer;
- (void)panoramaProcessor:(id)arg1 didProcessSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 withStatus:(int)arg3 forRequest:(id)arg4;
- (id)panoramaVideoDataOutput;
- (id)prewarmedAudioDeviceInput:(id)arg1 device:(id)arg2;
- (id)prewarmedCaptureSession;
- (id)prewarmedVideoDeviceInput:(id)arg1 position:(long long)arg2 device:(id)arg3;
- (void)registerCaptureService:(id)arg1;
- (void)registerEffectsPreviewSampleBufferDelegate:(id)arg1;
- (void)registerStillImageCaptureRequest:(id)arg1 withSettings:(id)arg2;
- (void)registerVideoCaptureRequest:(id)arg1;
- (void)registerVideoThumbnailContentsDelegate:(id)arg1;
- (void)setCurrentCameraDevice:(id)arg1;
- (void)setCurrentStillImageOutput:(id)arg1;
- (void)setManagedDevicesLockedForConfiguration:(bool)arg1;
- (void)startPanoramaCaptureWithRequest:(id)arg1;
- (void)startWithRetryCount:(unsigned long long)arg1 retryInterval:(double)arg2 logReason:(id)arg3 completion:(id /* block */)arg4;
- (id)stillImageOutput;
- (void)stopPanoramaCaptureInterrupted:(bool)arg1;
- (void)stopRecording;
- (void)stopWithCompletion:(id /* block */)arg1;
- (void)unregisterCaptureService:(id)arg1;
- (void)unregisterEffectsPreviewSampleBufferDelegate:(id)arg1;
- (void)unregisterVideoThumbnailContentsDelegate:(id)arg1;
- (id)videoPreviewLayer;
- (id)videoThumbnailOutput;
- (void)videoThumbnailOutput:(id)arg1 willBeginRenderingThumbnailsWithContents:(id)arg2;
- (void)videoThumbnailOutputWillEndRenderingThumbnails:(id)arg1;

@end
