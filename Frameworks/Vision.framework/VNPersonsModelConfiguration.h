/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNPersonsModelConfiguration : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _faceprintRequestRevision;
    unsigned long long  _maximumFaceprintsPerIdentity;
    unsigned long long  _maximumIdentities;
}

@property (nonatomic) unsigned long long faceprintRequestRevision;
@property (nonatomic) unsigned long long maximumFaceprintsPerIdentity;
@property (nonatomic) unsigned long long maximumIdentities;

+ (unsigned long long)maximumAllowableFaceprintsPerIdentity;
+ (unsigned long long)maximumAllowableIdentities;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)faceIDModelMaximumElementsPerID;
- (unsigned long long)faceprintRequestRevision;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maximumFaceprintsPerIdentity;
- (unsigned long long)maximumIdentities;
- (void)setFaceprintRequestRevision:(unsigned long long)arg1;
- (void)setMaximumFaceprintsPerIdentity:(unsigned long long)arg1;
- (void)setMaximumIdentities:(unsigned long long)arg1;

@end
