/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKCDPCodeServiceRequestAccountConfig : PBCodable <NSCopying> {
    bool  _corporateSharingEnabled;
    struct { 
        unsigned int lastWebActivityUTCMills : 1; 
        unsigned int corporateSharingEnabled : 1; 
    }  _has;
    long long  _lastWebActivityUTCMills;
}

@property (nonatomic) bool corporateSharingEnabled;
@property (nonatomic) bool hasCorporateSharingEnabled;
@property (nonatomic) bool hasLastWebActivityUTCMills;
@property (nonatomic) long long lastWebActivityUTCMills;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)corporateSharingEnabled;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCorporateSharingEnabled;
- (bool)hasLastWebActivityUTCMills;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)lastWebActivityUTCMills;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCorporateSharingEnabled:(bool)arg1;
- (void)setHasCorporateSharingEnabled:(bool)arg1;
- (void)setHasLastWebActivityUTCMills:(bool)arg1;
- (void)setLastWebActivityUTCMills:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
