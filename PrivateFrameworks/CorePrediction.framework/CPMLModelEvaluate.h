/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

@interface CPMLModelEvaluate : NSObject {
    struct CPMLDelegate { void *x1; void *x2; } * _cpmlDelegate;
    <CPMLAlgorithmProtocol> * _delegateAlgorithm;
    struct CPMLDelegateEngine { void *x1; void *x2; } * _delegateEngine;
    CPMLStorageManager * _storageManager;
    struct vector<int, std::__1::allocator<int> > { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::__1::allocator<int> > { 
            int *__value_; 
        } __end_cap_; 
    }  boundedRemappedValues;
    int  countRows;
    struct CPMLAlgorithm { int (**x1)(); BOOL x2[32]; void *x3; struct CPMLCDB {} *x4; struct CPMLDelegate {} *x5; struct CPMLDelegateEngine {} *x6; struct CPMLTunableData {} *x7; struct CPMLIterator {} *x8; struct CPMLSerialization {} *x9; } * cpMLAlgo;
    struct CPMLRemapper { bool x1; bool x2; bool x3; struct sqlite3 {} *x4; struct CPMLStatistics {} *x5; struct vector<int, std::__1::allocator<int> > {} *x6; struct vector<int, std::__1::allocator<int> > {} *x7; } * cpRemapper;
    struct CPMLTunableData { int x1; void *x2; void *x3; } * cpTuneableData;
    CPMLSchema * cpmlSchema;
    struct sqlite3 { } * db;
    bool  enableCacheString;
    bool  keepInMemory;
    NSString * machineLearningAlgo;
    int  mapFunction;
    NSNumber * maxRemoveTrainingRow;
    NSMutableArray * modelSchema;
    NSString * serializeFunction;
    bool  shouldFail;
    struct CPMLSerialization { int (**x1)(); bool x2; int x3; int x4; void *x5; struct sqlite3 {} *x6; } * trainerCPDeSerializer;
    struct CPMLStatistics { struct vector<int, std::__1::allocator<int> > { int *x_1_1_1; int *x_1_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_1_1_3; } x1; struct vector<double, std::__1::allocator<double> > { double *x_2_1_1; double *x_2_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_2_1_3; } x2; struct vector<int, std::__1::allocator<int> > { int *x_3_1_1; int *x_3_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_3_1_3; } x3; struct vector<int, std::__1::allocator<int> > { int *x_4_1_1; int *x_4_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_4_1_3; } x4; struct vector<int, std::__1::allocator<int> > { int *x_5_1_1; int *x_5_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_5_1_3; } x5; int x6; int x7; int x8; int x9; bool x10; struct vector<double, std::__1::allocator<double> > { double *x_11_1_1; double *x_11_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_11_1_3; } x11; } * trainerCPStatistics;
    NSMutableArray * vectorPositions;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)boundResult:(id)arg1;
- (void)buildEvaluateMachineLearningAlgorithm;
- (void)constructVector:(struct CPMLFeatureVector { int x1; struct VectorClass { struct vector<int, std::__1::allocator<int> > {} *x_2_1_1; struct vector<double, std::__1::allocator<double> > {} *x_2_1_2; } x2; struct vector<VectorClass, std::__1::allocator<VectorClass> > { struct VectorClass {} *x_3_1_1; struct VectorClass {} *x_3_1_2; struct __compressed_pair<VectorClass *, std::__1::allocator<VectorClass> > { struct VectorClass {} *x_3_2_1; } x_3_1_3; } x3; double x4; struct vector<VectorClass, std::__1::allocator<VectorClass> > { struct VectorClass {} *x_5_1_1; struct VectorClass {} *x_5_1_2; struct __compressed_pair<VectorClass *, std::__1::allocator<VectorClass> > { struct VectorClass {} *x_3_2_1; } x_5_1_3; } x5; struct vector<ProbIndex, std::__1::allocator<ProbIndex> > { struct ProbIndex {} *x_6_1_1; struct ProbIndex {} *x_6_1_2; struct __compressed_pair<ProbIndex *, std::__1::allocator<ProbIndex> > { struct ProbIndex {} *x_3_2_1; } x_6_1_3; } x6; }*)arg1 withColumnPosition:(unsigned long long)arg2 maxColNumber:(unsigned long long)arg3 withValue:(id)arg4;
- (void)dealloc;
- (id)doEvaluate:(struct CPMLFeatureVector { int x1; struct VectorClass { struct vector<int, std::__1::allocator<int> > {} *x_2_1_1; struct vector<double, std::__1::allocator<double> > {} *x_2_1_2; } x2; struct vector<VectorClass, std::__1::allocator<VectorClass> > { struct VectorClass {} *x_3_1_1; struct VectorClass {} *x_3_1_2; struct __compressed_pair<VectorClass *, std::__1::allocator<VectorClass> > { struct VectorClass {} *x_3_2_1; } x_3_1_3; } x3; double x4; struct vector<VectorClass, std::__1::allocator<VectorClass> > { struct VectorClass {} *x_5_1_1; struct VectorClass {} *x_5_1_2; struct __compressed_pair<VectorClass *, std::__1::allocator<VectorClass> > { struct VectorClass {} *x_3_2_1; } x_5_1_3; } x5; struct vector<ProbIndex, std::__1::allocator<ProbIndex> > { struct ProbIndex {} *x_6_1_1; struct ProbIndex {} *x_6_1_2; struct __compressed_pair<ProbIndex *, std::__1::allocator<ProbIndex> > { struct ProbIndex {} *x_3_2_1; } x_6_1_3; } x6; }*)arg1 withBoundedList:(struct vector<int, std::__1::allocator<int> > { int *x1; int *x2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_1_1; } x3; }*)arg2;
- (void)doRemapToFeatureVector:(struct CPMLFeatureVector { int x1; struct VectorClass { struct vector<int, std::__1::allocator<int> > {} *x_2_1_1; struct vector<double, std::__1::allocator<double> > {} *x_2_1_2; } x2; struct vector<VectorClass, std::__1::allocator<VectorClass> > { struct VectorClass {} *x_3_1_1; struct VectorClass {} *x_3_1_2; struct __compressed_pair<VectorClass *, std::__1::allocator<VectorClass> > { struct VectorClass {} *x_3_2_1; } x_3_1_3; } x3; double x4; struct vector<VectorClass, std::__1::allocator<VectorClass> > { struct VectorClass {} *x_5_1_1; struct VectorClass {} *x_5_1_2; struct __compressed_pair<VectorClass *, std::__1::allocator<VectorClass> > { struct VectorClass {} *x_3_2_1; } x_5_1_3; } x5; struct vector<ProbIndex, std::__1::allocator<ProbIndex> > { struct ProbIndex {} *x_6_1_1; struct ProbIndex {} *x_6_1_2; struct __compressed_pair<ProbIndex *, std::__1::allocator<ProbIndex> > { struct ProbIndex {} *x_3_2_1; } x_6_1_3; } x6; }*)arg1 withPositionID:(unsigned long long)arg2 withMaxCol:(unsigned long long)arg3 withValue:(id)arg4;
- (id)evalArray:(id)arg1;
- (id)evalCTypesV:(char *)arg1;
- (id)evalDict:(id)arg1;
- (id)evalNSObjectV:(id)arg1;
- (id)evalString:(id)arg1;
- (id)fileProtectionClassRequest:(id)arg1;
- (int)getAttributeType:(id)arg1;
- (void*)getModelData;
- (id)initWithModel:(id)arg1 withPropertyList:(id)arg2;
- (void)setCPMLAlgorithm:(id)arg1;
- (void)setCPMLAlgorithmEngine:(id)arg1;
- (bool)updateModel:(id)arg1;

@end
