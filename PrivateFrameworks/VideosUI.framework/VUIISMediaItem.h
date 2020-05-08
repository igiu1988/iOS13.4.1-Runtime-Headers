/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIISMediaItem : TVPBaseMediaItem <TVPContentKeyLoading> {
    NSString * _assetIDForStopping;
    NSData * _certificateData;
    bool  _disableScrubbing;
    unsigned long long  _loadingContext;
    NSMutableArray * _requestsAwaitingCertFetch;
    long long  _state;
    NSURL * _stopServerURL;
    NSDictionary * _tokenServerParameters;
    NSURL * _tokenServerURL;
    NSURL * _url;
}

@property (nonatomic, retain) NSString *assetIDForStopping;
@property (nonatomic, retain) NSData *certificateData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableScrubbing;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long loadingContext;
@property (nonatomic, retain) NSMutableArray *requestsAwaitingCertFetch;
@property (nonatomic) long long state;
@property (nonatomic, retain) NSURL *stopServerURL;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *tokenServerParameters;
@property (nonatomic, retain) NSURL *tokenServerURL;
@property (nonatomic, retain) NSURL *url;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)_allowedToRetryRequestForError:(id)arg1 response:(id)arg2;
- (id)_assetIDDataForKeyRequest:(id)arg1;
- (id)_assetIDForKeyRequest:(id)arg1;
- (id)_certificateURLForKeyRequest:(id)arg1;
- (void)_failKeyRequests:(id)arg1 withError:(id)arg2;
- (void)_fetchTokenForAssetID:(id)arg1 completion:(id /* block */)arg2;
- (void)_generateKeyRequestDataForKeyRequests:(id)arg1 completion:(id /* block */)arg2;
- (id)_keyServerURLForKeyRequest:(id)arg1;
- (id)_linearServiceRequestForURL:(id)arg1 assetID:(id)arg2;
- (void)_loadCertificateDataFromURL:(id)arg1 loadingContext:(unsigned long long)arg2 attemptNumber:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)_parseCertificateURL:(id*)arg1 keyServerURL:(id*)arg2 assetID:(id*)arg3 fromKeyRequest:(id)arg4;
- (double)_randomRetryDelayForFailedAttemptNumber:(unsigned long long)arg1;
- (void)_sendKeyRequestsToServer:(id)arg1 token:(id)arg2;
- (void)_sendStopForAssetID:(id)arg1;
- (void)_sendURLRequestToServer:(id)arg1 forKeyRequest:(id)arg2 attemptNumber:(unsigned long long)arg3;
- (void)_startKeyRequests:(id)arg1 token:(id)arg2;
- (id)assetIDForStopping;
- (id)certificateData;
- (void)cleanUpMediaItem;
- (bool)disableScrubbing;
- (bool)hasTrait:(id)arg1;
- (id)initWithURL:(id)arg1 tokenServerURL:(id)arg2 stopServerURL:(id)arg3 tokenServerParameters:(id)arg4;
- (bool)isEqualToMediaItem:(id)arg1;
- (void)loadFairPlayStreamingKeyRequests:(id)arg1;
- (unsigned long long)loadingContext;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (id)mediaItemURL;
- (id)requestsAwaitingCertFetch;
- (void)setAssetIDForStopping:(id)arg1;
- (void)setCertificateData:(id)arg1;
- (void)setDisableScrubbing:(bool)arg1;
- (void)setLoadingContext:(unsigned long long)arg1;
- (void)setRequestsAwaitingCertFetch:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStopServerURL:(id)arg1;
- (void)setTokenServerParameters:(id)arg1;
- (void)setTokenServerURL:(id)arg1;
- (void)setUrl:(id)arg1;
- (long long)state;
- (id)stopServerURL;
- (id)tokenServerParameters;
- (id)tokenServerURL;
- (id)url;

@end
