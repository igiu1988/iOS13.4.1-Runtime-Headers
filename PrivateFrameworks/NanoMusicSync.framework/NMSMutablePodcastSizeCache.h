/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMutablePodcastSizeCache : NMSPodcastSizeCache {
    NSMutableDictionary * _mutableEpisodeSizeInfoDict;
    NSMutableDictionary * _mutableRelationshipDict;
}

@property (retain) NSMutableDictionary *mutableEpisodeSizeInfoDict;
@property (retain) NSMutableDictionary *mutableRelationshipDict;

- (void).cxx_destruct;
- (id)_currentPodcastSizeDictionary;
- (id)episodeSizeInfoDict;
- (id)init;
- (id)itemsForFeedURL:(id)arg1;
- (id)mutableEpisodeSizeInfoDict;
- (id)mutableRelationshipDict;
- (id)relationshipDict;
- (void)setEpisodeSizeInfo:(id)arg1 forEpisode:(id)arg2;
- (void)setEpisodes:(id)arg1 forFeedURL:(id)arg2;
- (void)setMutableEpisodeSizeInfoDict:(id)arg1;
- (void)setMutableRelationshipDict:(id)arg1;
- (void)synchronize;

@end
