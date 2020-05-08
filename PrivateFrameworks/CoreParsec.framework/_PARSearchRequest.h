/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _PARSearchRequest : PBCodable <NSSecureCoding, _PARSearchRequest> {
    NSString * _calendar;
    NSString * _countryCode;
    NSData * _dictionarySignature;
    NSString * _effectiveSystemLanguage;
    long long  _exp;
    int  _hourFormat;
    bool  _hsEnabled;
    NSString * _inputMode;
    NSData * _installedAppsSignature;
    bool  _internalBuild;
    NSArray * _localSuggestions;
    NSString * _locale;
    _PARLocation * _location;
    NSString * _lookupAppBundleId;
    NSString * _lookupHintDomain;
    int  _lookupSelectionType;
    bool  _managedDevice;
    _PARMapsSession * _mapsSession;
    int  _measurementSystem;
    NSString * _modelVersionL2;
    NSString * _modelVersionL3;
    NSArray * _preferredLanguages;
    NSString * _query;
    NSString * _queryLanguage;
    int  _queryType;
    int  _routineMode;
    NSString * _secretKey;
    bool  _seedBuild;
    int  _sendTopHit;
    _PARSilhouette * _silhouette;
    NSString * _siriLocale;
    NSString * _storeFront;
    _PARSubscriptions * _subscriptions;
    int  _suggest;
    int  _tempUnit;
    NSString * _timeZone;
    int  _transportationMode;
    float  _uiScale;
    NSString * _userGUID;
}

@property (nonatomic, copy) NSString *calendar;
@property (nonatomic, copy) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSData *dictionarySignature;
@property (nonatomic, copy) NSString *effectiveSystemLanguage;
@property (nonatomic) long long exp;
@property (readonly) unsigned long long hash;
@property (nonatomic) int hourFormat;
@property (nonatomic) bool hsEnabled;
@property (nonatomic, copy) NSString *inputMode;
@property (nonatomic, copy) NSData *installedAppsSignature;
@property (nonatomic) bool internalBuild;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *localSuggestions;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, retain) _PARLocation *location;
@property (nonatomic, copy) NSString *lookupAppBundleId;
@property (nonatomic, copy) NSString *lookupHintDomain;
@property (nonatomic) int lookupSelectionType;
@property (nonatomic) bool managedDevice;
@property (nonatomic, retain) _PARMapsSession *mapsSession;
@property (nonatomic) int measurementSystem;
@property (nonatomic, copy) NSString *modelVersionL2;
@property (nonatomic, copy) NSString *modelVersionL3;
@property (nonatomic, copy) NSArray *preferredLanguages;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, copy) NSString *queryLanguage;
@property (nonatomic) int queryType;
@property (nonatomic) int routineMode;
@property (nonatomic, copy) NSString *secretKey;
@property (nonatomic) bool seedBuild;
@property (nonatomic) int sendTopHit;
@property (nonatomic, retain) _PARSilhouette *silhouette;
@property (nonatomic, copy) NSString *siriLocale;
@property (nonatomic, copy) NSString *storeFront;
@property (nonatomic, retain) _PARSubscriptions *subscriptions;
@property (nonatomic) int suggest;
@property (readonly) Class superclass;
@property (nonatomic) int tempUnit;
@property (nonatomic, copy) NSString *timeZone;
@property (nonatomic) int transportationMode;
@property (nonatomic) float uiScale;
@property (nonatomic, copy) NSString *userGUID;

- (void).cxx_destruct;
- (void)addLocalSuggestions:(id)arg1;
- (void)addPreferredLanguages:(id)arg1;
- (id)calendar;
- (void)clearLocalSuggestions;
- (void)clearPreferredLanguages;
- (id)countryCode;
- (id)dictionaryRepresentation;
- (id)dictionarySignature;
- (id)effectiveSystemLanguage;
- (long long)exp;
- (unsigned long long)hash;
- (int)hourFormat;
- (bool)hsEnabled;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)inputMode;
- (id)installedAppsSignature;
- (bool)internalBuild;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)localSuggestions;
- (id)localSuggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)localSuggestionsCount;
- (id)locale;
- (id)location;
- (id)lookupAppBundleId;
- (id)lookupHintDomain;
- (int)lookupSelectionType;
- (bool)managedDevice;
- (id)mapsSession;
- (int)measurementSystem;
- (id)modelVersionL2;
- (id)modelVersionL3;
- (id)preferredLanguages;
- (id)preferredLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)preferredLanguagesCount;
- (id)query;
- (id)queryLanguage;
- (int)queryType;
- (bool)readFrom:(id)arg1;
- (int)routineMode;
- (id)secretKey;
- (bool)seedBuild;
- (int)sendTopHit;
- (void)setCalendar:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDictionarySignature:(id)arg1;
- (void)setEffectiveSystemLanguage:(id)arg1;
- (void)setExp:(long long)arg1;
- (void)setHourFormat:(int)arg1;
- (void)setHsEnabled:(bool)arg1;
- (void)setInputMode:(id)arg1;
- (void)setInstalledAppsSignature:(id)arg1;
- (void)setInternalBuild:(bool)arg1;
- (void)setLocalSuggestions:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLookupAppBundleId:(id)arg1;
- (void)setLookupHintDomain:(id)arg1;
- (void)setLookupSelectionType:(int)arg1;
- (void)setManagedDevice:(bool)arg1;
- (void)setMapsSession:(id)arg1;
- (void)setMeasurementSystem:(int)arg1;
- (void)setModelVersionL2:(id)arg1;
- (void)setModelVersionL3:(id)arg1;
- (void)setPreferredLanguages:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryLanguage:(id)arg1;
- (void)setQueryType:(int)arg1;
- (void)setRoutineMode:(int)arg1;
- (void)setSecretKey:(id)arg1;
- (void)setSeedBuild:(bool)arg1;
- (void)setSendTopHit:(int)arg1;
- (void)setSilhouette:(id)arg1;
- (void)setSiriLocale:(id)arg1;
- (void)setStoreFront:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (void)setSuggest:(int)arg1;
- (void)setTempUnit:(int)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTransportationMode:(int)arg1;
- (void)setUiScale:(float)arg1;
- (void)setUserGUID:(id)arg1;
- (id)silhouette;
- (id)siriLocale;
- (id)storeFront;
- (id)subscriptions;
- (int)suggest;
- (int)tempUnit;
- (id)timeZone;
- (int)transportationMode;
- (float)uiScale;
- (id)userGUID;
- (void)writeTo:(id)arg1;

@end
