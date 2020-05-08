/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesizerOld : NSObject <GEOETAUpdaterDelegate, GEORouteHypothesizerUpdaterDelegate> {
    NSDate * _arrivalDate;
    GEOETARoute * _baselineETARoute;
    <GEORouteHypothesizerDelegate> * _delegate;
    NSDate * _departureDate;
    GEOComposedWaypoint * _destination;
    unsigned long long  _etaUpdateFrequency;
    double  _etaUpdateInterval;
    GEOETAUpdater * _etaUpdater;
    GEODirectionsRequestFeedback * _feedback;
    id /* block */  _handler;
    GEORouteHypothesisOld * _hypothesis;
    NSDate * _lastETARequestDate;
    GEOLocation * _lastLocation;
    GEOETARoute * _liveETARoute;
    GEOLocationShifter * _locationShifter;
    GEORouteAttributes * _routeAttributes;
    GEOComposedWaypoint * _source;
    NSDate * _suggestedNextUpdateDate;
    GEORouteHypothesizerUpdater * _updater;
    NSData * _usualRouteData;
}

@property (nonatomic, readonly) NSDate *arrivalDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEORouteHypothesizerDelegate> *delegate;
@property (nonatomic, readonly) NSDate *departureDate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOComposedWaypoint *destination;
@property (nonatomic) unsigned long long etaUpdateFrequency;
@property (nonatomic, retain) GEODirectionsRequestFeedback *feedback;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, readonly) GEOComposedWaypoint *source;
@property (nonatomic, readonly) NSDate *suggestedNextUpdateDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsDirections;
@property (nonatomic, readonly) bool supportsLiveTraffic;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_createUpdaterWithStartingLocation:(id)arg1;
- (void)_refreshETAWithRouteMatch:(id)arg1;
- (void)_updateETAWithRouteMatch:(id)arg1;
- (void)_updateLocation:(id)arg1 hypothesisHandler:(id /* block */)arg2;
- (void)_updateLocationAndETAUpdateInterval;
- (void)addRouteAttributes:(id)arg1;
- (id)arrivalDate;
- (void)dealloc;
- (id)delegate;
- (id)departureDate;
- (id)destination;
- (unsigned long long)etaUpdateFrequency;
- (void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedError:(id)arg2;
- (void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
- (void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;
- (id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
- (void)etaUpdaterUpdatedETA:(id)arg1;
- (id)feedback;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 usualRouteData:(id)arg4;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 usualRouteData:(id)arg4;
- (id)route;
- (void)routeHypothesizerUpdater:(id)arg1 receivedNewRoute:(id)arg2 request:(id)arg3 response:(id)arg4;
- (void)routeHypothesizerUpdater:(id)arg1 willRequestNewRoute:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEtaUpdateFrequency:(unsigned long long)arg1;
- (void)setFeedback:(id)arg1;
- (id)source;
- (id)suggestedNextUpdateDate;
- (bool)supportsDirections;
- (bool)supportsLiveTraffic;
- (void)updateLocation:(id)arg1 hypothesisHandler:(id /* block */)arg2;

@end
