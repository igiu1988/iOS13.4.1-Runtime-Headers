/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKRemoveFavoriteRequest : WLKRequest {
    NSString * _bundleID;
    NSString * _canonicalID;
    NSString * _channelID;
    NSString * _externalID;
    WLKWatchListModificationResponse * _response;
    NSString * _statsID;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSString *canonicalID;
@property (nonatomic, readonly, copy) NSString *externalID;
@property (nonatomic, readonly) WLKWatchListModificationResponse *response;
@property (nonatomic, readonly, copy) NSString *statsID;

- (void).cxx_destruct;
- (id)bundleID;
- (id)canonicalID;
- (id)externalID;
- (id)initWithBundleID:(id)arg1 externalID:(id)arg2;
- (id)initWithCanonicalID:(id)arg1;
- (id)initWithStatsID:(id)arg1;
- (void)makeRequestWithCompletion:(id /* block */)arg1;
- (id)response;
- (id)statsID;

@end
