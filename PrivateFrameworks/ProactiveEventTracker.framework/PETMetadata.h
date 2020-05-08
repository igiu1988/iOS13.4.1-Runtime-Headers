/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

@interface PETMetadata : PBCodable <NSCopying> {
    NSString * _build;
    unsigned int  _configVersion;
    NSString * _country;
    NSString * _device;
    struct { 
        unsigned int uploadTime : 1; 
        unsigned int configVersion : 1; 
        unsigned int isGm : 1; 
        unsigned int isInternal : 1; 
        unsigned int isInternalCarry : 1; 
        unsigned int isSeed : 1; 
        unsigned int isTestingData : 1; 
        unsigned int isTrialUpload : 1; 
    }  _has;
    bool  _isGm;
    bool  _isInternal;
    bool  _isInternalCarry;
    bool  _isSeed;
    bool  _isTestingData;
    bool  _isTrialUpload;
    NSString * _language;
    NSString * _platform;
    NSString * _pseudoDeviceId;
    unsigned long long  _uploadTime;
}

@property (nonatomic, retain) NSString *build;
@property (nonatomic) unsigned int configVersion;
@property (nonatomic, retain) NSString *country;
@property (nonatomic, retain) NSString *device;
@property (nonatomic, readonly) bool hasBuild;
@property (nonatomic) bool hasConfigVersion;
@property (nonatomic, readonly) bool hasCountry;
@property (nonatomic, readonly) bool hasDevice;
@property (nonatomic) bool hasIsGm;
@property (nonatomic) bool hasIsInternal;
@property (nonatomic) bool hasIsInternalCarry;
@property (nonatomic) bool hasIsSeed;
@property (nonatomic) bool hasIsTestingData;
@property (nonatomic) bool hasIsTrialUpload;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic, readonly) bool hasPlatform;
@property (nonatomic, readonly) bool hasPseudoDeviceId;
@property (nonatomic) bool hasUploadTime;
@property (nonatomic) bool isGm;
@property (nonatomic) bool isInternal;
@property (nonatomic) bool isInternalCarry;
@property (nonatomic) bool isSeed;
@property (nonatomic) bool isTestingData;
@property (nonatomic) bool isTrialUpload;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSString *platform;
@property (nonatomic, retain) NSString *pseudoDeviceId;
@property (nonatomic) unsigned long long uploadTime;

- (void).cxx_destruct;
- (id)build;
- (unsigned int)configVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)description;
- (id)device;
- (id)dictionaryRepresentation;
- (bool)hasBuild;
- (bool)hasConfigVersion;
- (bool)hasCountry;
- (bool)hasDevice;
- (bool)hasIsGm;
- (bool)hasIsInternal;
- (bool)hasIsInternalCarry;
- (bool)hasIsSeed;
- (bool)hasIsTestingData;
- (bool)hasIsTrialUpload;
- (bool)hasLanguage;
- (bool)hasPlatform;
- (bool)hasPseudoDeviceId;
- (bool)hasUploadTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isGm;
- (bool)isInternal;
- (bool)isInternalCarry;
- (bool)isSeed;
- (bool)isTestingData;
- (bool)isTrialUpload;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (id)platform;
- (id)pseudoDeviceId;
- (bool)readFrom:(id)arg1;
- (void)setBuild:(id)arg1;
- (void)setConfigVersion:(unsigned int)arg1;
- (void)setCountry:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setHasConfigVersion:(bool)arg1;
- (void)setHasIsGm:(bool)arg1;
- (void)setHasIsInternal:(bool)arg1;
- (void)setHasIsInternalCarry:(bool)arg1;
- (void)setHasIsSeed:(bool)arg1;
- (void)setHasIsTestingData:(bool)arg1;
- (void)setHasIsTrialUpload:(bool)arg1;
- (void)setHasUploadTime:(bool)arg1;
- (void)setIsGm:(bool)arg1;
- (void)setIsInternal:(bool)arg1;
- (void)setIsInternalCarry:(bool)arg1;
- (void)setIsSeed:(bool)arg1;
- (void)setIsTestingData:(bool)arg1;
- (void)setIsTrialUpload:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setPlatform:(id)arg1;
- (void)setPseudoDeviceId:(id)arg1;
- (void)setUploadTime:(unsigned long long)arg1;
- (unsigned long long)uploadTime;
- (void)writeTo:(id)arg1;

@end