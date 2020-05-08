/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICIAMSynchronizeMessagesRequest : PBRequest <NSCopying> {
    bool  _activeCommandsOnly;
    long long  _commandSerialNumber;
    long long  _dSID;
    NSString * _deviceID;
    struct { 
        unsigned int commandSerialNumber : 1; 
        unsigned int dSID : 1; 
        unsigned int activeCommandsOnly : 1; 
    }  _has;
}

@property (nonatomic) bool activeCommandsOnly;
@property (nonatomic) long long commandSerialNumber;
@property (nonatomic) long long dSID;
@property (nonatomic, retain) NSString *deviceID;
@property (nonatomic) bool hasActiveCommandsOnly;
@property (nonatomic) bool hasCommandSerialNumber;
@property (nonatomic) bool hasDSID;
@property (nonatomic, readonly) bool hasDeviceID;

- (void).cxx_destruct;
- (bool)activeCommandsOnly;
- (long long)commandSerialNumber;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dSID;
- (id)description;
- (id)deviceID;
- (id)dictionaryRepresentation;
- (bool)hasActiveCommandsOnly;
- (bool)hasCommandSerialNumber;
- (bool)hasDSID;
- (bool)hasDeviceID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActiveCommandsOnly:(bool)arg1;
- (void)setCommandSerialNumber:(long long)arg1;
- (void)setDSID:(long long)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setHasActiveCommandsOnly:(bool)arg1;
- (void)setHasCommandSerialNumber:(bool)arg1;
- (void)setHasDSID:(bool)arg1;
- (void)writeTo:(id)arg1;

@end