/* Generated by EzioChiu
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNEstimateAudioOffsetRequest : NSObject <SNAnalyzerProviding, SNRequest> {
    SNAudioOffsetEstimator * _detector;
}

@property (nonatomic, readonly) <SNAnalyzing> *analyzer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maximumObservableOffset;
@property (nonatomic, readonly) double minimumObservableOffset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)analyzer;
- (id)init;
- (double)maximumObservableOffset;
- (double)minimumObservableOffset;
- (double)offset;

@end
