/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAnswerRequest : NSObject <NSSecureCoding, TUCallRequest, TUVideoRequest> {
    long long  _behavior;
    NSDate * _dateAnswered;
    bool  _downgradeToAudio;
    IDSDestination * _endpointIDSDestination;
    NSString * _endpointRapportEffectiveIdentifier;
    NSString * _endpointRapportMediaSystemIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _localLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _localPortraitAspectRatio;
    bool  _pauseVideoToStart;
    NSString * _sourceIdentifier;
    NSString * _uniqueProxyIdentifier;
    bool  _wantsHoldMusic;
}

@property (nonatomic) long long behavior;
@property (nonatomic, retain) NSDate *dateAnswered;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool downgradeToAudio;
@property (nonatomic, retain) IDSDestination *endpointIDSDestination;
@property (nonatomic, retain) NSString *endpointRapportEffectiveIdentifier;
@property (nonatomic, retain) NSString *endpointRapportMediaSystemIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } localLandscapeAspectRatio;
@property (nonatomic) struct CGSize { double x1; double x2; } localPortraitAspectRatio;
@property (nonatomic) bool pauseVideoToStart;
@property (nonatomic, copy) NSString *sourceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uniqueProxyIdentifier;
@property (nonatomic) bool wantsHoldMusic;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)behavior;
- (id)dateAnswered;
- (id)description;
- (bool)downgradeToAudio;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointIDSDestination;
- (id)endpointRapportEffectiveIdentifier;
- (id)endpointRapportMediaSystemIdentifier;
- (id)init;
- (id)initWithCall:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueProxyIdentifier:(id)arg1;
- (struct CGSize { double x1; double x2; })localLandscapeAspectRatio;
- (struct CGSize { double x1; double x2; })localPortraitAspectRatio;
- (bool)pauseVideoToStart;
- (void)setBehavior:(long long)arg1;
- (void)setDateAnswered:(id)arg1;
- (void)setDowngradeToAudio:(bool)arg1;
- (void)setEndpointIDSDestination:(id)arg1;
- (void)setEndpointRapportEffectiveIdentifier:(id)arg1;
- (void)setEndpointRapportMediaSystemIdentifier:(id)arg1;
- (void)setLocalLandscapeAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setPauseVideoToStart:(bool)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setUniqueProxyIdentifier:(id)arg1;
- (void)setWantsHoldMusic:(bool)arg1;
- (id)sourceIdentifier;
- (id)uniqueProxyIdentifier;
- (bool)wantsHoldMusic;

@end
