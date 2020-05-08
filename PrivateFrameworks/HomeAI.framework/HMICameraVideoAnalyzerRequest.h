/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMICameraVideoAnalyzerRequest : HMFObject <HMICameraVideoFrameSelectorDelegate> {
    double  _analysisFPS;
    NSDate * _analysisStartTime;
    NSDate * _analysisSubmissionTime;
    HMICameraVideoAnalyzer * _analyzer;
    HMICameraVideoAssetReader * _assetReader;
    HMICameraVideoResourceAttributes * _attributes;
    HMICameraVideoEncoderSession * _encoderSession;
    long long  _eventTypes;
    long long  _events;
    long long  _flag;
    HMICameraVideoFragment * _fragment;
    HMICameraVideoFrameSelector * _frameSelector;
    HMICameraVideoAnalyzerRequestLog * _log;
    double  _maxAnalysisFPS;
    long long  _phase;
    HMICameraVideoPosterFrameGenerator * _posterFrameGenerator;
    NSMutableArray * _significantEventsInternal;
    NSMutableArray * _videoFrameResults;
}

@property (readonly) double analysisFPS;
@property (readonly) NSDate *analysisStartTime;
@property (readonly) NSDate *analysisSubmissionTime;
@property (readonly) HMICameraVideoAnalyzer *analyzer;
@property (readonly) HMICameraVideoAssetReader *assetReader;
@property (readonly) HMICameraVideoResourceAttributes *attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMICameraVideoEncoderSession *encoderSession;
@property (readonly) long long eventTypes;
@property long long events;
@property long long flag;
@property (readonly) HMICameraVideoFragment *fragment;
@property (readonly) HMICameraVideoFrameSelector *frameSelector;
@property (readonly) unsigned long long hash;
@property (readonly) HMICameraVideoAnalyzerRequestLog *log;
@property (readonly) double maxAnalysisFPS;
@property long long phase;
@property (readonly) HMICameraVideoPosterFrameGenerator *posterFrameGenerator;
@property (readonly) bool shouldFailAnalysis;
@property (readonly) bool shouldSkipAnalysis;
@property (readonly) NSArray *significantEvents;
@property (readonly) NSMutableArray *significantEventsInternal;
@property (readonly) Class superclass;
@property (readonly) double timeSinceAnalysisStart;
@property (readonly) double timeSinceAnalysisSubmission;
@property (retain) NSMutableArray *videoFrameResults;

+ (id)logCategory;
+ (id)videoAnnotationScoresForFrameResult:(id)arg1;

- (void).cxx_destruct;
- (void)addSignificantEvent:(id)arg1;
- (double)analysisFPS;
- (id)analysisStartTime;
- (id)analysisSubmissionTime;
- (id)analyzer;
- (id)assetReader;
- (id)attributes;
- (void)cancel;
- (id)encoderSession;
- (long long)eventTypes;
- (long long)events;
- (id)finishEncoderSession;
- (long long)flag;
- (id)fragment;
- (id)frameSelector;
- (id)initWithVideoFragment:(id)arg1 analyzer:(id)arg2 maxAnalysisFPS:(double)arg3;
- (void)loadAttributes;
- (id)loadAttributesFromVideoFragment:(id)arg1;
- (id)log;
- (id)makeDidAnalyzeResult;
- (id)makeDidNotAnalyzeResultWithResultCode:(long long)arg1;
- (void)markForPrediction;
- (double)maxAnalysisFPS;
- (long long)phase;
- (id)posterFrameGenerator;
- (void)selector:(id)arg1 maySelectFrame:(id)arg2;
- (void)setEvents:(long long)arg1;
- (void)setFlag:(long long)arg1;
- (void)setPhase:(long long)arg1;
- (void)setVideoFrameResults:(id)arg1;
- (bool)shouldFailAnalysis;
- (bool)shouldSkipAnalysis;
- (id)significantEvents;
- (id)significantEventsInternal;
- (void)startAnalysis;
- (bool)startAssetReaderWithWorkQueue:(id)arg1 logIdentifier:(id)arg2;
- (bool)startEncodingSessionWithError:(id*)arg1;
- (bool)startFrameSelector;
- (bool)startPosterFrameGeneratorWithInterval:(unsigned long long)arg1 frameHeight:(unsigned long long)arg2;
- (double)timeSinceAnalysisStart;
- (double)timeSinceAnalysisSubmission;
- (id)videoFrameResults;

@end
