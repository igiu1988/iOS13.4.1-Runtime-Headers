/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionLayoutSolveParameters : NSObject <_UICollectionLayoutSolveResult> {
    NSMutableDictionary * _invalidatedAuxillaryDict;
    NSMutableIndexSet * _invalidatedIndexes;
    bool  _isFullResolve;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasInvalidatedItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *invalidatedAuxillaryKinds;
@property (nonatomic, readonly) NSIndexSet *invalidatedIndexes;
@property (nonatomic, readonly) bool isFullResolve;
@property (readonly) Class superclass;

+ (id)parametersForFullResolve;

- (void).cxx_destruct;
- (void)addAuxillaryIndex:(long long)arg1 elementKind:(id)arg2;
- (void)addItemIndex:(long long)arg1;
- (bool)hasInvalidatedItems;
- (id)indexesForInvalidatedAuxillariesOfKind:(id)arg1;
- (id)init;
- (id)initWithInvalidatedIndexes:(id)arg1;
- (id)initWithInvalidatedIndexes:(id)arg1 isFullResolve:(bool)arg2;
- (id)invalidatedAuxillaryKinds;
- (id)invalidatedAuxillaryOffsets;
- (id)invalidatedIndexes;
- (bool)isFullResolve;

@end
