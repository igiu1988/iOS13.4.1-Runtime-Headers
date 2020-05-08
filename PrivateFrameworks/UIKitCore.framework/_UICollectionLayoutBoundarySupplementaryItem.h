/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionLayoutBoundarySupplementaryItem : _UICollectionLayoutSupplementaryItem <NSCopying, _UICollectionLayoutAPIRespresenting> {
    long long  _alignment;
    NSString * _elementKind;
    bool  _extendsBoundary;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    bool  _pinToVisibleBounds;
}

@property (nonatomic, readonly) long long alignment;
@property (nonatomic) bool extendsBoundary;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic) bool pinToVisibleBounds;

+ (id)boundarySupplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3;
+ (id)boundarySupplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 offset:(struct CGPoint { double x1; double x2; })arg4;

- (void).cxx_destruct;
- (id)_apiRepresentation;
- (long long)alignment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)extendsBoundary;
- (id)initWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 offset:(struct CGPoint { double x1; double x2; })arg4 zIndex:(long long)arg5 contentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg6 extendsBoundary:(bool)arg7 pinToVisibleBounds:(bool)arg8;
- (struct CGPoint { double x1; double x2; })offset;
- (bool)pinToVisibleBounds;
- (void)setExtendsBoundary:(bool)arg1;
- (void)setPinToVisibleBounds:(bool)arg1;

@end
