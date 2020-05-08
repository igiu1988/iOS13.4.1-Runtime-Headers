/* Generated by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVLocalOutputDeviceImpl : NSObject <AVOutputDeviceImpl> {
    AVOutputDevice * _parentDevice;
}

@property (nonatomic, readonly) long long HAPConformance;
@property (nonatomic, readonly, copy) NSString *ID;
@property (nonatomic, readonly) NSDictionary *airPlayProperties;
@property (nonatomic, readonly) bool automaticallyAllowsConnectionsFromPeersInHomeGroup;
@property (nonatomic, readonly) NSArray *availableBluetoothListeningModes;
@property (nonatomic, readonly) NSNumber *batteryLevel;
@property (nonatomic, readonly) bool canAccessAppleMusic;
@property (nonatomic, readonly) bool canAccessRemoteAssets;
@property (nonatomic, readonly) bool canAccessiCloudMusicLibrary;
@property (nonatomic, readonly) bool canBeGroupLeader;
@property (nonatomic, readonly) bool canBeGrouped;
@property (nonatomic, readonly) bool canCommunicateWithAllLogicalDeviceMembers;
@property (nonatomic, readonly) bool canFetchMediaDataFromSender;
@property (nonatomic, readonly) bool canPlayEncryptedProgressiveDownloadAssets;
@property (nonatomic, readonly) bool canRelayCommunicationChannel;
@property (readonly) bool canSetVolume;
@property (nonatomic, readonly) NSNumber *caseBatteryLevel;
@property (nonatomic, readonly, copy) NSArray *connectedPairedDevices;
@property (nonatomic, readonly) NSString *currentBluetoothListeningMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long deviceFeatures;
@property (nonatomic, readonly) long long deviceSubType;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) NSString *firmwareVersion;
@property (nonatomic, readonly) bool groupContainsGroupLeader;
@property (nonatomic, readonly, copy) NSString *groupID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *identifyingMACAddress;
@property (getter=isInUseByPairedDevice, nonatomic, readonly) bool inUseByPairedDevice;
@property (nonatomic, readonly) bool isGroupLeader;
@property (nonatomic, readonly) NSNumber *isInEar;
@property (nonatomic, readonly) bool isLogicalDeviceLeader;
@property (nonatomic, readonly) NSNumber *leftBatteryLevel;
@property (nonatomic, readonly) NSString *logicalDeviceID;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly, copy) NSString *modelID;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) bool onlyAllowsConnectionsFromPeersInHomeGroup;
@property AVOutputDevice *parentOutputDevice;
@property (nonatomic, readonly) bool participatesInGroupPlayback;
@property (nonatomic, readonly) bool presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property (nonatomic, readonly) bool requiresAuthorization;
@property (nonatomic, readonly) NSNumber *rightBatteryLevel;
@property (nonatomic, readonly) NSString *serialNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsBluetoothSharing;
@property (nonatomic, readonly) bool supportsBufferedAirPlay;
@property (nonatomic, readonly) NSNumber *supportsDataOverACLProtocol;
@property (readonly) float volume;

- (void).cxx_destruct;
- (long long)HAPConformance;
- (id)ID;
- (id)airPlayProperties;
- (bool)automaticallyAllowsConnectionsFromPeersInHomeGroup;
- (id)availableBluetoothListeningModes;
- (id)batteryLevel;
- (bool)canAccessAppleMusic;
- (bool)canAccessRemoteAssets;
- (bool)canAccessiCloudMusicLibrary;
- (bool)canBeGroupLeader;
- (bool)canBeGrouped;
- (bool)canCommunicateWithAllLogicalDeviceMembers;
- (bool)canFetchMediaDataFromSender;
- (bool)canPlayEncryptedProgressiveDownloadAssets;
- (bool)canRelayCommunicationChannel;
- (bool)canSetVolume;
- (id)caseBatteryLevel;
- (void)configureUsingBlock:(id /* block */)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)connectedPairedDevices;
- (id)currentBluetoothListeningMode;
- (unsigned long long)deviceFeatures;
- (long long)deviceSubType;
- (long long)deviceType;
- (id)firmwareVersion;
- (bool)groupContainsGroupLeader;
- (id)groupID;
- (unsigned long long)hash;
- (id)identifyingMACAddress;
- (bool)isEqual:(id)arg1;
- (bool)isGroupLeader;
- (id)isInEar;
- (bool)isInUseByPairedDevice;
- (bool)isLogicalDeviceLeader;
- (id)leftBatteryLevel;
- (id)logicalDeviceID;
- (id)manufacturer;
- (id)modelID;
- (id)name;
- (bool)onlyAllowsConnectionsFromPeersInHomeGroup;
- (id)parentOutputDevice;
- (bool)participatesInGroupPlayback;
- (bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (bool)requiresAuthorization;
- (id)rightBatteryLevel;
- (id)serialNumber;
- (bool)setCurrentBluetoothListeningMode:(id)arg1 error:(id*)arg2;
- (void)setParentOutputDevice:(id)arg1;
- (void)setSecondDisplayEnabled:(bool)arg1;
- (void)setVolume:(float)arg1;
- (bool)supportsBluetoothSharing;
- (bool)supportsBufferedAirPlay;
- (id)supportsDataOverACLProtocol;
- (float)volume;

@end
