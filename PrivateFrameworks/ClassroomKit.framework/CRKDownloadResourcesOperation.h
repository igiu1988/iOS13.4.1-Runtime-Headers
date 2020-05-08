/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKDownloadResourcesOperation : CATOperation <NSURLSessionDownloadDelegate> {
    NSArray * _resources;
    NSMutableArray * mCompletedUnitCounts;
    NSURLCredential * mCredential;
    NSArray * mDownloadTasks;
    NSMutableArray * mFileURLs;
    NSURLSession * mSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *resources;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)cancel;
- (void)cancelIfNeeded;
- (void)finalizeDownloadedItem:(id)arg1 forRequestURL:(id)arg2;
- (id)initWithResources:(id)arg1 clientIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3;
- (id)initWithResources:(id)arg1 clientIdentity:(id)arg2 trustedCertificates:(id)arg3;
- (bool)isAsynchronous;
- (void)main;
- (id)moveURLToNonEphemeralLocation:(id)arg1 withFileName:(id)arg2 error:(id*)arg3;
- (void)operationWillFinish;
- (id)resources;
- (void)run;
- (void)unzipOperationDidFinish:(id)arg1 forRequestURL:(id)arg2;

@end
