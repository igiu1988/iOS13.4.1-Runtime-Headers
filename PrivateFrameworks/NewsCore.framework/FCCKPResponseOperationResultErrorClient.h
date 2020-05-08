/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPResponseOperationResultErrorClient : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    FCCKPOplockFailure * _oplockFailure;
    int  _type;
    FCCKPUniqueFieldFailure * _uniqueFieldFailure;
}

@property (nonatomic, readonly) bool hasOplockFailure;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUniqueFieldFailure;
@property (nonatomic, retain) FCCKPOplockFailure *oplockFailure;
@property (nonatomic) int type;
@property (nonatomic, retain) FCCKPUniqueFieldFailure *uniqueFieldFailure;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOplockFailure;
- (bool)hasType;
- (bool)hasUniqueFieldFailure;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)oplockFailure;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setOplockFailure:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUniqueFieldFailure:(id)arg1;
- (int)type;
- (id)uniqueFieldFailure;
- (void)writeTo:(id)arg1;

@end
