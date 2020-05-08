/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaDictationContext : PBCodable {
    NSString * _bundleId;
    SISchemaLocaleIdentifier * _dictationLocale;
    NSArray * _dictationLocalesEnableds;
    NSString * _keyboardLanguage;
    SISchemaLocaleIdentifier * _keyboardLocale;
    NSArray * _keyboardLocalesEnableds;
    SISchemaLocaleIdentifier * _siriSelectedLocale;
    SISchemaLocaleIdentifier * _userSelectedLocale;
}

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, retain) SISchemaLocaleIdentifier *dictationLocale;
@property (nonatomic, copy) NSArray *dictationLocalesEnableds;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *keyboardLanguage;
@property (nonatomic, retain) SISchemaLocaleIdentifier *keyboardLocale;
@property (nonatomic, copy) NSArray *keyboardLocalesEnableds;
@property (nonatomic, retain) SISchemaLocaleIdentifier *siriSelectedLocale;
@property (nonatomic, retain) SISchemaLocaleIdentifier *userSelectedLocale;

- (void).cxx_destruct;
- (void)addDictationLocalesEnabled:(id)arg1;
- (void)addKeyboardLocalesEnabled:(id)arg1;
- (id)bundleId;
- (void)clearDictationLocalesEnabled;
- (void)clearKeyboardLocalesEnabled;
- (id)dictationLocale;
- (id)dictationLocalesEnabledAtIndex:(unsigned long long)arg1;
- (unsigned long long)dictationLocalesEnabledCount;
- (id)dictationLocalesEnableds;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)keyboardLanguage;
- (id)keyboardLocale;
- (id)keyboardLocalesEnabledAtIndex:(unsigned long long)arg1;
- (unsigned long long)keyboardLocalesEnabledCount;
- (id)keyboardLocalesEnableds;
- (bool)readFrom:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setDictationLocale:(id)arg1;
- (void)setDictationLocalesEnableds:(id)arg1;
- (void)setKeyboardLanguage:(id)arg1;
- (void)setKeyboardLocale:(id)arg1;
- (void)setKeyboardLocalesEnableds:(id)arg1;
- (void)setSiriSelectedLocale:(id)arg1;
- (void)setUserSelectedLocale:(id)arg1;
- (id)siriSelectedLocale;
- (id)userSelectedLocale;
- (void)writeTo:(id)arg1;

@end
