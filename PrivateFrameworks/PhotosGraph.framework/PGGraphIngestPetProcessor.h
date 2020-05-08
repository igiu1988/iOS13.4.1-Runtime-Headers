/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphIngestPetProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_petSceneNodesForGraph:(id)arg1;
- (id)_petsForSceneNode:(id)arg1 inGraph:(id)arg2;
- (void)_removeAllPetNodesForGraph:(id)arg1;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
