/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYSyncBatch : PBCodable <NSCopying> {
    NSMutableArray * _changes;
    SYMessageHeader * _header;
    unsigned long long  _index;
    NSString * _sessionID;
}

@property (nonatomic, retain) NSMutableArray *changes;
@property (nonatomic, retain) SYMessageHeader *header;
@property (nonatomic) unsigned long long index;
@property (nonatomic, retain) NSString *sessionID;

+ (Class)changesType;

- (void).cxx_destruct;
- (void)addChanges:(id)arg1;
- (id)changes;
- (id)changesAtIndex:(unsigned long long)arg1;
- (unsigned long long)changesCount;
- (void)clearChanges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)header;
- (unsigned long long)index;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionID;
- (void)setChanges:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setSessionID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
