/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _PARFlightRequest : PBCodable <NSSecureCoding, _PARFlightRequest> {
    NSString * _countryCode;
    unsigned long long  _date;
    NSString * _effectiveSystemLanguage;
    NSString * _flightBundleId;
    NSString * _inputMode;
    NSData * _installedAppsSignature;
    NSString * _locale;
    _PARLocation * _location;
    _PARMapsSession * _mapsSession;
    NSArray * _preferredLanguages;
    NSString * _query;
    int  _routineMode;
    NSString * _secretKey;
    int  _transportationMode;
    float  _uiScale;
    NSString * _userGUID;
}

@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic) unsigned long long date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *effectiveSystemLanguage;
@property (nonatomic, copy) NSString *flightBundleId;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *inputMode;
@property (nonatomic, copy) NSData *installedAppsSignature;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, retain) _PARLocation *location;
@property (nonatomic, retain) _PARMapsSession *mapsSession;
@property (nonatomic, copy) NSArray *preferredLanguages;
@property (nonatomic, copy) NSString *query;
@property (nonatomic) int routineMode;
@property (nonatomic, copy) NSString *secretKey;
@property (readonly) Class superclass;
@property (nonatomic) int transportationMode;
@property (nonatomic) float uiScale;
@property (nonatomic, copy) NSString *userGUID;

- (void).cxx_destruct;
- (void)addPreferredLanguages:(id)arg1;
- (void)clearPreferredLanguages;
- (id)countryCode;
- (unsigned long long)date;
- (id)dictionaryRepresentation;
- (id)effectiveSystemLanguage;
- (id)flightBundleId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)inputMode;
- (id)installedAppsSignature;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)locale;
- (id)location;
- (id)mapsSession;
- (id)preferredLanguages;
- (id)preferredLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)preferredLanguagesCount;
- (id)query;
- (bool)readFrom:(id)arg1;
- (int)routineMode;
- (id)secretKey;
- (void)setCountryCode:(id)arg1;
- (void)setDate:(unsigned long long)arg1;
- (void)setEffectiveSystemLanguage:(id)arg1;
- (void)setFlightBundleId:(id)arg1;
- (void)setInputMode:(id)arg1;
- (void)setInstalledAppsSignature:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapsSession:(id)arg1;
- (void)setPreferredLanguages:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setRoutineMode:(int)arg1;
- (void)setSecretKey:(id)arg1;
- (void)setTransportationMode:(int)arg1;
- (void)setUiScale:(float)arg1;
- (void)setUserGUID:(id)arg1;
- (int)transportationMode;
- (float)uiScale;
- (id)userGUID;
- (void)writeTo:(id)arg1;

@end
