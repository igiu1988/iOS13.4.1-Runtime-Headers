/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGetVisualCodeIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBGetVisualCodeIntentResponse> {
    bool  __encodeLegacyGloryData;
    struct { }  _has;
    _INPBImageValue * _visualCodeImage;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasVisualCodeImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBImageValue *visualCodeImage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasVisualCodeImage;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setVisualCodeImage:(id)arg1;
- (id)visualCodeImage;
- (void)writeTo:(id)arg1;

@end
