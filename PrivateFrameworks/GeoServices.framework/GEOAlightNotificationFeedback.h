/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAlightNotificationFeedback : PBCodable <NSCopying> {
    unsigned long long  _alightStopMuid;
    bool  _arrivalDetected;
    double  _arrivedAtTimestamp;
    bool  _displayed;
    struct { 
        unsigned int has_alightStopMuid : 1; 
        unsigned int has_arrivedAtTimestamp : 1; 
        unsigned int has_lastDetectedLocationHorizontalAccuracy : 1; 
        unsigned int has_lastDetectedLocationTimestamp : 1; 
        unsigned int has_lineMuid : 1; 
        unsigned int has_previousStopMuid : 1; 
        unsigned int has_triggeredTimestamp : 1; 
        unsigned int has_lastDetectedLocationTraversalPercent : 1; 
        unsigned int has_stepID : 1; 
        unsigned int has_triggeredLocationTraversalPercent : 1; 
        unsigned int has_trigger : 1; 
        unsigned int has_arrivalDetected : 1; 
        unsigned int has_displayed : 1; 
        unsigned int has_triggered : 1; 
    }  _flags;
    double  _lastDetectedLocationHorizontalAccuracy;
    double  _lastDetectedLocationTimestamp;
    int  _lastDetectedLocationTraversalPercent;
    unsigned long long  _lineMuid;
    unsigned long long  _previousStopMuid;
    unsigned int  _stepID;
    int  _trigger;
    bool  _triggered;
    int  _triggeredLocationTraversalPercent;
    double  _triggeredTimestamp;
}

@property (nonatomic) unsigned long long alightStopMuid;
@property (nonatomic) bool arrivalDetected;
@property (nonatomic) double arrivedAtTimestamp;
@property (nonatomic) bool displayed;
@property (nonatomic) bool hasAlightStopMuid;
@property (nonatomic) bool hasArrivalDetected;
@property (nonatomic) bool hasArrivedAtTimestamp;
@property (nonatomic) bool hasDisplayed;
@property (nonatomic) bool hasLastDetectedLocationHorizontalAccuracy;
@property (nonatomic) bool hasLastDetectedLocationTimestamp;
@property (nonatomic) bool hasLastDetectedLocationTraversalPercent;
@property (nonatomic) bool hasLineMuid;
@property (nonatomic) bool hasPreviousStopMuid;
@property (nonatomic) bool hasStepID;
@property (nonatomic) bool hasTrigger;
@property (nonatomic) bool hasTriggered;
@property (nonatomic) bool hasTriggeredLocationTraversalPercent;
@property (nonatomic) bool hasTriggeredTimestamp;
@property (nonatomic) double lastDetectedLocationHorizontalAccuracy;
@property (nonatomic) double lastDetectedLocationTimestamp;
@property (nonatomic) int lastDetectedLocationTraversalPercent;
@property (nonatomic) unsigned long long lineMuid;
@property (nonatomic) unsigned long long previousStopMuid;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) int trigger;
@property (nonatomic) bool triggered;
@property (nonatomic) int triggeredLocationTraversalPercent;
@property (nonatomic) double triggeredTimestamp;

+ (bool)isValid:(id)arg1;

- (int)StringAsTrigger:(id)arg1;
- (unsigned long long)alightStopMuid;
- (bool)arrivalDetected;
- (double)arrivedAtTimestamp;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)displayed;
- (bool)hasAlightStopMuid;
- (bool)hasArrivalDetected;
- (bool)hasArrivedAtTimestamp;
- (bool)hasDisplayed;
- (bool)hasLastDetectedLocationHorizontalAccuracy;
- (bool)hasLastDetectedLocationTimestamp;
- (bool)hasLastDetectedLocationTraversalPercent;
- (bool)hasLineMuid;
- (bool)hasPreviousStopMuid;
- (bool)hasStepID;
- (bool)hasTrigger;
- (bool)hasTriggered;
- (bool)hasTriggeredLocationTraversalPercent;
- (bool)hasTriggeredTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)lastDetectedLocationHorizontalAccuracy;
- (double)lastDetectedLocationTimestamp;
- (int)lastDetectedLocationTraversalPercent;
- (unsigned long long)lineMuid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)previousStopMuid;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlightStopMuid:(unsigned long long)arg1;
- (void)setArrivalDetected:(bool)arg1;
- (void)setArrivedAtTimestamp:(double)arg1;
- (void)setDisplayed:(bool)arg1;
- (void)setHasAlightStopMuid:(bool)arg1;
- (void)setHasArrivalDetected:(bool)arg1;
- (void)setHasArrivedAtTimestamp:(bool)arg1;
- (void)setHasDisplayed:(bool)arg1;
- (void)setHasLastDetectedLocationHorizontalAccuracy:(bool)arg1;
- (void)setHasLastDetectedLocationTimestamp:(bool)arg1;
- (void)setHasLastDetectedLocationTraversalPercent:(bool)arg1;
- (void)setHasLineMuid:(bool)arg1;
- (void)setHasPreviousStopMuid:(bool)arg1;
- (void)setHasStepID:(bool)arg1;
- (void)setHasTrigger:(bool)arg1;
- (void)setHasTriggered:(bool)arg1;
- (void)setHasTriggeredLocationTraversalPercent:(bool)arg1;
- (void)setHasTriggeredTimestamp:(bool)arg1;
- (void)setLastDetectedLocationHorizontalAccuracy:(double)arg1;
- (void)setLastDetectedLocationTimestamp:(double)arg1;
- (void)setLastDetectedLocationTraversalPercent:(int)arg1;
- (void)setLineMuid:(unsigned long long)arg1;
- (void)setPreviousStopMuid:(unsigned long long)arg1;
- (void)setStepID:(unsigned int)arg1;
- (void)setTrigger:(int)arg1;
- (void)setTriggered:(bool)arg1;
- (void)setTriggeredLocationTraversalPercent:(int)arg1;
- (void)setTriggeredTimestamp:(double)arg1;
- (unsigned int)stepID;
- (int)trigger;
- (id)triggerAsString:(int)arg1;
- (bool)triggered;
- (int)triggeredLocationTraversalPercent;
- (double)triggeredTimestamp;
- (void)writeTo:(id)arg1;

@end
