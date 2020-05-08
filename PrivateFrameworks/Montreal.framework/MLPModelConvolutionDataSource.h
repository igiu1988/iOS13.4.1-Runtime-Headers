/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

@interface MLPModelConvolutionDataSource : NSObject <MPSCNNConvolutionDataSource> {
    <MTLBuffer> * _biasBuffer;
    MPSVector * _biasMomentumVector;
    MPSVector * _biasVelocityVector;
    MPSCNNConvolutionDescriptor * _convDesc;
    MLPDeviceHandler * _deviceHandler;
    const void * _initialBias;
    const void * _initialWeights;
    unsigned long long  _inputFeatureChannels;
    unsigned long long  _kernelHeight;
    NSString * _kernelParamsBinaryName;
    unsigned long long  _kernelWidth;
    MPSNNOptimizerAdam * _optimizer;
    struct MLPModelOptimizerOptions { 
        float adamBeta1; 
        float adamBeta2; 
        float adamEpsilon; 
        float learningRate; 
    }  _optimizerOptions;
    unsigned long long  _outputFeatureChannels;
    unsigned int  _seed;
    unsigned long long  _sizeBias;
    unsigned long long  _sizeWeights;
    MPSCNNConvolutionWeightsAndBiasesState * _state;
    <MTLBuffer> * _weightBuffer;
    MPSVector * _weightMomentumVector;
    MPSVector * _weightVelocityVector;
}

@property (readonly) <MTLBuffer> *biasBuffer;
@property (nonatomic, readonly) MPSVector *biasMomentumVector;
@property (nonatomic, readonly) MPSVector *biasVelocityVector;
@property (readonly) MPSCNNConvolutionDescriptor *convDesc;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) MLPDeviceHandler *deviceHandler;
@property (readonly) unsigned long long hash;
@property const void*initialBias;
@property const void*initialWeights;
@property (readonly) unsigned long long inputFeatureChannels;
@property (readonly) unsigned long long kernelHeight;
@property (readonly) NSString *kernelParamsBinaryName;
@property (readonly) unsigned long long kernelWidth;
@property (nonatomic, readonly) MPSNNOptimizerAdam *optimizer;
@property (readonly) struct MLPModelOptimizerOptions { float x1; float x2; float x3; float x4; } optimizerOptions;
@property (readonly) unsigned long long outputFeatureChannels;
@property (readonly) unsigned int seed;
@property (readonly) unsigned long long sizeBias;
@property (readonly) unsigned long long sizeWeights;
@property (nonatomic, readonly) MPSCNNConvolutionWeightsAndBiasesState *state;
@property (readonly) Class superclass;
@property (readonly) <MTLBuffer> *weightBuffer;
@property (nonatomic, readonly) MPSVector *weightMomentumVector;
@property (nonatomic, readonly) MPSVector *weightVelocityVector;
@property (readonly) NSData *weightsInWHIOOrder;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)biasBuffer;
- (id)biasMomentumVector;
- (float*)biasTerms;
- (id)biasVelocityVector;
- (unsigned long long)bias_size;
- (void)bootstrapBias:(id*)arg1 length:(unsigned long long)arg2 device:(id)arg3 stdDev:(float)arg4 values:(const void*)arg5;
- (void)bootstrapBuffer:(id)arg1 length:(unsigned long long)arg2 device:(id)arg3 stdDev:(float)arg4;
- (void)bootstrapWeights:(id*)arg1 length:(unsigned long long)arg2 device:(id)arg3 stdDev:(float)arg4 values:(const void*)arg5;
- (void)checkpointWithCommandQueue:(id)arg1;
- (id)convDesc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (unsigned int)dataType;
- (id)descriptor;
- (id)deviceHandler;
- (id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 stride:(unsigned long long)arg5 kernelParamsBinaryName:(id)arg6 initialWeights:(const void*)arg7 initialBias:(const void*)arg8 deviceHandler:(id)arg9 optimizerOptions:(struct MLPModelOptimizerOptions { float x1; float x2; float x3; float x4; })arg10;
- (const void*)initialBias;
- (const void*)initialWeights;
- (unsigned long long)inputFeatureChannels;
- (unsigned long long)kernelHeight;
- (id)kernelParamsBinaryName;
- (unsigned long long)kernelWidth;
- (id)label;
- (bool)load;
- (id)optimizer;
- (struct MLPModelOptimizerOptions { float x1; float x2; float x3; float x4; })optimizerOptions;
- (unsigned long long)outputFeatureChannels;
- (void)purge;
- (unsigned int)seed;
- (void)setInitialBias:(const void*)arg1;
- (void)setInitialWeights:(const void*)arg1;
- (unsigned long long)sizeBias;
- (unsigned long long)sizeWeights;
- (id)state;
- (id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2;
- (id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2 sourceState:(id)arg3;
- (id)weightBuffer;
- (id)weightMomentumVector;
- (id)weightVelocityVector;
- (unsigned long long)weight_size;
- (void*)weights;
- (id)weightsInWHIOOrder;

@end
