/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKHostResourcesOperation : CATOperation <CATRemoteConnectionDelegate, NSNetServiceDelegate> {
    <CRKHostResourcesOperationDelegate> * _delegate;
    CRKHostResourcesConfiguration * mConfiguration;
    NSMutableSet * mConnectionCloseTimers;
    NSMutableSet * mConnections;
    NSDictionary * mFileURLsByFilePath;
    NSMutableDictionary * mFinishedDownloadCountByFileURL;
    NSNetService * mNetService;
    bool  mPublished;
    NSMutableDictionary * mStartedDownloadCountByFileURL;
    NSError * mStashedError;
    NSMutableDictionary * mZipOperationsByDirectoryURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKHostResourcesOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)IPAddressDidChange;
- (bool)allDownloadsFinished;
- (void)cancel;
- (void)connection:(id)arg1 didFailToSendDataWithStream:(id)arg2 userInfo:(id)arg3 error:(id)arg4;
- (void)connection:(id)arg1 didInterruptWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveDataRequestWithURL:(id)arg2;
- (void)connection:(id)arg1 didSendDataWithStream:(id)arg2 userInfo:(id)arg3;
- (void)connectionCloseDidTimeout:(id)arg1;
- (void)connectionDidClose:(id)arg1;
- (id)delegate;
- (void)delegateDownloadFinished:(id)arg1 fileURL:(id)arg2 error:(id)arg3;
- (void)delegateDownloadStarted:(id)arg1 fileURL:(id)arg2;
- (void)delegateResourcesDidPublish;
- (bool)downloadAllowedForFileURL:(id)arg1;
- (id)hostingSocketOptions;
- (void)incrementFinishedDownloadCountForFileURL:(id)arg1;
- (void)incrementStartedDownloadCountForFileURL:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3 maximumAllowedDownloads:(unsigned long long)arg4;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3 maximumAllowedDownloads:(unsigned long long)arg4 port:(unsigned short)arg5;
- (bool)isAsynchronous;
- (void)main;
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)operationDidFinish;
- (void)run;
- (void)serveItemAtURL:(id)arg1 toConnection:(id)arg2 forRequestURL:(id)arg3 originalItemURL:(id)arg4;
- (void)setDelegate:(id)arg1;
- (void)zipDirectoryAtURL:(id)arg1 completion:(id /* block */)arg2;
- (void)zipOperationDidFail:(id)arg1 directoryURL:(id)arg2;

@end
