/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTStickerShaderModifier : NSObject {
    NSString * _data;
    NSString * _entryPoint;
    bool  _forceDoubleSided;
    NSString * _geometryName;
    NSArray * _properties;
}

@property (nonatomic, readonly) NSString *data;
@property (nonatomic, readonly) NSString *entryPoint;
@property (nonatomic, readonly) bool forceDoubleSided;
@property (nonatomic, readonly) NSString *geometryName;
@property (nonatomic, readonly) NSArray *properties;

+ (id)encapsulateShaderData:(id)arg1;
+ (id)entryPointForModifierName:(id)arg1;
+ (id)shaderModifierCache;
+ (id)shaderModifierFromDictionary:(id)arg1 assetsPath:(id)arg2;

- (void).cxx_destruct;
- (bool)applyToAvatar:(id)arg1;
- (bool)applyToMaterial:(id)arg1;
- (bool)applyToNode:(id)arg1;
- (bool)applyToNodeHierarchy:(id)arg1;
- (id)cloneWithProperties:(id)arg1;
- (id)data;
- (id)description;
- (id)entryPoint;
- (id)findMaterialsForGeometryName:(id)arg1 inAvatar:(id)arg2;
- (bool)forceDoubleSided;
- (id)geometryName;
- (id)initWithEntryPoint:(id)arg1 geometryName:(id)arg2 data:(id)arg3 properties:(id)arg4 forceDoubleSided:(bool)arg5;
- (id)properties;
- (void)removeFromAvatar:(id)arg1 error:(id*)arg2;
- (bool)removeFromMaterial:(id)arg1;

@end
