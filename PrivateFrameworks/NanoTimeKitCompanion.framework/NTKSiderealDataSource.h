/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSiderealDataSource : NSObject {
    float  _altitudes;
    NSDate * _cachedDate;
    NSDate * _cachedStartOfDay;
    NSDate * _cachedStartOfNextDay;
    NSCalendar * _currentCalendar;
    NSOrderedSet * _daytimeEvents;
    <NTKSiderealDataSourceDelegate> * _delegate;
    NSDate * _endOfDayForReferenceDate;
    bool  _isConstantSunUpOrDown;
    NSString * _locationManagerToken;
    NSDate * _referenceDate;
    CLLocation * _referenceLocation;
    NSOrderedSet * _sectors;
    NSOrderedSet * _solarEvents;
    NSDate * _startOfDayForReferenceDate;
    CLKUIAlmanacTransitInfo * _sunriseSunsetInfo;
    NSArray * _waypoints;
}

@property (nonatomic) <NTKSiderealDataSourceDelegate> *delegate;
@property (nonatomic) bool isConstantSunUpOrDown;
@property (nonatomic, retain) NSDate *referenceDate;
@property (nonatomic, retain) CLLocation *referenceLocation;
@property (nonatomic, retain) NSOrderedSet *sectors;
@property (nonatomic, retain) NSOrderedSet *solarEvents;
@property (nonatomic, retain) CLKUIAlmanacTransitInfo *sunriseSunsetInfo;
@property (nonatomic, retain) NSArray *waypoints;

- (void).cxx_destruct;
- (id)_allAvailableSolarEvents;
- (bool)_didLocationChangeSignificantlyFromOldLocation:(id)arg1 toNewLocation:(id)arg2;
- (long long)_endOfDayEventFollowingSolarEvent:(long long)arg1;
- (id)_eventWithType:(long long)arg1 time:(id)arg2;
- (struct { double x1; double x2; })_geoLocationForReferenceLocation;
- (void)_loadStartEndDates;
- (void)_locationManagerUpdatedLocation:(id)arg1 error:(id)arg2;
- (void)_notifyDataDidUpdate;
- (id)_placeholderSolarEvents;
- (double)_solarPercentageToDegree:(double)arg1;
- (long long)_startOfDayEventPreceedingFirstSolarEvent:(long long)arg1;
- (void)_updateData;
- (void)_updateDayEvents;
- (void)_updateSolarEvents;
- (void)_updateSolarSectors;
- (void)_updateWaypoints;
- (struct { float x1; float x2; float x3; })altitudeForProgress:(double)arg1;
- (bool)date:(id)arg1 isBetweenDate:(id)arg2 andDate:(id)arg3;
- (id)daytimeEvents;
- (id)delegate;
- (void)ensureLocation:(id)arg1;
- (id)init;
- (id)interpolateBetweenCalendricalMidnights:(double)arg1;
- (bool)isConstantSunUpOrDown;
- (bool)isDateInReferenceDate:(id)arg1;
- (id)referenceDate;
- (id)referenceLocation;
- (double)reverseInterpolateBetweenCalendricalMidnights:(id)arg1;
- (id)sectors;
- (void)setDelegate:(id)arg1;
- (void)setIsConstantSunUpOrDown:(bool)arg1;
- (void)setReferenceDate:(id)arg1;
- (void)setReferenceLocation:(id)arg1;
- (void)setSectors:(id)arg1;
- (void)setSolarEvents:(id)arg1;
- (void)setSunriseSunsetInfo:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (id)solarEvents;
- (void)startLocationUpdates;
- (void)stopLocationUpdates;
- (id)sunriseSunsetInfo;
- (void)updateForSignificantTimeChange;
- (void)updateForTimeZoneChange;
- (void)updateModelWithDate:(id)arg1;
- (id)waypoints;

@end
