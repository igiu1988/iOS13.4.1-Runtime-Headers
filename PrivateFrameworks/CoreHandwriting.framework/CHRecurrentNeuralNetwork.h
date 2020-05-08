/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHRecurrentNeuralNetwork : NSObject {
    struct MontrealNeuralNetwork { } * __model;
    NSDictionary * _classCounts;
    NSDictionary * _featureCounts;
    NSArray * _inputNames;
    NSString * _modelName;
    NSArray * _outputNames;
}

@property (nonatomic, readonly) struct MontrealNeuralNetwork { }*_model;
@property (nonatomic, readonly, retain) NSDictionary *classCounts;
@property (nonatomic, readonly, retain) NSDictionary *featureCounts;
@property (nonatomic, readonly, retain) NSArray *inputNames;
@property (nonatomic, readonly, retain) NSString *modelName;
@property (nonatomic, readonly, retain) NSArray *outputNames;

- (struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; })_extractFeaturesFromDrawing:(id)arg1 inputName:(id)arg2 interpointDistance:(double)arg3 error:(id*)arg4;
- (struct MontrealNeuralNetwork { }*)_model;
- (bool)_recursivelyPredictProbabilitiesForDrawing:(id)arg1 features:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg2 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 modelInputName:(id)arg4 modelOutputNames:(id)arg5 probabilities:(struct vector<std::__1::reference_wrapper<std::__1::vector<double, std::__1::allocator<double> > >, std::__1::allocator<std::__1::reference_wrapper<std::__1::vector<double, std::__1::allocator<double> > > > > { struct reference_wrapper<std::__1::vector<double, std::__1::allocator<double> > > {} *x1; struct reference_wrapper<std::__1::vector<double, std::__1::allocator<double> > > {} *x2; struct __compressed_pair<std::__1::reference_wrapper<std::__1::vector<double, std::__1::allocator<double> > > *, std::__1::allocator<std::__1::reference_wrapper<std::__1::vector<double, std::__1::allocator<double> > > > > { struct reference_wrapper<std::__1::vector<double, std::__1::allocator<double> > > {} *x_3_1_1; } x3; }*)arg6 probabilityPredictionBlock:(id /* block */)arg7 error:(id*)arg8;
- (id)classCounts;
- (void)dealloc;
- (id)featureCounts;
- (id)initWithModelName:(id)arg1;
- (id)inputNames;
- (id)modelName;
- (id)normalizedDrawing:(id)arg1 minimumDrawingSize:(struct CGSize { double x1; double x2; })arg2 interpolationDistance:(double)arg3 outputPointMap:(struct vector<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > >, std::__1::allocator<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > > > > { }*)arg4;
- (id)outputNames;

@end
