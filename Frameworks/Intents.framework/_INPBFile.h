/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBFile : PBCodable <NSCopying, NSSecureCoding, _INPBFile> {
    bool  __encodeLegacyGloryData;
    NSData * _data;
    _INPBURLValue * _fileURL;
    NSString * _filename;
    struct { }  _has;
    NSString * _typeIdentifier;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (nonatomic, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBURLValue *fileURL;
@property (nonatomic, copy) NSString *filename;
@property (nonatomic, readonly) bool hasData;
@property (nonatomic, readonly) bool hasFileURL;
@property (nonatomic, readonly) bool hasFilename;
@property (nonatomic, readonly) bool hasTypeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *typeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)filename;
- (bool)hasData;
- (bool)hasFileURL;
- (bool)hasFilename;
- (bool)hasTypeIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setData:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setTypeIdentifier:(id)arg1;
- (id)typeIdentifier;
- (void)writeTo:(id)arg1;

@end
