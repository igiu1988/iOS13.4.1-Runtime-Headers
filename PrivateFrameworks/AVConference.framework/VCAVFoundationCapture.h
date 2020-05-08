/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAVFoundationCapture : VCVideoCapture <AVCaptureDataOutputSynchronizerDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, VCEffectsManagerDelegate, VideoCaptureProtocol> {
    struct __CVPixelBufferPool { } * _bufferPool;
    AVCaptureDevice * _captureDevice;
    int  _captureFrameCount;
    AVCaptureSession * _captureSession;
    NSObject<OS_dispatch_queue> * _captureSessionQueue;
    struct CGSize { 
        double width; 
        double height; 
    }  _captureSize;
    AVCaptureDepthDataOutput * _depthDataOutput;
    float  _depthFrameRateMultplier;
    bool  _effectsApplied;
    bool  _faceMeshTrackingEnabled;
    bool  _forceDynamicEffectsFramerate;
    bool  _forceMirrorCapture;
    bool  _forcePearlCamera;
    bool  _isCapturing;
    bool  _isPreviewing;
    int  _lastClientRequestedFrameRate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastPrintTimestamp;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastReceivedTimestamp;
    int  _lastRequestedFrameRate;
    int  _lastRequestedHeight;
    int  _lastRequestedWidth;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastSentTimestamp;
    AVCaptureMetadataOutput * _metadataOutput;
    struct __CVPixelBufferPool { } * _mirrorBufferPool;
    struct OpaqueVTImageRotationSession { } * _mirrorSession;
    AVCaptureDataOutputSynchronizer * _outputSynchronizer;
    NSMutableArray * _outputSynchronizerOutputs;
    int  _previewFrameCount;
    float  _processTimeSum;
    int  _receivedFrameCount;
    NSMutableArray * _renderFrameTimes;
    struct CGSize { 
        double width; 
        double height; 
    }  _requestSize;
    bool  _resize;
    struct __CVPixelBufferPool { } * _resizeBufferPool;
    struct OpaqueVTPixelTransferSession { } * _resizeTransferSession;
    struct __CVPixelBufferPool { } * _rotateBufferPool;
    struct OpaqueVTImageRotationSession { } * _rotationSession;
    int  _sentFrameCount;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
    AVCaptureVideoDataOutput * _videoCaptureOutput;
    AVCaptureDeviceInput * _videoDeviceInput;
    NSObject<OS_dispatch_queue> * _viewPointCorrectionQueue;
    bool  _viewPointCorrectionThermalEnabled;
    float  _viewpointProcessTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool effectsApplied;
@property bool faceMeshTrackingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)attachMetadata:(id)arg1 toCVPixelBuffer:(struct __CVBuffer { }*)arg2;
- (id)cameraFormatForWidth:(int)arg1 height:(int)arg2;
- (id)cameraFormatForWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (bool)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;
- (bool)cameraSupportsNoQueueFormatWidth:(int)arg1 height:(int)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureSessionNotification:(id)arg1;
- (void)checkCameraZoomCapability;
- (void)configureCaptureDeviceDepthFormat;
- (void)configureMetadataTypesForOutput:(id)arg1;
- (int)copyColorInfo:(const struct __CFDictionary {}**)arg1;
- (struct __CVBuffer { }*)copyPixelBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (struct opaqueCMSampleBuffer { }*)copySampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)dealloc;
- (bool)effectsApplied;
- (void)encodeProcessedPixelBuffer:(struct __CVBuffer { }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 imageData:(id)arg3 processTime:(id)arg4;
- (void)ensureMirroredBufferPoolSupportsWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)ensureRotationBufferPoolSupportsWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (bool)faceMeshTrackingEnabled;
- (int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDurationForVideoDeviceFormat:(id)arg1 frameRate:(int)arg2;
- (struct CGSize { double x1; double x2; })getBestCaptureSizeForEncodingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)getCameraUID;
- (int)getMaxAllowedFrameRate:(int)arg1;
- (int)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(bool)arg3;
- (id)initWithCaptureServer:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 cameraUID:(id)arg5;
- (void)initializeDepthDataOutput;
- (void)initializeMetadataOutput;
- (void)initializeOutputs;
- (void)initializeSynchronizedOutputs;
- (void)initializeVideoCaptureOutput;
- (bool)isBackCamera;
- (bool)isFormatMaxFrameRateSupported:(id)arg1 frameRate:(int)arg2;
- (bool)isFrontCamera;
- (bool)isPreviewRunning;
- (struct opaqueCMSampleBuffer { }*)newMirroredVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct opaqueCMSampleBuffer { }*)newResizedFrame:(struct opaqueCMSampleBuffer { }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct opaqueCMSampleBuffer { }*)newRotatedVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 shouldMirror:(bool)arg3;
- (void)prepareSynchronizedOutputs:(id)arg1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 depthData:(id)arg2 faceData:(id)arg3 captureDevice:(id)arg4;
- (void)processViewPointCorrection:(struct opaqueCMSampleBuffer { }*)arg1 metaData:(id)arg2 shouldProcess:(bool)arg3;
- (void)resetViewPointLogging;
- (void)sendImageDataForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 depthData:(id)arg2 faceData:(id)arg3 captureDevice:(id)arg4 originalSize:(struct CGSize { double x1; double x2; })arg5;
- (int)setCamera:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4;
- (int)setCameraWithUID:(id)arg1;
- (void)setCameraZoomFactor:(double)arg1;
- (void)setCameraZoomFactor:(double)arg1 withRate:(double)arg2;
- (void)setEffectsApplied:(bool)arg1;
- (void)setFaceMeshTrackingEnabled:(bool)arg1;
- (int)setFrameRate:(int)arg1;
- (int)setFrameRateInternal:(int)arg1;
- (int)setVideoDeviceToSelectedDevice:(id)arg1;
- (int)setVideoDeviceToWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (void)setVideoOrientationAndMirroredForDevice:(id)arg1;
- (void)setVideoStabilizationTo:(bool)arg1;
- (void)setViewPointCorrectionEnabaled:(bool)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (void)setupMirrorBufferPoolWithWidth:(int)arg1 height:(int)arg2;
- (void)setupRotationBufferPoolWithWidth:(int)arg1 height:(int)arg2;
- (bool)shouldAddDepthData;
- (bool)shouldAddTrackedFacesData;
- (bool)shouldResizeWithCaptureSize:(struct CGSize { double x1; double x2; })arg1 requestSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)shouldUseRearCameraVideoStabilization;
- (bool)shouldUseViewpointCorrection;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;
- (int)stop:(bool)arg1;
- (bool)supportsViewpointCorrection;
- (void)updateDepthFrameRate;
- (void)updateRenderProcessFrameRate:(id)arg1;
- (void)updateVideoCaptureServerWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 frontCamera:(bool)arg3 shouldMirrorFrontPreview:(bool)arg4 isFromEffects:(bool)arg5;

@end
