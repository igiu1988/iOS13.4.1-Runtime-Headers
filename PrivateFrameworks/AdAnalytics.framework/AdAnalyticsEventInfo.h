/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdAnalytics.framework/AdAnalytics
 */

@interface AdAnalyticsEventInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _adID;
    NSString * _bundleID;
    double  _currentPlaybackTime;
    long long  _sequenceNumber;
    double  _timestamp;
    double  _totalDuration;
    long long  _videoState;
    double  _visiblePercentage;
    float  _volume;
}

@property (nonatomic, copy) NSString *adID;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) long long sequenceNumber;
@property (nonatomic) double timestamp;
@property (nonatomic) double totalDuration;
@property (nonatomic) long long videoState;
@property (nonatomic) double visiblePercentage;
@property (nonatomic) float volume;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adID;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentPlaybackTime;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)sequenceNumber;
- (void)setAdID:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCurrentPlaybackTime:(double)arg1;
- (void)setSequenceNumber:(long long)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTotalDuration:(double)arg1;
- (void)setVideoState:(long long)arg1;
- (void)setVisiblePercentage:(double)arg1;
- (void)setVolume:(float)arg1;
- (double)timestamp;
- (double)totalDuration;
- (long long)videoState;
- (double)visiblePercentage;
- (float)volume;

@end
