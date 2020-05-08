/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORoute : PBCodable <NSCopying> {
    NSMutableArray * _advisoryNotices;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _advisorys;
    GEOAlertNonRecommendedRouteText * _alertNonRecommendedRouteText;
    unsigned int  _arrivalParameterIndex;
    NSData * _arrivalRouteID;
    unsigned int  _arrivalStepID;
    bool  _avoidsHighways;
    bool  _avoidsTolls;
    bool  _avoidsTraffic;
    NSData * _basicPoints;
    NSData * _departureRouteID;
    unsigned int  _departureStepID;
    unsigned int  _distance;
    int  _drivingSide;
    NSMutableArray * _endingRouteInstructions;
    NSMutableArray * _enrouteNotices;
    unsigned int  _expectedTime;
    struct { 
        unsigned int has_arrivalStepID : 1; 
        unsigned int has_arrivalParameterIndex : 1; 
        unsigned int has_departureStepID : 1; 
        unsigned int has_distance : 1; 
        unsigned int has_drivingSide : 1; 
        unsigned int has_expectedTime : 1; 
        unsigned int has_historicTravelTime : 1; 
        unsigned int has_routeType : 1; 
        unsigned int has_staticTravelTime : 1; 
        unsigned int has_transportType : 1; 
        unsigned int has_travelTimeAggressiveEstimate : 1; 
        unsigned int has_travelTimeConservativeEstimate : 1; 
        unsigned int has_avoidsHighways : 1; 
        unsigned int has_avoidsTolls : 1; 
        unsigned int has_avoidsTraffic : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_advisorys : 1; 
        unsigned int read_incidentEndOffsetsInRoutes : 1; 
        unsigned int read_incidentIndices : 1; 
        unsigned int read_trafficColorOffsets : 1; 
        unsigned int read_trafficColors : 1; 
        unsigned int read_advisoryNotices : 1; 
        unsigned int read_alertNonRecommendedRouteText : 1; 
        unsigned int read_arrivalRouteID : 1; 
        unsigned int read_basicPoints : 1; 
        unsigned int read_departureRouteID : 1; 
        unsigned int read_endingRouteInstructions : 1; 
        unsigned int read_enrouteNotices : 1; 
        unsigned int read_guidanceEvents : 1; 
        unsigned int read_laneWidths : 1; 
        unsigned int read_launchAndGoCardText : 1; 
        unsigned int read_name : 1; 
        unsigned int read_phoneticName : 1; 
        unsigned int read_roadComplexitys : 1; 
        unsigned int read_routeID : 1; 
        unsigned int read_routeNames : 1; 
        unsigned int read_routeDescriptions : 1; 
        unsigned int read_routePlanningDescription : 1; 
        unsigned int read_startingRouteInstructions : 1; 
        unsigned int read_steps : 1; 
        unsigned int read_trafficDescriptionLong : 1; 
        unsigned int read_trafficDescription : 1; 
        unsigned int read_unpackedLatLngVertices : 1; 
        unsigned int read_zilchPoints : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_advisorys : 1; 
        unsigned int wrote_incidentEndOffsetsInRoutes : 1; 
        unsigned int wrote_incidentIndices : 1; 
        unsigned int wrote_trafficColorOffsets : 1; 
        unsigned int wrote_trafficColors : 1; 
        unsigned int wrote_advisoryNotices : 1; 
        unsigned int wrote_alertNonRecommendedRouteText : 1; 
        unsigned int wrote_arrivalRouteID : 1; 
        unsigned int wrote_basicPoints : 1; 
        unsigned int wrote_departureRouteID : 1; 
        unsigned int wrote_endingRouteInstructions : 1; 
        unsigned int wrote_enrouteNotices : 1; 
        unsigned int wrote_guidanceEvents : 1; 
        unsigned int wrote_laneWidths : 1; 
        unsigned int wrote_launchAndGoCardText : 1; 
        unsigned int wrote_name : 1; 
        unsigned int wrote_phoneticName : 1; 
        unsigned int wrote_roadComplexitys : 1; 
        unsigned int wrote_routeID : 1; 
        unsigned int wrote_routeNames : 1; 
        unsigned int wrote_routeDescriptions : 1; 
        unsigned int wrote_routePlanningDescription : 1; 
        unsigned int wrote_startingRouteInstructions : 1; 
        unsigned int wrote_steps : 1; 
        unsigned int wrote_trafficDescriptionLong : 1; 
        unsigned int wrote_trafficDescription : 1; 
        unsigned int wrote_unpackedLatLngVertices : 1; 
        unsigned int wrote_zilchPoints : 1; 
        unsigned int wrote_arrivalStepID : 1; 
        unsigned int wrote_arrivalParameterIndex : 1; 
        unsigned int wrote_departureStepID : 1; 
        unsigned int wrote_distance : 1; 
        unsigned int wrote_drivingSide : 1; 
        unsigned int wrote_expectedTime : 1; 
        unsigned int wrote_historicTravelTime : 1; 
        unsigned int wrote_routeType : 1; 
        unsigned int wrote_staticTravelTime : 1; 
        unsigned int wrote_transportType : 1; 
        unsigned int wrote_travelTimeAggressiveEstimate : 1; 
        unsigned int wrote_travelTimeConservativeEstimate : 1; 
        unsigned int wrote_avoidsHighways : 1; 
        unsigned int wrote_avoidsTolls : 1; 
        unsigned int wrote_avoidsTraffic : 1; 
    }  _flags;
    NSMutableArray * _guidanceEvents;
    unsigned int  _historicTravelTime;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _incidentEndOffsetsInRoutes;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _incidentIndices;
    NSMutableArray * _laneWidths;
    GEOLaunchAndGoCardText * _launchAndGoCardText;
    NSString * _name;
    NSString * _phoneticName;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _roadComplexitys;
    NSMutableArray * _routeDescriptions;
    NSData * _routeID;
    NSMutableArray * _routeNames;
    GEORouteInformation * _routePlanningDescription;
    int  _routeType;
    NSMutableArray * _startingRouteInstructions;
    unsigned int  _staticTravelTime;
    NSMutableArray * _steps;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _trafficColorOffsets;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _trafficColors;
    NSString * _trafficDescription;
    NSString * _trafficDescriptionLong;
    int  _transportType;
    unsigned int  _travelTimeAggressiveEstimate;
    unsigned int  _travelTimeConservativeEstimate;
    PBUnknownFields * _unknownFields;
    NSData * _unpackedLatLngVertices;
    NSData * _zilchPoints;
}

@property (nonatomic, retain) NSMutableArray *advisoryNotices;
@property (nonatomic, readonly) int*advisorys;
@property (nonatomic, readonly) unsigned long long advisorysCount;
@property (nonatomic, retain) GEOAlertNonRecommendedRouteText *alertNonRecommendedRouteText;
@property (nonatomic) unsigned int arrivalParameterIndex;
@property (nonatomic, retain) NSData *arrivalRouteID;
@property (nonatomic) unsigned int arrivalStepID;
@property (nonatomic) bool avoidsHighways;
@property (nonatomic) bool avoidsTolls;
@property (nonatomic) bool avoidsTraffic;
@property (nonatomic, retain) NSData *basicPoints;
@property (nonatomic, retain) NSData *departureRouteID;
@property (nonatomic) unsigned int departureStepID;
@property (nonatomic) unsigned int distance;
@property (nonatomic) int drivingSide;
@property (nonatomic, retain) NSMutableArray *endingRouteInstructions;
@property (nonatomic, retain) NSMutableArray *enrouteNotices;
@property (nonatomic) unsigned int expectedTime;
@property (nonatomic, retain) NSMutableArray *guidanceEvents;
@property (nonatomic, readonly) bool hasAlertNonRecommendedRouteText;
@property (nonatomic) bool hasArrivalParameterIndex;
@property (nonatomic, readonly) bool hasArrivalRouteID;
@property (nonatomic) bool hasArrivalStepID;
@property (nonatomic) bool hasAvoidsHighways;
@property (nonatomic) bool hasAvoidsTolls;
@property (nonatomic) bool hasAvoidsTraffic;
@property (nonatomic, readonly) bool hasBasicPoints;
@property (nonatomic, readonly) bool hasDepartureRouteID;
@property (nonatomic) bool hasDepartureStepID;
@property (nonatomic) bool hasDistance;
@property (nonatomic) bool hasDrivingSide;
@property (nonatomic) bool hasExpectedTime;
@property (nonatomic) bool hasHistoricTravelTime;
@property (nonatomic, readonly) bool hasLaunchAndGoCardText;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasPhoneticName;
@property (nonatomic, readonly) bool hasRouteID;
@property (nonatomic, readonly) bool hasRoutePlanningDescription;
@property (nonatomic) bool hasRouteType;
@property (nonatomic) bool hasStaticTravelTime;
@property (nonatomic, readonly) bool hasTrafficDescription;
@property (nonatomic, readonly) bool hasTrafficDescriptionLong;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) bool hasTravelTimeAggressiveEstimate;
@property (nonatomic) bool hasTravelTimeConservativeEstimate;
@property (nonatomic, readonly) bool hasUnpackedLatLngVertices;
@property (nonatomic, readonly) bool hasZilchPoints;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic, readonly) unsigned int*incidentEndOffsetsInRoutes;
@property (nonatomic, readonly) unsigned long long incidentEndOffsetsInRoutesCount;
@property (nonatomic, readonly) unsigned int*incidentIndices;
@property (nonatomic, readonly) unsigned long long incidentIndicesCount;
@property (nonatomic, retain) NSMutableArray *laneWidths;
@property (nonatomic, retain) GEOLaunchAndGoCardText *launchAndGoCardText;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *phoneticName;
@property (readonly) unsigned int pointCount;
@property (nonatomic, retain) NSMutableArray *roadComplexitys;
@property (nonatomic, retain) NSMutableArray *routeDescriptions;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic, retain) NSMutableArray *routeNames;
@property (nonatomic, retain) GEORouteInformation *routePlanningDescription;
@property (nonatomic) int routeType;
@property (nonatomic, retain) NSMutableArray *startingRouteInstructions;
@property (nonatomic) unsigned int staticTravelTime;
@property (nonatomic, retain) NSMutableArray *steps;
@property (nonatomic, readonly) unsigned int*trafficColorOffsets;
@property (nonatomic, readonly) unsigned long long trafficColorOffsetsCount;
@property (nonatomic, readonly) unsigned int*trafficColors;
@property (nonatomic, readonly) unsigned long long trafficColorsCount;
@property (nonatomic, retain) NSString *trafficDescription;
@property (nonatomic, retain) NSString *trafficDescriptionLong;
@property (nonatomic) int transportType;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSData *unpackedLatLngVertices;
@property (nonatomic, retain) NSData *zilchPoints;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (Class)advisoryNoticeType;
+ (Class)endingRouteInstructionType;
+ (Class)enrouteNoticeType;
+ (Class)guidanceEventType;
+ (bool)isValid:(id)arg1;
+ (Class)laneWidthType;
+ (Class)roadComplexityType;
+ (Class)routeDescriptionType;
+ (Class)routeNameType;
+ (Class)startingRouteInstructionType;
+ (Class)stepType;

- (void).cxx_destruct;
- (int)StringAsAdvisorys:(id)arg1;
- (int)StringAsDrivingSide:(id)arg1;
- (int)StringAsRouteType:(id)arg1;
- (int)StringAsTransportType:(id)arg1;
- (void)_addNoFlagsAdvisory:(int)arg1;
- (void)_addNoFlagsAdvisoryNotice:(id)arg1;
- (void)_addNoFlagsEndingRouteInstruction:(id)arg1;
- (void)_addNoFlagsEnrouteNotice:(id)arg1;
- (void)_addNoFlagsGuidanceEvent:(id)arg1;
- (void)_addNoFlagsIncidentEndOffsetsInRoute:(unsigned int)arg1;
- (void)_addNoFlagsIncidentIndices:(unsigned int)arg1;
- (void)_addNoFlagsLaneWidth:(id)arg1;
- (void)_addNoFlagsRoadComplexity:(id)arg1;
- (void)_addNoFlagsRouteDescription:(id)arg1;
- (void)_addNoFlagsRouteName:(id)arg1;
- (void)_addNoFlagsStartingRouteInstruction:(id)arg1;
- (void)_addNoFlagsStep:(id)arg1;
- (void)_addNoFlagsTrafficColor:(unsigned int)arg1;
- (void)_addNoFlagsTrafficColorOffset:(unsigned int)arg1;
- (void)_readAdvisoryNotices;
- (void)_readAdvisorys;
- (void)_readAlertNonRecommendedRouteText;
- (void)_readArrivalRouteID;
- (void)_readBasicPoints;
- (void)_readDepartureRouteID;
- (void)_readEndingRouteInstructions;
- (void)_readEnrouteNotices;
- (void)_readGuidanceEvents;
- (void)_readIncidentEndOffsetsInRoutes;
- (void)_readIncidentIndices;
- (void)_readLaneWidths;
- (void)_readLaunchAndGoCardText;
- (void)_readName;
- (void)_readPhoneticName;
- (void)_readRoadComplexitys;
- (void)_readRouteDescriptions;
- (void)_readRouteID;
- (void)_readRouteNames;
- (void)_readRoutePlanningDescription;
- (void)_readStartingRouteInstructions;
- (void)_readSteps;
- (void)_readTrafficColorOffsets;
- (void)_readTrafficColors;
- (void)_readTrafficDescription;
- (void)_readTrafficDescriptionLong;
- (void)_readUnpackedLatLngVertices;
- (void)_readZilchPoints;
- (void)addAdvisory:(int)arg1;
- (void)addAdvisoryNotice:(id)arg1;
- (void)addEndingRouteInstruction:(id)arg1;
- (void)addEnrouteNotice:(id)arg1;
- (void)addGuidanceEvent:(id)arg1;
- (void)addIncidentEndOffsetsInRoute:(unsigned int)arg1;
- (void)addIncidentIndices:(unsigned int)arg1;
- (void)addLaneWidth:(id)arg1;
- (void)addRoadComplexity:(id)arg1;
- (void)addRouteDescription:(id)arg1;
- (void)addRouteName:(id)arg1;
- (void)addStartingRouteInstruction:(id)arg1;
- (void)addStep:(id)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (int)advisoryAtIndex:(unsigned long long)arg1;
- (id)advisoryNoticeAtIndex:(unsigned long long)arg1;
- (id)advisoryNotices;
- (unsigned long long)advisoryNoticesCount;
- (int*)advisorys;
- (id)advisorysAsString:(int)arg1;
- (unsigned long long)advisorysCount;
- (id)alertNonRecommendedRouteText;
- (unsigned int)arrivalParameterIndex;
- (id)arrivalRouteID;
- (unsigned int)arrivalStepID;
- (bool)avoidsHighways;
- (bool)avoidsTolls;
- (bool)avoidsTraffic;
- (id)basicPoints;
- (void)clearAdvisoryNotices;
- (void)clearAdvisorys;
- (void)clearEndingRouteInstructions;
- (void)clearEnrouteNotices;
- (void)clearGuidanceEvents;
- (void)clearIncidentEndOffsetsInRoutes;
- (void)clearIncidentIndices;
- (void)clearLaneWidths;
- (void)clearRoadComplexitys;
- (void)clearRouteDescriptions;
- (void)clearRouteNames;
- (void)clearStartingRouteInstructions;
- (void)clearSteps;
- (void)clearTrafficColorOffsets;
- (void)clearTrafficColors;
- (void)clearUnknownFields:(bool)arg1;
- (void*)controlPoints;
- (id)convertToFullRoute:(id)arg1 includeDepartureRoutes:(bool)arg2 uniquePointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (struct { double x1; double x2; double x3; })coordinateAt:(unsigned int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)departureRouteID;
- (unsigned int)departureStepID;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distance;
- (unsigned long long)distanceFromStepIndex:(unsigned long long)arg1 toStepIndex:(unsigned long long)arg2;
- (int)drivingSide;
- (id)drivingSideAsString:(int)arg1;
- (id)endingRouteInstructionAtIndex:(unsigned long long)arg1;
- (id)endingRouteInstructions;
- (unsigned long long)endingRouteInstructionsCount;
- (id)enrouteNoticeAtIndex:(unsigned long long)arg1;
- (id)enrouteNotices;
- (unsigned long long)enrouteNoticesCount;
- (unsigned int)expectedTime;
- (id)guidanceEventAtIndex:(unsigned long long)arg1;
- (id)guidanceEvents;
- (unsigned long long)guidanceEventsCount;
- (bool)hasAlertNonRecommendedRouteText;
- (bool)hasArrivalParameterIndex;
- (bool)hasArrivalRouteID;
- (bool)hasArrivalStepID;
- (bool)hasAvoidsHighways;
- (bool)hasAvoidsTolls;
- (bool)hasAvoidsTraffic;
- (bool)hasBasicPoints;
- (bool)hasDepartureRouteID;
- (bool)hasDepartureStepID;
- (bool)hasDistance;
- (bool)hasDrivingSide;
- (bool)hasExpectedTime;
- (bool)hasHistoricTravelTime;
- (bool)hasLaunchAndGoCardText;
- (bool)hasName;
- (bool)hasPhoneticName;
- (bool)hasRouteID;
- (bool)hasRoutePlanningDescription;
- (bool)hasRouteType;
- (bool)hasStaticTravelTime;
- (bool)hasTrafficDescription;
- (bool)hasTrafficDescriptionLong;
- (bool)hasTransportType;
- (bool)hasTravelTimeAggressiveEstimate;
- (bool)hasTravelTimeConservativeEstimate;
- (bool)hasUnpackedLatLngVertices;
- (bool)hasZilchPoints;
- (unsigned long long)hash;
- (unsigned int)historicTravelTime;
- (unsigned int)incidentEndOffsetsInRouteAtIndex:(unsigned long long)arg1;
- (unsigned int*)incidentEndOffsetsInRoutes;
- (unsigned long long)incidentEndOffsetsInRoutesCount;
- (unsigned int*)incidentIndices;
- (unsigned int)incidentIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentIndicesCount;
- (unsigned long long)indexForStepID:(unsigned long long)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isContingentRoute;
- (bool)isContingentRouteFor:(id)arg1 afterPoint:(unsigned int)arg2 mainRoutes:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isMainOrAlternateRoute;
- (id)laneWidthAtIndex:(unsigned long long)arg1;
- (id)laneWidths;
- (unsigned long long)laneWidthsCount;
- (id)launchAndGoCardText;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)newETARoute;
- (id)newETARouteFromStepIndex:(unsigned long long)arg1 stepPercentRemaining:(double)arg2;
- (id)phoneticName;
- (struct { double x1; double x2; })pointAt:(unsigned int)arg1;
- (unsigned int)pointCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)roadComplexityAtIndex:(unsigned long long)arg1;
- (id)roadComplexitys;
- (unsigned long long)roadComplexitysCount;
- (id)routeDescriptionAtIndex:(unsigned long long)arg1;
- (id)routeDescriptions;
- (unsigned long long)routeDescriptionsCount;
- (id)routeID;
- (id)routeNameAtIndex:(unsigned long long)arg1;
- (id)routeNames;
- (unsigned long long)routeNamesCount;
- (id)routePlanningDescription;
- (int)routeType;
- (id)routeTypeAsString:(int)arg1;
- (void)setAdvisoryNotices:(id)arg1;
- (void)setAdvisorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setAlertNonRecommendedRouteText:(id)arg1;
- (void)setArrivalParameterIndex:(unsigned int)arg1;
- (void)setArrivalRouteID:(id)arg1;
- (void)setArrivalStepID:(unsigned int)arg1;
- (void)setAvoidsHighways:(bool)arg1;
- (void)setAvoidsTolls:(bool)arg1;
- (void)setAvoidsTraffic:(bool)arg1;
- (void)setBasicPoints:(id)arg1;
- (void)setDepartureRouteID:(id)arg1;
- (void)setDepartureStepID:(unsigned int)arg1;
- (void)setDistance:(unsigned int)arg1;
- (void)setDrivingSide:(int)arg1;
- (void)setEndingRouteInstructions:(id)arg1;
- (void)setEnrouteNotices:(id)arg1;
- (void)setExpectedTime:(unsigned int)arg1;
- (void)setGuidanceEvents:(id)arg1;
- (void)setHasArrivalParameterIndex:(bool)arg1;
- (void)setHasArrivalStepID:(bool)arg1;
- (void)setHasAvoidsHighways:(bool)arg1;
- (void)setHasAvoidsTolls:(bool)arg1;
- (void)setHasAvoidsTraffic:(bool)arg1;
- (void)setHasDepartureStepID:(bool)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)setHasDrivingSide:(bool)arg1;
- (void)setHasExpectedTime:(bool)arg1;
- (void)setHasHistoricTravelTime:(bool)arg1;
- (void)setHasRouteType:(bool)arg1;
- (void)setHasStaticTravelTime:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setHasTravelTimeAggressiveEstimate:(bool)arg1;
- (void)setHasTravelTimeConservativeEstimate:(bool)arg1;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (void)setIncidentEndOffsetsInRoutes:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setIncidentIndices:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setLaneWidths:(id)arg1;
- (void)setLaunchAndGoCardText:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneticName:(id)arg1;
- (void)setRoadComplexitys:(id)arg1;
- (void)setRouteDescriptions:(id)arg1;
- (void)setRouteID:(id)arg1;
- (void)setRouteNames:(id)arg1;
- (void)setRoutePlanningDescription:(id)arg1;
- (void)setRouteType:(int)arg1;
- (void)setStartingRouteInstructions:(id)arg1;
- (void)setStaticTravelTime:(unsigned int)arg1;
- (void)setSteps:(id)arg1;
- (void)setTrafficColorOffsets:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTrafficColors:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTrafficDescription:(id)arg1;
- (void)setTrafficDescriptionLong:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setTravelTimeAggressiveEstimate:(unsigned int)arg1;
- (void)setTravelTimeConservativeEstimate:(unsigned int)arg1;
- (void)setUnpackedLatLngVertices:(id)arg1;
- (void)setZilchPoints:(id)arg1;
- (id)simplifiedDescription;
- (id)startingRouteInstructionAtIndex:(unsigned long long)arg1;
- (id)startingRouteInstructions;
- (unsigned long long)startingRouteInstructionsCount;
- (unsigned int)staticTravelTime;
- (id)stepAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepIndexForPointIndex:(unsigned int)arg1;
- (id)steps;
- (unsigned long long)stepsCount;
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (unsigned int*)trafficColorOffsets;
- (unsigned long long)trafficColorOffsetsCount;
- (unsigned int*)trafficColors;
- (unsigned long long)trafficColorsCount;
- (id)trafficDescription;
- (id)trafficDescriptionLong;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (int)transportTypeForStep:(id)arg1;
- (unsigned int)travelTimeAggressiveEstimate;
- (unsigned int)travelTimeConservativeEstimate;
- (id)unknownFields;
- (bool)unpackBasicPoints;
- (bool)unpackLatLngVertices;
- (bool)unpackZilchPoints;
- (id)unpackedLatLngVertices;
- (void)writeTo:(id)arg1;
- (id)zilchPoints;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)maneuverImageForStep:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (id)extendToOriginOfRoute:(id)arg1;

@end
