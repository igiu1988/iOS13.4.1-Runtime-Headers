/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphPublicEventNode : PGGraphNode <PGGraphPortraitNamedEntity>

@property (nonatomic, readonly) PGGraphBusinessNode *businessNode;
@property (nonatomic, readonly) NSSet *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long expectedAttendance;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *localizedCategories;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, copy) NSSet *performers;
@property (nonatomic, readonly) PPNamedEntity *pg_namedEntity;
@property (nonatomic, readonly) NSSet *preciseLocalizedCategoryNames;
@property (readonly) Class superclass;

+ (id)momentNodesForPublicEventNodes:(id)arg1;

- (id)associatedNodesForRemoval;
- (id)businessNode;
- (id)categories;
- (void)enumerateCategoryNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateLocalizedSubcategoryNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateMomentNodesUsingBlock:(id /* block */)arg1;
- (void)enumeratePerformerNodesUsingBlock:(id /* block */)arg1;
- (void)enumeratePublicEventCategoryNodesUsingBlock:(id /* block */)arg1;
- (long long)expectedAttendance;
- (id)keywordDescription;
- (id)localizedCategories;
- (unsigned long long)muid;
- (id)name;
- (id)performers;
- (id)pg_namedEntity;
- (id)preciseLocalizedCategoryNames;

@end