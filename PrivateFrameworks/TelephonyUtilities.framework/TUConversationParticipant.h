/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUConversationParticipant : NSObject <NSCopying, NSSecureCoding> {
    NSString * _activeIDSDestination;
    bool  _audioEnabled;
    long long  _audioPriority;
    NSString * _avcIdentifier;
    TUHandle * _handle;
    unsigned long long  _identifier;
    bool  _momentsAvailable;
    bool  _muted;
    long long  _streamToken;
    bool  _videoEnabled;
    long long  _videoPriority;
}

@property (nonatomic, copy) NSString *activeIDSDestination;
@property (getter=isAudioEnabled, nonatomic) bool audioEnabled;
@property (nonatomic) long long audioPriority;
@property (nonatomic, copy) NSString *avcIdentifier;
@property (nonatomic, readonly, copy) TUHandle *handle;
@property (nonatomic, readonly) unsigned long long identifier;
@property (getter=isMomentsAvailable, nonatomic) bool momentsAvailable;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic) long long streamToken;
@property (getter=isVideoEnabled, nonatomic) bool videoEnabled;
@property (nonatomic) long long videoPriority;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeIDSDestination;
- (long long)audioPriority;
- (id)avcIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 handle:(id)arg2;
- (bool)isAudioEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToParticipant:(id)arg1;
- (bool)isMomentsAvailable;
- (bool)isMuted;
- (bool)isVideoEnabled;
- (void)setActiveIDSDestination:(id)arg1;
- (void)setAudioEnabled:(bool)arg1;
- (void)setAudioPriority:(long long)arg1;
- (void)setAvcIdentifier:(id)arg1;
- (void)setMomentsAvailable:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setStreamToken:(long long)arg1;
- (void)setVideoEnabled:(bool)arg1;
- (void)setVideoPriority:(long long)arg1;
- (long long)streamToken;
- (long long)videoPriority;

@end
