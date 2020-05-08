/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionLayoutSpacing : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {
    bool  _isFlexible;
    double  _spacing;
}

@property (nonatomic, readonly) bool isFixedSpacing;
@property (nonatomic, readonly) bool isFlexibleSpacing;
@property (nonatomic, readonly) double spacing;

+ (id)defaultSpacing;
+ (id)fixedSpacing:(double)arg1;
+ (id)flexibleSpacing:(double)arg1;

- (id)_apiRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSpacing:(double)arg1 flexible:(bool)arg2;
- (bool)isFixedSpacing;
- (bool)isFlexibleSpacing;
- (double)spacing;

@end
