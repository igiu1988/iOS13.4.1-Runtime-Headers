/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWADiagnosisActionAssociationDifferences : PBCodable <NSCopying> {
    bool  _changedChannel;
    bool  _changedDNSPrimary;
    bool  _changedDNSSecondary;
    bool  _changedMAC;
    struct { 
        unsigned int changedChannel : 1; 
        unsigned int changedDNSPrimary : 1; 
        unsigned int changedDNSSecondary : 1; 
        unsigned int changedMAC : 1; 
        unsigned int newBSSID : 1; 
    }  _has;
    bool  _newBSSID;
}

@property (nonatomic) bool changedChannel;
@property (nonatomic) bool changedDNSPrimary;
@property (nonatomic) bool changedDNSSecondary;
@property (nonatomic) bool changedMAC;
@property (nonatomic) bool hasChangedChannel;
@property (nonatomic) bool hasChangedDNSPrimary;
@property (nonatomic) bool hasChangedDNSSecondary;
@property (nonatomic) bool hasChangedMAC;
@property (nonatomic) bool hasNewBSSID;
@property (nonatomic) bool newBSSID;

- (bool)changedChannel;
- (bool)changedDNSPrimary;
- (bool)changedDNSSecondary;
- (bool)changedMAC;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChangedChannel;
- (bool)hasChangedDNSPrimary;
- (bool)hasChangedDNSSecondary;
- (bool)hasChangedMAC;
- (bool)hasNewBSSID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)newBSSID;
- (bool)readFrom:(id)arg1;
- (void)setChangedChannel:(bool)arg1;
- (void)setChangedDNSPrimary:(bool)arg1;
- (void)setChangedDNSSecondary:(bool)arg1;
- (void)setChangedMAC:(bool)arg1;
- (void)setHasChangedChannel:(bool)arg1;
- (void)setHasChangedDNSPrimary:(bool)arg1;
- (void)setHasChangedDNSSecondary:(bool)arg1;
- (void)setHasChangedMAC:(bool)arg1;
- (void)setHasNewBSSID:(bool)arg1;
- (void)setNewBSSID:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
