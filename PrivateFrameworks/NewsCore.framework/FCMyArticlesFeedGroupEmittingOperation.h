/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCMyArticlesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation {
    NSSet * _emittableGroupTypes;
    <FCHeadlineClusterOrdering> * _headlineClusterOrderer;
    <FCHeadlineClustering> * _headlineClusterer;
}

@property (nonatomic, retain) NSSet *emittableGroupTypes;
@property (nonatomic, retain) <FCHeadlineClusterOrdering> *headlineClusterOrderer;
@property (nonatomic, retain) <FCHeadlineClustering> *headlineClusterer;

- (void).cxx_destruct;
- (id)_joinedFeedTransformation;
- (id)_nonEditorialFeedTransformationWithFeedContext:(id)arg1 showStoriesOnlyFromFavorites:(bool)arg2;
- (void)_performOperation;
- (id)_sortClusteredHeadlinesForDisplay:(id)arg1 withAdditionalData:(id)arg2 scoresByArticleID:(id)arg3 topicsByID:(id)arg4 translationProvider:(id)arg5;
- (id)emittableGroupTypes;
- (id)headlineClusterOrderer;
- (id)headlineClusterer;
- (id)interleaveHeadlines:(id)arg1 withPublisherDiversificationPenalty:(double)arg2;
- (void)performOperation;
- (void)setEmittableGroupTypes:(id)arg1;
- (void)setHeadlineClusterOrderer:(id)arg1;
- (void)setHeadlineClusterer:(id)arg1;

@end
