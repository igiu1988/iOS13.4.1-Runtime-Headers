/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKContinueWatchingRequestOperation : WLKUTSNetworkRequestOperation {
    WLKContinueWatchingResponse * _response;
}

@property (nonatomic, retain) WLKContinueWatchingResponse *response;

- (void).cxx_destruct;
- (void)_donateMediaItems:(id)arg1;
- (id)init;
- (id)initWithCaller:(id)arg1 options:(long long)arg2;
- (id)initWithQueryParameters:(id)arg1;
- (void)processResponse;
- (id)response;
- (void)setResponse:(id)arg1;

@end
