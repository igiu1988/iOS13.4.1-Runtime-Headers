/* Generated by EzioChiu.
 */

@protocol BWInferencePropagatable <BWInferenceJobProvider>

@required

- (void)propagateInferenceResultsToInferenceDictionary:(NSMutableDictionary *)arg1 usingStorage:(BWInferenceProviderStorage *)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 withExecutionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (int)type;

@end
