/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitConfigurationData : PBCodable <NSCopying> {
    unsigned int  _databaseSize;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int databaseSize : 1; 
        unsigned int metadataVersion : 1; 
        unsigned int hasActiveWatchDevice : 1; 
        unsigned int hasWatchDevice : 1; 
        unsigned int isDemoConfiguration : 1; 
        unsigned int isResidentCapable : 1; 
        unsigned int isResidentEnabled : 1; 
    }  _has;
    bool  _hasActiveWatchDevice;
    bool  _hasWatchDevice;
    NSMutableArray * _homeConfigurations;
    bool  _isDemoConfiguration;
    bool  _isResidentCapable;
    bool  _isResidentEnabled;
    unsigned int  _metadataVersion;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int databaseSize;
@property (nonatomic) bool hasActiveWatchDevice;
@property (nonatomic) bool hasDatabaseSize;
@property (nonatomic) bool hasHasActiveWatchDevice;
@property (nonatomic) bool hasHasWatchDevice;
@property (nonatomic) bool hasIsDemoConfiguration;
@property (nonatomic) bool hasIsResidentCapable;
@property (nonatomic) bool hasIsResidentEnabled;
@property (nonatomic) bool hasMetadataVersion;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWatchDevice;
@property (nonatomic, retain) NSMutableArray *homeConfigurations;
@property (nonatomic) bool isDemoConfiguration;
@property (nonatomic) bool isResidentCapable;
@property (nonatomic) bool isResidentEnabled;
@property (nonatomic) unsigned int metadataVersion;
@property (nonatomic) unsigned long long timestamp;

+ (Class)homeConfigurationsType;

- (void).cxx_destruct;
- (void)addHomeConfigurations:(id)arg1;
- (void)clearHomeConfigurations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)databaseSize;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActiveWatchDevice;
- (bool)hasDatabaseSize;
- (bool)hasHasActiveWatchDevice;
- (bool)hasHasWatchDevice;
- (bool)hasIsDemoConfiguration;
- (bool)hasIsResidentCapable;
- (bool)hasIsResidentEnabled;
- (bool)hasMetadataVersion;
- (bool)hasTimestamp;
- (bool)hasWatchDevice;
- (unsigned long long)hash;
- (id)homeConfigurations;
- (id)homeConfigurationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)homeConfigurationsCount;
- (bool)isDemoConfiguration;
- (bool)isEqual:(id)arg1;
- (bool)isResidentCapable;
- (bool)isResidentEnabled;
- (void)mergeFrom:(id)arg1;
- (unsigned int)metadataVersion;
- (bool)readFrom:(id)arg1;
- (void)setDatabaseSize:(unsigned int)arg1;
- (void)setHasActiveWatchDevice:(bool)arg1;
- (void)setHasDatabaseSize:(bool)arg1;
- (void)setHasHasActiveWatchDevice:(bool)arg1;
- (void)setHasHasWatchDevice:(bool)arg1;
- (void)setHasIsDemoConfiguration:(bool)arg1;
- (void)setHasIsResidentCapable:(bool)arg1;
- (void)setHasIsResidentEnabled:(bool)arg1;
- (void)setHasMetadataVersion:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWatchDevice:(bool)arg1;
- (void)setHomeConfigurations:(id)arg1;
- (void)setIsDemoConfiguration:(bool)arg1;
- (void)setIsResidentCapable:(bool)arg1;
- (void)setIsResidentEnabled:(bool)arg1;
- (void)setMetadataVersion:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
