/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphIngestSocialGroupsProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)processSocialGroups:(bool)arg1 graph:(id)arg2 progressBlock:(id /* block */)arg3;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (bool)shouldRunWithGraphUpdate:(id)arg1;

@end
