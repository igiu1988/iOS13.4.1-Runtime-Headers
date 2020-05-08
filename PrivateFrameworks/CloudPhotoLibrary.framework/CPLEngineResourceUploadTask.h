/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineResourceUploadTask : CPLResourceTransferTask {
    bool  _backgroundTask;
    id /* block */  _cancelHandler;
    CPLResource * _cloudResource;
    id /* block */  _completionHandler;
    id /* block */  _didStartHandler;
    id /* block */  _launchHandler;
    id /* block */  _progressHandler;
    <CPLEngineTransportTask> * _transportTask;
}

@property (getter=isBackgroundTask, nonatomic) bool backgroundTask;
@property (nonatomic, readonly, copy) id /* block */ cancelHandler;
@property (nonatomic, retain) CPLResource *cloudResource;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly, copy) id /* block */ didStartHandler;
@property (nonatomic, readonly, copy) id /* block */ launchHandler;
@property (nonatomic, readonly, copy) id /* block */ progressHandler;
@property (nonatomic, retain) <CPLEngineTransportTask> *transportTask;

- (void).cxx_destruct;
- (id /* block */)cancelHandler;
- (void)cancelTask;
- (id)cloudResource;
- (id /* block */)completionHandler;
- (id /* block */)didStartHandler;
- (id)initWithLaunchHandler:(id /* block */)arg1 cancelHandler:(id /* block */)arg2 didStartHandler:(id /* block */)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (bool)isBackgroundTask;
- (void)launch;
- (id /* block */)launchHandler;
- (id /* block */)progressHandler;
- (void)setBackgroundTask:(bool)arg1;
- (void)setCloudResource:(id)arg1;
- (void)setTransportTask:(id)arg1;
- (id)transportTask;

@end