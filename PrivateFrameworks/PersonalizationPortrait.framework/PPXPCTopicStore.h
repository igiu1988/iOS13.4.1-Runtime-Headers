/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPXPCTopicStore : PPTopicStore {
    PPClientFeedbackHelper * _clientFeedbackHelper;
}

- (void).cxx_destruct;
- (id)_init;
- (bool)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2;
- (id)clientIdentifier;
- (bool)cloudSyncWithError:(id*)arg1;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllTopicsWithTopicId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 sentimentScore:(double)arg5 error:(id*)arg6;
- (bool)iterRankedTopicsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)iterScoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)iterTopicRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)rankedTopicsWithQuery:(id)arg1 error:(id*)arg2;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (id)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3;
- (void)setClientIdentifier:(id)arg1;
- (id)topicRecordsWithQuery:(id)arg1 error:(id*)arg2;
- (id)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 error:(id*)arg3;

@end
