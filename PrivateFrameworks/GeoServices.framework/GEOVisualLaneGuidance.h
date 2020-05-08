/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVisualLaneGuidance : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_instructions : 1; 
        unsigned int read_laneInfos : 1; 
        unsigned int read_titles : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_instructions : 1; 
        unsigned int wrote_laneInfos : 1; 
        unsigned int wrote_titles : 1; 
    }  _flags;
    NSMutableArray * _instructions;
    NSMutableArray * _laneInfos;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _titles;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *instructions;
@property (nonatomic, retain) NSMutableArray *laneInfos;
@property (nonatomic, retain) NSMutableArray *titles;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)instructionType;
+ (bool)isValid:(id)arg1;
+ (Class)laneInfoType;
+ (Class)titleType;

- (void).cxx_destruct;
- (void)_addNoFlagsInstruction:(id)arg1;
- (void)_addNoFlagsLaneInfo:(id)arg1;
- (void)_addNoFlagsTitle:(id)arg1;
- (void)_readInstructions;
- (void)_readLaneInfos;
- (void)_readTitles;
- (void)addInstruction:(id)arg1;
- (void)addLaneInfo:(id)arg1;
- (void)addTitle:(id)arg1;
- (void)clearInstructions;
- (void)clearLaneInfos;
- (void)clearTitles;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)instructionAtIndex:(unsigned long long)arg1;
- (id)instructions;
- (unsigned long long)instructionsCount;
- (bool)isEqual:(id)arg1;
- (id)laneInfoAtIndex:(unsigned long long)arg1;
- (id)laneInfos;
- (unsigned long long)laneInfosCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setInstructions:(id)arg1;
- (void)setLaneInfos:(id)arg1;
- (void)setTitles:(id)arg1;
- (id)titleAtIndex:(unsigned long long)arg1;
- (id)titles;
- (unsigned long long)titlesCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end