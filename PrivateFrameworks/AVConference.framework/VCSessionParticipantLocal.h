/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionParticipantLocal : VCSessionParticipant <VCMomentTransportDelegate, VCSessionUplinkVideoStreamControllerDelegate, VCVideoCaptureClient> {
    NSMutableDictionary * _activeUplinkAudioStreams;
    NSMutableSet * _audioPayloadTypes;
    unsigned char  _audioPriority;
    unsigned char  _audioPriorityDecayFast;
    unsigned char  _audioPriorityDecaySlow;
    unsigned char  _audioPriorityRampUp;
    struct opaqueCMSimpleQueue { } * _audioRedundancyChangeEventQueue;
    float  _audioSilencePowerAverageMultiplier;
    struct opaqueCMSimpleQueue { } * _audioStreamUpdateEventQueue;
    struct tagVCMemoryPool { struct { void *x_1_1_1; long long x_1_1_2; } x1; unsigned long long x2; } * _audioStreamUpdatePool;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _audioTimestampRWLock;
    float  _audioVoiceDetectionSensitivity;
    float  _averageSilenceAudioPower;
    unsigned short  _connectionStatsStreamID;
    unsigned int  _currentUplinkTargetBitrate;
    unsigned int  _currentUplinkTotalBitrateAudio;
    unsigned int  _currentUplinkTotalBitrateVideo;
    bool  _enableRedundancy;
    bool  _enableVADFiltering;
    bool  _encryptionInfoReceived;
    double  _fecRatio;
    bool  _forcedAudioPriorityEnabled;
    double  _forcedAudioPriorityLastUpdateTime;
    unsigned char  _forcedAudioPriorityValue;
    double  _lastSentAudioHostTime;
    unsigned int  _lastSentAudioSampleTime;
    NSMutableSet * _localPublishedStreams;
    struct tagVCMediaQueue { } * _mediaQueue;
    VCMoments * _moments;
    NSMutableArray * _peerSubscribedStreams;
    NSMutableDictionary * _pendingActiveUplinkVideoStreams;
    VCAudioPowerSpectrumSource * _powerSpectrumSource;
    struct tagVCMemoryPool { struct { void *x_1_1_1; long long x_1_1_2; } x1; unsigned long long x2; } * _redundancyPool;
    bool  _shouldResize;
    int  _shouldUpdateActiveVideoStream;
    bool  _speechDetected;
    VCSessionUplinkBandwidthAllocator * _uplinkBandwidthAllocator;
    unsigned int  _uplinkBitrateCapCell;
    unsigned int  _uplinkBitrateCapWifi;
    VCSessionUplinkVideoStreamController * _uplinkVideoStreamController;
    NSMutableSet * _videoPayloadTypes;
    _Atomic unsigned char  _videoPriority;
    struct opaqueCMSimpleQueue { } * _videoRedundancyChangeEventQueue;
    struct tagVCMemoryPool { struct { void *x_1_1_1; long long x_1_1_2; } x1; unsigned long long x2; } * _videoRedundancyPool;
    VCVideoRule * _videoRule;
    struct opaqueVCVoiceDetector { } * _voiceDetector;
}

@property (nonatomic, readonly) NSSet *audioPayloadTypes;
@property (nonatomic, readonly) unsigned short connectionStatsStreamID;
@property (nonatomic, readonly) unsigned int currentUplinkTotalBitrateAudio;
@property (nonatomic, readonly) unsigned int currentUplinkTotalBitrateVideo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableVADFiltering;
@property (nonatomic) bool encryptionInfoReceived;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct tagVCMediaQueue { }*mediaQueue;
@property (nonatomic, readonly) VCMoments *moments;
@property (nonatomic, copy) NSArray *peerSubscribedStreams;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int uplinkBitrateCapCell;
@property (nonatomic) unsigned int uplinkBitrateCapWifi;
@property (nonatomic, readonly) NSSet *videoPayloadTypes;

- (void)addCallInfoBlobToParticipantInfo:(id)arg1;
- (bool)applyCachedMediaStreams:(id)arg1 toMultiwayConfig:(id)arg2;
- (void)applyVideoEnabledSetting:(bool)arg1;
- (id)audioPayloadTypes;
- (id)audioRuleCollectionWithAudioStreamConfig:(id)arg1;
- (void)avConferencePreviewError:(id)arg1;
- (unsigned int)calculateUplinkTotalBitrateForMediaStreams:(id)arg1;
- (bool)checkSubscribedStreamsConsistency:(id)arg1;
- (id)clientCaptureRule;
- (void)collectAudioChannelMetrics:(struct { unsigned int x1; unsigned int x2; double x3; }*)arg1;
- (void)collectVideoChannelMetrics:(struct { unsigned int x1; unsigned int x2; double x3; }*)arg1;
- (bool)configureAudioIOWithDeviceRole:(int)arg1;
- (unsigned short)connectionStatsStreamID;
- (bool)containsStreamWithIDSStreamID:(unsigned short)arg1;
- (bool)containsStreamWithSSRC:(unsigned int)arg1;
- (void)controller:(id)arg1 didChangeActiveVideoStreams:(id)arg2;
- (void)createOpaqueData;
- (bool)createParticipantInfo;
- (unsigned int)currentUplinkTotalBitrateAudio;
- (unsigned int)currentUplinkTotalBitrateVideo;
- (void)dealloc;
- (void)deregisterForVideoCapture;
- (void)dispatchedUpdateUplinkMediaStreamsWithTargetBitrate:(unsigned int)arg1;
- (void)enableRedundancy:(bool)arg1;
- (bool)enableVADFiltering;
- (bool)encryptionInfoReceived;
- (void)flushAudioEventQueue;
- (void)flushAudioRedundancyEventQueue;
- (void)flushVideoRedundancyEventQueue;
- (void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(bool)arg2 powerLevelDidChange:(bool)arg3;
- (void)generateKeyFrameForStreamsWithNewCompoundStreamIDsWithActiveVideoStreams:(id)arg1;
- (void)generateKeyFrameWithStreamID:(unsigned short)arg1;
- (unsigned int)generateSSRC;
- (unsigned short)generateStreamID;
- (id)getAudioDumpName;
- (void)handleActiveConnectionChange:(id)arg1;
- (id)initWithIDSDestination:(id)arg1 negotiationData:(id)arg2 delegate:(id)arg3 processId:(int)arg4 sessionUUID:(id)arg5;
- (bool)initializeMediaNegotiator;
- (void)initializeUplinkVideoStreamController;
- (bool)isHighPriorityAudioWithPower:(float)arg1 voiceActive:(bool)arg2;
- (struct tagVCMediaQueue { }*)mediaQueue;
- (id)moments;
- (void)moments:(id)arg1 shouldProcessRequest:(id)arg2 recipientID:(id)arg3;
- (id)multiwayAudioStreamNegotiatorConfigForStreamConfig:(id)arg1;
- (id)multiwayVideoStreamConfigs;
- (id)multiwayVideoStreamNegotiatorConfigForStreamConfig:(id)arg1 isSubstream:(bool)arg2;
- (id)newMediaNegotiatorAudioConfiguration;
- (bool)onCaptureFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (id)peerSubscribedStreams;
- (void)processAudioRedundancyChangeEvent;
- (void)processAudioStreamUpdateEvent;
- (void)processEventQueues;
- (void)processVideoEventQueue;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)registerForVideoCapture;
- (void)setEnableVADFiltering:(bool)arg1;
- (void)setEncryptionInfoReceived:(bool)arg1;
- (void)setMediaQueue:(struct tagVCMediaQueue { }*)arg1;
- (void)setMuted:(bool)arg1;
- (void)setPeerSubscribedStreams:(id)arg1;
- (bool)setState:(unsigned int)arg1;
- (void)setUplinkBitrateCapCell:(unsigned int)arg1;
- (void)setUplinkBitrateCapWifi:(unsigned int)arg1;
- (bool)setupAudioStreamWithConfiguration:(id)arg1;
- (bool)setupAudioStreamWithConfiguration:(id)arg1 idsDestination:(id)arg2;
- (bool)setupAudioStreamsWithConfigProvider:(id)arg1;
- (bool)setupAudioStreamsWithConfigProvider:(id)arg1 mediaNegotiatorConfig:(id)arg2;
- (void)setupEncodingModeWithVideoStreamConfig:(id)arg1;
- (id)setupStreamRTP:(id)arg1;
- (void)setupVideoStreamConfig:(id)arg1 initialConfiguration:(id)arg2;
- (bool)setupVideoStreamWithConfiguration:(id)arg1;
- (bool)setupVideoStreamWithConfiguration:(id)arg1 idsDestination:(id)arg2;
- (bool)setupVideoStreamsWithConfigProvider:(id)arg1;
- (bool)setupVideoStreamsWithConfigProvider:(id)arg1 mediaNegotiatorConfig:(id)arg2;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (void)start;
- (void)startVoiceActivityDetection;
- (void)stop;
- (void)stopAudioIOCompletion;
- (void)stopVoiceActivityDetection;
- (id)supportedAudioRules;
- (void)thermalLevelDidChange:(int)arg1;
- (void)updateActiveAudioStreamWithTargetBitrate:(unsigned int)arg1;
- (void)updateActiveAudioStreams:(id)arg1 allStreamIds:(id)arg2;
- (void)updateActiveVideoStreamWithTargetBitrate:(unsigned int)arg1;
- (void)updateActiveVoiceOnly;
- (void)updateAudioPriorityWithSampleBuffer:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)updateMediaSettingsWithConfig:(id)arg1;
- (void)updateMomentsCapabillities:(unsigned int)arg1 imageType:(int)arg2 videoCodec:(int)arg3;
- (void)updatePayloadTypesWithConfigProvider:(id)arg1;
- (void)updateStreamIDsWithActiveVideoStreams:(id)arg1;
- (void)updateSupportedAudioRules:(id)arg1;
- (void)updateUplinkStreamsForPeerSubscribedStreams:(id)arg1;
- (void)updateUplinkTargetBitrate:(unsigned int)arg1;
- (void)updateVideoPaused:(bool)arg1;
- (unsigned int)uplinkBitrateCapCell;
- (unsigned int)uplinkBitrateCapWifi;
- (id)videoPayloadTypes;

@end