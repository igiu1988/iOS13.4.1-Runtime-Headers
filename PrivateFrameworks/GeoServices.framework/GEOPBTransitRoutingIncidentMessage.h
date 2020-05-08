/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitRoutingIncidentMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int has_routingIncidentMessageIndex : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_transitIncidentIndexs : 1; 
        unsigned int read_routingMessage : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_transitIncidentIndexs : 1; 
        unsigned int wrote_routingMessage : 1; 
        unsigned int wrote_routingIncidentMessageIndex : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _routingIncidentMessageIndex;
    NSString * _routingMessage;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _transitIncidentIndexs;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasRoutingIncidentMessageIndex;
@property (nonatomic, readonly) bool hasRoutingMessage;
@property (nonatomic) unsigned int routingIncidentMessageIndex;
@property (nonatomic, retain) NSString *routingMessage;
@property (nonatomic, readonly) unsigned int*transitIncidentIndexs;
@property (nonatomic, readonly) unsigned long long transitIncidentIndexsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_addNoFlagsTransitIncidentIndex:(unsigned int)arg1;
- (void)_readRoutingMessage;
- (void)_readTransitIncidentIndexs;
- (void)addTransitIncidentIndex:(unsigned int)arg1;
- (void)clearTransitIncidentIndexs;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRoutingIncidentMessageIndex;
- (bool)hasRoutingMessage;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)routingIncidentMessageIndex;
- (id)routingMessage;
- (void)setHasRoutingIncidentMessageIndex:(bool)arg1;
- (void)setRoutingIncidentMessageIndex:(unsigned int)arg1;
- (void)setRoutingMessage:(id)arg1;
- (void)setTransitIncidentIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int)transitIncidentIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)transitIncidentIndexs;
- (unsigned long long)transitIncidentIndexsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
