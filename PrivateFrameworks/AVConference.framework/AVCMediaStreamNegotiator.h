/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCMediaStreamNegotiator : NSObject {
    NSData * _answer;
    NSString * _dataSessionID;
    unsigned char  _deviceRole;
    long long  _dpiFactor;
    long long  _errorDetailCode;
    NSData * _mediaBlobCompressed;
    NSData * _mediaBlobNegotiated;
    VCMediaNegotiator * _mediaNegotiator;
    long long  _mediaStreamMode;
    NSData * _offer;
    NSData * _remoteCallInfoBlob;
    long long  _videoHeight;
    long long  _videoWidth;
}

@property (nonatomic, readonly) NSData *answer;
@property (nonatomic, readonly) NSData *offer;

- (long long)AVCVideoStreamModeWithAVCMediaStreamMode:(long long)arg1;
- (int)AVConferenceOperatingModeWithAVCMediaStreamMode:(long long)arg1;
- (unsigned char)VCVideoFeatureListStringTypeWithAVCMediaStreamMode:(long long)arg1;
- (bool)addLocalCallInfoBlobToOutgoingDictionary:(id)arg1;
- (id)answer;
- (long long)clientCodecTypeWithCodecType:(long long)arg1;
- (bool)createAnswer;
- (bool)createOffer;
- (void)dealloc;
- (id)generateMediaStreamConfigurationWithError:(id*)arg1;
- (id)generateMediaStreamInitOptionsWithError:(id*)arg1;
- (bool)initNegotiatorLocalConfiguration:(id*)arg1;
- (id)initWithMode:(long long)arg1 error:(id*)arg2;
- (id)initWithOffer:(id)arg1 error:(id*)arg2;
- (id)initWithOffer:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)offer;
- (bool)processAnswerWithError:(id*)arg1 errorReason:(id*)arg2;
- (bool)processInitOptions:(id)arg1 error:(id*)arg2 errorReason:(id*)arg3;
- (bool)processOfferWithError:(id*)arg1 errorReason:(id*)arg2;
- (void)refreshLoggingParameters;
- (bool)setAnswer:(id)arg1 withError:(id*)arg2;

@end
