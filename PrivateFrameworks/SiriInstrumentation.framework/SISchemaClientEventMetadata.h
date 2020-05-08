/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaClientEventMetadata : PBCodable {
    long long  _eventGeneratedRelativeToBootTimeTimestampNs;
    NSString * _eventGeneratedTimestampRefId;
    NSData * _siriDeviceID;
    NSData * _turnID;
}

@property (nonatomic) long long eventGeneratedRelativeToBootTimeTimestampNs;
@property (nonatomic, copy) NSString *eventGeneratedTimestampRefId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSData *siriDeviceID;
@property (nonatomic, copy) NSData *turnID;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (long long)eventGeneratedRelativeToBootTimeTimestampNs;
- (id)eventGeneratedTimestampRefId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEventGeneratedRelativeToBootTimeTimestampNs:(long long)arg1;
- (void)setEventGeneratedTimestampRefId:(id)arg1;
- (void)setSiriDeviceID:(id)arg1;
- (void)setTurnID:(id)arg1;
- (id)siriDeviceID;
- (id)turnID;
- (void)writeTo:(id)arg1;

@end
