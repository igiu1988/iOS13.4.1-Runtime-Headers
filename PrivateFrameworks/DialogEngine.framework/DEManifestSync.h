/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
 */

@interface DEManifestSync : NSObject <NSURLSessionDownloadDelegate> {
    bool  _downloadFailure;
    NSMutableDictionary * _inProgress;
    DEManifest * _manifest;
    id /* block */  _postSyncBlock;
    bool  _success;
    bool  _syncInForeground;
    DEUpdater * _updater;
    NSURLSession * _urlSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool downloadFailure;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *inProgress;
@property (nonatomic, retain) DEManifest *manifest;
@property (nonatomic, copy) id /* block */ postSyncBlock;
@property (nonatomic) bool success;
@property (readonly) Class superclass;
@property (nonatomic) bool syncInForeground;
@property (nonatomic, retain) DEUpdater *updater;
@property (nonatomic, retain) NSURLSession *urlSession;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)backgroundSync;
- (void)clean;
- (void)cleanupURLSession;
- (void)doIfLatest:(id /* block */)arg1 inBackground:(bool)arg2 elseDo:(id /* block */)arg3;
- (bool)downloadFailure;
- (void)handlePostSyncBlock;
- (id)inProgress;
- (id)init;
- (id)initWithManifest:(id)arg1 updater:(id)arg2;
- (id)initWithManifest:(id)arg1 updater:(id)arg2 syncInForeground:(bool)arg3;
- (bool)isLatest;
- (id)manifest;
- (id /* block */)postSyncBlock;
- (void)setDownloadFailure:(bool)arg1;
- (void)setInProgress:(id)arg1;
- (void)setManifest:(id)arg1;
- (void)setPostSyncBlock:(id /* block */)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setSyncInForeground:(bool)arg1;
- (void)setUpdater:(id)arg1;
- (void)setUrlSession:(id)arg1;
- (bool)success;
- (void)sync;
- (void)sync:(id /* block */)arg1;
- (bool)syncInForeground;
- (id)updater;
- (id)urlSession;

@end