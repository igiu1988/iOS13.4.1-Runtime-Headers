/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer {
    MTLIndirectCommandBufferDescriptor * _desc;
    <MTLIndirectCommandBuffer> * _iCB;
    unsigned long long  _maxCommandCount;
    NSMutableArray * _optimizedRangeList;
    bool  isRender;
}

@property (readonly) MTLIndirectCommandBufferDescriptor *descriptor;
@property (readonly) NSMutableArray *optimizedRangeList;

- (void)dealloc;
- (id)descriptor;
- (id)indirectComputeCommandAtIndex:(unsigned long long)arg1;
- (id)indirectRenderCommandAtIndex:(unsigned long long)arg1;
- (id)initWithIndirectCommandBuffer:(id)arg1 device:(id)arg2 descriptor:(id)arg3 maxCommandCount:(unsigned long long)arg4 options:(unsigned long long)arg5;
- (id)optimizedRangeList;

@end
