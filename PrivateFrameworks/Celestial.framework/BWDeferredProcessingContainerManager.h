/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWDeferredProcessingContainerManager : BWDeferredContainerManagerBase {
    struct OpaqueFigCaptureDeferredContainerManager { } * _xpcContainerManager;
}

+ (id)sharedInstance;

- (id)_copyRemoteContainer:(id)arg1 captureRequestIdentifier:(id)arg2 baseFolder:(id)arg3 err:(int*)arg4;
- (void)_dispatchNotification:(id)arg1 value:(id)arg2;
- (void)_handleServerConnectionDiedNotification;
- (int)_queryContainerStatus:(id)arg1 captureRequestIdentifier:(id)arg2 status:(int*)arg3;
- (int)_releaseRemoteContainer:(id)arg1 captureRequestIdentifier:(id)arg2;
- (void)_setXPCContainerManager:(struct OpaqueFigCaptureDeferredContainerManager { }*)arg1;
- (id)createProcessingContainerWithApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 err:(int*)arg3;
- (int)deleteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2;
- (id)init;
- (id)manifestsForApplicationID:(id)arg1 err:(int*)arg2;
- (void)releaseProcessingContainer:(id)arg1;
- (int)waitForShaderCompilation;

@end