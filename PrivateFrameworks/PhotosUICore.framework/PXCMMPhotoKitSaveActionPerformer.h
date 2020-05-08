/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPhotoKitSaveActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (nonatomic, readonly) PXCMMPhotoKitSession *session;

+ (id)sharedSavingWorkerQueue;

- (void)_completeSavingForAssets:(id)arg1 count:(long long)arg2;
- (id)createActionProgress;
- (bool)isCancellable;
- (void)performUserInteractionTask;

@end
