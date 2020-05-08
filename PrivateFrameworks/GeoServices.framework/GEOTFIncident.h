/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTFIncident : PBCodable <NSCopying> {
    unsigned int  _alertCCode;
    bool  _blocked;
    int  _color;
    NSString * _crossStreet;
    float  _delay;
    unsigned long long  _durationMin;
    double  _endOffset;
    bool  _endTimeReliable;
    struct { 
        unsigned int has_durationMin : 1; 
        unsigned int has_endOffset : 1; 
        unsigned int has_latitude : 1; 
        unsigned int has_longitude : 1; 
        unsigned int has_startOffset : 1; 
        unsigned int has_startTime : 1; 
        unsigned int has_updateTime : 1; 
        unsigned int has_alertCCode : 1; 
        unsigned int has_color : 1; 
        unsigned int has_delay : 1; 
        unsigned int has_laneClosureCount : 1; 
        unsigned int has_laneClosureType : 1; 
        unsigned int has_maxZoomLevel : 1; 
        unsigned int has_minZoomLevel : 1; 
        unsigned int has_significance : 1; 
        unsigned int has_speed : 1; 
        unsigned int has_trafficTrend : 1; 
        unsigned int has_type : 1; 
        unsigned int has_blocked : 1; 
        unsigned int has_endTimeReliable : 1; 
        unsigned int has_hardBlocked : 1; 
        unsigned int has_hidden : 1; 
        unsigned int has_navigationAlert : 1; 
        unsigned int read_geoids : 1; 
        unsigned int read_crossStreet : 1; 
        unsigned int read_incidentId : 1; 
        unsigned int read_infos : 1; 
        unsigned int read_openlr : 1; 
        unsigned int read_street : 1; 
        unsigned int read_zilch : 1; 
        unsigned int wrote_geoids : 1; 
        unsigned int wrote_crossStreet : 1; 
        unsigned int wrote_durationMin : 1; 
        unsigned int wrote_endOffset : 1; 
        unsigned int wrote_incidentId : 1; 
        unsigned int wrote_infos : 1; 
        unsigned int wrote_latitude : 1; 
        unsigned int wrote_longitude : 1; 
        unsigned int wrote_openlr : 1; 
        unsigned int wrote_startOffset : 1; 
        unsigned int wrote_startTime : 1; 
        unsigned int wrote_street : 1; 
        unsigned int wrote_updateTime : 1; 
        unsigned int wrote_zilch : 1; 
        unsigned int wrote_alertCCode : 1; 
        unsigned int wrote_color : 1; 
        unsigned int wrote_delay : 1; 
        unsigned int wrote_laneClosureCount : 1; 
        unsigned int wrote_laneClosureType : 1; 
        unsigned int wrote_maxZoomLevel : 1; 
        unsigned int wrote_minZoomLevel : 1; 
        unsigned int wrote_significance : 1; 
        unsigned int wrote_speed : 1; 
        unsigned int wrote_trafficTrend : 1; 
        unsigned int wrote_type : 1; 
        unsigned int wrote_blocked : 1; 
        unsigned int wrote_endTimeReliable : 1; 
        unsigned int wrote_hardBlocked : 1; 
        unsigned int wrote_hidden : 1; 
        unsigned int wrote_navigationAlert : 1; 
    }  _flags;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _geoids;
    bool  _hardBlocked;
    bool  _hidden;
    NSString * _incidentId;
    NSMutableArray * _infos;
    unsigned int  _laneClosureCount;
    int  _laneClosureType;
    double  _latitude;
    double  _longitude;
    unsigned int  _maxZoomLevel;
    unsigned int  _minZoomLevel;
    bool  _navigationAlert;
    NSData * _openlr;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _significance;
    float  _speed;
    double  _startOffset;
    long long  _startTime;
    NSString * _street;
    int  _trafficTrend;
    int  _type;
    long long  _updateTime;
    NSData * _zilch;
}

@property (nonatomic) unsigned int alertCCode;
@property (nonatomic) bool blocked;
@property (nonatomic) int color;
@property (nonatomic, retain) NSString *crossStreet;
@property (nonatomic) float delay;
@property (nonatomic) unsigned long long durationMin;
@property (nonatomic) double endOffset;
@property (nonatomic) bool endTimeReliable;
@property (nonatomic, readonly) long long*geoids;
@property (nonatomic, readonly) unsigned long long geoidsCount;
@property (nonatomic) bool hardBlocked;
@property (nonatomic) bool hasAlertCCode;
@property (nonatomic) bool hasBlocked;
@property (nonatomic) bool hasColor;
@property (nonatomic, readonly) bool hasCrossStreet;
@property (nonatomic) bool hasDelay;
@property (nonatomic) bool hasDurationMin;
@property (nonatomic) bool hasEndOffset;
@property (nonatomic) bool hasEndTimeReliable;
@property (nonatomic) bool hasHardBlocked;
@property (nonatomic) bool hasHidden;
@property (nonatomic, readonly) bool hasIncidentId;
@property (nonatomic) bool hasLaneClosureCount;
@property (nonatomic) bool hasLaneClosureType;
@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLongitude;
@property (nonatomic) bool hasMaxZoomLevel;
@property (nonatomic) bool hasMinZoomLevel;
@property (nonatomic) bool hasNavigationAlert;
@property (nonatomic, readonly) bool hasOpenlr;
@property (nonatomic) bool hasSignificance;
@property (nonatomic) bool hasSpeed;
@property (nonatomic) bool hasStartOffset;
@property (nonatomic) bool hasStartTime;
@property (nonatomic, readonly) bool hasStreet;
@property (nonatomic) bool hasTrafficTrend;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasUpdateTime;
@property (nonatomic, readonly) bool hasZilch;
@property (nonatomic) bool hidden;
@property (nonatomic, retain) NSString *incidentId;
@property (nonatomic, retain) NSMutableArray *infos;
@property (nonatomic) unsigned int laneClosureCount;
@property (nonatomic) int laneClosureType;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) unsigned int maxZoomLevel;
@property (nonatomic) unsigned int minZoomLevel;
@property (nonatomic) bool navigationAlert;
@property (nonatomic, retain) NSData *openlr;
@property (nonatomic) int significance;
@property (nonatomic) float speed;
@property (nonatomic) double startOffset;
@property (nonatomic) long long startTime;
@property (nonatomic, retain) NSString *street;
@property (nonatomic) int trafficTrend;
@property (nonatomic) int type;
@property (nonatomic) long long updateTime;
@property (nonatomic, retain) NSData *zilch;

+ (Class)infoType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsColor:(id)arg1;
- (int)StringAsLaneClosureType:(id)arg1;
- (int)StringAsSignificance:(id)arg1;
- (int)StringAsTrafficTrend:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)_addNoFlagsGeoid:(long long)arg1;
- (void)_addNoFlagsInfo:(id)arg1;
- (void)_readCrossStreet;
- (void)_readGeoids;
- (void)_readIncidentId;
- (void)_readInfos;
- (void)_readOpenlr;
- (void)_readStreet;
- (void)_readZilch;
- (void)addGeoid:(long long)arg1;
- (void)addInfo:(id)arg1;
- (unsigned int)alertCCode;
- (bool)blocked;
- (void)clearGeoids;
- (void)clearInfos;
- (int)color;
- (id)colorAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crossStreet;
- (void)dealloc;
- (float)delay;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)durationMin;
- (double)endOffset;
- (bool)endTimeReliable;
- (long long)geoidAtIndex:(unsigned long long)arg1;
- (long long*)geoids;
- (unsigned long long)geoidsCount;
- (bool)hardBlocked;
- (bool)hasAlertCCode;
- (bool)hasBlocked;
- (bool)hasColor;
- (bool)hasCrossStreet;
- (bool)hasDelay;
- (bool)hasDurationMin;
- (bool)hasEndOffset;
- (bool)hasEndTimeReliable;
- (bool)hasHardBlocked;
- (bool)hasHidden;
- (bool)hasIncidentId;
- (bool)hasLaneClosureCount;
- (bool)hasLaneClosureType;
- (bool)hasLatitude;
- (bool)hasLongitude;
- (bool)hasMaxZoomLevel;
- (bool)hasMinZoomLevel;
- (bool)hasNavigationAlert;
- (bool)hasOpenlr;
- (bool)hasSignificance;
- (bool)hasSpeed;
- (bool)hasStartOffset;
- (bool)hasStartTime;
- (bool)hasStreet;
- (bool)hasTrafficTrend;
- (bool)hasType;
- (bool)hasUpdateTime;
- (bool)hasZilch;
- (unsigned long long)hash;
- (bool)hidden;
- (id)incidentId;
- (id)infoAtIndex:(unsigned long long)arg1;
- (id)infos;
- (unsigned long long)infosCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)laneClosureCount;
- (int)laneClosureType;
- (id)laneClosureTypeAsString:(int)arg1;
- (double)latitude;
- (double)longitude;
- (unsigned int)maxZoomLevel;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minZoomLevel;
- (bool)navigationAlert;
- (id)openlr;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlertCCode:(unsigned int)arg1;
- (void)setBlocked:(bool)arg1;
- (void)setColor:(int)arg1;
- (void)setCrossStreet:(id)arg1;
- (void)setDelay:(float)arg1;
- (void)setDurationMin:(unsigned long long)arg1;
- (void)setEndOffset:(double)arg1;
- (void)setEndTimeReliable:(bool)arg1;
- (void)setGeoids:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setHardBlocked:(bool)arg1;
- (void)setHasAlertCCode:(bool)arg1;
- (void)setHasBlocked:(bool)arg1;
- (void)setHasColor:(bool)arg1;
- (void)setHasDelay:(bool)arg1;
- (void)setHasDurationMin:(bool)arg1;
- (void)setHasEndOffset:(bool)arg1;
- (void)setHasEndTimeReliable:(bool)arg1;
- (void)setHasHardBlocked:(bool)arg1;
- (void)setHasHidden:(bool)arg1;
- (void)setHasLaneClosureCount:(bool)arg1;
- (void)setHasLaneClosureType:(bool)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setHasMaxZoomLevel:(bool)arg1;
- (void)setHasMinZoomLevel:(bool)arg1;
- (void)setHasNavigationAlert:(bool)arg1;
- (void)setHasSignificance:(bool)arg1;
- (void)setHasSpeed:(bool)arg1;
- (void)setHasStartOffset:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasTrafficTrend:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasUpdateTime:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIncidentId:(id)arg1;
- (void)setInfos:(id)arg1;
- (void)setLaneClosureCount:(unsigned int)arg1;
- (void)setLaneClosureType:(int)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setMaxZoomLevel:(unsigned int)arg1;
- (void)setMinZoomLevel:(unsigned int)arg1;
- (void)setNavigationAlert:(bool)arg1;
- (void)setOpenlr:(id)arg1;
- (void)setSignificance:(int)arg1;
- (void)setSpeed:(float)arg1;
- (void)setStartOffset:(double)arg1;
- (void)setStartTime:(long long)arg1;
- (void)setStreet:(id)arg1;
- (void)setTrafficTrend:(int)arg1;
- (void)setType:(int)arg1;
- (void)setUpdateTime:(long long)arg1;
- (void)setZilch:(id)arg1;
- (int)significance;
- (id)significanceAsString:(int)arg1;
- (float)speed;
- (double)startOffset;
- (long long)startTime;
- (id)street;
- (int)trafficTrend;
- (id)trafficTrendAsString:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (long long)updateTime;
- (void)writeTo:(id)arg1;
- (id)zilch;

@end
