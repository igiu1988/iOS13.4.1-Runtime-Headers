/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WAForecastOperation : NSOperation {
    WFAirQualityConditions * _airQualityConditions;
    WFAirQualityRequest * _airQualityRequest;
    NSCalendar * _calendar;
    City * _city;
    WFServiceConnection * _connection;
    WACurrentForecast * _currentConditions;
    WFWeatherConditions * _currentWeatherConditions;
    NSArray * _dailyForecastConditions;
    WFDailyForecastRequest * _dailyForecastRequest;
    NSArray * _dailyForecasts;
    NSError * _error;
    NSArray * _hourlyForecastConditions;
    WFHourlyForecastRequest * _hourlyForecastRequest;
    NSArray * _hourlyForecasts;
    bool  _isDay;
    NSDictionary * _links;
    NSLocale * _locale;
    WFLocation * _location;
    NSData * _rawAPIData;
    bool  _shouldAttachRawAPIData;
    NSDate * _sunrise;
    NSDate * _sunset;
    WFForecastRequest * _todayForecastRequest;
    NSString * _trackingParameter;
}

@property (nonatomic, retain) WFAirQualityConditions *airQualityConditions;
@property (nonatomic, retain) WFAirQualityRequest *airQualityRequest;
@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic, retain) City *city;
@property (nonatomic, retain) WFServiceConnection *connection;
@property (nonatomic, retain) WACurrentForecast *currentConditions;
@property (nonatomic, retain) WFWeatherConditions *currentWeatherConditions;
@property (nonatomic, retain) NSArray *dailyForecastConditions;
@property (nonatomic, retain) WFDailyForecastRequest *dailyForecastRequest;
@property (nonatomic, retain) NSArray *dailyForecasts;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) WAForecastModel *forecastModel;
@property (nonatomic, retain) NSArray *hourlyForecastConditions;
@property (nonatomic, retain) WFHourlyForecastRequest *hourlyForecastRequest;
@property (nonatomic, retain) NSArray *hourlyForecasts;
@property (nonatomic) bool isDay;
@property (nonatomic, retain) NSDictionary *links;
@property (retain) NSLocale *locale;
@property (nonatomic, retain) WFLocation *location;
@property (nonatomic, retain) NSData *rawAPIData;
@property (nonatomic) bool shouldAttachRawAPIData;
@property (nonatomic, retain) NSDate *sunrise;
@property (nonatomic, retain) NSDate *sunset;
@property (nonatomic, retain) WFForecastRequest *todayForecastRequest;
@property (retain) NSString *trackingParameter;

- (void).cxx_destruct;
- (void)_determineSunriseAndSunset;
- (void)_failWithError:(id)arg1;
- (void)_mapReferralLinks;
- (bool)_needsGeolocation;
- (id)airQualityConditions;
- (id)airQualityRequest;
- (id)calendar;
- (void)cancel;
- (id)city;
- (id)connection;
- (id)currentConditions;
- (id)currentWeatherConditions;
- (id)dailyForecastConditions;
- (id)dailyForecastRequest;
- (id)dailyForecasts;
- (id)error;
- (id)forecastModel;
- (id)hourlyForecastConditions;
- (id)hourlyForecastRequest;
- (id)hourlyForecasts;
- (id)initWithCity:(id)arg1 onConnection:(id)arg2;
- (id)initWithLocation:(id)arg1 onConnection:(id)arg2;
- (bool)isDay;
- (id)links;
- (id)locale;
- (id)location;
- (void)main;
- (id)rawAPIData;
- (void)setAirQualityConditions:(id)arg1;
- (void)setAirQualityRequest:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCity:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setCurrentConditions:(id)arg1;
- (void)setCurrentWeatherConditions:(id)arg1;
- (void)setDailyForecastConditions:(id)arg1;
- (void)setDailyForecastRequest:(id)arg1;
- (void)setDailyForecasts:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHourlyForecastConditions:(id)arg1;
- (void)setHourlyForecastRequest:(id)arg1;
- (void)setHourlyForecasts:(id)arg1;
- (void)setIsDay:(bool)arg1;
- (void)setLinks:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setRawAPIData:(id)arg1;
- (void)setShouldAttachRawAPIData:(bool)arg1;
- (void)setSunrise:(id)arg1;
- (void)setSunset:(id)arg1;
- (void)setTodayForecastRequest:(id)arg1;
- (void)setTrackingParameter:(id)arg1;
- (bool)shouldAttachRawAPIData;
- (id)sunrise;
- (id)sunset;
- (id)todayForecastRequest;
- (id)trackingParameter;

@end
