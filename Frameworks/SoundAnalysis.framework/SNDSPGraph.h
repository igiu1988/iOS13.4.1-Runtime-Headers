/* Generated by EzioChiu
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNDSPGraph : NSObject {
    struct shared_ptr<DSPGraph::Graph> { 
        struct Graph {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _graph;
}

@property (nonatomic, readonly) NSSet *boxes;
@property (nonatomic, readonly) bool configured;
@property (nonatomic, readonly) struct shared_ptr<DSPGraph::Graph> { struct Graph {} *x1; struct __shared_weak_count {} *x2; } graph;
@property (nonatomic, readonly) bool initialized;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) long long numberOfInputs;
@property (nonatomic, readonly) long long numberOfOutputs;
@property (nonatomic, readonly) long long sliceDurationInSamples;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)boxWithName:(id)arg1;
- (id)boxes;
- (bool)configure;
- (bool)configured;
- (bool)getParameter:(float*)arg1 forID:(unsigned int)arg2;
- (bool)getProperty:(void*)arg1 withSize:(unsigned int*)arg2 forID:(unsigned int)arg3;
- (bool)getPropertySize:(unsigned int*)arg1 isWritable:(bool*)arg2 forID:(unsigned int)arg3;
- (struct shared_ptr<DSPGraph::Graph> { struct Graph {} *x1; struct __shared_weak_count {} *x2; })graph;
- (bool)hasParameter:(unsigned int)arg1;
- (id)init;
- (id)initWithDSPGraph:(struct shared_ptr<DSPGraph::Graph> { struct Graph {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)initialize;
- (bool)initialized;
- (id)name;
- (long long)numberOfInputs;
- (long long)numberOfOutputs;
- (bool)reset;
- (bool)setAUStrip:(id)arg1;
- (void)setName:(id)arg1;
- (bool)setParameter:(float)arg1 forID:(unsigned int)arg2;
- (bool)setProperty:(const void*)arg1 withSize:(unsigned int)arg2 forID:(unsigned int)arg3;
- (bool)setPropertyStrip:(id)arg1 withResourcePath:(id)arg2;
- (bool)setVariableSliceDuration:(long long)arg1 forSampleRate:(long long)arg2;
- (long long)sliceDurationInSamples;
- (bool)unconfigure;
- (bool)uninitialize;
- (void)writeDotFileToPath:(id)arg1;

@end
