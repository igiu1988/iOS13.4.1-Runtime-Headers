/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
 */

@interface TTMergeableStringIndex : NSObject {
    unsigned long long  _affinity;
    _TtC9Coherence9CRContext * _context;
    struct TopoID { 
        struct TopoReplica { 
            NSUUID *uuid; 
            unsigned int index; 
        } replica; 
        unsigned int clock; 
    }  _index;
}

@property (nonatomic, readonly) unsigned long long affinity;
@property (nonatomic, readonly) _TtC9Coherence9CRContext *context;
@property (nonatomic, readonly) struct TopoID { struct TopoReplica { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; } index;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_objCRenameSequence;
- (unsigned long long)affinity;
- (id)context;
- (void)dealloc;
- (struct TopoID { struct TopoReplica { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })index;
- (id)initWithContext:(id)arg1 topoID:(struct TopoID { struct TopoReplica { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg2 affinity:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;

@end
