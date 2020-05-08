/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPMovieHighlight : NSObject {
    float  _actionScore;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bestPlaybackCrop;
    VCPImageDescriptor * _descriptor;
    float  _expressionScore;
    float  _humanActionScore;
    float  _humanPoseScore;
    bool  _isAutoPlayable;
    bool  _isTrimmed;
    float  _junkScore;
    VCPVideoKeyFrame * _keyFrame;
    float  _qualityScore;
    float  _score;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timerange;
    float  _voiceScore;
}

@property (nonatomic) float actionScore;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bestPlaybackCrop;
@property (nonatomic, retain) VCPImageDescriptor *descriptor;
@property (nonatomic) float expressionScore;
@property (nonatomic) float humanActionScore;
@property (nonatomic) float humanPoseScore;
@property (nonatomic) bool isAutoPlayable;
@property (nonatomic) bool isTrimmed;
@property (nonatomic) float junkScore;
@property (nonatomic, retain) VCPVideoKeyFrame *keyFrame;
@property (nonatomic) float qualityScore;
@property (nonatomic) float score;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timerange;
@property (nonatomic) float voiceScore;

- (void).cxx_destruct;
- (float)actionScore;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestPlaybackCrop;
- (void)checkAutoPlayable;
- (void)copyScoresFrom:(id)arg1;
- (id)descriptor;
- (float)expressionScore;
- (float)humanActionScore;
- (float)humanPoseScore;
- (id)initWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)isAutoPlayable;
- (bool)isShort;
- (bool)isTrimmed;
- (float)junkScore;
- (id)keyFrame;
- (void)mergeSegment:(id)arg1;
- (float)qualityScore;
- (float)score;
- (void)setActionScore:(float)arg1;
- (void)setBestPlaybackCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDescriptor:(id)arg1;
- (void)setExpressionScore:(float)arg1;
- (void)setHumanActionScore:(float)arg1;
- (void)setHumanPoseScore:(float)arg1;
- (void)setIsAutoPlayable:(bool)arg1;
- (void)setIsTrimmed:(bool)arg1;
- (void)setJunkScore:(float)arg1;
- (void)setKeyFrame:(id)arg1;
- (void)setQualityScore:(float)arg1;
- (void)setScore:(float)arg1;
- (void)setTimerange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setVoiceScore:(float)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timerange;
- (float)voiceScore;

@end
