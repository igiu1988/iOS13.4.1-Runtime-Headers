/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPFetchArchivedRecordsResponse : PBCodable <NSCopying> {
    NSData * _archiveContinuationToken;
    struct { 
        unsigned int status : 1; 
    }  _has;
    NSMutableArray * _records;
    int  _status;
}

@property (nonatomic, retain) NSData *archiveContinuationToken;
@property (nonatomic, readonly) bool hasArchiveContinuationToken;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) NSMutableArray *records;
@property (nonatomic) int status;

+ (Class)recordType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)addRecord:(id)arg1;
- (id)archiveContinuationToken;
- (void)clearRecords;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArchiveContinuationToken;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordAtIndex:(unsigned long long)arg1;
- (id)records;
- (unsigned long long)recordsCount;
- (void)setArchiveContinuationToken:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setRecords:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
