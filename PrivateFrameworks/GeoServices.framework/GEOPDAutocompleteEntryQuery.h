/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteEntryQuery : PBCodable <NSCopying> {
    NSString * _completion;
    struct { 
        unsigned int has_tapBehavior : 1; 
        unsigned int has_showIntermediateStateTapBehaviorListView : 1; 
    }  _flags;
    bool  _showIntermediateStateTapBehaviorListView;
    int  _tapBehavior;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *completion;
@property (nonatomic, readonly) bool hasCompletion;
@property (nonatomic) bool hasShowIntermediateStateTapBehaviorListView;
@property (nonatomic) bool hasTapBehavior;
@property (nonatomic) bool showIntermediateStateTapBehaviorListView;
@property (nonatomic) int tapBehavior;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsTapBehavior:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (id)completion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCompletion;
- (bool)hasShowIntermediateStateTapBehaviorListView;
- (bool)hasTapBehavior;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCompletion:(id)arg1;
- (void)setHasShowIntermediateStateTapBehaviorListView:(bool)arg1;
- (void)setHasTapBehavior:(bool)arg1;
- (void)setShowIntermediateStateTapBehaviorListView:(bool)arg1;
- (void)setTapBehavior:(int)arg1;
- (bool)showIntermediateStateTapBehaviorListView;
- (int)tapBehavior;
- (id)tapBehaviorAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
