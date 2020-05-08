/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLPipelineLibrary : _MTLObjectWithLabel <MTLPipelineLibrarySPI> {
    <MTLDevice> * _device;
    bool  _disableRunTimeCompilation;
    struct PipelineLibraryData { struct shared_ptr<MTLPipelineDescriptions> { struct MTLPipelineDescriptions {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; id x2; id x3; } * _pipelineLibraryData;
    NSArray * _pipelineNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property bool disableRunTimeCompilation;
@property (nonatomic, readonly) <MTLPipelineCache> *functionCache;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (nonatomic, readonly) <MTLPipelineCache> *pipelineCache;
@property (readonly) NSArray *pipelineNames;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)device;
- (bool)disableRunTimeCompilation;
- (id)functionCache;
- (id)initWithDevice:(id)arg1 pipelineLibraryData:(struct PipelineLibraryData { struct shared_ptr<MTLPipelineDescriptions> { struct MTLPipelineDescriptions {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; id x2; id x3; }*)arg2;
- (id)newComputePipelineDescriptorWithName:(id)arg1 error:(id*)arg2;
- (id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id*)arg2;
- (id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)pipelineCache;
- (id)pipelineNames;
- (void)setDisableRunTimeCompilation:(bool)arg1;

@end
