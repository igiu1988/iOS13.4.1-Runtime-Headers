/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOBusinessHours : NSObject {
    GEOPDBusinessHours * _hours;
    bool  _isBrandTypeHours;
    NSArray * _placeDailyHours;
    NSArray * _placeDailyNormalizedHours;
}

@property (nonatomic, readonly) unsigned int closingSoonThresdholdInSeconds;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long hoursType;
@property (nonatomic, readonly) bool isBrandTypeHours;
@property (nonatomic, readonly) NSString *localizedMessage;
@property (nonatomic, readonly) unsigned int openingSoonThresholdInSeconds;
@property (nonatomic, readonly) NSArray *pdHours;
@property (nonatomic, readonly) NSArray *placeDailyHours;
@property (nonatomic, readonly) NSArray *placeDailyNormalizedHours;
@property (nonatomic, readonly) NSDate *startDate;

+ (void)divideBusinessHoursBasedOnTodaysDate:(id)arg1 compareDate:(id)arg2 completion:(id /* block */)arg3;
+ (id)prioritizeBusinessHours:(id)arg1 compareDate:(id)arg2;

- (void).cxx_destruct;
- (unsigned int)closingSoonThresdholdInSeconds;
- (id)endDate;
- (unsigned long long)hoursType;
- (id)initWithGEOPDBusinessHours:(id)arg1 timeZone:(id)arg2;
- (id)initWithGEOPDHours:(id)arg1 timeZone:(id)arg2;
- (bool)isBrandTypeHours;
- (id)localizedMessage;
- (unsigned int)openingSoonThresholdInSeconds;
- (id)pdHours;
- (bool)pdHoursAreValid;
- (id)placeDailyHours;
- (id)placeDailyNormalizedHours;
- (id)startDate;

@end
