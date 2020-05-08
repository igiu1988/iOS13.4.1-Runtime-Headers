/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKCDPCodeServiceResponse : PBCodable <NSCopying> {
    NSMutableArray * _assetAuthorizationResponses;
    CKCDPError * _error;
    NSData * _serializedResult;
}

@property (nonatomic, retain) NSMutableArray *assetAuthorizationResponses;
@property (nonatomic, retain) CKCDPError *error;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, readonly) bool hasSerializedResult;
@property (nonatomic, retain) NSData *serializedResult;

+ (Class)assetAuthorizationResponsesType;

- (void).cxx_destruct;
- (void)addAssetAuthorizationResponses:(id)arg1;
- (id)assetAuthorizationResponses;
- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetAuthorizationResponsesCount;
- (void)clearAssetAuthorizationResponses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (bool)hasSerializedResult;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serializedResult;
- (void)setAssetAuthorizationResponses:(id)arg1;
- (void)setError:(id)arg1;
- (void)setSerializedResult:(id)arg1;
- (void)writeTo:(id)arg1;

@end
