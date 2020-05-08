/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSetupEndPointWrite : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {
    HMDEndPointAddress * _address;
    HMDSRTPParameters * _audioSrtpParameters;
    NSUUID * _sessionID;
    HMDSRTPParameters * _videoSrtpParameters;
}

@property (nonatomic, readonly, copy) HMDEndPointAddress *address;
@property (nonatomic, readonly, copy) HMDSRTPParameters *audioSrtpParameters;
@property (nonatomic, readonly, copy) NSUUID *sessionID;
@property (nonatomic, readonly, copy) HMDSRTPParameters *videoSrtpParameters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (bool)_parseFromTLVDataImpl;
- (bool)_parseFromTLVDataOnFailure;
- (bool)_parseFromTLVDataOnSuccess;
- (id)address;
- (id)audioSrtpParameters;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1 address:(id)arg2 videoSrtpParameters:(id)arg3 audioSrtpParameters:(id)arg4;
- (id)sessionID;
- (id)tlvData;
- (id)videoSrtpParameters;

@end
