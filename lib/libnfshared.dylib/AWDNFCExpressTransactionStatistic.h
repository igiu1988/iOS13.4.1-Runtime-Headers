/* Generated by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCExpressTransactionStatistic : PBCodable <NSCopying> {
    unsigned int  _expressModeConfiguration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int expressModeConfiguration : 1; 
    }  _has;
    unsigned long long  _timestamp;
    NSMutableArray * _transactionLists;
}

@property (nonatomic) unsigned int expressModeConfiguration;
@property (nonatomic) bool hasExpressModeConfiguration;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSMutableArray *transactionLists;

+ (Class)transactionListType;

- (void)addTransactionList:(id)arg1;
- (void)clearTransactionLists;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)expressModeConfiguration;
- (bool)hasExpressModeConfiguration;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExpressModeConfiguration:(unsigned int)arg1;
- (void)setHasExpressModeConfiguration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransactionLists:(id)arg1;
- (unsigned long long)timestamp;
- (id)transactionListAtIndex:(unsigned long long)arg1;
- (id)transactionLists;
- (unsigned long long)transactionListsCount;
- (void)writeTo:(id)arg1;

@end
