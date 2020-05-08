/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaDictationAlternativeSelected : PBCodable {
    int  _alternativeListPosition;
    SISchemaLocaleIdentifier * _alternativesLocale;
    int  _countOfAlternativesAvailable;
    int  _countOfWordsReplaced;
}

@property (nonatomic) int alternativeListPosition;
@property (nonatomic, retain) SISchemaLocaleIdentifier *alternativesLocale;
@property (nonatomic) int countOfAlternativesAvailable;
@property (nonatomic) int countOfWordsReplaced;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (int)alternativeListPosition;
- (id)alternativesLocale;
- (int)countOfAlternativesAvailable;
- (int)countOfWordsReplaced;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAlternativeListPosition:(int)arg1;
- (void)setAlternativesLocale:(id)arg1;
- (void)setCountOfAlternativesAvailable:(int)arg1;
- (void)setCountOfWordsReplaced:(int)arg1;
- (void)writeTo:(id)arg1;

@end
