/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXScoreInterpreterCoreMLModel : NSObject {
    NSArray * _argumentsToEvaluate;
    NSArray * _coreMLInputFeatures;
    MLModel * _coreMLModel;
    NSString * _coreMLModelName;
    NSString * _coreMLModelOutputName;
    bool  _hasOutputIndexedSubscript;
}

@property (nonatomic, readonly) NSArray *argumentsToEvaluate;
@property (nonatomic, readonly) bool hasOutputIndexedSubscript;
@property (nonatomic, readonly) unsigned long long numberOfFeatures;

+ (double)scoreForOutputValue:(id)arg1 outputIndexedSubscript:(long long)arg2;

- (void).cxx_destruct;
- (id)argumentsToEvaluate;
- (id)featureAtIndex:(unsigned long long)arg1;
- (bool)hasOutputIndexedSubscript;
- (id)init;
- (id)initWithModelName:(id)arg1 features:(id)arg2 outputSpecification:(id)arg3;
- (void)loadCoreMLModelIfNotAlreadyLoaded;
- (void)loadInstanceVariablesFromFeatures:(id)arg1 outputSpecification:(id)arg2;
- (unsigned long long)numberOfFeatures;
- (double)predictionForEvaluatedFeatures:(id)arg1 withOutputIndexedSubscript:(long long)arg2;

@end
