/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaSiriCue : PBCodable {
    int  _siriCueType;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int siriCueType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setSiriCueType:(int)arg1;
- (int)siriCueType;
- (void)writeTo:(id)arg1;

@end
