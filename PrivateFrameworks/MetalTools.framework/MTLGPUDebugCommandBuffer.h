/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLGPUDebugCommandBuffer : MTLToolsCommandBuffer <MTLGPUDebugBufferEncoder> {
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _allocationLock;
    unsigned int  _currentEncoderID;
    struct MetalBuffer { 
        struct MetalBufferHeap {} *heap; 
        unsigned int index; 
    }  _currentPooledBuffer;
    unsigned long long  _currentPooledBufferOffset;
    unsigned int  _currentReportID;
    /* Warning: unhandled struct encoding: '{vector<NSString *, std::__1::allocator<NSString *> >="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<NSString **, std::__1::allocator<NSString *> >="__value_"^@}}' */ struct vector<NSString *, std::__1::allocator<NSString *> > { 
        __end_ **__begin_; 
    }  _encoderLabels;
    <MTLBuffer> * _fragmentReportBuffer;
    unsigned long long  _fragmentReportOffset;
    /* Warning: unhandled struct encoding: '{vector<id<MTLBuffer>, std::__1::allocator<id<MTLBuffer> > >="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<id<MTLBuffer> *, std::__1::allocator<id<MTLBuffer> > >="__value_"^@}}' */ struct vector<id<MTLBuffer>, std::__1::allocator<id<MTLBuffer> > > { 
        __end_ **__begin_; 
    }  _reportBufferList;
    struct vector<ReportBufferEntry, std::__1::allocator<ReportBufferEntry> > { 
        struct ReportBufferEntry {} *__begin_; 
        struct ReportBufferEntry {} *__end_; 
        struct __compressed_pair<ReportBufferEntry *, std::__1::allocator<ReportBufferEntry> > { 
            struct ReportBufferEntry {} *__value_; 
        } __end_cap_; 
    }  _reportEntryList;
    <MTLArgumentEncoder> * _stageArgumentEncoder;
    struct vector<MetalBuffer, std::__1::allocator<MetalBuffer> > { 
        struct MetalBuffer {} *__begin_; 
        struct MetalBuffer {} *__end_; 
        struct __compressed_pair<MetalBuffer *, std::__1::allocator<MetalBuffer> > { 
            struct MetalBuffer {} *__value_; 
        } __end_cap_; 
    }  _usedBuffers;
    <MTLBuffer> * _vertexComputeReportBuffer;
    unsigned long long  _vertexComputeReportOffset;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct ReportBufferEntry { unsigned long long x1; id x2; unsigned long long x3; })_allocReportEntryStorageForType:(unsigned long long)arg1;
- (void)_checkReportBuffers;
- (void)_encodeReportBuffer:(id)arg1 type:(unsigned long long)arg2;
- (id)_newReportBuffer;
- (struct pair<id<MTLBuffer>, unsigned long> { id x1; unsigned long long x2; })_temporaryBufferWithLength:(unsigned long long)arg1;
- (id)computeCommandEncoder;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (void)dealloc;
- (id)encodeBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 resultOffset:(unsigned long long*)arg4;
- (id)fragmentRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2;
- (void)onEncoderBegin:(id)arg1 type:(unsigned long long)arg2;
- (void)onEncoderEnd:(id)arg1 type:(unsigned long long)arg2;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (void)preCompletionHandlers;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg2 capacity:(unsigned long long)arg3;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg1 capacity:(unsigned long long)arg2;
- (id)sampledFragmentRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg2 capacity:(unsigned long long)arg3;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(struct { unsigned int x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned long long x4; unsigned long long x5; }*)arg2 capacity:(unsigned long long)arg3;
- (struct pair<id<MTLBuffer>, unsigned long> { id x1; unsigned long long x2; })setBytes:(const void*)arg1 length:(unsigned long long)arg2;

@end
