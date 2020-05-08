/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCompanionRouteStatus : PBCodable <NSCopying> {
    unsigned int  _distanceRemainingOnRoute;
    unsigned int  _distanceToManeuver;
    unsigned int  _distanceToRoute;
    int  _feedbackType;
    struct { 
        unsigned int has_timestamp : 1; 
        unsigned int has_distanceRemainingOnRoute : 1; 
        unsigned int has_distanceToManeuver : 1; 
        unsigned int has_distanceToRoute : 1; 
        unsigned int has_feedbackType : 1; 
        unsigned int has_hapticsType : 1; 
        unsigned int has_remainingTime : 1; 
        unsigned int has_routeLocationIndex : 1; 
        unsigned int has_routeLocationOffset : 1; 
        unsigned int has_stepID : 1; 
        unsigned int has_guidancePromptsEnabled : 1; 
        unsigned int has_isConnectedToCarplay : 1; 
        unsigned int has_lowGuidanceNavigation : 1; 
        unsigned int read_selectedRideIndexs : 1; 
        unsigned int read_location : 1; 
        unsigned int read_routeID : 1; 
        unsigned int read_routeMatchCoordinate : 1; 
        unsigned int wrote_selectedRideIndexs : 1; 
        unsigned int wrote_location : 1; 
        unsigned int wrote_routeID : 1; 
        unsigned int wrote_routeMatchCoordinate : 1; 
        unsigned int wrote_timestamp : 1; 
        unsigned int wrote_distanceRemainingOnRoute : 1; 
        unsigned int wrote_distanceToManeuver : 1; 
        unsigned int wrote_distanceToRoute : 1; 
        unsigned int wrote_feedbackType : 1; 
        unsigned int wrote_hapticsType : 1; 
        unsigned int wrote_remainingTime : 1; 
        unsigned int wrote_routeLocationIndex : 1; 
        unsigned int wrote_routeLocationOffset : 1; 
        unsigned int wrote_stepID : 1; 
        unsigned int wrote_guidancePromptsEnabled : 1; 
        unsigned int wrote_isConnectedToCarplay : 1; 
        unsigned int wrote_lowGuidanceNavigation : 1; 
    }  _flags;
    bool  _guidancePromptsEnabled;
    int  _hapticsType;
    bool  _isConnectedToCarplay;
    GEOLocation * _location;
    bool  _lowGuidanceNavigation;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _remainingTime;
    NSData * _routeID;
    unsigned int  _routeLocationIndex;
    float  _routeLocationOffset;
    GEOLatLng * _routeMatchCoordinate;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _selectedRideIndexs;
    unsigned int  _stepID;
    double  _timestamp;
}

@property (nonatomic) unsigned int distanceRemainingOnRoute;
@property (nonatomic) unsigned int distanceToManeuver;
@property (nonatomic) unsigned int distanceToRoute;
@property (nonatomic, readonly) unsigned int effectiveDistanceToManeuver;
@property (nonatomic, readonly) unsigned int effectiveStepID;
@property (nonatomic) int feedbackType;
@property (nonatomic) bool guidancePromptsEnabled;
@property (nonatomic) int hapticsType;
@property (nonatomic) bool hasDistanceRemainingOnRoute;
@property (nonatomic) bool hasDistanceToManeuver;
@property (nonatomic) bool hasDistanceToRoute;
@property (nonatomic, readonly) bool hasEffectiveDistanceToManeuver;
@property (nonatomic, readonly) bool hasEffectiveStepID;
@property (nonatomic) bool hasFeedbackType;
@property (nonatomic) bool hasGuidancePromptsEnabled;
@property (nonatomic) bool hasHapticsType;
@property (nonatomic) bool hasIsConnectedToCarplay;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasLowGuidanceNavigation;
@property (nonatomic) bool hasRemainingTime;
@property (nonatomic, readonly) bool hasRouteID;
@property (nonatomic) bool hasRouteLocationIndex;
@property (nonatomic) bool hasRouteLocationOffset;
@property (nonatomic, readonly) bool hasRouteMatchCoordinate;
@property (nonatomic) bool hasStepID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool isConnectedToCarplay;
@property (nonatomic, readonly) bool isNavigating;
@property (nonatomic, readonly) bool isRecalculating;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic) bool lowGuidanceNavigation;
@property (nonatomic) unsigned int remainingTime;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic) unsigned int routeLocationIndex;
@property (nonatomic) float routeLocationOffset;
@property (nonatomic, retain) GEOLatLng *routeMatchCoordinate;
@property (nonatomic, readonly) unsigned int*selectedRideIndexs;
@property (nonatomic, readonly) unsigned long long selectedRideIndexsCount;
@property (nonatomic, readonly) NSArray *selectedRideIndices;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) double timestamp;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsFeedbackType:(id)arg1;
- (int)StringAsHapticsType:(id)arg1;
- (void)_addNoFlagsSelectedRideIndex:(unsigned int)arg1;
- (void)_readLocation;
- (void)_readRouteID;
- (void)_readRouteMatchCoordinate;
- (void)_readSelectedRideIndexs;
- (void)_updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1;
- (void)addSelectedRideIndex:(unsigned int)arg1;
- (void)clearSelectedRideIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distanceRemainingOnRoute;
- (unsigned int)distanceToManeuver;
- (unsigned int)distanceToRoute;
- (unsigned int)effectiveDistanceToManeuver;
- (unsigned int)effectiveStepID;
- (unsigned int)effectiveStepIDInRoute:(id)arg1;
- (int)feedbackType;
- (id)feedbackTypeAsString:(int)arg1;
- (bool)guidancePromptsEnabled;
- (int)hapticsType;
- (id)hapticsTypeAsString:(int)arg1;
- (bool)hasDistanceRemainingOnRoute;
- (bool)hasDistanceToManeuver;
- (bool)hasDistanceToRoute;
- (bool)hasEffectiveDistanceToManeuver;
- (bool)hasEffectiveStepID;
- (bool)hasFeedbackType;
- (bool)hasGuidancePromptsEnabled;
- (bool)hasHapticsType;
- (bool)hasIsConnectedToCarplay;
- (bool)hasLocation;
- (bool)hasLowGuidanceNavigation;
- (bool)hasRemainingTime;
- (bool)hasRouteID;
- (bool)hasRouteLocationIndex;
- (bool)hasRouteLocationOffset;
- (bool)hasRouteMatchCoordinate;
- (bool)hasStepID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithRoute:(id)arg1 routeID:(id)arg2;
- (id)initWithRouteID:(id)arg1;
- (bool)isConnectedToCarplay;
- (bool)isEqual:(id)arg1;
- (bool)isNavigating;
- (bool)isRecalculating;
- (id)location;
- (bool)lowGuidanceNavigation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)remainingTime;
- (id)routeID;
- (unsigned int)routeLocationIndex;
- (float)routeLocationOffset;
- (id)routeMatchCoordinate;
- (unsigned int)selectedRideIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)selectedRideIndexs;
- (unsigned long long)selectedRideIndexsCount;
- (id)selectedRideIndices;
- (void)setDistanceRemainingOnRoute:(unsigned int)arg1;
- (void)setDistanceToManeuver:(unsigned int)arg1;
- (void)setDistanceToRoute:(unsigned int)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setHapticsType:(int)arg1;
- (void)setHasDistanceRemainingOnRoute:(bool)arg1;
- (void)setHasDistanceToManeuver:(bool)arg1;
- (void)setHasDistanceToRoute:(bool)arg1;
- (void)setHasFeedbackType:(bool)arg1;
- (void)setHasGuidancePromptsEnabled:(bool)arg1;
- (void)setHasHapticsType:(bool)arg1;
- (void)setHasIsConnectedToCarplay:(bool)arg1;
- (void)setHasLowGuidanceNavigation:(bool)arg1;
- (void)setHasRemainingTime:(bool)arg1;
- (void)setHasRouteLocationIndex:(bool)arg1;
- (void)setHasRouteLocationOffset:(bool)arg1;
- (void)setHasStepID:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setLowGuidanceNavigation:(bool)arg1;
- (void)setRemainingTime:(unsigned int)arg1;
- (void)setRouteID:(id)arg1;
- (void)setRouteLocationIndex:(unsigned int)arg1;
- (void)setRouteLocationOffset:(float)arg1;
- (void)setRouteMatchCoordinate:(id)arg1;
- (void)setSelectedRideIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setStepID:(unsigned int)arg1;
- (void)setTimestamp:(double)arg1;
- (unsigned int)stepID;
- (double)timestamp;
- (void)updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1 routeID:(id)arg2;
- (void)updateFeedbackWithNavigationState:(int)arg1 locationUnreliable:(bool)arg2 announcementStage:(unsigned long long)arg3 nextAnnouncementStage:(unsigned long long)arg4 nextAnnouncementTime:(double)arg5;
- (void)updateWithRoute:(id)arg1 routeID:(id)arg2;
- (void)writeTo:(id)arg1;

@end
