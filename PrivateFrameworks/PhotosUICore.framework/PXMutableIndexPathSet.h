/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMutableIndexPathSet : PXIndexPathSet

- (void)addIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)minusIndexPathSet:(id)arg1;
- (void)modifyItemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 usingBlock:(id /* block */)arg3;
- (void)modifySectionIndexSetForDataSourceIdentifier:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)modifySubitemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 item:(long long)arg3 usingBlock:(id /* block */)arg4;
- (void)removeAllIndexPaths;
- (void)removeIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)unionIndexPathSet:(id)arg1;

@end
