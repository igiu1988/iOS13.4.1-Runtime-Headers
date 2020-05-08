/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
 */

@interface NLModelImpl : NSObject

@property (readonly, copy) NLModelConfiguration *configuration;
@property (readonly, copy) NSData *customEmbeddingData;
@property (readonly, copy) NSDictionary *documentFrequencyMap;
@property (readonly, copy) NLEmbedding *embedding;
@property (readonly, copy) NSData *embeddingData;
@property (readonly, copy) NLGazetteer *gazetteer;
@property (readonly, copy) NSDictionary *labelMap;
@property (readonly) unsigned long long numberOfTrainingInstances;
@property (readonly) unsigned long long systemVersion;
@property (readonly, copy) NSDictionary *trainingInfo;
@property (readonly, copy) NSDictionary *vocabularyMap;

- (id)configuration;
- (id)customEmbeddingData;
- (id)documentFrequencyMap;
- (id)embedding;
- (id)embeddingData;
- (id)gazetteer;
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7;
- (id)initWithModelTrainer:(id)arg1;
- (id)labelMap;
- (id)modelData;
- (unsigned long long)numberOfTrainingInstances;
- (id)predictedLabelForString:(id)arg1;
- (id)predictedLabelsForTokens:(id)arg1;
- (unsigned long long)systemVersion;
- (id)trainingInfo;
- (id)vocabularyMap;

@end
