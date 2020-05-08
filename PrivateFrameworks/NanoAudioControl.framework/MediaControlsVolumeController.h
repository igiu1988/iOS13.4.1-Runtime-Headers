/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsVolumeController : NSObject <MPVolumeControllerDelegate> {
    bool  _isSplitRoute;
    NSHashTable * _observers;
    bool  _primaryInteractionEnabled;
    MPAVOutputDeviceRoute * _primaryOutputDeviceRoute;
    MPVolumeController * _primaryVolumeController;
    bool  _secondaryInteractionEnabled;
    MPAVOutputDeviceRoute * _secondaryOutputDeviceRoute;
    MPVolumeController * _secondaryVolumeController;
    MPAVOutputDeviceRoute * _systemOutputDeviceRoute;
    MPAVEndpointRoute * _systemRoute;
    MPVolumeController * _systemVolumeController;
    NSString * _volumeAudioCategory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSplitRoute;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) bool primaryInteractionEnabled;
@property (nonatomic, retain) MPAVOutputDeviceRoute *primaryOutputDeviceRoute;
@property (nonatomic, retain) MPVolumeController *primaryVolumeController;
@property (nonatomic) bool secondaryInteractionEnabled;
@property (nonatomic, retain) MPAVOutputDeviceRoute *secondaryOutputDeviceRoute;
@property (nonatomic, retain) MPVolumeController *secondaryVolumeController;
@property (readonly) Class superclass;
@property (nonatomic, retain) MPAVOutputDeviceRoute *systemOutputDeviceRoute;
@property (nonatomic, retain) MPAVEndpointRoute *systemRoute;
@property (nonatomic, retain) MPVolumeController *systemVolumeController;
@property (nonatomic, copy) NSString *volumeAudioCategory;

+ (bool)isDefaultPackage:(id)arg1;

- (void).cxx_destruct;
- (void)_notifyUserInteractionEnabledChanged:(bool)arg1 routeType:(unsigned long long)arg2;
- (void)_notifyVolumeChangedForVolumeController:(id)arg1 volumeControlAvailable:(bool)arg2 effectiveVolume:(float)arg3;
- (id)_packageNameForRoute:(id)arg1 isRTL:(bool)arg2 isSlider:(bool)arg3;
- (unsigned long long)_routeForVolumeController:(id)arg1;
- (bool)_setupOutputDevicesAndVolumeControllersIfNeeded;
- (id)_volumePackageNameForRTL:(bool)arg1;
- (void)addObserver:(id)arg1;
- (id)availableBluetoothListeningModeForRouteType:(unsigned long long)arg1;
- (id)currentBluetoothListeningModeForRouteType:(unsigned long long)arg1;
- (id)glyphStateForVolumeLevel:(double)arg1 packageName:(id)arg2;
- (id)init;
- (bool)isSplitRoute;
- (void)logFailedSetBluetoothListeningMode:(id)arg1 forRouteType:(unsigned long long)arg2;
- (id)observers;
- (id)packageNameForRouteType:(unsigned long long)arg1 isRTL:(bool)arg2 isSlider:(bool)arg3;
- (bool)primaryInteractionEnabled;
- (id)primaryOutputDeviceRoute;
- (id)primaryVolumeController;
- (void)removeObserver:(id)arg1;
- (void)routeDidChangeNotification;
- (id)routeNameForRouteType:(unsigned long long)arg1;
- (bool)secondaryInteractionEnabled;
- (id)secondaryOutputDeviceRoute;
- (id)secondaryVolumeController;
- (id)setCurrentBluetoothListeningModeForRouteType:(unsigned long long)arg1 bluetoothListeningMode:(id)arg2;
- (void)setObservers:(id)arg1;
- (void)setPrimaryInteractionEnabled:(bool)arg1;
- (void)setPrimaryOutputDeviceRoute:(id)arg1;
- (void)setPrimaryVolumeController:(id)arg1;
- (void)setSecondaryInteractionEnabled:(bool)arg1;
- (void)setSecondaryOutputDeviceRoute:(id)arg1;
- (void)setSecondaryVolumeController:(id)arg1;
- (void)setSystemOutputDeviceRoute:(id)arg1;
- (void)setSystemRoute:(id)arg1;
- (void)setSystemVolumeController:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1 forRouteType:(unsigned long long)arg2;
- (void)setVolume:(float)arg1 forRouteType:(unsigned long long)arg2;
- (void)setVolumeAudioCategory:(id)arg1;
- (id)systemOutputDeviceRoute;
- (id)systemRoute;
- (id)systemVolumeController;
- (bool)userInteractionEnabledForRouteType:(unsigned long long)arg1;
- (id)volumeAudioCategory;
- (bool)volumeControlAvailableForRouteType:(unsigned long long)arg1;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(bool)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (float)volumeForRouteType:(unsigned long long)arg1;

@end
