/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCuratedLibraryActionManager : PXActionManager {
    NSDictionary * _actionPerformersByType;
    NSDictionary * _assetCollectionActionPerformersByType;
    NSDictionary * _constructorSpecificActionPerformersByType;
    PXCuratedLibraryFilterActionPerformer * _filterActionPerformer;
    PXCuratedLibraryViewModel * _viewModel;
}

@property (nonatomic, readonly) NSDictionary *actionPerformersByType;
@property (nonatomic, readonly) NSDictionary *assetCollectionActionPerformersByType;
@property (nonatomic, readonly) NSDictionary *constructorSpecificActionPerformersByType;
@property (readonly) PXCuratedLibraryFilterActionPerformer *filterActionPerformer;
@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;

+ (id)actionsWithActionPerformers;

- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1 withAssetCollectionReference:(id)arg2;
- (id)actionPerformerForHitTestResult:(id)arg1;
- (id)actionPerformersByType;
- (id)assetCollectionActionPerformersByType;
- (bool)canPerformActionType:(id)arg1;
- (id)constructorSpecificActionPerformersByType;
- (id)ellipsisButtonActionPerformerWithAssetCollectionReference:(id)arg1;
- (id)filterActionPerformer;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)showAllActionPerformerWithAssetCollectionReference:(id)arg1;
- (id)showMapPerformerWithAssetCollectionReference:(id)arg1 fetchResult:(id)arg2;
- (id)tapToRadarPerformerAssetCollectionReference:(id)arg1 diagnosticLayout:(id)arg2;
- (id)toggleAspectFitPerformerWithLayout:(id)arg1;
- (id)viewModel;

@end
