/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoHash : PBCodable <NSCopying> {
    NSData * _hashData;
}

@property (nonatomic, readonly) bool hasHashData;
@property (nonatomic, retain) NSData *hashData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHashData;
- (unsigned long long)hash;
- (id)hashData;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHashData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
