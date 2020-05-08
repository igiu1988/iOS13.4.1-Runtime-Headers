/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionLayoutGroup : _UICollectionLayoutItem <NSCopying, _UICollectionLayoutAPIRespresenting> {
    long long  _count;
    id /* block */  _customGroupItemProvider;
    id /* block */  _frameProvider;
    long long  _groupOptions;
    _UICollectionLayoutSpacing * _interItemSpacing;
    bool  _isCustomGroup;
    unsigned long long  _layoutAxis;
    NSArray * _subitems;
    id /* block */  _subitemsProvider;
    NSArray * _supplementaryItems;
    id /* block */  _visualFormatProvider;
    NSArray * _visualFormats;
}

@property (nonatomic) long long groupOptions;
@property (nonatomic, copy) _UICollectionLayoutSpacing *interItemSpacing;
@property (nonatomic, readonly) bool isCustomGroup;
@property (nonatomic, readonly) bool isHorizontalGroup;
@property (nonatomic, readonly) bool isVerticalGroup;
@property (nonatomic, copy) NSArray *supplementaryItems;

+ (id)customGroupWithSize:(id)arg1 frameProvider:(id /* block */)arg2;
+ (id)groupWithLayoutAxis:(unsigned long long)arg1 size:(id)arg2 subitems:(id)arg3 count:(long long)arg4;
+ (id)horizontalGroupWithSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3;
+ (id)horizontalGroupWithSize:(id)arg1 subitems:(id)arg2;
+ (id)horizontalGroupWithSize:(id)arg1 subitemsProvider:(id /* block */)arg2;
+ (id)layoutGroupWithSize:(id)arg1 visualFormats:(id)arg2 itemProvider:(id /* block */)arg3;
+ (id)verticalGroupWithSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3;
+ (id)verticalGroupWithSize:(id)arg1 subitems:(id)arg2;
+ (id)verticalGroupWithSize:(id)arg1 subitemsProvider:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_apiRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)groupOptions;
- (id)initWithlayoutSize:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 layoutAxis:(unsigned long long)arg3 isCustomGroup:(bool)arg4 subitems:(id)arg5 count:(long long)arg6 supplementaryItems:(id)arg7 interItemSpacing:(id)arg8 groupOptions:(long long)arg9 subitemsProvider:(id /* block */)arg10 frameProvider:(id /* block */)arg11 customGroupItemProvider:(id /* block */)arg12 visualFormats:(id)arg13 visualFormatProvider:(id /* block */)arg14;
- (id)interItemSpacing;
- (bool)isCustomGroup;
- (bool)isHorizontalGroup;
- (bool)isVerticalGroup;
- (void)setGroupOptions:(long long)arg1;
- (void)setInterItemSpacing:(id)arg1;
- (void)setSupplementaryItems:(id)arg1;
- (id)supplementaryItems;
- (id)visualDescription;

@end
