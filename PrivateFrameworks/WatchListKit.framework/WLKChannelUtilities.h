/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKChannelUtilities : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    WLKChannelsResponse * _cachedResponse;
    NSDictionary * _channelsByBundleID;
    NSError * _error;
    bool  _filtered;
}

@property (nonatomic, readonly, copy) NSDictionary *channelsByBundleID;
@property (nonatomic, readonly, copy) NSDictionary *channelsByID;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool loaded;
@property (nonatomic, readonly, copy) NSArray *orderedChannels;

+ (id)_validiTunesBundles;
+ (bool)isItunesBundleID:(id)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceFiltered;

- (void).cxx_destruct;
- (id)_configuration;
- (void)_loadConfigIfNeededWithCompletion:(id /* block */)arg1;
- (id)channelForBundleID:(id)arg1;
- (id)channelForID:(id)arg1;
- (id)channelIDForBundleID:(id)arg1;
- (id)channelsByBundleID;
- (id)channelsByID;
- (id)error;
- (id)init;
- (id)initFiltered:(bool)arg1;
- (bool)isItunesOrFirstPartyBundleID:(id)arg1;
- (void)loadIfNeededWithCompletion:(id /* block */)arg1;
- (bool)loaded;
- (id)orderedChannels;

@end
