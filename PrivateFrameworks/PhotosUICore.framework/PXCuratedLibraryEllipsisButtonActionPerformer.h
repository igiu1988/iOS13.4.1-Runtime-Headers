/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCuratedLibraryEllipsisButtonActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer {
    PXCuratedLibraryActionManager * _actionManager;
    PXPhotoKitAssetCollectionActionManager * _assetCollectionActionManager;
    PXGLayout * _layout;
}

@property (nonatomic, readonly) PXCuratedLibraryActionManager *actionManager;
@property (nonatomic) PXGLayout *layout;

- (void).cxx_destruct;
- (void)_presentToUserOptionsFromActionPerformers:(id)arg1 forAssetCollectionReference:(id)arg2;
- (id)actionManager;
- (id)buttonSpriteReference;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2 assetCollectionReference:(id)arg3;
- (id)initWithViewModel:(id)arg1 assetCollectionReference:(id)arg2 actionManager:(id)arg3;
- (id)layout;
- (void)performUserInteractionTask;
- (bool)performerResetsAfterCompletion;
- (void)setLayout:(id)arg1;

@end
