/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPFeedbackLayoutConfigResult : PBCodable <NSCopying> {
    NSMutableArray * _forms;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *forms;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)formType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addForm:(id)arg1;
- (void)clearForms;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formAtIndex:(unsigned long long)arg1;
- (id)forms;
- (unsigned long long)formsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setForms:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
