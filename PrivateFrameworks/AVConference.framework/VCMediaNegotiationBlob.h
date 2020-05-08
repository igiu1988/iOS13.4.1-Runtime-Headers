/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiationBlob : PBCodable <NSCopying> {
    bool  _allowDynamicMaxBitrate;
    bool  _allowsContentsChangeWithAspectPreservation;
    VCMediaNegotiationBlobAudioSettings * _audioSettings;
    NSMutableArray * _bandwidthSettings;
    NSString * _basebandCodec;
    unsigned int  _basebandCodecSampleRate;
    unsigned int  _blobVersion;
    VCMediaNegotiationBlobCaptionsSettings * _captionsSettings;
    VCMediaNegotiationFaceTimeSettings * _faceTimeSettings;
    struct { 
        unsigned int ntpTime : 1; 
        unsigned int basebandCodecSampleRate : 1; 
        unsigned int blobVersion : 1; 
        unsigned int mediaControlInfoVersion : 1; 
        unsigned int allowDynamicMaxBitrate : 1; 
        unsigned int allowsContentsChangeWithAspectPreservation : 1; 
    }  _has;
    unsigned int  _mediaControlInfoVersion;
    VCMediaNegotiationBlobMomentsSettings * _momentsSettings;
    NSMutableArray * _multiwayAudioStreams;
    NSMutableArray * _multiwayVideoStreams;
    unsigned long long  _ntpTime;
    VCMediaNegotiationBlobVideoSettings * _screenSettings;
    NSString * _userAgent;
    VCMediaNegotiationBlobVideoSettings * _videoSettings;
}

@property (nonatomic) bool allowDynamicMaxBitrate;
@property (nonatomic) bool allowsContentsChangeWithAspectPreservation;
@property (nonatomic, retain) VCMediaNegotiationBlobAudioSettings *audioSettings;
@property (nonatomic, retain) NSMutableArray *bandwidthSettings;
@property (nonatomic, retain) NSString *basebandCodec;
@property (nonatomic) unsigned int basebandCodecSampleRate;
@property (nonatomic) unsigned int blobVersion;
@property (nonatomic, retain) VCMediaNegotiationBlobCaptionsSettings *captionsSettings;
@property (nonatomic, retain) VCMediaNegotiationFaceTimeSettings *faceTimeSettings;
@property (nonatomic) bool hasAllowDynamicMaxBitrate;
@property (nonatomic) bool hasAllowsContentsChangeWithAspectPreservation;
@property (nonatomic, readonly) bool hasAudioSettings;
@property (nonatomic, readonly) bool hasBasebandCodec;
@property (nonatomic) bool hasBasebandCodecSampleRate;
@property (nonatomic) bool hasBlobVersion;
@property (nonatomic, readonly) bool hasCaptionsSettings;
@property (nonatomic, readonly) bool hasFaceTimeSettings;
@property (nonatomic) bool hasMediaControlInfoVersion;
@property (nonatomic, readonly) bool hasMomentsSettings;
@property (nonatomic) bool hasNtpTime;
@property (nonatomic, readonly) bool hasScreenSettings;
@property (nonatomic, readonly) bool hasUserAgent;
@property (nonatomic, readonly) bool hasVideoSettings;
@property (nonatomic) unsigned int mediaControlInfoVersion;
@property (nonatomic, retain) VCMediaNegotiationBlobMomentsSettings *momentsSettings;
@property (nonatomic, retain) NSMutableArray *multiwayAudioStreams;
@property (nonatomic, retain) NSMutableArray *multiwayVideoStreams;
@property (nonatomic) unsigned long long ntpTime;
@property (nonatomic, retain) VCMediaNegotiationBlobVideoSettings *screenSettings;
@property (nonatomic, retain) NSString *userAgent;
@property (nonatomic, retain) VCMediaNegotiationBlobVideoSettings *videoSettings;

+ (Class)bandwidthSettingsType;
+ (Class)multiwayAudioStreamsType;
+ (Class)multiwayVideoStreamType;

- (void)addBandwidthSettings:(id)arg1;
- (void)addMultiwayAudioStreams:(id)arg1;
- (void)addMultiwayVideoStream:(id)arg1;
- (bool)allowDynamicMaxBitrate;
- (bool)allowsContentsChangeWithAspectPreservation;
- (id)audioSettings;
- (id)bandwidthSettings;
- (id)bandwidthSettingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)bandwidthSettingsCount;
- (id)basebandCodec;
- (unsigned int)basebandCodecSampleRate;
- (unsigned int)blobVersion;
- (id)captionsSettings;
- (void)clearBandwidthSettings;
- (void)clearMultiwayAudioStreams;
- (void)clearMultiwayVideoStreams;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)faceTimeSettings;
- (bool)hasAllowDynamicMaxBitrate;
- (bool)hasAllowsContentsChangeWithAspectPreservation;
- (bool)hasAudioSettings;
- (bool)hasBasebandCodec;
- (bool)hasBasebandCodecSampleRate;
- (bool)hasBlobVersion;
- (bool)hasCaptionsSettings;
- (bool)hasFaceTimeSettings;
- (bool)hasMediaControlInfoVersion;
- (bool)hasMomentsSettings;
- (bool)hasNtpTime;
- (bool)hasScreenSettings;
- (bool)hasUserAgent;
- (bool)hasVideoSettings;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)mediaControlInfoVersion;
- (void)mergeFrom:(id)arg1;
- (id)momentsSettings;
- (id)multiwayAudioStreams;
- (id)multiwayAudioStreamsAtIndex:(unsigned long long)arg1;
- (unsigned long long)multiwayAudioStreamsCount;
- (id)multiwayVideoStreamAtIndex:(unsigned long long)arg1;
- (id)multiwayVideoStreams;
- (unsigned long long)multiwayVideoStreamsCount;
- (unsigned long long)ntpTime;
- (void)printBandwidthSettingsWithLogFile:(void*)arg1;
- (void)printCaptionsSettingsWithLogFile:(void*)arg1;
- (void)printMomentsSettingsWithLogFile:(void*)arg1;
- (void)printMultiwayAudioStreamsWithLogFile:(void*)arg1;
- (void)printMultiwayVideoStreamsWithLogFile:(void*)arg1;
- (void)printWithTitle:(id)arg1 blobSize:(unsigned int)arg2 logFile:(void*)arg3;
- (bool)readFrom:(id)arg1;
- (id)screenSettings;
- (void)setAllowDynamicMaxBitrate:(bool)arg1;
- (void)setAllowsContentsChangeWithAspectPreservation:(bool)arg1;
- (void)setAudioSettings:(id)arg1;
- (void)setBandwidthSettings:(id)arg1;
- (void)setBasebandCodec:(id)arg1;
- (void)setBasebandCodecSampleRate:(unsigned int)arg1;
- (void)setBlobVersion:(unsigned int)arg1;
- (void)setCaptionsSettings:(id)arg1;
- (void)setFaceTimeSettings:(id)arg1;
- (void)setHasAllowDynamicMaxBitrate:(bool)arg1;
- (void)setHasAllowsContentsChangeWithAspectPreservation:(bool)arg1;
- (void)setHasBasebandCodecSampleRate:(bool)arg1;
- (void)setHasBlobVersion:(bool)arg1;
- (void)setHasMediaControlInfoVersion:(bool)arg1;
- (void)setHasNtpTime:(bool)arg1;
- (void)setMediaControlInfoVersion:(unsigned int)arg1;
- (void)setMomentsSettings:(id)arg1;
- (void)setMultiwayAudioStreams:(id)arg1;
- (void)setMultiwayVideoStreams:(id)arg1;
- (void)setNtpTime:(unsigned long long)arg1;
- (void)setScreenSettings:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setVideoSettings:(id)arg1;
- (id)userAgent;
- (id)videoSettings;
- (void)writeTo:(id)arg1;

@end
