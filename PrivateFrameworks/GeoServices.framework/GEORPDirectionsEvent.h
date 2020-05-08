/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPDirectionsEvent : PBCodable <NSCopying> {
    long long  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int has_errorCode : 1; 
        unsigned int has_occurrenceResponseIndex : 1; 
        unsigned int has_occurrenceStepIndex : 1; 
        unsigned int has_switchedToResponseIndex : 1; 
        unsigned int has_synthesizedStepManeuverType : 1; 
        unsigned int has_type : 1; 
        unsigned int read_errorDomain : 1; 
        unsigned int read_occurrenceLatLng : 1; 
        unsigned int read_occurrenceRouteId : 1; 
        unsigned int read_switchedToRouteId : 1; 
        unsigned int read_synthesizedStepInstructions : 1; 
        unsigned int wrote_errorCode : 1; 
        unsigned int wrote_errorDomain : 1; 
        unsigned int wrote_occurrenceLatLng : 1; 
        unsigned int wrote_occurrenceRouteId : 1; 
        unsigned int wrote_switchedToRouteId : 1; 
        unsigned int wrote_synthesizedStepInstructions : 1; 
        unsigned int wrote_occurrenceResponseIndex : 1; 
        unsigned int wrote_occurrenceStepIndex : 1; 
        unsigned int wrote_switchedToResponseIndex : 1; 
        unsigned int wrote_synthesizedStepManeuverType : 1; 
        unsigned int wrote_type : 1; 
    }  _flags;
    GEOLatLng * _occurrenceLatLng;
    unsigned int  _occurrenceResponseIndex;
    NSData * _occurrenceRouteId;
    unsigned int  _occurrenceStepIndex;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _switchedToResponseIndex;
    NSData * _switchedToRouteId;
    NSString * _synthesizedStepInstructions;
    int  _synthesizedStepManeuverType;
    int  _type;
}

@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic, readonly) bool hasOccurrenceLatLng;
@property (nonatomic) bool hasOccurrenceResponseIndex;
@property (nonatomic, readonly) bool hasOccurrenceRouteId;
@property (nonatomic) bool hasOccurrenceStepIndex;
@property (nonatomic) bool hasSwitchedToResponseIndex;
@property (nonatomic, readonly) bool hasSwitchedToRouteId;
@property (nonatomic, readonly) bool hasSynthesizedStepInstructions;
@property (nonatomic) bool hasSynthesizedStepManeuverType;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) GEOLatLng *occurrenceLatLng;
@property (nonatomic) unsigned int occurrenceResponseIndex;
@property (nonatomic, retain) NSData *occurrenceRouteId;
@property (nonatomic) unsigned int occurrenceStepIndex;
@property (nonatomic) unsigned int switchedToResponseIndex;
@property (nonatomic, retain) NSData *switchedToRouteId;
@property (nonatomic, retain) NSString *synthesizedStepInstructions;
@property (nonatomic) int synthesizedStepManeuverType;
@property (nonatomic) int type;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsSynthesizedStepManeuverType:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)_readErrorDomain;
- (void)_readOccurrenceLatLng;
- (void)_readOccurrenceRouteId;
- (void)_readSwitchedToRouteId;
- (void)_readSynthesizedStepInstructions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (id)errorDomain;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasOccurrenceLatLng;
- (bool)hasOccurrenceResponseIndex;
- (bool)hasOccurrenceRouteId;
- (bool)hasOccurrenceStepIndex;
- (bool)hasSwitchedToResponseIndex;
- (bool)hasSwitchedToRouteId;
- (bool)hasSynthesizedStepInstructions;
- (bool)hasSynthesizedStepManeuverType;
- (bool)hasType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)occurrenceLatLng;
- (unsigned int)occurrenceResponseIndex;
- (id)occurrenceRouteId;
- (unsigned int)occurrenceStepIndex;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasOccurrenceResponseIndex:(bool)arg1;
- (void)setHasOccurrenceStepIndex:(bool)arg1;
- (void)setHasSwitchedToResponseIndex:(bool)arg1;
- (void)setHasSynthesizedStepManeuverType:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setOccurrenceLatLng:(id)arg1;
- (void)setOccurrenceResponseIndex:(unsigned int)arg1;
- (void)setOccurrenceRouteId:(id)arg1;
- (void)setOccurrenceStepIndex:(unsigned int)arg1;
- (void)setSwitchedToResponseIndex:(unsigned int)arg1;
- (void)setSwitchedToRouteId:(id)arg1;
- (void)setSynthesizedStepInstructions:(id)arg1;
- (void)setSynthesizedStepManeuverType:(int)arg1;
- (void)setType:(int)arg1;
- (unsigned int)switchedToResponseIndex;
- (id)switchedToRouteId;
- (id)synthesizedStepInstructions;
- (int)synthesizedStepManeuverType;
- (id)synthesizedStepManeuverTypeAsString:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
