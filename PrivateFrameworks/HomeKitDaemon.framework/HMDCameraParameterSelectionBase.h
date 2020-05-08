/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraParameterSelectionBase : HMFObject <HMFLogging> {
    HMDCameraStreamSessionID * _sessionID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDCameraStreamSessionID *sessionID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_filterFor:(id)arg1 preferenceList:(id)arg2 deviceSupportedTypes:(id)arg3 cameraSupportedTypes:(id)arg4 localPreferences:(id)arg5;
- (id)_selectCryptoSuite:(id)arg1;
- (id)_selectSRTPParameters:(id)arg1;
- (id)initWithSessionID:(id)arg1;
- (id)sessionID;

@end
