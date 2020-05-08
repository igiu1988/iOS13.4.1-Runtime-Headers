/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUObjectGraph : VMUDirectedGraph {
    id * _classInfos;
    unsigned int  _classInfosCount;
    unsigned int  _internalizedCount;
    struct _VMUBlockNode { unsigned long long x1; unsigned int x2 : 3; unsigned int x3 : 2; unsigned int x4 : 36; unsigned int x5 : 23; } * _internalizedNodes;
    VMUClassInfoMap * _knownClassInfos;
    id /* block */  _nodeProvider;
    VMUObjectGraph * _referenceGraph;
    unsigned int  _referenceGraphEdgeNamespaceSize;
    unsigned int  _referenceGraphNodeNamespaceSize;
    struct _VMUObjectGraphEdge { union { struct { unsigned int x_1_2_1 : 24; unsigned int x_1_2_2 : 2; unsigned int x_1_2_3 : 5; unsigned int x_1_2_4 : 1; } x_1_1_1; struct { unsigned int x_2_2_1 : 31; unsigned int x_2_2_2 : 1; } x_1_1_2; } x1; } * _referenceTable;
    unsigned int  _referenceTableCapacity;
    struct _VMUObjectGraphEdgeLarge { unsigned int x1 : 56; unsigned int x2 : 8; unsigned int x3 : 56; unsigned int x4 : 8; } * _referenceTableLarge;
    unsigned int  _referenceTableLargeCapacity;
    unsigned int  _referenceTableLargeCount;
    int  _referencingCount;
}

@property (nonatomic, retain) VMUClassInfoMap *indexedClassInfos;

- (void).cxx_destruct;
- (void*)_compareWithGraph:(id)arg1 andMarkOnMatch:(bool)arg2;
- (void)_modifyDerivativeGraphCount:(int)arg1;
- (struct { unsigned long long x1; unsigned int x2; unsigned long long x3; })_rawReferenceInfoWithName:(unsigned int)arg1;
- (void)_refineTypesWithOverlay:(id)arg1;
- (void)_renameWithNodeMap:(unsigned int*)arg1 nodeNamespace:(unsigned int)arg2 edgeMap:(unsigned int*)arg3 edgeNamespace:(unsigned int)arg4;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 sourceOffset:(unsigned long long)arg2 withScanType:(unsigned int)arg3 toNode:(unsigned int)arg4 destinationOffset:(unsigned long long)arg5;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2;
- (void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void*)createMapForIntersectGraph:(id)arg1;
- (void*)createMapForMinusGraph:(id)arg1;
- (void)dealloc;
- (unsigned int)enumerateMarkedObjects:(void*)arg1 withBlock:(id /* block */)arg2;
- (unsigned int)enumerateObjectsContainedInCollection:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (unsigned int)enumerateObjectsOfGroupNode:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (unsigned int)enumerateObjectsWithBlock:(id /* block */)arg1;
- (unsigned int)enumerateReferencesOfNode:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (unsigned int)enumerateReferencesWithBlock:(id /* block */)arg1;
- (id)indexedClassInfos;
- (id)initWithArchived:(id)arg1 version:(long long)arg2 options:(unsigned long long)arg3 diskLogs:(id)arg4;
- (id)initWithNodeCount:(unsigned int)arg1 nodeProvider:(id /* block */)arg2;
- (id)initWithNodesNoCopy:(struct _VMUBlockNode { unsigned long long x1; unsigned int x2 : 3; unsigned int x3 : 2; unsigned int x4 : 36; unsigned int x5 : 23; }*)arg1 nodeCount:(unsigned int)arg2;
- (void)internalizeNodes;
- (bool)isGroupNode:(unsigned int)arg1;
- (bool)isRootNode:(unsigned int)arg1;
- (struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; })nodeDetails:(unsigned int)arg1;
- (unsigned int)nodeForAddress:(unsigned long long)arg1;
- (unsigned int)nodeReferencedFromSourceNode:(unsigned int)arg1 byIvarWithName:(id)arg2;
- (struct { unsigned long long x1; unsigned int x2; unsigned long long x3; })referenceInfoWithName:(unsigned int)arg1;
- (unsigned int)scanTypeOfReferenceWithName:(unsigned int)arg1;
- (void)setIndexedClassInfos:(id)arg1;
- (void)stronglyConnectedComponentSearch:(unsigned int)arg1 withRecorder:(id /* block */)arg2;
- (id)subgraphWithShortestPathsFromNode:(unsigned int)arg1 toNodes:(void*)arg2;
- (id)subgraphWithUniquePathsFromNode:(unsigned int)arg1 toNodes:(void*)arg2;

@end
