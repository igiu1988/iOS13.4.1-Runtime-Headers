/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAAccessory : NSObject {
    EAAccessoryInternal * _internal;
}

@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (nonatomic, readonly) unsigned long long connectionID;
@property (nonatomic) <EAAccessoryDelegate> *delegate;
@property (nonatomic, readonly) NSString *dockType;
@property (nonatomic, readonly) NSString *firmwareRevision;
@property (nonatomic, readonly) NSString *hardwareRevision;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *modelNumber;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *protocolStrings;
@property (nonatomic, readonly) NSString *serialNumber;

- (void)_OOBBTPairingCompletedWithStatus:(unsigned char)arg1 forAccessoryWithMACAddress:(id)arg2;
- (void)_addSession:(id)arg1;
- (id)_createWakeToken;
- (void)_endSession:(unsigned int)arg1;
- (id)_initWithAccessory:(id)arg1;
- (unsigned int)_internalConnectionID;
- (bool)_internalNotPresentInIAPAccessoriesArray;
- (void)_openCompleteForSession:(unsigned int)arg1;
- (id)_protocolIDForProtocolString:(id)arg1;
- (void)_removeSession:(id)arg1;
- (void)_setConnected:(bool)arg1;
- (void)_setNotPresentInIAPAccessoriesArray:(bool)arg1;
- (id)_shortDescription;
- (void)_updateAccessoryInfo:(id)arg1;
- (unsigned int)accessoryCapabilities;
- (bool)accessoryHasNMEASentencesAvailable;
- (void)addNMEASentence:(id)arg1;
- (id)allPublicProtocolStrings;
- (id)audioPorts;
- (void)beginOOBBTPairingWithCompletionBlock:(id /* block */)arg1;
- (id)bonjourName;
- (id)cameraComponents;
- (int)captureStillImage:(unsigned int)arg1 forCameraIds:(id)arg2;
- (id)certData;
- (id)certSerial;
- (int)classType;
- (unsigned long long)connectionID;
- (bool)containsSameProtocolsAsiAPAccessoryProtocols:(id)arg1;
- (id)coreAccessoriesPrimaryUUID;
- (bool)createdByCoreAccessories;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (unsigned long long)destinationSharingOptions;
- (id)dictionaryWithLowercaseKeys:(id)arg1;
- (id)dockType;
- (unsigned int)eqIndex;
- (id)eqNames;
- (id)firmwareRevision;
- (id)firmwareRevisionActive;
- (id)firmwareRevisionPending;
- (bool)getEphemerisExpirationInterval:(double*)arg1;
- (bool)getEphemerisRecommendRefreshInterval:(double*)arg1;
- (bool)getEphemerisURL:(id*)arg1;
- (void)getIAPTimeSyncInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)getNMEASentence:(id*)arg1;
- (id)getVehicleInfoData;
- (id)hardwareRevision;
- (bool)hasIPConnection;
- (id)init;
- (bool)isAvailableOverBonjour;
- (bool)isConnected;
- (int)locationSentenceTypesMask;
- (id)macAddress;
- (id)manufacturer;
- (id)modelNumber;
- (id)name;
- (bool)pointOfInterestHandoffEnabled;
- (id)ppid;
- (id)preferredApp;
- (id)protocolDetails;
- (id)protocolStrings;
- (void)requestIAPAccessoryWiFiCredentials;
- (void)resetIAPTimeSyncKalmanFilter;
- (bool)sendDestinationInformation:(id)arg1 identifier:(id)arg2;
- (void)sendDeviceIdentifierNotification:(id)arg1 usbIdentifier:(id)arg2;
- (bool)sendEphemeris:(id)arg1;
- (bool)sendEphemerisPointDataGpsWeek:(unsigned long long)arg1 gpsTOW:(double)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(unsigned short)arg5;
- (bool)sendGPRMCDataStatusValueA:(bool)arg1 ValueV:(bool)arg2 ValueX:(bool)arg3;
- (bool)sendGpsWeek:(unsigned long long)arg1 gpsTOW:(double)arg2;
- (bool)sendPointOfInterestInformation:(id)arg1 identifier:(unsigned short)arg2;
- (id)serialNumber;
- (void)setCameraComponents:(id)arg1;
- (int)setCameraProperties:(unsigned int)arg1 forCameraId:(unsigned short)arg2 withProperties:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDestinationSharingOptions:(unsigned long long)arg1;
- (void)setEqIndex:(unsigned int)arg1;
- (void)setEqNames:(id)arg1;
- (void)setIAPTimeSyncParams:(id)arg1;
- (void)setLocationSentenceTypesMask:(int)arg1;
- (bool)setNMEASentencesToFilter:(id)arg1;
- (void)setPointOfInterestHandoffEnabled:(bool)arg1;
- (void)setVehicleInfoSupportedTypes:(id)arg1;
- (void)setVehicleInfovehicleInfoInitialData:(id)arg1;
- (bool)shouldBeHiddenFromUI;
- (int)startCameraInfo:(unsigned int)arg1 forCameraIds:(id)arg2;
- (int)startCameraUpdates:(unsigned int)arg1 forCameraIds:(id)arg2 withProperties:(id)arg3 withCapabilities:(id)arg4;
- (int)startLivePreview:(unsigned int)arg1 forCameraIds:(id)arg2;
- (int)stopCameraInfo:(unsigned int)arg1 forCameraIds:(id)arg2;
- (int)stopCameraUpdates:(unsigned int)arg1 forCameraIds:(id)arg2;
- (int)stopLivePreview:(unsigned int)arg1 forCameraIds:(id)arg2;
- (bool)supportsAccessibility;
- (bool)supportsCamera;
- (bool)supportsCarPlay;
- (bool)supportsCarPlayAppLinks;
- (bool)supportsDestinationSharing;
- (bool)supportsLocation;
- (bool)supportsOOBBTPairing;
- (bool)supportsOOBBTPairing2;
- (bool)supportsPointOfInterest;
- (bool)supportsPublicIap;
- (bool)supportsUSBCarPlay;
- (bool)supportsWirelessCarPlay;
- (void)updateItemProperty:(int)arg1 withValue:(id)arg2;
- (void)updateSystemProperty:(int)arg1 withValue:(id)arg2;
- (id)vehicleInfoInitialData;
- (id)vehicleInfoSupportedTypes;
- (id)wakeToken;

@end
