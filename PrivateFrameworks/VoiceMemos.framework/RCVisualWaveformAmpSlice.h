/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCVisualWaveformAmpSlice : NSObject {
    double  _amplitude;
    unsigned long long  _color;
    bool  _hasProcessedSegments;
    bool  _hidden;
    long long  _interpolatingVisualAmplitudeHeightFrameCount;
    double  _interpolatingvisualAmplitudeHeight;
    double  _interpolatingvisualAmplitudeHeightDiff;
    UIColor * _lastColor;
    long long  _sliceIndex;
    CALayer * _sliceLayer;
    double  _visualAmplitudeHeight;
    long long  _visualAmplitudeHeightInterpolatingFrames;
}

@property (nonatomic) double amplitude;
@property (nonatomic) unsigned long long color;
@property (nonatomic) bool hasProcessedSegments;
@property (nonatomic, readonly) bool hasVisualAmplitudeInterpolatingFramesLeft;
@property (nonatomic) bool hidden;
@property (nonatomic) long long sliceIndex;
@property (nonatomic, retain) CALayer *sliceLayer;
@property (nonatomic, readonly) UIColor *uiColor;
@property (nonatomic, readonly) UIColor *uiColorDimmed;
@property (nonatomic) double visualAmplitudeHeight;
@property (nonatomic) long long visualAmplitudeHeightInterpolatingFrames;

+ (id)colorForSliceColor:(unsigned long long)arg1 dimmed:(bool)arg2;
+ (id)primaryColor;
+ (id)secondaryColor;
+ (void)setPrimaryColor:(id)arg1;
+ (void)setSecondaryColor:(id)arg1;

- (void).cxx_destruct;
- (double)amplitude;
- (unsigned long long)color;
- (bool)hasProcessedSegments;
- (bool)hasVisualAmplitudeInterpolatingFramesLeft;
- (bool)hidden;
- (id)init;
- (id)initWithIndex:(double)arg1 amplitude:(double)arg2;
- (void)setAmplitude:(double)arg1;
- (void)setColor:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasProcessedSegments:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setSliceIndex:(long long)arg1;
- (void)setSliceLayer:(id)arg1;
- (void)setVisualAmplitudeHeight:(double)arg1;
- (void)setVisualAmplitudeHeightInterpolatingFrames:(long long)arg1;
- (long long)sliceIndex;
- (id)sliceLayer;
- (id)uiColor;
- (id)uiColorDimmed;
- (double)visualAmplitudeHeight;
- (long long)visualAmplitudeHeightInterpolatingFrames;

@end
