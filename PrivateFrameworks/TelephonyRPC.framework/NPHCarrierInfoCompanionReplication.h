/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

@interface NPHCarrierInfoCompanionReplication : NSObject <CoreTelephonyClientCarrierBundleDelegate> {
    CoreTelephonyClient * _coreTelephonyClient;
    NSUserDefaults * _mobilePhoneUserDefaults;
    NSUserDefaults * _nanoPhoneUserDefaults;
    NPSManager * _npsManager;
}

@property (nonatomic, readonly) CoreTelephonyClient *coreTelephonyClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUserDefaults *mobilePhoneUserDefaults;
@property (nonatomic, readonly) NSUserDefaults *nanoPhoneUserDefaults;
@property (nonatomic, readonly) NPSManager *npsManager;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_getShouldHideVoicemailUI:(id /* block */)arg1;
- (void)_updateIsVisualVoicemailServiceSubscribed;
- (void)_updateShouldHideVoicemailUI;
- (void)_visualVMSubscriptionStateStatusChanged:(id)arg1;
- (void)carrierBundleChange:(id)arg1;
- (id)coreTelephonyClient;
- (void)dealloc;
- (id)init;
- (id)mobilePhoneUserDefaults;
- (id)nanoPhoneUserDefaults;
- (id)npsManager;

@end
