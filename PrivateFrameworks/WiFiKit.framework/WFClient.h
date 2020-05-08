/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFClient : NSObject {
    bool  _WAPIEnabled;
    bool  _WPA3EnterpriseEnabled;
    bool  _WPA3PersonalEnabled;
    unsigned long long  _airplaneModeBehavior;
    long long  _askToJoinMode;
    long long  _autoInstantHotspotJoinOption;
    NSRunLoop * _callbackRunLoop;
    bool  _diagnosticsEnabled;
    bool  _diagnosticsModeEnabled;
    bool  _extraLoggingEnabled;
    WFInterface * _interface;
    bool  _isKnownNetworkUIEnabled;
    bool  _managedAppleID;
    struct __WiFiManagerClient { } * _manager;
    bool  _mfpCapable;
    bool  _networkRestrictionActive;
    bool  _powerModificationDisabled;
    bool  _powered;
    NSNumber * _rssiThresholdNumber;
    NSObject<OS_dispatch_queue> * _serialClientQueue;
    bool  _showAllHS20Networks;
    bool  _userAutoJoinState;
    NSString * _whitelistingUUID;
    bool  _wiFiHealthUIDisabled;
}

@property (getter=isWAPIEnabled, nonatomic) bool WAPIEnabled;
@property (getter=isWPA3EnterpriseEnabled, nonatomic) bool WPA3EnterpriseEnabled;
@property (getter=isWPA3PersonalEnabled, nonatomic) bool WPA3PersonalEnabled;
@property (nonatomic) unsigned long long airplaneModeBehavior;
@property (nonatomic) long long askToJoinMode;
@property (nonatomic) long long autoInstantHotspotJoinOption;
@property (retain) NSRunLoop *callbackRunLoop;
@property (getter=isDiagnosticsEnabled, nonatomic) bool diagnosticsEnabled;
@property (getter=isDiagnosticsModeEnabled) bool diagnosticsModeEnabled;
@property bool extraLoggingEnabled;
@property (nonatomic, retain) WFInterface *interface;
@property (nonatomic, readonly) bool isKnownNetworkUIEnabled;
@property (getter=isManagedAppleID, nonatomic) bool managedAppleID;
@property struct __WiFiManagerClient { }*manager;
@property (getter=isMfpCapable, nonatomic) bool mfpCapable;
@property (getter=isNetworkRestrictionActive, nonatomic) bool networkRestrictionActive;
@property (getter=isPowerModificationDisabled, nonatomic, readonly) bool powerModificationDisabled;
@property bool powered;
@property (retain) NSNumber *rssiThresholdNumber;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialClientQueue;
@property bool showAllHS20Networks;
@property (nonatomic) bool userAutoJoinState;
@property (nonatomic, readonly) NSString *whitelistingUUID;
@property (getter=isWiFiHealthUIDisabled) bool wiFiHealthUIDisabled;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addNetwork:(struct __WiFiNetwork { }*)arg1;
- (long long)_askToJoinModeFromWiFiAskToJoinPreference:(int)arg1;
- (void)_askToJoinNotification:(unsigned int)arg1;
- (id)_copyCurrentNetworks;
- (id)_getGeoTagsForNetwork:(struct __WiFiNetwork { }*)arg1;
- (id)_getScoreForNetwork:(struct __WiFiNetwork { }*)arg1;
- (long long)_hotspotJoinOptionFromWiFiAutoHotspotMode:(int)arg1;
- (void)_joinRecommendationWithID:(unsigned int)arg1 network:(struct __WiFiNetwork { }*)arg2;
- (void)_logWiFiManagerPropertyChange:(id)arg1 value:(bool)arg2;
- (void)_managedAppleIDStateDidChange:(bool)arg1;
- (void)_managedConfigurationDidChange:(id)arg1;
- (void)_notifyWiFiPropertyChanged:(id)arg1 value:(id)arg2;
- (void)_preferredNetworksDidChange:(id)arg1;
- (void)_removeNetwork:(struct __WiFiNetwork { }*)arg1;
- (void)_scheduleCallbacksWithManager:(struct __WiFiManagerClient { }*)arg1 runLoop:(id)arg2;
- (void)_setAutoJoinEnabled:(bool)arg1 forNetwork:(struct __WiFiNetwork { }*)arg2;
- (void)_setupDefaultInterfaceWithManager:(struct __WiFiManagerClient { }*)arg1;
- (void)_trustNotificationWithID:(unsigned int)arg1 network:(struct __WiFiNetwork { }*)arg2 data:(id)arg3;
- (void)_unscheduleCallbacksWithManager:(struct __WiFiManagerClient { }*)arg1;
- (void)_updateAirplaneModeStickiness;
- (void)_updateAskToJoinMode;
- (void)_updateAutoInstantHotspotJoinOption;
- (void)_updateDebugProperties;
- (void)_updateDiagnosticsEnabled;
- (void)_updateManagedAppleIDState;
- (void)_updateNetwork:(struct __WiFiNetwork { }*)arg1;
- (void)_updateNetworkRestrictionActive;
- (void)_updatePowerModificationDisableState;
- (void)_updatePowerState;
- (void)_updateWAPIEnabled;
- (void)_updateWPA3Properties:(struct __WiFiManagerClient { }*)arg1;
- (void)_updateWithDeviceAttachment:(struct __WiFiDeviceClient { }*)arg1;
- (void)_userAutoJoinStateDidChange:(bool)arg1 info:(id)arg2;
- (unsigned long long)airplaneModeBehavior;
- (long long)askToJoinMode;
- (void)asyncMISDiscoveryState:(id /* block */)arg1;
- (void)asyncMISState:(id /* block */)arg1;
- (void)asyncPowered:(id /* block */)arg1;
- (void)asyncUserAutoJoinState:(id /* block */)arg1;
- (long long)autoInstantHotspotJoinOption;
- (id)callbackRunLoop;
- (void)dealloc;
- (void)dispatchAskToJoinAction:(unsigned long long)arg1 notificationId:(unsigned int)arg2 network:(id)arg3;
- (void)dispatchCertificateTrustAction:(long long)arg1 profile:(id)arg2;
- (void)dispatchJoinRecommendationAction:(long long)arg1 profile:(id)arg2;
- (bool)extraLoggingEnabled;
- (bool)hasShownSBPickerDontAsk;
- (id)init;
- (id)initWithCallbackRunLoop:(id)arg1;
- (id)interface;
- (bool)isDiagnosticsEnabled;
- (bool)isDiagnosticsModeEnabled;
- (bool)isInfraAssociationAllowed;
- (bool)isKnownNetworkUIEnabled;
- (bool)isManagedAppleID;
- (bool)isMfpCapable;
- (bool)isNetworkRestrictionActive;
- (bool)isPowerModificationDisabled;
- (bool)isWAPIEnabled;
- (bool)isWPA3EnterpriseEnabled;
- (bool)isWPA3PersonalEnabled;
- (bool)isWiFiHealthUIDisabled;
- (struct __WiFiManagerClient { }*)manager;
- (bool)powered;
- (void)reloadConfiguration;
- (long long)rssiThreshold;
- (id)rssiThresholdNumber;
- (id)serialClientQueue;
- (void)setAirplaneModeBehavior:(unsigned long long)arg1;
- (void)setAskToJoinMode:(long long)arg1;
- (void)setAutoInstantHotspotJoinOption:(long long)arg1;
- (void)setAutoJoinEnabled:(bool)arg1;
- (void)setCallbackRunLoop:(id)arg1;
- (void)setClientTypeAsForeground;
- (void)setDiagnosticsEnabled:(bool)arg1;
- (void)setDiagnosticsModeEnabled:(bool)arg1;
- (void)setExtraLoggingEnabled:(bool)arg1;
- (void)setHasShownSBPickerDontAsk:(bool)arg1;
- (void)setInterface:(id)arg1;
- (void)setMISDiscoveryState:(bool)arg1 immediateDisable:(bool)arg2;
- (void)setMISState:(bool)arg1;
- (void)setManagedAppleID:(bool)arg1;
- (void)setManager:(struct __WiFiManagerClient { }*)arg1;
- (void)setMfpCapable:(bool)arg1;
- (void)setNetworkRestrictionActive:(bool)arg1;
- (void)setPowerModificationDisableState:(bool)arg1;
- (void)setPowered:(bool)arg1;
- (void)setRssiThresholdNumber:(id)arg1;
- (void)setSerialClientQueue:(id)arg1;
- (void)setShowAllHS20Networks:(bool)arg1;
- (void)setUserAutoJoinState:(bool)arg1;
- (void)setWAPIEnabled:(bool)arg1;
- (void)setWPA3EnterpriseEnabled:(bool)arg1;
- (void)setWPA3PersonalEnabled:(bool)arg1;
- (void)setWiFiHealthUIDisabled:(bool)arg1;
- (bool)showAllHS20Networks;
- (bool)userAutoJoinState;
- (id)whitelistingUUID;

@end
