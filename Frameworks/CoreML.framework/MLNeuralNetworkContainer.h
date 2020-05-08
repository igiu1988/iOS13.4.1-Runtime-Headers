/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLNeuralNetworkContainer : NSObject {
    NSArray * _classLabels;
    NSString * _classScoreVectorName;
    NSArray * _configurationList;
    int  _engine;
    bool  _hasBidirectionalLayer;
    bool  _hasDynamicLayer;
    bool  _hasOptionalInputSequenceConcat;
    NSDictionary * _imageParameters;
    NSDictionary * _imagePreprocessingParams;
    NSDictionary * _inputDescription;
    NSArray * _inputLayerNames;
    NSString * _modelFilePath;
    NSString * _name;
    bool  _ndArrayInterpretation;
    struct map<std::__1::basic_string<char>, MLOptionalNNInputType, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, MLOptionalNNInputType> > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _optionalInputTypes;
    NSDictionary * _outputDescription;
    NSArray * _outputLayerNames;
    int  _precision;
    MLModel * _transformDesc;
    MLNeuralNetworksCompileTimeParams * _updatableModelCompiledParams;
}

@property (retain) NSArray *classLabels;
@property (retain) NSString *classScoreVectorName;
@property (nonatomic, retain) NSArray *configurationList;
@property (nonatomic) int engine;
@property (nonatomic) bool hasBidirectionalLayer;
@property (nonatomic) bool hasDynamicLayer;
@property (nonatomic) bool hasOptionalInputSequenceConcat;
@property (nonatomic, retain) NSDictionary *imageParameters;
@property (nonatomic, retain) NSDictionary *imagePreprocessingParams;
@property (nonatomic, retain) NSDictionary *inputDescription;
@property (nonatomic, readonly, retain) NSArray *inputLayerNames;
@property (nonatomic, retain) NSString *modelFilePath;
@property (nonatomic, retain) NSString *name;
@property bool ndArrayInterpretation;
@property (nonatomic) /* Warning: unhandled struct encoding: '{map<std::__1::basic_string<char>' */ struct  optionalInputTypes; /* unknown property attribute:  true> >=Q}}} */
@property (nonatomic, retain) NSDictionary *outputDescription;
@property (nonatomic, readonly, retain) NSArray *outputLayerNames;
@property (nonatomic) int precision;
@property (retain) MLModel *transformDesc;
@property (nonatomic, retain) MLNeuralNetworksCompileTimeParams *updatableModelCompiledParams;

+ (id)containerFromCompiledArchive:(struct _MLModelInputArchiver { struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl {} *x_1_2_1; struct __shared_weak_count {} *x_1_2_2; } x_1_1_1; struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; }*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
+ (id)containerFromFilePath:(id)arg1 inputLayerNames:(id)arg2 outputLayerNames:(id)arg3 parameters:(id)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)classLabels;
- (id)classScoreVectorName;
- (id)configurationList;
- (int)engine;
- (bool)hasBidirectionalLayer;
- (bool)hasDynamicLayer;
- (bool)hasOptionalInputSequenceConcat;
- (id)imageParameters;
- (id)imagePreprocessingParams;
- (id)initWithFeatureDescriptions:(id)arg1 transformDesc:(id)arg2 outputLayerNames:(id)arg3 parameters:(id)arg4 configurations:(id)arg5 classScoreVectorName:(id)arg6 classLabels:(id)arg7 hasBidirectionalLayer:(bool)arg8 hasOptionalInputSequenceConcat:(bool)arg9 hasDynamicLayer:(bool)arg10;
- (id)initWithFilePath:(id)arg1 inputLayerNames:(id)arg2 outputLayerNames:(id)arg3 parameters:(id)arg4;
- (id)inputDescription;
- (id)inputLayerNames;
- (id)modelFilePath;
- (id)name;
- (bool)ndArrayInterpretation;
- (struct map<std::__1::basic_string<char>, MLOptionalNNInputType, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, MLOptionalNNInputType> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })optionalInputTypes;
- (id)outputDescription;
- (id)outputLayerNames;
- (int)precision;
- (void)setClassLabels:(id)arg1;
- (void)setClassScoreVectorName:(id)arg1;
- (void)setConfigurationList:(id)arg1;
- (void)setEngine:(int)arg1;
- (void)setHasBidirectionalLayer:(bool)arg1;
- (void)setHasDynamicLayer:(bool)arg1;
- (void)setHasOptionalInputSequenceConcat:(bool)arg1;
- (void)setImageParameters:(id)arg1;
- (void)setImagePreprocessingParams:(id)arg1;
- (void)setInputDescription:(id)arg1;
- (void)setModelFilePath:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNdArrayInterpretation:(bool)arg1;
- (void)setOptionalInputTypes:(struct map<std::__1::basic_string<char>, MLOptionalNNInputType, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, MLOptionalNNInputType> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg1;
- (void)setOutputDescription:(id)arg1;
- (void)setPrecision:(int)arg1;
- (void)setTransformDesc:(id)arg1;
- (void)setUpdatableModelCompiledParams:(id)arg1;
- (id)transformDesc;
- (id)updatableModelCompiledParams;

@end