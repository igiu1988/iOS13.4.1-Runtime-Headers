/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLNeuralNetworkUpdateEngine : MLNeuralNetworkEngine <MLUpdatable> {
    NSDictionary * _classLabelToIndexMap;
    bool  _continueWithUpdate;
    NSDictionary * _coreMLToEspressoParamsMap;
    NSString * _lossOutputName;
    NSString * _lossTargetName;
    MLParameterContainer * _parameterContainer;
    MLUpdateProgressHandlers * _progressHandlers;
    NSObject<OS_dispatch_queue> * _progressHandlersDispatchQueue;
    MLShufflingBatchProvider * _shuffableTrainingData;
    ETTaskState * _snapshot;
    ETTaskDefinition * _task;
}

@property (nonatomic, readonly) NSDictionary *classLabelToIndexMap;
@property (nonatomic) bool continueWithUpdate;
@property (nonatomic, retain) NSDictionary *coreMLToEspressoParamsMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *lossOutputName;
@property (nonatomic, retain) NSString *lossTargetName;
@property (nonatomic, retain) MLParameterContainer *parameterContainer;
@property (nonatomic, retain) MLUpdateProgressHandlers *progressHandlers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue;
@property (nonatomic, retain) MLShufflingBatchProvider *shuffableTrainingData;
@property (nonatomic, retain) ETTaskState *snapshot;
@property (readonly) Class superclass;
@property (nonatomic, retain) ETTaskDefinition *task;

+ (id)createCoreMLToEspressoParamsMap;
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver { struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl {} *x_1_2_1; struct __shared_weak_count {} *x_1_2_2; } x_1_1_1; struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; }*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)biasForLayer:(id)arg1 error:(id*)arg2;
- (void)cancelUpdate;
- (id)classLabelToIndexMap;
- (id)collectMetricsFromTaskContext:(id)arg1 isInCallBack:(bool)arg2 error:(id*)arg3;
- (bool)continueWithUpdate;
- (id)coreMLToEspressoParamsMap;
- (void)createClassLabelToIndexMap;
- (id)createEspressoTaskFrom:(id)arg1 updateParameters:(struct NetworkUpdateParameters { int (**x1)(); struct InternalMetadataWithArenaLite { void *x_2_1_1; } x2; struct RepeatedPtrField<CoreML::Specification::LossLayer> { struct Arena {} *x_3_1_1; int x_3_1_2; int x_3_1_3; struct Rep {} *x_3_1_4; } x3; struct Optimizer {} *x4; struct Int64Parameter {} *x5; struct BoolParameter {} *x6; struct Int64Parameter {} *x7; int x8; }*)arg2 lossInputName:(id)arg3 lossTargetName:(id)arg4 lossOutputName:(id)arg5 updatableLayerNames:(id)arg6 configuration:(id)arg7 error:(id*)arg8;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompiledArchive:(struct _MLModelInputArchiver { struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl {} *x_1_2_1; struct __shared_weak_count {} *x_1_2_2; } x_1_1_1; struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; }*)arg1 nnContainer:(id)arg2 configuration:(id)arg3 error:(id*)arg4;
- (void)loadLossInputName:(id*)arg1 updatableLayerNames:(id*)arg2 fromCompiledArchive:(struct _MLModelInputArchiver { struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl {} *x_1_2_1; struct __shared_weak_count {} *x_1_2_2; } x_1_1_1; struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; }*)arg3;
- (void)loadLossTargetName:(id*)arg1 lossOutputName:(id*)arg2 fromUpdateParameters:(struct NetworkUpdateParameters { int (**x1)(); struct InternalMetadataWithArenaLite { void *x_2_1_1; } x2; struct RepeatedPtrField<CoreML::Specification::LossLayer> { struct Arena {} *x_3_1_1; int x_3_1_2; int x_3_1_3; struct Rep {} *x_3_1_4; } x3; struct Optimizer {} *x4; struct Int64Parameter {} *x5; struct BoolParameter {} *x6; struct Int64Parameter {} *x7; int x8; }*)arg3;
- (void)loadParameterDescriptionsAndContainerFromUpdateParameters:(const struct NetworkUpdateParameters { int (**x1)(); struct InternalMetadataWithArenaLite { void *x_2_1_1; } x2; struct RepeatedPtrField<CoreML::Specification::LossLayer> { struct Arena {} *x_3_1_1; int x_3_1_2; int x_3_1_3; struct Rep {} *x_3_1_4; } x3; struct Optimizer {} *x4; struct Int64Parameter {} *x5; struct BoolParameter {} *x6; struct Int64Parameter {} *x7; int x8; }*)arg1;
- (bool)loadUpdateParameters:(struct NetworkUpdateParameters { int (**x1)(); struct InternalMetadataWithArenaLite { void *x_2_1_1; } x2; struct RepeatedPtrField<CoreML::Specification::LossLayer> { struct Arena {} *x_3_1_1; int x_3_1_2; int x_3_1_3; struct Rep {} *x_3_1_4; } x3; struct Optimizer {} *x4; struct Int64Parameter {} *x5; struct BoolParameter {} *x6; struct Int64Parameter {} *x7; int x8; }*)arg1 fromCompiledArchive:(struct _MLModelInputArchiver { struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl {} *x_1_2_1; struct __shared_weak_count {} *x_1_2_2; } x_1_1_1; struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; }*)arg2 error:(id*)arg3;
- (id)lossOutputName;
- (id)lossTargetName;
- (id)parameterContainer;
- (id)parameterValueForKey:(id)arg1;
- (id)parameterValueForKey:(id)arg1 error:(id*)arg2;
- (id)paramsForLayer:(id)arg1 parameterType:(unsigned long long)arg2 error:(id*)arg3;
- (id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictionsFromBatch:(id)arg1 error:(id*)arg2;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)progressHandlers;
- (id)progressHandlersDispatchQueue;
- (void)resumeUpdate;
- (void)resumeUpdateWithParameters:(id)arg1;
- (void)setContinueWithUpdate:(bool)arg1;
- (void)setCoreMLToEspressoParamsMap:(id)arg1;
- (void)setLossOutputName:(id)arg1;
- (void)setLossTargetName:(id)arg1;
- (void)setParameterContainer:(id)arg1;
- (void)setProgressHandlers:(id)arg1;
- (void)setProgressHandlersDispatchQueue:(id)arg1;
- (void)setShuffableTrainingData:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2;
- (id)shuffableTrainingData;
- (id)snapshot;
- (id)stringForDataType:(unsigned long long)arg1;
- (id)task;
- (bool)updateLearningRateWithTaskContext:(id)arg1 isInCallBack:(bool)arg2 error:(id*)arg3;
- (void)updateModelWithData:(id)arg1;
- (id)updateParameters;
- (id)weightsForLayer:(id)arg1 error:(id*)arg2;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end