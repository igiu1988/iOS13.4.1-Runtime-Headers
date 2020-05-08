/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGetReservationDetailsIntent : PBCodable <NSCopying, NSSecureCoding, _INPBGetReservationDetailsIntent> {
    bool  __encodeLegacyGloryData;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBDataString * _reservationContainerReference;
    NSArray * _reservationItemReferences;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasReservationContainerReference;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBDataString *reservationContainerReference;
@property (nonatomic, copy) NSArray *reservationItemReferences;
@property (nonatomic, readonly) unsigned long long reservationItemReferencesCount;
@property (readonly) Class superclass;

+ (Class)reservationItemReferencesType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (void)addReservationItemReferences:(id)arg1;
- (void)clearReservationItemReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (bool)hasReservationContainerReference;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reservationContainerReference;
- (id)reservationItemReferences;
- (id)reservationItemReferencesAtIndex:(unsigned long long)arg1;
- (unsigned long long)reservationItemReferencesCount;
- (void)setIntentMetadata:(id)arg1;
- (void)setReservationContainerReference:(id)arg1;
- (void)setReservationItemReferences:(id)arg1;
- (void)writeTo:(id)arg1;

@end
