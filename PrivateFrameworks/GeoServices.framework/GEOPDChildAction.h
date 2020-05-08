/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDChildAction : PBCodable <NSCopying> {
    GEOPDChildActionDirections * _childActionDirections;
    GEOPDChildActionFlyover * _childActionFlyover;
    GEOPDChildActionSearch * _childActionSearch;
    int  _childActionType;
    struct { 
        unsigned int has_childActionType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_childActionDirections : 1; 
        unsigned int read_childActionFlyover : 1; 
        unsigned int read_childActionSearch : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_childActionDirections : 1; 
        unsigned int wrote_childActionFlyover : 1; 
        unsigned int wrote_childActionSearch : 1; 
        unsigned int wrote_childActionType : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDChildActionDirections *childActionDirections;
@property (nonatomic, retain) GEOPDChildActionFlyover *childActionFlyover;
@property (nonatomic, retain) GEOPDChildActionSearch *childActionSearch;
@property (nonatomic) int childActionType;
@property (nonatomic, readonly) bool hasChildActionDirections;
@property (nonatomic, readonly) bool hasChildActionFlyover;
@property (nonatomic, readonly) bool hasChildActionSearch;
@property (nonatomic) bool hasChildActionType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsChildActionType:(id)arg1;
- (void)_readChildActionDirections;
- (void)_readChildActionFlyover;
- (void)_readChildActionSearch;
- (id)childActionDirections;
- (id)childActionFlyover;
- (id)childActionSearch;
- (int)childActionType;
- (id)childActionTypeAsString:(int)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChildActionDirections;
- (bool)hasChildActionFlyover;
- (bool)hasChildActionSearch;
- (bool)hasChildActionType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChildActionDirections:(id)arg1;
- (void)setChildActionFlyover:(id)arg1;
- (void)setChildActionSearch:(id)arg1;
- (void)setChildActionType:(int)arg1;
- (void)setHasChildActionType:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
