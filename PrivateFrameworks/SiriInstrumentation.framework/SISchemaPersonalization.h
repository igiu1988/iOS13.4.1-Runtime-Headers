/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaPersonalization : PBCodable {
    bool  _appleMusicSubscriber;
    bool  _personalDomainsSetup;
}

@property (nonatomic) bool appleMusicSubscriber;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool personalDomainsSetup;

- (bool)appleMusicSubscriber;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)personalDomainsSetup;
- (bool)readFrom:(id)arg1;
- (void)setAppleMusicSubscriber:(bool)arg1;
- (void)setPersonalDomainsSetup:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
