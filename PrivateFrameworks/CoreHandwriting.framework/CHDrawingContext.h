/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHDrawingContext : NSObject {
    CHClassifiableDrawing * _classifiableDrawing;
    struct vector<long, std::__1::allocator<long> > { 
        long long *__begin_; 
        long long *__end_; 
        struct __compressed_pair<long *, std::__1::allocator<long> > { 
            long long *__value_; 
        } __end_cap_; 
    }  _delayedSegmentIDs;
    unsigned long long  _edgeIndex;
    long long  _numberOfSegments;
    long long  _numberOfSubstrokes;
    struct set<long, std::__1::less<long>, std::__1::allocator<long> > { 
        struct __tree<long, std::__1::less<long>, std::__1::allocator<long> > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::less<long> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _strokeGroup;
}

@property (nonatomic, readonly, retain) CHClassifiableDrawing *classifiableDrawing;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<long' */ struct  delayedSegmentIDs; /* unknown property attribute:  std::__1::allocator<long> >=^q}} */
@property (nonatomic, readonly) unsigned long long edgeIndex;
@property (nonatomic, readonly) long long numberOfSegments;
@property (nonatomic, readonly) long long numberOfSubstrokes;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{set<long' */ struct  strokeGroup; /* unknown property attribute:  std::__1::less<long> >=Q}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)classifiableDrawing;
- (void)dealloc;
- (struct vector<long, std::__1::allocator<long> > { long long *x1; long long *x2; struct __compressed_pair<long *, std::__1::allocator<long> > { long long *x_3_1_1; } x3; })delayedSegmentIDs;
- (unsigned long long)edgeIndex;
- (id)initWithEdgeIndex:(unsigned long long)arg1 numberOfSubstrokes:(long long)arg2 numberOfSegments:(long long)arg3 classifiableDrawing:(id)arg4 strokeGroup:(struct set<long, std::__1::less<long>, std::__1::allocator<long> > { struct __tree<long, std::__1::less<long>, std::__1::allocator<long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg5 delayedSegmentIDs:(struct vector<long, std::__1::allocator<long> > { long long *x1; long long *x2; struct __compressed_pair<long *, std::__1::allocator<long> > { long long *x_3_1_1; } x3; })arg6;
- (long long)numberOfSegments;
- (long long)numberOfSubstrokes;
- (struct set<long, std::__1::less<long>, std::__1::allocator<long> > { struct __tree<long, std::__1::less<long>, std::__1::allocator<long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })strokeGroup;

@end