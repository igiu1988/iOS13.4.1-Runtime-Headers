/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
 */

@interface MAAbstractGraph : MAGraph

+ (Class)edgeClass;
+ (Class)edgeClassForLabel:(id)arg1 domain:(unsigned short)arg2;
+ (Class)nodeClass;
+ (Class)nodeClassForLabel:(id)arg1 domain:(unsigned short)arg2;

- (id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (id)addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithDataURL:(id)arg1;
- (id)initWithGraphMLURL:(id)arg1;
- (id)initWithPersistentStoreURL:(id)arg1;

@end
