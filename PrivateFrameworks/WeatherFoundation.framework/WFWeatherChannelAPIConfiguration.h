/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFWeatherChannelAPIConfiguration : NSObject <WFAPIConfigurationProtocol> {
    <WFForecastDataParser> * _defaultForecastParser;
    Class  _defaultForecastRequestFormatterClass;
    NSMutableDictionary * _requestFormatterForForecastType;
    NSMutableDictionary * _requestParserForForecastType;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <WFForecastDataParser> *defaultForecastParser;
@property (nonatomic, retain) Class defaultForecastRequestFormatterClass;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, retain) NSMutableDictionary *requestFormatterForForecastType;
@property (nonatomic, retain) NSMutableDictionary *requestParserForForecastType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultForecastParser;
- (Class)defaultForecastRequestFormatterClass;
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 error:(id*)arg4 rules:(id)arg5;
- (id)hostUrl;
- (id)initWithVersion:(id)arg1;
- (bool)isValid;
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 rules:(id)arg7;
- (id)requestFormatterForForecastType;
- (id)requestParserForForecastType;
- (void)setDefaultForecastFormatter:(Class)arg1;
- (void)setDefaultForecastParser:(id)arg1;
- (void)setDefaultForecastRequestFormatterClass:(Class)arg1;
- (void)setRequestFormatter:(Class)arg1 forForecastType:(unsigned long long)arg2;
- (void)setRequestFormatterForForecastType:(id)arg1;
- (void)setRequestParser:(id)arg1 forForecastType:(unsigned long long)arg2;
- (void)setRequestParserForForecastType:(id)arg1;

@end
