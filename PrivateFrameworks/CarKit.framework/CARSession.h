/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CARSession : NSObject {
    NSData * _MFiCertificateSerialNumber;
    bool  _authenticated;
    CARSessionConfiguration * _configuration;
    struct OpaqueFigEndpoint { } * _endpoint;
    NSNumber * _fallbackNightMode;
    CARInputDeviceManager * _inputDeviceManager;
    int  _nightFallbackNotifyToken;
    CARObserverHashTable * _observers;
    bool  _requiresCarCapabilitiesValues;
    <CARSessionDelegate> * _sessionDelegate;
}

@property (nonatomic, readonly, copy) NSDictionary *APEndPointInfo;
@property (nonatomic, readonly, copy) NSData *MFiCertificateSerialNumber;
@property (getter=isAuthenticated, nonatomic, readonly) bool authenticated;
@property (nonatomic, readonly) CARSessionConfiguration *configuration;
@property (nonatomic, readonly, copy) NSNumber *electronicTollCollectionAvailable;
@property (nonatomic, retain) NSNumber *fallbackNightMode;
@property (nonatomic, retain) CARInputDeviceManager *inputDeviceManager;
@property (nonatomic, readonly) bool isPaired;
@property (nonatomic, readonly, copy) NSNumber *limitUserInterfaces;
@property (nonatomic) int nightFallbackNotifyToken;
@property (nonatomic, readonly, copy) NSNumber *nightMode;
@property (nonatomic, retain) CARObserverHashTable *observers;
@property (nonatomic) bool requiresCarCapabilitiesValues;
@property (nonatomic) <CARSessionDelegate> *sessionDelegate;
@property (nonatomic, readonly, copy) NSString *sourceVersion;

+ (long long)_siriRequestEventForEndpointAction:(id)arg1;

- (void).cxx_destruct;
- (id)APEndPointInfo;
- (id)MFiCertificateSerialNumber;
- (id)_capabilitiesIdentifier;
- (id)_endpointValueForKey:(struct __CFString { }*)arg1;
- (void)_fetchAuthenticationStatus;
- (void)_fetchFallbackIsNightWithToken:(int)arg1;
- (id)_fig_safe_description;
- (void)_handleOpenURL:(id)arg1;
- (void)_handleShowUIWithParameters:(id)arg1;
- (void)_handleSiriRequestEvent:(long long)arg1 withPayload:(id)arg2;
- (void)_handleStopUIWithParameters:(id)arg1;
- (void)_handleViewAreaChangeWithPayload:(id)arg1;
- (void)_newObserverAdded:(id)arg1;
- (void)_performExtendedEndpointAction:(id /* block */)arg1;
- (void)_setEndpointValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)_updateConfiguration;
- (void)_updateScreenInfo:(id)arg1 currentViewAreaToViewArea:(id)arg2 duration:(double)arg3 transitionControlType:(unsigned long long)arg4;
- (void)addObserver:(id)arg1;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (bool)carOwnsMainAudio;
- (bool)carOwnsScreen;
- (id)configuration;
- (void)dealloc;
- (id)description;
- (id)electronicTollCollectionAvailable;
- (struct OpaqueFigEndpoint { }*)endpoint;
- (id)fallbackNightMode;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1 requiresCarCapabilities:(bool)arg2;
- (id)inputDeviceManager;
- (bool)isAuthenticated;
- (bool)isPaired;
- (id)lastNavigatingBundleIdentifier;
- (id)limitUserInterfaces;
- (unsigned long long)navigationOwner;
- (int)nightFallbackNotifyToken;
- (id)nightMode;
- (id)observers;
- (bool)recognizingSpeech;
- (void)releaseTurnByTurnOwnership;
- (void)removeObserver:(id)arg1;
- (void)requestAdjacentViewAreaForScreenID:(id)arg1;
- (void)requestCarUI;
- (void)requestCarUIForURL:(id)arg1;
- (void)requestTurnByTurnOwnership;
- (bool)requiresCarCapabilitiesValues;
- (void)sendCommand:(id)arg1 withParameters:(id)arg2;
- (id)sessionDelegate;
- (void)setFallbackNightMode:(id)arg1;
- (void)setInputDeviceManager:(id)arg1;
- (void)setInputMode:(unsigned long long)arg1 forInputDevice:(id)arg2;
- (void)setNightFallbackNotifyToken:(int)arg1;
- (void)setObservers:(id)arg1;
- (void)setRequiresCarCapabilitiesValues:(bool)arg1;
- (void)setSessionDelegate:(id)arg1;
- (void)setSiriForwardingEnabled:(bool)arg1;
- (id)sourceVersion;
- (void)suggestUI:(id)arg1;
- (id)systemNightMode;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;
- (void)takeScreenForConnection;
- (void)unborrowScreenForToken:(id)arg1;

@end
