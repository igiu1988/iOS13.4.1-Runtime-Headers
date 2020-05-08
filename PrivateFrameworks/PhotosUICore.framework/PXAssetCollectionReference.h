/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetCollectionReference : PXSectionedObjectReference {
    PXAssetReference * _keyAssetReference;
}

@property (nonatomic, readonly) <PXDisplayAssetCollection> *assetCollection;
@property (nonatomic, readonly) PXAssetReference *keyAssetReference;

- (void).cxx_destruct;
- (id)assetCollection;
- (id)initWithAssetCollection:(id)arg1 keyAssetReference:(id)arg2 indexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg3;
- (id)keyAssetReference;

@end