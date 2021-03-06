/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

@interface NGMPBInnerMessage : PBCodable <NSCopying> {
    unsigned int  _counter;
    NSData * _debugInfo;
    struct { 
        unsigned int counter : 1; 
    }  _has;
    NSData * _message;
}

@property (nonatomic) unsigned int counter;
@property (nonatomic, retain) NSData *debugInfo;
@property (nonatomic) bool hasCounter;
@property (nonatomic, readonly) bool hasDebugInfo;
@property (nonatomic, retain) NSData *message;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)counter;
- (id)debugInfo;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCounter;
- (bool)hasDebugInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)message;
- (bool)readFrom:(id)arg1;
- (void)setCounter:(unsigned int)arg1;
- (void)setDebugInfo:(id)arg1;
- (void)setHasCounter:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)writeTo:(id)arg1;

@end
