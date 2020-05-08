/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPhotoKitContext : PXCMMContext {
    PHMomentShare * _momentShare;
    PHMomentShare * _originatingMomentShare;
    PXCMMPhotoKitActionManager * _photoKitActionManager;
    PHSuggestion * _suggestion;
}

@property (nonatomic, readonly) PHMomentShare *momentShare;
@property (nonatomic, retain) PHMomentShare *originatingMomentShare;
@property (nonatomic, readonly) PHSuggestion *suggestion;

- (void).cxx_destruct;
- (id)actionManager;
- (id)createSession;
- (id)initWithAssetCollection:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3;
- (id)initWithAssetCollection:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3 optionalPeopleFetchResult:(id)arg4;
- (id)initWithAssets:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3;
- (id)initWithAssetsDataSourceManager:(id)arg1 mediaProvider:(id)arg2 activityType:(unsigned long long)arg3;
- (id)initWithFetchResult:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3;
- (id)initWithFetchResult:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3 optionalPeopleFetchResult:(id)arg4;
- (id)initWithFetchResult:(id)arg1 library:(id)arg2 activityType:(unsigned long long)arg3 sourceType:(unsigned long long)arg4 optionalPeopleFetchResult:(id)arg5;
- (id)initWithMomentShare:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3;
- (id)initWithSuggestion:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3 optionalPeopleFetchResult:(id)arg4;
- (id)momentShare;
- (id)originatingMomentShare;
- (void)setOriginatingMomentShare:(id)arg1;
- (id)suggestion;

@end
