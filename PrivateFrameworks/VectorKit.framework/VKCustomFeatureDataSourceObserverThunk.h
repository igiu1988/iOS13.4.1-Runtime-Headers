/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCustomFeatureDataSourceObserverThunk : NSObject <VKCustomFeatureDataSourceObserver> {
    struct _retain_ptr<id<VKCustomFeatureDataSource>, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        <VKCustomFeatureDataSource> *_obj; 
        struct _retain_objc { } _retain; 
        struct _release_objc { } _release; 
    }  _dataSource;
    struct LabelCustomFeatureProvider { struct LabelCustomFeatureSupport {} *x1; struct LabelManager {} *x2; struct _retain_ptr<VKCustomFeatureDataSourceObserverThunk *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; struct _retain_objc { } x_3_1_3; struct _release_objc { } x_3_1_4; } x3; struct _retain_ptr<id<VKCustomFeatureDataSource>, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_4_1_1)(); id x_4_1_2; struct _retain_objc { } x_4_1_3; struct _release_objc { } x_4_1_4; } x4; struct map<geo::MercatorTile, md::LabelCustomFeatureProvider::TileInfo, md::LabelCustomFeatureProvider::TileKeyLess, geo::StdAllocator<std::__1::pair<const geo::MercatorTile, md::LabelCustomFeatureProvider::TileInfo>, mdm::Allocator> > { struct __tree<std::__1::__value_type<geo::MercatorTile, md::LabelCustomFeatureProvider::TileInfo>, std::__1::__map_value_compare<geo::MercatorTile, std::__1::__value_type<geo::MercatorTile, md::LabelCustomFeatureProvider::TileInfo>, md::LabelCustomFeatureProvider::TileKeyLess, true>, geo::StdAllocator<std::__1::__value_type<geo::MercatorTile, md::LabelCustomFeatureProvider::TileInfo>, mdm::Allocator> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, geo::StdAllocator<std::__1::__tree_node<std::__1::__value_type<geo::MercatorTile, md::LabelCustomFeatureProvider::TileInfo>, void *>, mdm::Allocator> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; struct StdAllocator<std::__1::__tree_node<std::__1::__value_type<geo::MercatorTile, md::LabelCustomFeatureProvider::TileInfo>, void *>, mdm::Allocator> { struct Allocator {} *x_2_4_1; } x_2_3_2; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<geo::MercatorTile, std::__1::__value_type<geo::MercatorTile, md::LabelCustomFeatureProvider::TileInfo>, md::LabelCustomFeatureProvider::TileKeyLess, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_5_1_1; } x5; } * _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearObserver;
- (void)dataSource:(id)arg1 didChangeSceneID:(unsigned char)arg2;
- (void)dataSource:(id)arg1 didChangeSceneState:(unsigned char)arg2;
- (void)dataSource:(id)arg1 featuresDidChangeForRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 observer:(struct LabelCustomFeatureProvider { struct LabelCustomFeatureSupport {} *x1; struct LabelManager {} *x2; struct _retain_ptr<VKCustomFeatureDataSourceObserverThunk *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; struct _retain_objc { } x_3_1_3; struct _release_objc { } x_3_1_4; } x3; struct _retain_ptr<id<VKCustomFeatureDataSource>, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_4_1_1)(); id x_4_1_2; struct _retain_objc { } x_4_1_3; struct _release_objc { } x_4_1_4; } x4; struct map<geo::MercatorTile, md::LabelCustomFeatureProvider::TileInfo, md::LabelCustomFeatureProvider::TileKeyLess, geo::StdAllocator<std::__1::pair<const geo::MercatorTile, md::LabelCustomFeatureProvider::TileInfo>, mdm::Allocator> > { struct __tree<std::__1::__value_type<geo::MercatorTile, md::LabelCustomFeatureProvider::TileInfo>, std::__1::__map_value_compare<geo::MercatorTile, std::__1::__value_type<geo::MercatorTile, md::LabelCustomFeatureProvider::TileInfo>, md::LabelCustomFeatureProvider::TileKeyLess, true>, geo::StdAllocator<std::__1::__value_type<geo::MercatorTile, md::LabelCustomFeatureProvider::TileInfo>, mdm::Allocator> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, geo::StdAllocator<std::__1::__tree_node<std::__1::__value_type<geo::MercatorTile, md::LabelCustomFeatureProvider::TileInfo>, void *>, mdm::Allocator> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; struct StdAllocator<std::__1::__tree_node<std::__1::__value_type<geo::MercatorTile, md::LabelCustomFeatureProvider::TileInfo>, void *>, mdm::Allocator> { struct Allocator {} *x_2_4_1; } x_2_3_2; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<geo::MercatorTile, std::__1::__value_type<geo::MercatorTile, md::LabelCustomFeatureProvider::TileInfo>, md::LabelCustomFeatureProvider::TileKeyLess, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_5_1_1; } x5; }*)arg2;

@end
