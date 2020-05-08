/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBAppId : PBCodable <NSCopying, NSSecureCoding, _INPBAppId> {
    bool  __encodeLegacyGloryData;
    NSString * _bundleId;
    struct { }  _has;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (nonatomic, copy) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBundleId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (id)bundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBundleId;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
