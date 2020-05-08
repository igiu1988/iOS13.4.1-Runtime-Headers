/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFTimeZoneLookup : NSObject {
    struct unique_ptr<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index>, std::__1::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index> > > { 
        struct __compressed_pair<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index> *, std::__1::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index> > > { 
            struct basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index> {} *__value_; 
        } __ptr_; 
    }  _backingFile;
    NSString * _cacheDirectory;
    NSString * _indexFile;
    bool  _loaded;
    const struct rtree<std::__1::pair<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian>, unsigned short>, boost::geometry::index::quadratic<32, 8>, boost::geometry::index::indexable<std::__1::pair<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian>, unsigned short> >, boost::geometry::index::equal_to<std::__1::pair<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian>, unsigned short> >, boost::interprocess::allocator<std::__1::pair<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian>, unsigned short>, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index> > > { struct members_holder { struct offset_ptr<boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index>, long, unsigned long, 0> { union offset_ptr_internal<unsigned long, 0> { unsigned long long x_1_3_1; struct aligned_storage_impl<8, 1> { BOOL x_2_4_1[8]; } x_1_3_2; } x_1_2_1; } x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; struct offset_ptr<boost::variant<boost::geometry::index::detail::rtree::variant_leaf<std::__1::pair<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian>, unsigned short>, boost::geometry::index::quadratic<32, 8>, boost::geometry::model::box<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian> >, boost::geometry::index::detail::rtree::allocators<boost::interprocess::allocator<std::__1::pair<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian>, unsigned short>, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index> >, std::__1::pair<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian>, unsigned short>, boost::geometry::index::quadratic<32, 8>, boost::geometry::model::box<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian> >, boost::geometry::index::detail::rtree::node_variant_static_tag>, boost::geometry::index::detail::rtree::node_variant_static_tag>, boost::geometry::index::detail::rtree::variant_internal_node<std::__1::pair<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian>, unsigned short>, boost::geometry::index::quadratic<32, 8>, boost::geometry::model::box<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian> >, boost::geometry::index::detail::rtree::allocators<boost::interprocess::allocator<std::__1::pair<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian>, unsigned short>, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index> >, std::__1::pair<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian>, unsigned short>, boost::geometry::index::quadratic<32, 8>, boost::geometry::model::box<boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian> >, boost::geometry::index::detail::rtree::node_variant_static_tag>, boost::geometry::index::detail::rtree::node_variant_static_tag> >, long, unsigned long, 0> { union offset_ptr_internal<unsigned long, 0> { unsigned long long x_1_3_1; struct aligned_storage_impl<8, 1> { BOOL x_2_4_1[8]; } x_1_3_2; } x_4_2_1; } x_1_1_4; } x1; } * _rtree;
    const struct vector<boost::container::basic_string<char, std::__1::char_traits<char>, boost::interprocess::allocator<char, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index> > >, boost::interprocess::allocator<boost::container::basic_string<char, std::__1::char_traits<char>, boost::interprocess::allocator<char, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index> > >, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index> > > { struct vector_alloc_holder<boost::interprocess::allocator<boost::container::basic_string<char, std::__1::char_traits<char>, boost::interprocess::allocator<char, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index> > >, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index> >, boost::move_detail::integral_constant<unsigned int, 2> > { struct offset_ptr<boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index>, long, unsigned long, 0> { union offset_ptr_internal<unsigned long, 0> { unsigned long long x_1_3_1; struct aligned_storage_impl<8, 1> { BOOL x_2_4_1[8]; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct offset_ptr<boost::container::basic_string<char, std::__1::char_traits<char>, boost::interprocess::allocator<char, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, iset_index> > >, long, unsigned long, 0> { union offset_ptr_internal<unsigned long, 0> { unsigned long long x_1_3_1; struct aligned_storage_impl<8, 1> { BOOL x_2_4_1[8]; } x_1_3_2; } x_2_2_1; } x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; } x1; } * _timezones;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x1; double x2; })anyCoordinateForTimeZoneName:(id)arg1;
- (bool)createIndexFromArchiveFile:(id)arg1 tempIndexFile:(id)arg2;
- (id)init;
- (bool)loadIndexFile;
- (void)loadOrCreateIndex;
- (bool)makeTimeZoneLookupCacheFile;
- (id)timeZoneNameForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;

@end
