/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSceneObservation : VNFeaturePrintObservation {
    NSString * _sceneprintVersion;
    NSArray * _sceneprints;
}

@property (nonatomic, readonly, copy) NSString *sceneprintVersion;
@property (nonatomic, readonly) NSArray *sceneprints;

+ (id)observationWithSceneprints:(id)arg1;
+ (id)sceneprintCurrentVersion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (unsigned long long)elementCount;
- (unsigned long long)elementType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 sceneprints:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)sceneprintVersion;
- (id)sceneprints;

@end
