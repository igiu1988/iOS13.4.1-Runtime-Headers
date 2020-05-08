/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/EasyConfig.framework/EasyConfig
 */

@interface AWDEasyConfigCompleted : PBCodable <NSCopying> {
    bool  _adminPasswordSet;
    unsigned int  _channelOfDestinationAP;
    unsigned int  _channelOfSWAP;
    bool  _destinationNetworkPSKInKeychain;
    bool  _destinationNetworkRecommendationUsed;
    NSString * _eaBundleSeedID;
    NSString * _eaFirmwareRevision;
    NSString * _eaHardwareRevision;
    NSString * _eaManufacturerName;
    NSString * _eaModelName;
    NSMutableArray * _eaProtocolStrings;
    int  _easyConfigStoppedReasonError;
    unsigned int  _enterSetupCodeMs;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int channelOfDestinationAP : 1; 
        unsigned int channelOfSWAP : 1; 
        unsigned int easyConfigStoppedReasonError : 1; 
        unsigned int enterSetupCodeMs : 1; 
        unsigned int rssiOfDestinationAP : 1; 
        unsigned int rssiOfSWAP : 1; 
        unsigned int secondsToApplyConfig : 1; 
        unsigned int secondsToCompleteFullConfig : 1; 
        unsigned int secondsToCompleteMFiSAPAuth : 1; 
        unsigned int secondsToCompletePostConfigCheck : 1; 
        unsigned int secondsToFindPostConfigDevice : 1; 
        unsigned int secondsToFindPreConfigDevice : 1; 
        unsigned int secondsToGetLinkUpOnDestination : 1; 
        unsigned int secondsToGetLinkUpOnSWAP : 1; 
        unsigned int snrOfDestinationAP : 1; 
        unsigned int snrOfSWAP : 1; 
        unsigned int wifiJoinDestinationAPError : 1; 
        unsigned int wifiJoinSWAPError : 1; 
        unsigned int adminPasswordSet : 1; 
        unsigned int destinationNetworkPSKInKeychain : 1; 
        unsigned int destinationNetworkRecommendationUsed : 1; 
        unsigned int hitJoiningDestinationAPTimeout : 1; 
        unsigned int hitJoiningTargetSWAPTimeout : 1; 
        unsigned int pauseAfterApply : 1; 
        unsigned int playPasswordSet : 1; 
        unsigned int userChangedFriendlyName : 1; 
    }  _has;
    bool  _hitJoiningDestinationAPTimeout;
    bool  _hitJoiningTargetSWAPTimeout;
    bool  _pauseAfterApply;
    bool  _playPasswordSet;
    int  _rssiOfDestinationAP;
    int  _rssiOfSWAP;
    float  _secondsToApplyConfig;
    float  _secondsToCompleteFullConfig;
    float  _secondsToCompleteMFiSAPAuth;
    float  _secondsToCompletePostConfigCheck;
    float  _secondsToFindPostConfigDevice;
    float  _secondsToFindPreConfigDevice;
    float  _secondsToGetLinkUpOnDestination;
    float  _secondsToGetLinkUpOnSWAP;
    unsigned int  _snrOfDestinationAP;
    unsigned int  _snrOfSWAP;
    unsigned long long  _timestamp;
    bool  _userChangedFriendlyName;
    int  _wifiJoinDestinationAPError;
    int  _wifiJoinSWAPError;
}

@property (nonatomic) bool adminPasswordSet;
@property (nonatomic) unsigned int channelOfDestinationAP;
@property (nonatomic) unsigned int channelOfSWAP;
@property (nonatomic) bool destinationNetworkPSKInKeychain;
@property (nonatomic) bool destinationNetworkRecommendationUsed;
@property (nonatomic, retain) NSString *eaBundleSeedID;
@property (nonatomic, retain) NSString *eaFirmwareRevision;
@property (nonatomic, retain) NSString *eaHardwareRevision;
@property (nonatomic, retain) NSString *eaManufacturerName;
@property (nonatomic, retain) NSString *eaModelName;
@property (nonatomic, retain) NSMutableArray *eaProtocolStrings;
@property (nonatomic) int easyConfigStoppedReasonError;
@property (nonatomic) unsigned int enterSetupCodeMs;
@property (nonatomic) bool hasAdminPasswordSet;
@property (nonatomic) bool hasChannelOfDestinationAP;
@property (nonatomic) bool hasChannelOfSWAP;
@property (nonatomic) bool hasDestinationNetworkPSKInKeychain;
@property (nonatomic) bool hasDestinationNetworkRecommendationUsed;
@property (nonatomic, readonly) bool hasEaBundleSeedID;
@property (nonatomic, readonly) bool hasEaFirmwareRevision;
@property (nonatomic, readonly) bool hasEaHardwareRevision;
@property (nonatomic, readonly) bool hasEaManufacturerName;
@property (nonatomic, readonly) bool hasEaModelName;
@property (nonatomic) bool hasEasyConfigStoppedReasonError;
@property (nonatomic) bool hasEnterSetupCodeMs;
@property (nonatomic) bool hasHitJoiningDestinationAPTimeout;
@property (nonatomic) bool hasHitJoiningTargetSWAPTimeout;
@property (nonatomic) bool hasPauseAfterApply;
@property (nonatomic) bool hasPlayPasswordSet;
@property (nonatomic) bool hasRssiOfDestinationAP;
@property (nonatomic) bool hasRssiOfSWAP;
@property (nonatomic) bool hasSecondsToApplyConfig;
@property (nonatomic) bool hasSecondsToCompleteFullConfig;
@property (nonatomic) bool hasSecondsToCompleteMFiSAPAuth;
@property (nonatomic) bool hasSecondsToCompletePostConfigCheck;
@property (nonatomic) bool hasSecondsToFindPostConfigDevice;
@property (nonatomic) bool hasSecondsToFindPreConfigDevice;
@property (nonatomic) bool hasSecondsToGetLinkUpOnDestination;
@property (nonatomic) bool hasSecondsToGetLinkUpOnSWAP;
@property (nonatomic) bool hasSnrOfDestinationAP;
@property (nonatomic) bool hasSnrOfSWAP;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUserChangedFriendlyName;
@property (nonatomic) bool hasWifiJoinDestinationAPError;
@property (nonatomic) bool hasWifiJoinSWAPError;
@property (nonatomic) bool hitJoiningDestinationAPTimeout;
@property (nonatomic) bool hitJoiningTargetSWAPTimeout;
@property (nonatomic) bool pauseAfterApply;
@property (nonatomic) bool playPasswordSet;
@property (nonatomic) int rssiOfDestinationAP;
@property (nonatomic) int rssiOfSWAP;
@property (nonatomic) float secondsToApplyConfig;
@property (nonatomic) float secondsToCompleteFullConfig;
@property (nonatomic) float secondsToCompleteMFiSAPAuth;
@property (nonatomic) float secondsToCompletePostConfigCheck;
@property (nonatomic) float secondsToFindPostConfigDevice;
@property (nonatomic) float secondsToFindPreConfigDevice;
@property (nonatomic) float secondsToGetLinkUpOnDestination;
@property (nonatomic) float secondsToGetLinkUpOnSWAP;
@property (nonatomic) unsigned int snrOfDestinationAP;
@property (nonatomic) unsigned int snrOfSWAP;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool userChangedFriendlyName;
@property (nonatomic) int wifiJoinDestinationAPError;
@property (nonatomic) int wifiJoinSWAPError;

+ (Class)eaProtocolStringsType;

- (void).cxx_destruct;
- (void)addEaProtocolStrings:(id)arg1;
- (bool)adminPasswordSet;
- (unsigned int)channelOfDestinationAP;
- (unsigned int)channelOfSWAP;
- (void)clearEaProtocolStrings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)destinationNetworkPSKInKeychain;
- (bool)destinationNetworkRecommendationUsed;
- (id)dictionaryRepresentation;
- (id)eaBundleSeedID;
- (id)eaFirmwareRevision;
- (id)eaHardwareRevision;
- (id)eaManufacturerName;
- (id)eaModelName;
- (id)eaProtocolStrings;
- (id)eaProtocolStringsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eaProtocolStringsCount;
- (int)easyConfigStoppedReasonError;
- (unsigned int)enterSetupCodeMs;
- (bool)hasAdminPasswordSet;
- (bool)hasChannelOfDestinationAP;
- (bool)hasChannelOfSWAP;
- (bool)hasDestinationNetworkPSKInKeychain;
- (bool)hasDestinationNetworkRecommendationUsed;
- (bool)hasEaBundleSeedID;
- (bool)hasEaFirmwareRevision;
- (bool)hasEaHardwareRevision;
- (bool)hasEaManufacturerName;
- (bool)hasEaModelName;
- (bool)hasEasyConfigStoppedReasonError;
- (bool)hasEnterSetupCodeMs;
- (bool)hasHitJoiningDestinationAPTimeout;
- (bool)hasHitJoiningTargetSWAPTimeout;
- (bool)hasPauseAfterApply;
- (bool)hasPlayPasswordSet;
- (bool)hasRssiOfDestinationAP;
- (bool)hasRssiOfSWAP;
- (bool)hasSecondsToApplyConfig;
- (bool)hasSecondsToCompleteFullConfig;
- (bool)hasSecondsToCompleteMFiSAPAuth;
- (bool)hasSecondsToCompletePostConfigCheck;
- (bool)hasSecondsToFindPostConfigDevice;
- (bool)hasSecondsToFindPreConfigDevice;
- (bool)hasSecondsToGetLinkUpOnDestination;
- (bool)hasSecondsToGetLinkUpOnSWAP;
- (bool)hasSnrOfDestinationAP;
- (bool)hasSnrOfSWAP;
- (bool)hasTimestamp;
- (bool)hasUserChangedFriendlyName;
- (bool)hasWifiJoinDestinationAPError;
- (bool)hasWifiJoinSWAPError;
- (unsigned long long)hash;
- (bool)hitJoiningDestinationAPTimeout;
- (bool)hitJoiningTargetSWAPTimeout;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pauseAfterApply;
- (bool)playPasswordSet;
- (bool)readFrom:(id)arg1;
- (int)rssiOfDestinationAP;
- (int)rssiOfSWAP;
- (float)secondsToApplyConfig;
- (float)secondsToCompleteFullConfig;
- (float)secondsToCompleteMFiSAPAuth;
- (float)secondsToCompletePostConfigCheck;
- (float)secondsToFindPostConfigDevice;
- (float)secondsToFindPreConfigDevice;
- (float)secondsToGetLinkUpOnDestination;
- (float)secondsToGetLinkUpOnSWAP;
- (void)setAdminPasswordSet:(bool)arg1;
- (void)setChannelOfDestinationAP:(unsigned int)arg1;
- (void)setChannelOfSWAP:(unsigned int)arg1;
- (void)setDestinationNetworkPSKInKeychain:(bool)arg1;
- (void)setDestinationNetworkRecommendationUsed:(bool)arg1;
- (void)setEaBundleSeedID:(id)arg1;
- (void)setEaFirmwareRevision:(id)arg1;
- (void)setEaHardwareRevision:(id)arg1;
- (void)setEaManufacturerName:(id)arg1;
- (void)setEaModelName:(id)arg1;
- (void)setEaProtocolStrings:(id)arg1;
- (void)setEasyConfigStoppedReasonError:(int)arg1;
- (void)setEnterSetupCodeMs:(unsigned int)arg1;
- (void)setHasAdminPasswordSet:(bool)arg1;
- (void)setHasChannelOfDestinationAP:(bool)arg1;
- (void)setHasChannelOfSWAP:(bool)arg1;
- (void)setHasDestinationNetworkPSKInKeychain:(bool)arg1;
- (void)setHasDestinationNetworkRecommendationUsed:(bool)arg1;
- (void)setHasEasyConfigStoppedReasonError:(bool)arg1;
- (void)setHasEnterSetupCodeMs:(bool)arg1;
- (void)setHasHitJoiningDestinationAPTimeout:(bool)arg1;
- (void)setHasHitJoiningTargetSWAPTimeout:(bool)arg1;
- (void)setHasPauseAfterApply:(bool)arg1;
- (void)setHasPlayPasswordSet:(bool)arg1;
- (void)setHasRssiOfDestinationAP:(bool)arg1;
- (void)setHasRssiOfSWAP:(bool)arg1;
- (void)setHasSecondsToApplyConfig:(bool)arg1;
- (void)setHasSecondsToCompleteFullConfig:(bool)arg1;
- (void)setHasSecondsToCompleteMFiSAPAuth:(bool)arg1;
- (void)setHasSecondsToCompletePostConfigCheck:(bool)arg1;
- (void)setHasSecondsToFindPostConfigDevice:(bool)arg1;
- (void)setHasSecondsToFindPreConfigDevice:(bool)arg1;
- (void)setHasSecondsToGetLinkUpOnDestination:(bool)arg1;
- (void)setHasSecondsToGetLinkUpOnSWAP:(bool)arg1;
- (void)setHasSnrOfDestinationAP:(bool)arg1;
- (void)setHasSnrOfSWAP:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUserChangedFriendlyName:(bool)arg1;
- (void)setHasWifiJoinDestinationAPError:(bool)arg1;
- (void)setHasWifiJoinSWAPError:(bool)arg1;
- (void)setHitJoiningDestinationAPTimeout:(bool)arg1;
- (void)setHitJoiningTargetSWAPTimeout:(bool)arg1;
- (void)setPauseAfterApply:(bool)arg1;
- (void)setPlayPasswordSet:(bool)arg1;
- (void)setRssiOfDestinationAP:(int)arg1;
- (void)setRssiOfSWAP:(int)arg1;
- (void)setSecondsToApplyConfig:(float)arg1;
- (void)setSecondsToCompleteFullConfig:(float)arg1;
- (void)setSecondsToCompleteMFiSAPAuth:(float)arg1;
- (void)setSecondsToCompletePostConfigCheck:(float)arg1;
- (void)setSecondsToFindPostConfigDevice:(float)arg1;
- (void)setSecondsToFindPreConfigDevice:(float)arg1;
- (void)setSecondsToGetLinkUpOnDestination:(float)arg1;
- (void)setSecondsToGetLinkUpOnSWAP:(float)arg1;
- (void)setSnrOfDestinationAP:(unsigned int)arg1;
- (void)setSnrOfSWAP:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserChangedFriendlyName:(bool)arg1;
- (void)setWifiJoinDestinationAPError:(int)arg1;
- (void)setWifiJoinSWAPError:(int)arg1;
- (unsigned int)snrOfDestinationAP;
- (unsigned int)snrOfSWAP;
- (unsigned long long)timestamp;
- (bool)userChangedFriendlyName;
- (int)wifiJoinDestinationAPError;
- (int)wifiJoinSWAPError;
- (void)writeTo:(id)arg1;

@end
