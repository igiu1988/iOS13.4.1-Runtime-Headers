/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFAirQualityConditions : NSObject <NSCopying, NSSecureCoding> {
    NSString * _airQualityScale;
    unsigned long long  _category;
    NSDate * _date;
    NSDate * _expirationDate;
    NSLocale * _locale;
    NSString * _localizedAirQualityCategory;
    unsigned long long  _localizedAirQualityIndex;
    WFAQIScaleCategory * _localizedAirQualityScaleCategory;
    NSString * _localizedDisclaimer;
    WFLocation * _location;
    NSArray * _pollutants;
    WFAirPollutant * _primaryPollutant;
    NSString * _provider;
}

@property (nonatomic, copy) NSString *airQualityScale;
@property (nonatomic) unsigned long long category;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic, copy) NSString *localizedAirQualityCategory;
@property (nonatomic) unsigned long long localizedAirQualityIndex;
@property (nonatomic, retain) WFAQIScaleCategory *localizedAirQualityScaleCategory;
@property (nonatomic, retain) NSString *localizedDisclaimer;
@property (nonatomic, retain) WFLocation *location;
@property (nonatomic, readonly) UIColor *nwm_color;
@property (nonatomic, readonly) NSString *nwm_localizedDescriptionLong;
@property (nonatomic, readonly) NSString *nwm_localizedDescriptionShort;
@property (nonatomic, retain) NSArray *pollutants;
@property (nonatomic, retain) WFAirPollutant *primaryPollutant;
@property (nonatomic, retain) NSString *provider;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)airQualityIndex;
- (id)airQualityScale;
- (unsigned long long)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (bool)isExpired;
- (id)locale;
- (id)localizedAirQualityCategory;
- (unsigned long long)localizedAirQualityIndex;
- (id)localizedAirQualityScaleCategory;
- (id)localizedDisclaimer;
- (id)location;
- (id)pollutants;
- (id)primaryPollutant;
- (id)provider;
- (void)setAirQualityScale:(id)arg1;
- (void)setCategory:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocalizedAirQualityCategory:(id)arg1;
- (void)setLocalizedAirQualityIndex:(unsigned long long)arg1;
- (void)setLocalizedAirQualityScaleCategory:(id)arg1;
- (void)setLocalizedDisclaimer:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPollutants:(id)arg1;
- (void)setPrimaryPollutant:(id)arg1;
- (void)setProvider:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion

+ (id)_nwm_descriptionForAirQualityConditions:(id)arg1 atLocation:(id)arg2 withExtension:(id)arg3;
+ (id)_nwm_v2AirQualityConditionsDescriptionKeyForCategory:(unsigned long long)arg1 atLocation:(id)arg2;
+ (id)nwm_allIndicesOfAirQualityScaleForLocation:(id)arg1;
+ (id)nwm_longDescriptionForAirQualityConditions:(id)arg1 atLocation:(id)arg2;
+ (unsigned long long)nwm_maxIndexAirQualityScaleForLocation:(id)arg1;
+ (id)nwm_shortDescriptionForAirQualityConditions:(id)arg1 atLocation:(id)arg2;
+ (id)nwm_titleForAirQualityConditions:(id)arg1 atLocation:(id)arg2;

- (id)nwm_color;
- (id)nwm_localizedDescriptionLong;
- (id)nwm_localizedDescriptionShort;

@end
