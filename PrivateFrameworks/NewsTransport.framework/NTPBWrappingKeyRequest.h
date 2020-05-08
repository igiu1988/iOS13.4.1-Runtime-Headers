/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBWrappingKeyRequest : PBRequest <NSCopying> {
    NSMutableArray * _wrappingKeyIds;
}

@property (nonatomic, retain) NSMutableArray *wrappingKeyIds;

+ (Class)wrappingKeyIdsType;

- (void).cxx_destruct;
- (void)addWrappingKeyIds:(id)arg1;
- (void)clearWrappingKeyIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setWrappingKeyIds:(id)arg1;
- (id)wrappingKeyIds;
- (id)wrappingKeyIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)wrappingKeyIdsCount;
- (void)writeTo:(id)arg1;

@end
