/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNEspressoContext : NSObject {
    void * _espressoContext;
}

@property (nonatomic, readonly) void*espressoContext;

+ (void*)sharedEspressoContext;
+ (bool)supportGPU;

- (void*)espressoContext;
- (id)initNewContext;

@end
