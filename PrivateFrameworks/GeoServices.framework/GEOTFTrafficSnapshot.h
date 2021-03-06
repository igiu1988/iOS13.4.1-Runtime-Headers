/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTFTrafficSnapshot : PBCodable <NSCopying> {
    NSMutableArray * _compactSpeeds;
    NSString * _feedId;
    unsigned long long  _feedPublishTime;
    long long  _feedUpdateTime;
    struct { 
        unsigned int has_feedPublishTime : 1; 
        unsigned int has_feedUpdateTime : 1; 
        unsigned int has_trafficVersion : 1; 
        unsigned int read_compactSpeeds : 1; 
        unsigned int read_feedId : 1; 
        unsigned int read_incidents : 1; 
        unsigned int read_regions : 1; 
        unsigned int read_snapshotId : 1; 
        unsigned int read_speeds : 1; 
        unsigned int wrote_compactSpeeds : 1; 
        unsigned int wrote_feedId : 1; 
        unsigned int wrote_feedPublishTime : 1; 
        unsigned int wrote_feedUpdateTime : 1; 
        unsigned int wrote_incidents : 1; 
        unsigned int wrote_regions : 1; 
        unsigned int wrote_snapshotId : 1; 
        unsigned int wrote_speeds : 1; 
        unsigned int wrote_trafficVersion : 1; 
    }  _flags;
    NSMutableArray * _incidents;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _regions;
    NSString * _snapshotId;
    NSMutableArray * _speeds;
    unsigned int  _trafficVersion;
}

@property (nonatomic, retain) NSMutableArray *compactSpeeds;
@property (nonatomic, retain) NSString *feedId;
@property (nonatomic) unsigned long long feedPublishTime;
@property (nonatomic) long long feedUpdateTime;
@property (nonatomic, readonly) bool hasFeedId;
@property (nonatomic) bool hasFeedPublishTime;
@property (nonatomic) bool hasFeedUpdateTime;
@property (nonatomic, readonly) bool hasSnapshotId;
@property (nonatomic) bool hasTrafficVersion;
@property (nonatomic, retain) NSMutableArray *incidents;
@property (nonatomic, retain) NSMutableArray *regions;
@property (nonatomic, retain) NSString *snapshotId;
@property (nonatomic, retain) NSMutableArray *speeds;
@property (nonatomic) unsigned int trafficVersion;

+ (Class)compactSpeedsType;
+ (Class)incidentsType;
+ (bool)isValid:(id)arg1;
+ (Class)regionType;
+ (Class)speedsType;

- (void).cxx_destruct;
- (void)_addNoFlagsCompactSpeeds:(id)arg1;
- (void)_addNoFlagsIncidents:(id)arg1;
- (void)_addNoFlagsRegion:(id)arg1;
- (void)_addNoFlagsSpeeds:(id)arg1;
- (void)_readCompactSpeeds;
- (void)_readFeedId;
- (void)_readIncidents;
- (void)_readRegions;
- (void)_readSnapshotId;
- (void)_readSpeeds;
- (void)addCompactSpeeds:(id)arg1;
- (void)addIncidents:(id)arg1;
- (void)addRegion:(id)arg1;
- (void)addSpeeds:(id)arg1;
- (void)clearCompactSpeeds;
- (void)clearIncidents;
- (void)clearRegions;
- (void)clearSpeeds;
- (id)compactSpeeds;
- (id)compactSpeedsAtIndex:(unsigned long long)arg1;
- (unsigned long long)compactSpeedsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedId;
- (unsigned long long)feedPublishTime;
- (long long)feedUpdateTime;
- (bool)hasFeedId;
- (bool)hasFeedPublishTime;
- (bool)hasFeedUpdateTime;
- (bool)hasSnapshotId;
- (bool)hasTrafficVersion;
- (unsigned long long)hash;
- (id)incidents;
- (id)incidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)regionAtIndex:(unsigned long long)arg1;
- (id)regions;
- (unsigned long long)regionsCount;
- (void)setCompactSpeeds:(id)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedPublishTime:(unsigned long long)arg1;
- (void)setFeedUpdateTime:(long long)arg1;
- (void)setHasFeedPublishTime:(bool)arg1;
- (void)setHasFeedUpdateTime:(bool)arg1;
- (void)setHasTrafficVersion:(bool)arg1;
- (void)setIncidents:(id)arg1;
- (void)setRegions:(id)arg1;
- (void)setSnapshotId:(id)arg1;
- (void)setSpeeds:(id)arg1;
- (void)setTrafficVersion:(unsigned int)arg1;
- (id)snapshotId;
- (id)speeds;
- (id)speedsAtIndex:(unsigned long long)arg1;
- (unsigned long long)speedsCount;
- (unsigned int)trafficVersion;
- (void)writeTo:(id)arg1;

@end
