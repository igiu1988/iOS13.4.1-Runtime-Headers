/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface _MLDataSource : NSObject <ETDataProvider> {
    NSDictionary * _dataTensorDictionary;
}

@property (nonatomic, retain) NSDictionary *dataTensorDictionary;

- (void).cxx_destruct;
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2;
- (id)dataTensorDictionary;
- (id)initWithMLFeatureProvider:(id)arg1 forPrediction:(bool)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4;
- (unsigned long long)numberOfDataPoints;
- (void)setDataTensorDictionary:(id)arg1;

@end
