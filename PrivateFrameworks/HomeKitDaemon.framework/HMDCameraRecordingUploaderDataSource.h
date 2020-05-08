/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraRecordingUploaderDataSource : HMFObject <HMDCameraRecordingUploaderDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSURL *storeDirectoryURL;
@property (readonly) Class superclass;

- (void)appendData:(id)arg1 toStreamingAssetAppendContext:(id)arg2 completion:(id /* block */)arg3;
- (bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(bool)arg2 error:(id*)arg3;
- (bool)removeItemAtURL:(id)arg1 error:(id*)arg2;
- (id)storeDirectoryURL;
- (void)submitOperationEvent:(id)arg1;
- (id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (bool)writeData:(id)arg1 toFileAtURL:(id)arg2 error:(id*)arg3;

@end
