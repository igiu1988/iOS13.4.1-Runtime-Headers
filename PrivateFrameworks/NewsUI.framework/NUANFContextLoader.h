/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFContextLoader : NSObject <SXResourceDataSource> {
    NUANFAssetLoader * _assetLoader;
    FCAsyncOnceOperation * _asyncOnceOperation;
    SXContext * _context;
    FCFlintManifest * _flintManifest;
    FCFlintResourceManager * _flintResourceManager;
    <FCHeadlineProviding> * _headline;
    <SXHost> * _host;
    NSOperationQueue * _imageDecodingQueue;
    <NUArticleResourceURLTranslator> * _resourceURLTranslator;
}

@property (nonatomic, retain) NUANFAssetLoader *assetLoader;
@property (nonatomic, retain) FCAsyncOnceOperation *asyncOnceOperation;
@property (nonatomic, retain) SXContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FCFlintManifest *flintManifest;
@property (nonatomic, readonly) FCFlintResourceManager *flintResourceManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FCHeadlineProviding> *headline;
@property (nonatomic, readonly) <SXHost> *host;
@property (nonatomic, readonly) NSOperationQueue *imageDecodingQueue;
@property (nonatomic, readonly) <NUArticleResourceURLTranslator> *resourceURLTranslator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetLoader;
- (id)asyncLoadContextOnceWithCompletion:(id /* block */)arg1;
- (id)asyncOnceOperation;
- (id)context;
- (void)fileURLForURL:(id)arg1 onCompletion:(id /* block */)arg2 onError:(id /* block */)arg3;
- (id)flintManifest;
- (id)flintResourceManager;
- (id)headline;
- (id)host;
- (id)imageDecodingQueue;
- (id)initWithFlintManifest:(id)arg1 flintResourceManager:(id)arg2 host:(id)arg3 resourceURLTranslator:(id)arg4 headline:(id)arg5;
- (id)loadContextWithCompletion:(id /* block */)arg1;
- (id /* block */)loadImagesForImageRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)resourceURLTranslator;
- (void)setAssetLoader:(id)arg1;
- (void)setAsyncOnceOperation:(id)arg1;
- (void)setContext:(id)arg1;
- (id)translateURL:(id)arg1;

@end
