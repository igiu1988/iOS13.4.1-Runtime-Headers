/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoKeyFrame : NSObject {
    float  _cameraMotion;
    float  _colorfulness;
    float  _contentScore;
    NSMutableArray * _detectedFaces;
    float  _exposureScore;
    NSMutableArray * _faceQualityScores;
    float  _faceSharpness;
    NSMutableDictionary * _frameResults;
    float  _globalQualityScore;
    float  _humanActionScore;
    float  _humanPoseScore;
    float  _interestingness;
    bool  _isHeadingFrame;
    bool  _isLivePhoto;
    float  _obstruction;
    float  _overallFaceQualityScore;
    float  _penaltyScore;
    float  _qualityScoreForLivePhoto;
    float  _score;
    float  _semanticScore;
    float  _sharpness;
    unsigned long long  _statsFlags;
    bool  _subMb;
    float  _subjectAction;
    float  _textureScore;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timestamp;
    float  _visualPleasingScore;
}

@property (nonatomic) float contentScore;
@property (nonatomic, retain) NSMutableArray *detectedFaces;
@property (nonatomic) float exposureScore;
@property (nonatomic, retain) NSMutableArray *faceQualityScores;
@property (nonatomic) float faceSharpness;
@property (nonatomic, retain) NSMutableDictionary *frameResults;
@property (nonatomic) float globalQualityScore;
@property (nonatomic) float humanActionScore;
@property (nonatomic) float humanPoseScore;
@property (nonatomic) bool isHeadingFrame;
@property (nonatomic) float overallFaceQualityScore;
@property (nonatomic) float penaltyScore;
@property (nonatomic) float qualityScoreForLivePhoto;
@property (nonatomic) float score;
@property (nonatomic) float semanticScore;
@property (nonatomic) float sharpness;
@property (nonatomic) unsigned long long statsFlags;
@property (nonatomic) float textureScore;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;
@property (nonatomic) float visualPleasingScore;

- (void).cxx_destruct;
- (float)computeContentScore;
- (void)computeCurationScore;
- (void)computeCurationScoreComponents;
- (float)computeExpressionScore;
- (float)computeGlobalQuality;
- (void)computeGlobalQualityForLivePhoto;
- (float)computePenaltyScore;
- (float)computeScoreFromAction;
- (float)computeScoreFromColorfulness;
- (float)computeScoreFromExposure;
- (float)computeVisualPleasingScore;
- (float)contentScore;
- (void)copyFrom:(id)arg1;
- (id)detectedFaces;
- (float)exposureScore;
- (id)faceQualityScores;
- (float)faceSharpness;
- (id)frameResults;
- (float)globalQualityScore;
- (bool)hasGoodSubjectAction;
- (float)humanActionScore;
- (float)humanPoseScore;
- (id)initWithLivePhoto:(bool)arg1;
- (bool)isHeadingFrame;
- (int)loadKeyFrameResult:(id)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (float)overallFaceQualityScore;
- (float)penaltyScore;
- (void)printStats;
- (float)qualityScoreForLivePhoto;
- (void)resetStatsFlag;
- (float)score;
- (float)semanticScore;
- (void)setContentScore:(float)arg1;
- (void)setDetectedFaces:(id)arg1;
- (void)setExposureScore:(float)arg1;
- (void)setFaceQualityScores:(id)arg1;
- (void)setFaceSharpness:(float)arg1;
- (void)setFaceStatsFlag:(bool)arg1 detectedFaces:(id)arg2;
- (void)setFrameResults:(id)arg1;
- (void)setGlobalQualityScore:(float)arg1;
- (void)setHumanActionScore:(float)arg1;
- (void)setHumanPoseScore:(float)arg1;
- (void)setIsHeadingFrame:(bool)arg1;
- (void)setMotionStatsFlag:(bool)arg1 cameraMotion:(float)arg2 subjectAction:(float)arg3 interestingness:(float)arg4 obstruction:(float)arg5 colorfulness:(float)arg6 exposureScore:(float)arg7 humanActionStatsFlag:(bool)arg8 humanPoseScore:(float)arg9 humanActionScore:(float)arg10 subMb:(bool)arg11;
- (void)setOverallFaceQualityScore:(float)arg1;
- (void)setPenaltyScore:(float)arg1;
- (void)setQualityScoreForLivePhoto:(float)arg1;
- (void)setScore:(float)arg1;
- (void)setSemanticScore:(float)arg1;
- (void)setSharpness:(float)arg1;
- (void)setStatsFlags:(unsigned long long)arg1;
- (void)setTextureScore:(float)arg1;
- (void)setTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVisualPleasingScore:(float)arg1;
- (float)sharpness;
- (unsigned long long)statsFlags;
- (void)storeFrameResults;
- (float)textureScore;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;
- (float)visualPleasingScore;

@end
