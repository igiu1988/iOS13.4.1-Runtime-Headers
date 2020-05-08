/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFWeatherData : NSObject <NSCopying, NSSecureCoding, WFNaming> {
    unsigned long long  _condition;
    NSDate * _date;
    NSMeasurement * _dewpoint;
    NSMeasurement * _feelsLikeTemperature;
    NSMeasurement * _highTemperature;
    NSNumber * _humidity;
    NSString * _localizedAirQualityCategory;
    NSNumber * _localizedAirQualityIndex;
    CLLocation * _location;
    NSMeasurement * _lowTemperature;
    NSArray * _pollutants;
    NSMeasurement * _precipitationAmount;
    NSNumber * _precipitationChance;
    NSMeasurement * _pressure;
    NSDate * _sunriseTime;
    NSDate * _sunsetTime;
    NSMeasurement * _temperature;
    NSNumber * _uvIndex;
    NSMeasurement * _visibility;
    NSString * _windDirection;
    NSMeasurement * _windSpeed;
}

@property (nonatomic, readonly) unsigned long long condition;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSMeasurement *dewpoint;
@property (nonatomic, readonly) NSMeasurement *feelsLikeTemperature;
@property (nonatomic, readonly) NSMeasurement *highTemperature;
@property (nonatomic, readonly, copy) NSNumber *humidity;
@property (nonatomic, readonly, copy) NSString *localizedAirQualityCategory;
@property (nonatomic, readonly, copy) NSNumber *localizedAirQualityIndex;
@property (nonatomic, readonly) NSString *localizedConditionString;
@property (nonatomic, readonly, copy) CLLocation *location;
@property (nonatomic, readonly) NSMeasurement *lowTemperature;
@property (nonatomic, readonly, copy) NSArray *pollutants;
@property (nonatomic, readonly) NSMeasurement *precipitationAmount;
@property (nonatomic, readonly, copy) NSNumber *precipitationChance;
@property (nonatomic, readonly) NSMeasurement *pressure;
@property (nonatomic, readonly, copy) NSDate *sunriseTime;
@property (nonatomic, readonly, copy) NSDate *sunsetTime;
@property (nonatomic, readonly) NSMeasurement *temperature;
@property (nonatomic, readonly, copy) NSNumber *uvIndex;
@property (nonatomic, readonly) NSMeasurement *visibility;
@property (nonatomic, readonly, copy) NSString *wfName;
@property (nonatomic, readonly, copy) NSString *windDirection;
@property (nonatomic, readonly) NSMeasurement *windSpeed;

+ (id)precipitationAmountUnit;
+ (id)pressureUnit;
+ (bool)supportsSecureCoding;
+ (id)temperatureUnit;
+ (bool)usesMetricSystem;
+ (id)visibilityUnit;
+ (id)windSpeedUnit;

- (void).cxx_destruct;
- (void)addAirQualityConditions:(id)arg1;
- (void)addMissingDataFromWeatherData:(id)arg1;
- (unsigned long long)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)dewpoint;
- (void)encodeWithCoder:(id)arg1;
- (id)feelsLikeTemperature;
- (id)highTemperature;
- (id)humidity;
- (id)initWithCoder:(id)arg1;
- (id)initWithWeatherConditions:(id)arg1;
- (id)localizedAirQualityCategory;
- (id)localizedAirQualityIndex;
- (id)localizedConditionString;
- (id)location;
- (id)lowTemperature;
- (id)measurementForTemperature:(id)arg1;
- (id)pollutants;
- (id)precipitationAmount;
- (id)precipitationChance;
- (id)pressure;
- (id)sunriseTime;
- (id)sunsetTime;
- (id)temperature;
- (id)temperatureString;
- (id)uvIndex;
- (id)visibility;
- (unsigned long long)weatherConditionForConditionCode:(unsigned long long)arg1;
- (id)wfName;
- (id)windDirection;
- (id)windSpeed;

@end
