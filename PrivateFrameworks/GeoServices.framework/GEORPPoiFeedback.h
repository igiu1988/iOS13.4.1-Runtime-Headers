/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPPoiFeedback : PBCodable <NSCopying> {
    bool  _addOtherPoi;
    int  _correctionType;
    GEORPPoiCorrections * _corrections;
    struct { 
        unsigned int has_correctionType : 1; 
        unsigned int has_addOtherPoi : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_corrections : 1; 
        unsigned int read_placeRequest : 1; 
        unsigned int read_place : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_corrections : 1; 
        unsigned int wrote_placeRequest : 1; 
        unsigned int wrote_place : 1; 
        unsigned int wrote_correctionType : 1; 
        unsigned int wrote_addOtherPoi : 1; 
    }  _flags;
    GEOPDPlace * _place;
    GEOPDPlaceRequest * _placeRequest;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool addOtherPoi;
@property (nonatomic) int correctionType;
@property (nonatomic, retain) GEORPPoiCorrections *corrections;
@property (nonatomic) bool hasAddOtherPoi;
@property (nonatomic) bool hasCorrectionType;
@property (nonatomic, readonly) bool hasCorrections;
@property (nonatomic, readonly) bool hasPlace;
@property (nonatomic, readonly) bool hasPlaceRequest;
@property (nonatomic, retain) GEOPDPlace *place;
@property (nonatomic, retain) GEOPDPlaceRequest *placeRequest;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsCorrectionType:(id)arg1;
- (void)_readCorrections;
- (void)_readPlace;
- (void)_readPlaceRequest;
- (bool)addOtherPoi;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)correctionType;
- (id)correctionTypeAsString:(int)arg1;
- (id)corrections;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddOtherPoi;
- (bool)hasCorrectionType;
- (bool)hasCorrections;
- (bool)hasPlace;
- (bool)hasPlaceRequest;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)place;
- (id)placeRequest;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddOtherPoi:(bool)arg1;
- (void)setCorrectionType:(int)arg1;
- (void)setCorrections:(id)arg1;
- (void)setHasAddOtherPoi:(bool)arg1;
- (void)setHasCorrectionType:(bool)arg1;
- (void)setPlace:(id)arg1;
- (void)setPlaceRequest:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
