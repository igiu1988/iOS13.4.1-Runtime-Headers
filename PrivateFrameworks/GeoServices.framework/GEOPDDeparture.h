/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDDeparture : PBCodable <GEOTransitDeparture, NSCopying> {
    double  _absDepartureTime;
    double  _absLiveDepartureTime;
    struct { 
        unsigned int has_absDepartureTime : 1; 
        unsigned int has_absLiveDepartureTime : 1; 
        unsigned int has_referenceTripId : 1; 
        unsigned int has_isCanceled : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_realTimeStatus : 1; 
        unsigned int read_vehicleNumber : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_absDepartureTime : 1; 
        unsigned int wrote_absLiveDepartureTime : 1; 
        unsigned int wrote_realTimeStatus : 1; 
        unsigned int wrote_referenceTripId : 1; 
        unsigned int wrote_vehicleNumber : 1; 
        unsigned int wrote_isCanceled : 1; 
    }  _flags;
    bool  _isCanceled;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOFormattedString * _realTimeStatus;
    unsigned long long  _referenceTripId;
    PBUnknownFields * _unknownFields;
    NSString * _vehicleNumber;
}

@property (nonatomic) double absDepartureTime;
@property (nonatomic) double absLiveDepartureTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *departureDate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAbsDepartureTime;
@property (nonatomic) bool hasAbsLiveDepartureTime;
@property (nonatomic) bool hasIsCanceled;
@property (nonatomic, readonly) bool hasRealTimeStatus;
@property (nonatomic) bool hasReferenceTripId;
@property (nonatomic, readonly) bool hasVehicleNumber;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCanceled;
@property (nonatomic) bool isCanceled;
@property (nonatomic, readonly) bool isPastDeparture;
@property (nonatomic, readonly) NSDate *liveDepartureDate;
@property (nonatomic, readonly) long long liveStatus;
@property (nonatomic, readonly) <GEOServerFormattedString> *liveStatusString;
@property (nonatomic, retain) GEOFormattedString *realTimeStatus;
@property (nonatomic) unsigned long long referenceTripId;
@property (nonatomic, readonly) NSDate *scheduledDepartureDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long tripIdentifier;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readonly) NSString *vehicleIdentifier;
@property (nonatomic, retain) NSString *vehicleNumber;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readRealTimeStatus;
- (void)_readVehicleNumber;
- (double)absDepartureTime;
- (double)absLiveDepartureTime;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departureDate;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbsDepartureTime;
- (bool)hasAbsLiveDepartureTime;
- (bool)hasIsCanceled;
- (bool)hasRealTimeStatus;
- (bool)hasReferenceTripId;
- (bool)hasVehicleNumber;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isCanceled;
- (bool)isEqual:(id)arg1;
- (bool)isPastDeparture;
- (bool)isPastDepartureRelativeToDate:(id)arg1 usingGracePeriod:(bool)arg2;
- (id)liveDepartureDate;
- (long long)liveStatus;
- (id)liveStatusString;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)realTimeStatus;
- (unsigned long long)referenceTripId;
- (id)scheduledDepartureDate;
- (void)setAbsDepartureTime:(double)arg1;
- (void)setAbsLiveDepartureTime:(double)arg1;
- (void)setHasAbsDepartureTime:(bool)arg1;
- (void)setHasAbsLiveDepartureTime:(bool)arg1;
- (void)setHasIsCanceled:(bool)arg1;
- (void)setHasReferenceTripId:(bool)arg1;
- (void)setIsCanceled:(bool)arg1;
- (void)setRealTimeStatus:(id)arg1;
- (void)setReferenceTripId:(unsigned long long)arg1;
- (void)setVehicleNumber:(id)arg1;
- (unsigned long long)tripIdentifier;
- (id)unknownFields;
- (id)vehicleIdentifier;
- (id)vehicleNumber;
- (void)writeTo:(id)arg1;

@end
