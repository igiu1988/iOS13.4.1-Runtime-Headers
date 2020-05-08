/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIBlurEffectCoreUIImpl : _UIBlurEffectImpl <NSCopying> {
    CALayer * _activeMaterialLayer;
    long long  _blurStyle;
    CALayer * _inactiveMaterialLayer;
    NSString * _materialName;
}

@property (nonatomic, retain) CALayer *activeMaterialLayer;
@property (nonatomic) long long blurStyle;
@property (nonatomic, retain) CALayer *inactiveMaterialLayer;
@property (nonatomic, copy) NSString *materialName;

- (void).cxx_destruct;
- (bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (id)activeMaterialLayer;
- (void)appendDescriptionTo:(id)arg1;
- (long long)blurStyle;
- (bool)canProvideCoreMaterialVibrancyEffect;
- (bool)canProvideVibrancyEffect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)inactiveMaterialLayer;
- (id)initWithMaterial:(id)arg1 style:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)materialName;
- (bool)requiresCopying;
- (void)setActiveMaterialLayer:(id)arg1;
- (void)setBlurStyle:(long long)arg1;
- (void)setInactiveMaterialLayer:(id)arg1;
- (void)setMaterialName:(id)arg1;
- (long long)style;

@end
