/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLAppleGazetteer : MLModel <MLModelSpecificationLoader> {
    MLAppleGazetteerParameters * _parameters;
    void * gazetteerModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MLAppleGazetteerParameters *parameters;
@property (readonly) Class superclass;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (bool)saveAppleGazetteerModelToURL:(id)arg1 gazetteerParameters:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)initWithParameters:(id)arg1 modelDescription:(id)arg2 nlpHandle:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
- (id)parameters;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
