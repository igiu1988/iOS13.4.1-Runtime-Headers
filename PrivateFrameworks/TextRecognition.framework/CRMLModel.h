/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRMLModel : NSObject {
    int  _classCount;
    const int * _codeMap;
    long long  _cpuBatchSize;
    long long  _gpuBatchSize;
    int  _modelHeight;
    NSArray * _modelShape;
    int  _modelWidth;
    MLModel * model;
}

@property (readonly) int classCount;
@property (readonly) const int*codeMap;
@property long long cpuBatchSize;
@property long long gpuBatchSize;
@property (readonly) int inputHeight;
@property (readonly) int inputWidth;
@property (readonly) NSString *modelName;
@property (retain) NSArray *modelShape;

- (void).cxx_destruct;
- (struct vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > { struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x1; struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x2; struct __compressed_pair<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > *, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > { struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x_3_1_1; } x3; })activationsFromImage:(id)arg1;
- (int)classCount;
- (const int*)codeMap;
- (long long)cpuBatchSize;
- (id)decodeActivations:(struct vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > { struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x1; struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x2; struct __compressed_pair<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > *, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > { struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x_3_1_1; } x3; }*)arg1;
- (id)decodeActivations:(struct vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > { struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x1; struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x2; struct __compressed_pair<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > *, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > { struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x_3_1_1; } x3; }*)arg1 blank:(unsigned short)arg2 ctcAllowGarbage:(bool)arg3 numResultNeeded:(long long)arg4;
- (long long)gpuBatchSize;
- (id)init;
- (id)initRestrictingToCPU:(bool)arg1;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 restrictToCPU:(bool)arg2 error:(id*)arg3;
- (int)inputHeight;
- (int)inputWidth;
- (id)modelName;
- (id)modelShape;
- (id)predict:(id)arg1 error:(id*)arg2;
- (void)setCpuBatchSize:(long long)arg1;
- (void)setGpuBatchSize:(long long)arg1;
- (void)setModelShape:(id)arg1;

@end
