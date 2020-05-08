/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveRequestRetrieveAssetURL : PBCodable <NSCopying> {
    CKDPRequestedFields * _assetFields;
    struct { 
        unsigned int requestedTTL : 1; 
        unsigned int type : 1; 
    }  _has;
    long long  _requestedTTL;
    int  _type;
}

@property (nonatomic, retain) CKDPRequestedFields *assetFields;
@property (nonatomic, readonly) bool hasAssetFields;
@property (nonatomic) bool hasRequestedTTL;
@property (nonatomic) bool hasType;
@property (nonatomic) long long requestedTTL;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)assetFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssetFields;
- (bool)hasRequestedTTL;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)requestedTTL;
- (void)setAssetFields:(id)arg1;
- (void)setHasRequestedTTL:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setRequestedTTL:(long long)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
