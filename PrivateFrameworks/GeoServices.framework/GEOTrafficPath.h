/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficPath : PBCodable <NSCopying> {
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _continuingRoadIds;
    float  _endOffset;
    struct { 
        unsigned int has_endOffset : 1; 
        unsigned int has_startOffset : 1; 
        unsigned int read_continuingRoadIds : 1; 
        unsigned int read_roadIds : 1; 
        unsigned int read_geometrys : 1; 
        unsigned int read_openlr : 1; 
        unsigned int wrote_continuingRoadIds : 1; 
        unsigned int wrote_roadIds : 1; 
        unsigned int wrote_geometrys : 1; 
        unsigned int wrote_openlr : 1; 
        unsigned int wrote_endOffset : 1; 
        unsigned int wrote_startOffset : 1; 
    }  _flags;
    NSMutableArray * _geometrys;
    NSData * _openlr;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _roadIds;
    float  _startOffset;
}

@property (nonatomic, readonly) long long*continuingRoadIds;
@property (nonatomic, readonly) unsigned long long continuingRoadIdsCount;
@property (nonatomic) float endOffset;
@property (nonatomic, retain) NSMutableArray *geometrys;
@property (nonatomic) bool hasEndOffset;
@property (nonatomic, readonly) bool hasOpenlr;
@property (nonatomic) bool hasStartOffset;
@property (nonatomic, retain) NSData *openlr;
@property (nonatomic, readonly) long long*roadIds;
@property (nonatomic, readonly) unsigned long long roadIdsCount;
@property (nonatomic) float startOffset;

+ (Class)geometryType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_addNoFlagsContinuingRoadId:(long long)arg1;
- (void)_addNoFlagsGeometry:(id)arg1;
- (void)_addNoFlagsRoadId:(long long)arg1;
- (void)_readContinuingRoadIds;
- (void)_readGeometrys;
- (void)_readOpenlr;
- (void)_readRoadIds;
- (void)addContinuingRoadId:(long long)arg1;
- (void)addGeometry:(id)arg1;
- (void)addRoadId:(long long)arg1;
- (void)clearContinuingRoadIds;
- (void)clearGeometrys;
- (void)clearRoadIds;
- (long long)continuingRoadIdAtIndex:(unsigned long long)arg1;
- (long long*)continuingRoadIds;
- (unsigned long long)continuingRoadIdsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (float)endOffset;
- (id)geometryAtIndex:(unsigned long long)arg1;
- (id)geometrys;
- (unsigned long long)geometrysCount;
- (bool)hasEndOffset;
- (bool)hasOpenlr;
- (bool)hasStartOffset;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)openlr;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (long long)roadIdAtIndex:(unsigned long long)arg1;
- (long long*)roadIds;
- (unsigned long long)roadIdsCount;
- (void)setContinuingRoadIds:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setEndOffset:(float)arg1;
- (void)setGeometrys:(id)arg1;
- (void)setHasEndOffset:(bool)arg1;
- (void)setHasStartOffset:(bool)arg1;
- (void)setOpenlr:(id)arg1;
- (void)setRoadIds:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setStartOffset:(float)arg1;
- (float)startOffset;
- (void)writeTo:(id)arg1;

@end