/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface ActivationMapTools : NSObject

+ (id)characterCentroidsFromActivationMap:(const struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > { struct vector<float, std::__1::allocator<float> > {} *x1; struct vector<float, std::__1::allocator<float> > {} *x2; struct __compressed_pair<std::__1::vector<float, std::__1::allocator<float> > *, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > { struct vector<float, std::__1::allocator<float> > {} *x_3_1_1; } x3; }*)arg1 codeMap:(const int*)arg2 decodedSymbolIndexes:(id*)arg3;
+ (id)characterCentroidsFromActivationMap:(struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > { struct vector<float, std::__1::allocator<float> > {} *x1; struct vector<float, std::__1::allocator<float> > {} *x2; struct __compressed_pair<std::__1::vector<float, std::__1::allocator<float> > *, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > { struct vector<float, std::__1::allocator<float> > {} *x_3_1_1; } x3; }*)arg1 codeMap:(const int*)arg2 potentialPatterns:(id)arg3 minWordLengthFractionForCorrelationPeak:(float)arg4 bestModelIndex:(long long*)arg5;
+ (int)colInImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 forPoint:(int)arg2 inActivationMapWithSize:(int)arg3;
+ (id)decodeStringWithCentroids:(id)arg1 activationMap:(const struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > { struct vector<float, std::__1::allocator<float> > {} *x1; struct vector<float, std::__1::allocator<float> > {} *x2; struct __compressed_pair<std::__1::vector<float, std::__1::allocator<float> > *, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > { struct vector<float, std::__1::allocator<float> > {} *x_3_1_1; } x3; }*)arg2 codeMap:(const int*)arg3 model:(id)arg4;
+ (void)extractActivationSignals:(struct map<int, std::__1::vector<float, std::__1::allocator<float> >, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::vector<float, std::__1::allocator<float> > > > > { struct __tree<std::__1::__value_type<int, std::__1::vector<float, std::__1::allocator<float> > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::vector<float, std::__1::allocator<float> > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::vector<float, std::__1::allocator<float> > > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::vector<float, std::__1::allocator<float> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::vector<float, std::__1::allocator<float> > >, std::__1::less<int>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 fromActivationMap:(const struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > { struct vector<float, std::__1::allocator<float> > {} *x1; struct vector<float, std::__1::allocator<float> > {} *x2; struct __compressed_pair<std::__1::vector<float, std::__1::allocator<float> > *, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > { struct vector<float, std::__1::allocator<float> > {} *x_3_1_1; } x3; }*)arg2 forModel:(id)arg3 codeMap:(const int*)arg4;
+ (id)fitSpacingModel:(id)arg1 toActivationMap:(const struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > { struct vector<float, std::__1::allocator<float> > {} *x1; struct vector<float, std::__1::allocator<float> > {} *x2; struct __compressed_pair<std::__1::vector<float, std::__1::allocator<float> > *, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > { struct vector<float, std::__1::allocator<float> > {} *x_3_1_1; } x3; }*)arg2 codeMap:(const int*)arg3 minWordLengthFractionForCorrelationPeak:(float)arg4 cost:(float*)arg5;
+ (bool)matchLabel:(int)arg1 toModelCharacter:(unsigned short)arg2;
+ (id)textFromActivationMap:(struct vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > { struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x1; struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x2; struct __compressed_pair<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > *, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > { struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x_3_1_1; } x3; }*)arg1 codeMap:(const int*)arg2 invert:(bool)arg3;

@end
