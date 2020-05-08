/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoEnableServiceModeResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int pending : 1; 
        unsigned int unlockRequired : 1; 
    }  _has;
    bool  _pending;
    bool  _unlockRequired;
}

@property (nonatomic) bool hasPending;
@property (nonatomic) bool hasUnlockRequired;
@property (nonatomic) bool pending;
@property (nonatomic) bool unlockRequired;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPending;
- (bool)hasUnlockRequired;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setHasUnlockRequired:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)setUnlockRequired:(bool)arg1;
- (bool)unlockRequired;
- (void)writeTo:(id)arg1;

@end
