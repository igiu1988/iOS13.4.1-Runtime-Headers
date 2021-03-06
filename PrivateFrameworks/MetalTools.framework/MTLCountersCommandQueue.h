/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLCountersCommandQueue : MTLToolsCommandQueue {
    NSString * _tracePath;
}

@property (nonatomic, readonly) NSString *tracePath;

- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (id)initWithCommandQueue:(id)arg1 device:(id)arg2;
- (id)tracePath;

@end
