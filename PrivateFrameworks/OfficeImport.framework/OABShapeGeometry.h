/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABShapeGeometry : NSObject

+ (int)actualPathCommandForPathCommand:(int)arg1 index:(unsigned short)arg2;
+ (struct OADAdjustCoord { bool x1; int x2; })adjustCoordWithComputedValue:(struct EshComputedValue { bool x1; int x2; })arg1;
+ (void)appendAdjustPoint:(struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })arg1 toPathParams:(struct EshPathParamTable { int (**x1)(); struct ChVector<EshComputedValue> { struct EshComputedValue {} *x_2_1_1; struct EshComputedValue {} *x_2_1_2; struct __compressed_pair<EshComputedValue *, ChAllocator<EshComputedValue> > { struct EshComputedValue {} *x_3_2_1; } x_2_1_3; } x2; }*)arg2;
+ (struct EshComputedValue { bool x1; int x2; })computedValueWithAdjustCoord:(struct OADAdjustCoord { bool x1; int x2; })arg1;
+ (void)readAdjustValuesFromShapeProperties:(const struct EshShapeProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; int (**x4)(); }*)arg1 toGeometry:(id)arg2;
+ (void)readFromFormulas:(const struct EshTablePropVal<EshFormula> { int (**x1)(); struct ChVector<EshFormula> { struct EshFormula {} *x_2_1_1; struct EshFormula {} *x_2_1_2; struct __compressed_pair<EshFormula *, ChAllocator<EshFormula> > { struct EshFormula {} *x_3_2_1; } x_2_1_3; } x2; }*)arg1 toGeometry:(id)arg2;
+ (void)readFromLimo:(struct CsPoint<int> { int x1[2]; })arg1 toGeometry:(id)arg2;
+ (void)readFromPathCommands:(const struct EshTablePropVal<EshPathCommand> { int (**x1)(); struct ChVector<EshPathCommand> { struct EshPathCommand {} *x_2_1_1; struct EshPathCommand {} *x_2_1_2; struct __compressed_pair<EshPathCommand *, ChAllocator<EshPathCommand> > { struct EshPathCommand {} *x_3_2_1; } x_2_1_3; } x2; }*)arg1 pathParams:(const struct EshPathParamTable { int (**x1)(); struct ChVector<EshComputedValue> { struct EshComputedValue {} *x_2_1_1; struct EshComputedValue {} *x_2_1_2; struct __compressed_pair<EshComputedValue *, ChAllocator<EshComputedValue> > { struct EshComputedValue {} *x_3_2_1; } x_2_1_3; } x2; }*)arg2 toGeometry:(id)arg3;
+ (void)readFromShape:(struct EshShape { int (**x1)(); unsigned short x2; struct EshContentData { struct EshOpt { int (**x_1_2_1)(); unsigned short x_1_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_1_2_3; struct ChMap<unsigned int, EshOpt::Value, CsLess<unsigned int> > { struct map<unsigned int, EshOpt::Value, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, EshOpt::Value> > > { struct __tree<std::__1::__value_type<unsigned int, EshOpt::Value>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, EshOpt::Value> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_5_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, EshOpt::Value>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_7_1; } x_2_6_1; } x_1_5_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true> > { unsigned long long x_3_6_1; } x_1_5_3; } x_1_4_1; } x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; }*)arg1 toShape:(id)arg2;
+ (void)readFromTextBoxRects:(const struct EshTablePropVal<EshComputedRect> { int (**x1)(); struct ChVector<EshComputedRect> { struct EshComputedRect {} *x_2_1_1; struct EshComputedRect {} *x_2_1_2; struct __compressed_pair<EshComputedRect *, ChAllocator<EshComputedRect> > { struct EshComputedRect {} *x_3_2_1; } x_2_1_3; } x2; }*)arg1 toGeometry:(id)arg2;
+ (void)readGeometryCoordSpaceFromShapeProperties:(const struct EshShapeProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; int (**x4)(); }*)arg1 toGeometry:(id)arg2;
+ (void)readLimoFromPath:(const struct EshPath { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1 toGeometry:(id)arg2;
+ (void)readPathCommandsAndParamsFromPath:(const struct EshPath { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1 toGeometry:(id)arg2;
+ (void)writeAdjustValuesFromGeometry:(id)arg1 toShapeProperties:(struct EshShapeProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; int (**x4)(); }*)arg2;
+ (void)writeCoordSpaceFromGeometry:(id)arg1 toShape:(struct EshShape { int (**x1)(); unsigned short x2; struct EshContentData { struct EshOpt { int (**x_1_2_1)(); unsigned short x_1_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_1_2_3; struct ChMap<unsigned int, EshOpt::Value, CsLess<unsigned int> > { struct map<unsigned int, EshOpt::Value, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, EshOpt::Value> > > { struct __tree<std::__1::__value_type<unsigned int, EshOpt::Value>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, EshOpt::Value> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_5_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, EshOpt::Value>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_7_1; } x_2_6_1; } x_1_5_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true> > { unsigned long long x_3_6_1; } x_1_5_3; } x_1_4_1; } x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; }*)arg2;
+ (void)writeFormulasFromGeometry:(id)arg1 toPath:(struct EshPath { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg2;
+ (void)writeFromShape:(id)arg1 toShape:(struct EshShape { int (**x1)(); unsigned short x2; struct EshContentData { struct EshOpt { int (**x_1_2_1)(); unsigned short x_1_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_1_2_3; struct ChMap<unsigned int, EshOpt::Value, CsLess<unsigned int> > { struct map<unsigned int, EshOpt::Value, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, EshOpt::Value> > > { struct __tree<std::__1::__value_type<unsigned int, EshOpt::Value>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, EshOpt::Value> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_5_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, EshOpt::Value>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_7_1; } x_2_6_1; } x_1_5_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true> > { unsigned long long x_3_6_1; } x_1_5_3; } x_1_4_1; } x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; }*)arg2;
+ (void)writeLimoFromGeometry:(id)arg1 toPath:(struct EshPath { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg2;
+ (void)writePathCommandsAndParamsFromGeometry:(id)arg1 toPath:(struct EshPath { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg2;
+ (void)writeTextBodyRectsFromGeometry:(id)arg1 toPath:(struct EshPath { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg2;

@end
