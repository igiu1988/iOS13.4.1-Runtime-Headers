/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoConflictingExpressPassIdentifiersForPassInformationResponse : PBCodable <NSCopying> {
    NSMutableArray * _conflictingExpressPassIdentifiers;
    NSMutableArray * _conflictingReferenceExpressPassIdentifiers;
    struct { 
        unsigned int pending : 1; 
    }  _has;
    bool  _pending;
}

@property (nonatomic, retain) NSMutableArray *conflictingExpressPassIdentifiers;
@property (nonatomic, retain) NSMutableArray *conflictingReferenceExpressPassIdentifiers;
@property (nonatomic) bool hasPending;
@property (nonatomic) bool pending;

+ (Class)conflictingExpressPassIdentifiersType;
+ (Class)conflictingReferenceExpressPassIdentifiersType;

- (void).cxx_destruct;
- (void)addConflictingExpressPassIdentifiers:(id)arg1;
- (void)addConflictingReferenceExpressPassIdentifiers:(id)arg1;
- (void)clearConflictingExpressPassIdentifiers;
- (void)clearConflictingReferenceExpressPassIdentifiers;
- (id)conflictingExpressPassIdentifiers;
- (id)conflictingExpressPassIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictingExpressPassIdentifiersCount;
- (id)conflictingReferenceExpressPassIdentifiers;
- (id)conflictingReferenceExpressPassIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictingReferenceExpressPassIdentifiersCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPending;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setConflictingExpressPassIdentifiers:(id)arg1;
- (void)setConflictingReferenceExpressPassIdentifiers:(id)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
