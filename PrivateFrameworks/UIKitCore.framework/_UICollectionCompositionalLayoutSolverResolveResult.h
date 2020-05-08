/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionCompositionalLayoutSolverResolveResult : NSObject <_UICollectionCompositionalLayoutSolverResolveResult> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffsetAdjustment;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSizeAdjustment;
    NSMutableDictionary * _deletedDecorationElementKindIndexPathsDict;
    NSMutableDictionary * _deletedSupplementaryElementKindIndexPathsDict;
    NSMutableDictionary * _insertedDecorationElementKindIndexPathsDict;
    NSMutableDictionary * _insertedSupplementaryElementKindIndexPathsDict;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffsetAdjustment;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSizeAdjustment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDeletedAuxillaryOfElementKind:(id)arg1 atIndexPath:(id)arg2 isSupplementary:(bool)arg3;
- (void)addInsertedAuxillaryOfElementKind:(id)arg1 atIndexPath:(id)arg2 isSupplementary:(bool)arg3;
- (struct CGPoint { double x1; double x2; })contentOffsetAdjustment;
- (struct CGSize { double x1; double x2; })contentSizeAdjustment;
- (id)indexPathsForDeletedDecorationsForElementKind:(id)arg1;
- (id)indexPathsForDeletedSupplememtariesForElementKind:(id)arg1;
- (id)indexPathsForInsertedDecorationsForElementKind:(id)arg1;
- (id)indexPathsForInsertedSupplememtariesForElementKind:(id)arg1;
- (id)init;
- (void)setContentOffsetAdjustment:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentSizeAdjustment:(struct CGSize { double x1; double x2; })arg1;

@end
