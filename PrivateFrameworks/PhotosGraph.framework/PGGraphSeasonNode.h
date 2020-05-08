/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphSeasonNode : PGGraphNode <PGGraphLocalizable, PGGraphSynonymSupport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSArray *localizedSynonyms;
@property (readonly) Class superclass;

+ (id)_localizationKeyForSeasonNode:(id)arg1;

- (void)enumerateMomentNodesUsingBlock:(id /* block */)arg1;
- (id)localizedName;
- (id)localizedSynonyms;

@end